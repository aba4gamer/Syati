#pragma once

#include "revolution/types.h"

class LiveActor;
class WorldMapPartsHolder;

class PointPartInfo {
public:
    PointPartInfo();

    const char* mPartsTypeName;
    s32 mPointIndex;
    s32 mPartsIndex;
    s32 mParam00;
    s32 mParam01;
    s32 mParam02;
    LiveActor* mModel;
};

class PointPartsHolder {
public:
    PointPartsHolder(WorldMapPartsHolder* pHolder);

    void init();

    /* 0x00 */ WorldMapPartsHolder* mHolder;
    /* 0x04 */ PointPartInfo* mPointPartInfoArr;
    /* 0x08 */ s32 mPointPartInfoNum;
    /* 0x0C */ s32 mWorldUnlockedNum;
};