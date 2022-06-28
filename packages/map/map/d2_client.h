#include "d2_structs.h"

#include "cJSON.h"


int get_act(int act);
int d2_game_init(char *folderName);
int d2_dump_map(int seed, int difficulty, int levelCode, cJSON* mapsInfoArray, bool dumpRooms, bool dumpCollision);