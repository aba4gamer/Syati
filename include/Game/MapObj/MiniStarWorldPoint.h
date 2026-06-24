#pragma once

#include "../LiveActor/LiveActor.h"
#include "../Util/JMapInfo.h"
#include "../../revolution/types.h"

class SimpleLayout;

class MiniStarWorldPoint : public LiveActor {
public:
    MiniStarWorldPoint(u32 *unk, u32, u32 worldNum);
    virtual ~MiniStarWorldPoint();
    virtual void init(const JMapInfoIter &rIter);
    virtual void makeActorAppeared();
    virtual void control();

    u32 *_90;
    u32 _94;
    u32 mWorldNum;      // _98
    SimpleLayout *_9C;
};