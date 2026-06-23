#pragma once

#include "revolution/types.h"

class LiveActor;
class WorldMapObjHolder;

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
    PointPartsHolder(WorldMapObjHolder* pHolder);

    void init();

    /* 0x00 */ WorldMapObjHolder* mHolder;
    /* 0x04 */ PointPartInfo* mPointPartInfoArray;
    /* 0x08 */ s32 mPointPartInfoNum;
    /* 0x0C */ s32 mUnlockedWorldNum;
};