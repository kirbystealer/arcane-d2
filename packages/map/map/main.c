#include <unistd.h>
#include <stdarg.h>

#include <iostream>

#include "log.h"
#include "d2_client.h"
#include "d2_ptrs.h"
#include "d2_structs.h"
#include "d2data/d2_level.h"
#include "json.h"
#include "mapinfo.h"
#include "dll_patches.h"

#include "cJSON.h"

#define INPUT_BUFFER 1024

const char COMMAND_EXIT[] = "$exit";
const char COMMAND_MAP[] = "$map";
const char COMMAND_DIFF[] = "$difficulty";
const char COMMAND_ACT[] = "$act";
const char COMMAND_SEED[] = "$seed";

bool starts_with(const char *prefix, const char *search_string) {
    if (strncmp(prefix, search_string, strlen(search_string)) == 0) return 1;
    return 0;
}

const char *CharGray = "\33[90m";

char *CliUsage = "\nUsage:\n"
    "    d2-map.exe [D2 Game Path] [options]\n"
    "\nOptions:\n"
    "    --seed [-s]          Map Seed\n"
    "    --difficulty [-d]    Game Difficulty [0: Normal, 1: Nightmare, 2:Hell]\n"
    "    --act [-a]           Dump a specific act [0: ActI, 1:ActII, 2: ActIII, 3: ActIV, 4: Act5]\n"
    "    --map [-m]           Dump a specific Map [0: Rogue Encampent ...]\n"
    "    --numSeed [-n]       Dumps all maps from <seed> to <seed> + <numSeed>\n"
    "    --rooms [-r]         Include room information in dump\n"
    "    --collision [-c]     Include collision information in dump\n"
    "    --verbose [-v]       Increase logging level\n"

    "\nExamples:\n"
    "\n    \33[90m# Dump ActI from Normal mode for seed 1122334 \033[0m\n"
    "    d2-map.exe /home/diablo2 --seed 1122334 --difficulty 0 --act 0\n"
    "\n    \33[90m# Dump all acts from Hell mode for seed 1122334 \033[0m\n"
    "    d2-map.exe /home/diablo2 --seed 1122334 --difficulty 2\n";



void dump_info(unsigned int seed, int difficulty, int actId, int mapId) {
    json_start();
    json_key_value("type", "info");
    json_key_value("seed", seed);
    json_key_value("difficulty", difficulty);
    if (actId > -1) json_key_value("act", actId);
    if (mapId > -1) json_key_value("map", mapId);
    json_end();
}

bool is_arcane_map(int mapId){
    switch(mapId){
        // case AreaLevel::RogueEncampment:
        // case AreaLevel::BloodMoor:
        // case AreaLevel::ColdPlains:
        // case AreaLevel::StonyField:
        // case AreaLevel::BurialGrounds:
        
        // case AreaLevel::DarkWood:
        // case AreaLevel::BlackMarsh:
        
        // case AreaLevel::LutGholein:
        // case AreaLevel::RockyWaste:
        // case AreaLevel::DryHills:
        // case AreaLevel::FarOasis:
        // case AreaLevel::LostCity:
        
        // case AreaLevel::ArcaneSanctuary:
        // case AreaLevel::HallsOfTheDeadLevel2:
        // case AreaLevel::HallsOfTheDeadLevel3:

        // case AreaLevel::KurastDocks:
        // case AreaLevel::SpiderForest:
        // case AreaLevel::GreatMarsh: 
        // case AreaLevel::FlayerJungle:               
        // case AreaLevel::LowerKurast:
        // case AreaLevel::KurastBazaar:
        // case AreaLevel::UpperKurast:
        
        // case AreaLevel::HallsOfPain:
        // case AreaLevel::HallsOfVaught:

        // case AreaLevel::Harrogath:
        // case AreaLevel::BloodyFoothills:
        // case AreaLevel::FrigidHighlands:
        // case AreaLevel::ArreatPlateau:

        // case AreaLevel::TheAncientsWay: // Glacial Caves

        case AreaLevel::UndergroundPassageLevel1:
            return true;
        default:
            return false;
    }
    
}


void dump_maps(unsigned int seed, int difficulty, int actId, int mapId, cJSON* mapsInfoArray, bool dumpRooms, bool dumpCollision, bool arcaneMapsOnly) {
    int64_t totalTime = currentTimeMillis();
    int mapCount = 0;

    if (mapId > -1) {
        int64_t startTime = currentTimeMillis();
        int res = d2_dump_map(seed, difficulty, mapId, NULL, dumpRooms, dumpCollision);
        if (res == 0) mapCount ++;
        int64_t duration = currentTimeMillis() - startTime;
        log_debug("Map:Generation", lk_ui("seed", seed), lk_i("difficulty", difficulty), lk_i("mapId", mapId), lk_i("duration", duration));
    } else {
        for (int mapId = 1; mapId <= 136; mapId++) {
            // Skip map if its not part of the current act
            if (actId > -1 && get_act(mapId) != actId) continue;

            // Skip map if we only want arcane maps
            if(arcaneMapsOnly && !is_arcane_map(mapId)) continue;

            int64_t startTime = currentTimeMillis();


            int res = d2_dump_map(seed, difficulty, mapId, mapsInfoArray, dumpRooms, dumpCollision);
        
            if (res == 0) mapCount ++;
            if (res == 1){
                log_debug("Map:Generation Failed:", lk_ui("seed", seed), lk_i("difficulty", difficulty), lk_i("actId", get_act(mapId)), lk_i("mapId", mapId));
                continue; // Failed to generate the map
            }

            int64_t currentTime = currentTimeMillis();
            int64_t duration = currentTime - startTime;
            startTime = currentTime;
            //log_debug("Map:Generation", lk_ui("seed", seed), lk_i("difficulty", difficulty), lk_i("actId", get_act(mapId)), lk_i("mapId", mapId), lk_i("duration", duration));
        }
    }
    int64_t duration = currentTimeMillis() - totalTime;
    //log_debug("Map:Generation:Done", lk_ui("seed", seed), lk_i("difficulty", difficulty), lk_i("count", mapCount), lk_i("duration", duration));

}


