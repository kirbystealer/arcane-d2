#include "d2_structs.h"

#include "cJSON.h"

__declspec(dllexport) int get_act(int act);
__declspec(dllexport) int d2_game_init(char *folderName);
__declspec(dllexport) int d2_dump_map(int seed, int difficulty, int levelCode, cJSON* mapsInfoArray, bool dumpRooms, bool dumpCollision);