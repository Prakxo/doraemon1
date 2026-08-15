#ifndef SAVE_FILE_H
#define SAVE_FILE_H

#include "ultra64.h"

typedef struct SysGameData{
    u8* unk0;
    u8 addr;
    s32 count;
    u8 unkC[0x4];
    u8 characterNO; //belongs inside data field, no clue where data starts
    u16 unk12;
    u16 lives;
    u16 bells;
    u64 item;
    s32 unk20;
    u8 settings;
    u16 unk26[18];
}SysGameData;

extern SysGameData sysGameData[4];

#endif