int main(int argc, char *argv[]) {
    if (argc < 1) {
        printf(CliUsage);
        return 1;
    }
    log_info("Cli:Start", lk_s("version", GIT_VERSION), lk_s("hash", GIT_HASH));

    char c[INPUT_BUFFER];

    char *gameFolder = NULL;
    DWORD argSeed = 0;
    int numSeed = 1;
    bool dumpRooms = false; 
    bool dumpCollision = false;
    bool arcaneMapsOnly = false;
    int argMapId = -1;
    int argDifficulty = 0;
    int argActId = -1;
    int foundArgs = 0;
    for (int i = 1; i < argc; i++) {
        char* arg = argv[i];
        if (starts_with(arg, "--seed") || starts_with(arg, "-s")) {
            sscanf(argv[++i], "%u", &argSeed);
            log_debug("Cli:Arg", lk_ui("seed", argSeed));
            foundArgs ++;
        } else if (starts_with(arg, "--rooms") || starts_with(arg, "-r")) {
            log_debug("Cli:Arg", lk_b("rooms", true));
            dumpRooms = true;
        }else if (starts_with(arg, "--collision") || starts_with(arg, "-c")) {
            log_debug("Cli:Arg", lk_b("collision", true));
            dumpCollision = true;
        }else if (starts_with(arg, "--arcane")) {
            log_debug("Cli:Arg", lk_b("arcaneMapsOnly", true));
            arcaneMapsOnly = true;            
        }else if (starts_with(arg, "--numSeed") || starts_with(arg, "-n")) {
            numSeed = atoi(argv[++i]);
            log_debug("Cli:Arg", lk_i("numSeed", numSeed));
            foundArgs ++;
        } else if (starts_with(arg, "--difficulty") || starts_with(arg, "-d")) {
            argDifficulty = atoi(argv[++i]);
            log_debug("Cli:Arg", lk_i("difficulty", argDifficulty));
            foundArgs ++;
        } else if (starts_with(arg, "--map") || starts_with(arg, "-m")) {
            argMapId = atoi(argv[++i]);
            log_debug("Cli:Arg", lk_i("mapId", argMapId));
            foundArgs ++;
        } else if (starts_with(arg, "--act") || starts_with(arg, "-a")) {
            argActId = atoi(argv[++i]);
            log_debug("Cli:Arg", lk_i("actId", argActId));
            foundArgs ++;
        } else if (starts_with(arg, "--verbose") || starts_with(arg, "-v")) {
            log_debug("Cli:Arg", lk_b("verbose", true));
            log_level(LOG_TRACE);
        } else {
            gameFolder = arg;
            log_debug("Cli:Arg", lk_s("game", gameFolder));
        }
    }


    if (argActId > 0 && argMapId > 0) {
        printf("--act and --level cannot be used together\n");
        printf(CliUsage);
        return 1;
    }
    if (gameFolder == NULL) {
        printf(CliUsage);
        return 1;
    }


    int64_t initStartTime = currentTimeMillis();
    d2_game_init(gameFolder, arcaneMapsOnly);
    int64_t duration = currentTimeMillis() - initStartTime;
    log_info("Map:Init:Done", lk_s("version", GIT_VERSION), lk_s("hash", GIT_HASH), lk_i("duration", duration));

    cJSON *mapsInfoArray;

    if (foundArgs > 0) {
        printf("[\n");
        for (int i = argSeed; i < argSeed + numSeed; i++){
            log_debug("Generating maps for seed: ", lk_ui("seed", i));
           
            if (arcaneMapsOnly){
                for (int j = 0; j < 15; j++){       
                    D2CommonMazeIncrement = j;
                    mapsInfoArray = cJSON_CreateArray();     
                    dump_maps(i, argDifficulty, -1, -1, mapsInfoArray, dumpRooms, dumpCollision, arcaneMapsOnly);
                
                    char* jsonOutput = cJSON_PrintUnformatted(mapsInfoArray);
                    
                    if (i == argSeed + numSeed - 1 && j == 14){
                        printf("%s\n", jsonOutput);            
                    } else {
                        printf("%s,\n", jsonOutput);
                    }

                    cJSON_free(jsonOutput);
                    cJSON_Delete(mapsInfoArray);
                }
            } else {
                mapsInfoArray = cJSON_CreateArray();     
                dump_maps(i, argDifficulty, -1, -1, mapsInfoArray, dumpRooms, dumpCollision, arcaneMapsOnly);
            
                char* jsonOutput = cJSON_PrintUnformatted(mapsInfoArray);
                
                if (i == argSeed + numSeed - 1){
                    printf("%s\n", jsonOutput);            
                } else {
                    printf("%s,\n", jsonOutput);
                }

                cJSON_free(jsonOutput);
                cJSON_Delete(mapsInfoArray);
            }
            printf("\n");

        }
        printf("\n]");
        return 0;
    }


    return 0;
}


