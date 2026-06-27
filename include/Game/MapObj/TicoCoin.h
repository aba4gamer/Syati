#pragma once

#include "Game/LiveActor/LiveActor.h"

class TicoCoin : public LiveActor {
public:
    TicoCoin(const char *pName);
    virtual ~TicoCoin();
    virtual void init(const JMapInfoIter &rIter);
    virtual void initAfterPlacement();
    virtual void makeActorAppeared();
    virtual bool receiveOtherMsg(u32 msg, HitSensor *pSender, HitSensor *pReceiver);
    bool tryCollect();
    void exeCollect();
    bool isCollectedInStage() const;

    TVec3f mClippingPos; // _90
};

namespace NrvTicoCoin {
    NERVE(TicoCoinNrvAppear);
    NERVE(TicoCoinNrvRotate);
    NERVE(TicoCoinNrvCollect);
    NERVE(TicoCoinNrvDisappear);
};