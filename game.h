#ifndef GAME_H
#define GAME_H

#include <SDL3_image/SDL_image.h>
#include <stdlib.h>
#include <stdint.h>

#define PORT 50505
#define IP "0.0.0.0"

#define WIDHT 800
#define HIGHT 600

#pragma pack(push, 1)

struct TileMap {
  uint32_t tilePxX, tilePxY;
  uint32_t tilesAcross, tilesDown;
  //uint32_t tileOffsetX, tileOffsetY;
  uint32_t tileType[195];
};

struct __attribute__((packed))GameState{
    uint8_t BG_red;
    uint8_t BG_blue;
    struct TileMap tileMap;
    uint8_t isReady;
    uint8_t waitForServer;
};

#pragma pack(pop)


#endif
