#pragma once

#include "Game/LiveActor/LiveActor.h"
#include "revolution/types.h"

class MiniRoutePoint : public LiveActor {
public:
    MiniRoutePoint();

    virtual ~MiniRoutePoint();
    virtual void init(const JMapInfoIter&);
    virtual void makeActorAppeared();
    virtual void makeActorDead();
    virtual void control();

    bool isPointing();
    void func_804E55D0(); // undocumented
    void func_804E5640(); // ^
    void setState(bool open);
    bool isOpen();
    void startSoundRoadExtend();
    void startSoundPointOn();
    void startSoundPointOff();
};