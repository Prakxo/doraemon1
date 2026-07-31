#ifndef SAVE_FILE_H
#define SAVE_FILE_H

#include "ultra64.h"

typedef struct SysGameData{
    u8 unk0[0x10];
    u8 characterNO; //belongs inside data field, no clue where data starts
    u16 unk12;
    u16 lives;
    u16 bells;
    u64 item;
}SysGameData;

extern SysGameData sysGameData[4];

#endif
