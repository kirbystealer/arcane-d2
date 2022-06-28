# @diablo2/map 

### Forked from https://github.com/blacha/diablo2/tree/master/packages/map 

## Building

Compile with `./build.mapgen.sh`

Run generated binary with e.g ` Measure-Command { .\code\diablo2\packages\map\bin\d2-map.exe "C:\Program Files (x86)\Diablo II\Diablo II" --difficulty 2 --seed 4000 --numSeed 1 -v -c -r > output.txt | Out-Default}`


Diablo 2 Map generator for v1.13c

## Command line

```
Usage:
    d2-map.exe [D2 Game Path] [options]

Options:
    --seed [-s]          Map Seed
    --difficulty [-d]    Game Difficulty [0: Normal, 1: Nightmare, 2: Hell]
    --act [-a]           Dump a specific act [0: ActI, 1: ActII, 2: ActIII, 3: ActIV, 4: Act5]
    --map [-m]           Dump a specific Map [0: Rogue Encampment ...]
    --verbose [-v]       Increase logging level

Examples:

    # Dump ActI from Normal mode for seed 1122334 
    d2-map.exe /home/diablo2 --seed 1122334 --difficulty 0 --act 0

    # Dump all acts from Hell mode for seed 1122334 
    d2-map.exe /home/diablo2 --seed 1122334 --difficulty 2
```

```typescript
{
    /** Level code */
    "id": 74,
    /** Name given back by diablo2 client */
    "name": "Arcane Sanctuary",
    /** how far offset this map is from the top left of the game world */
    "offset": {
        "x": 25000,
        "y": 5000
    },
    /** Dimensions of the map */
    "size": {
        "width": 1000,
        "height": 1000
    },
    /** Important objects / NPCs found in this level */
    "objects": [
        {"id": 53, "type": "exit", "x": 137, "y": 0, "name": "Palace Cellar Level 2" },
        {"id": 250, "type": "npc", "x": 440, "y": 20, "name": "The Summoner"},
        {"id": 371, "type": "npc", "x": 458, "y": 203, "name": "Lightning Spire"},
        {"id": 305, "type": "object", "x": 237, "y": 401, "name": "teleportation pad", "op": 27}
        {"id": 402, "type": "object", "x": 449, "y": 449, "name": "Waypoint", "op": 23},
        {"id": 298, "type": "object", "x": 427, "y": 426, "name": "portal", "op": 34}
    ],
    /** Map Collision data */
    "map": [
        // Map data for x offset 0 - Using run length encoding
        [1, 149] // 1 pixel of collision, 149 pixels of open space, 150 - map.size.width pixels of collision
    ]
}
```
### Map Data

Collision maps are encoded using a simple run length encoding to save on space

Given this small map
```
[1,5,1],
[2,3,2],
[1,5,1]
```

It would generate the following word where `X` is collision and `.` is open space
```
X.....X
XX...XX
X.....X
```

A simple rendering engine could be using a `HTMLCanvas`'s `ctx.fillRect(x, y, width, height)` function to draw one row at a time

```typescript
for (let y = 0; y < map.length; y++){
    let x = 0;
    let fill = true;
    for (const offset of row) {
        if (fill) ctx.fillRect(x, y, offset, 1, "black");
        x = x + offset;
        fill = !fill
    }
}
```