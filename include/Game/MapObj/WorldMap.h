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