#pragma once

#include "revolution.h"
#include "Game/Util/SpringValue.h"
#include "MapObj/MapParts/MapPartsRailMover.h"

class CloudStep : public LiveActor {
public:
    CloudStep(const char *pName);
    ~CloudStep();
    virtual void init(const JMapInfoIter &rIter);
    virtual void control();
    virtual void calcAndSetBaseMtx();
    virtual bool receiveMsgPlayerAttack(u32 msg, HitSensor *pSender, HitSensor *pReceiver);
    virtual bool receiveOtherMsg(u32 msg, HitSensor *pSender, HitSensor *pReceiver);
    void exeAppear();
    void exeDisappear();
    void startAppear();
    void startDisappear();

    MapPartsRailMover *mRailMover;  // _90
    SpringValue *mSpringValue;      // _94
    TVec3f mMapPartsClipping;       // _98
    u32 mActiveTimer;               // _A4
    bool _A8;
};

namespace NrvCloudStep {
    NERVE(CloudStepNrvWait);
    NERVE(CloudStepNrvAppear);
    NERVE(CloudStepNrvDisappear);
}