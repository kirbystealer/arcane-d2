#ifndef _MAPINFO_H
#define _MAPINFO_H

#include <vector>

//{"type":"map", "id":43, "name":"Far Oasis", "offset":{"x":5800, "y":4600}, "size":{"width":400, "height":400}, "objects":[{"roomIndex":12, "id":62, "type":"exit", "x":218, "y":342, "name":"MaggotLairLevel1"}, {"roomIndex":13, "id":173, "type":"object", "x":174, "y":334, "name":"Shrine", "op":2}, {"roomIndex":21, "id":134, "type":"object", "x":259, "y":299, "name":"shrine", "op":2}, {"roomIndex":38, "id":150, "type":"object", "x":304, "y":224, "name":"shrine", "op":2}, {"roomIndex":40, "id":240, "type":"object", "x":214, "y":210, "name":"chest", "op":4}, {"roomIndex":41, "id":156, "type":"object", "x":179, "y":219, "name":"Waypoint", "op":23}, {"roomIndex":64, "id":172, "type":"object", "x":134, "y":144, "name":"Shrine", "op":2}, {"roomIndex":84, "id":322, "type":"object", "x":139, "y":59, "name":"Well", "op":22}]}


typedef struct
{
    int roomIndex;
    int roomNumber;
    int id;
    char* type;
    int x;
    int y;
    char* name;
} MapInfoObject;

typedef struct
{
    int roomIndex;
    unsigned long int roomNumber;
    unsigned long int roomFlags;
    unsigned long int presetType;
    unsigned long int x;
    unsigned long int y;
    unsigned long int width;
    unsigned long int height;
} MapInfoRoom;


typedef std::vector<MapInfoObject> MapInfoObjects;
typedef std::vector<MapInfoRoom> MapInfoRooms;

typedef struct
{
    char* type;
    int seed;
    int difficulty;
    int id;
    char* name;
    int offsetX;
    int offsetY;
    int width;
    int height;
    int nihlathakDirection;
    int lowerKurastExitSide;
    MapInfoRooms rooms;
    MapInfoObjects objects;
} MapInfo;




#endif