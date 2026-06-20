#pragma once

#include "Game/NameObj/NameObj.h"
#include "Game/System/NerveExecutor.h"
#include "revolution/types.h"

class WorldMap : public NameObj {
public:
    WorldMap();

    u32 _14;
    NerveExecutor *_18;
    u32 _1C;
};

// TODO move to a different file
class PointPartsIter {
public:
    PointPartsIter();

    const char* mPartsTypeName;
    s32 mPointIndex;
    s32 mPartsIndex;
    s32 mParam00;
    s32 mParam01;
    s32 mParam02;
    LiveActor* mModel;
};