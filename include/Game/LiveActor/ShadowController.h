#pragma once

#include "revolution.h"
#include "Game/LiveActor/LiveActor.h"
#include "Game/Util/Array.h"

class ShadowController;

class ShadowControllerList {
public:
    ShadowControllerList(LiveActor *, u32);
    
    void addController(ShadowController*);
    u32 getControllerCount() const;
    ShadowController* getController(u32) const;
    ShadowController* getController(const char*) const;
    void resetCalcCount();
    void requestCalc();

    MR::Vector< MR::AssignableArray< ShadowController* > > mShadowList;  // 0x0
    LiveActor* mHost;                                                    // 0xC
};

namespace MR {
    void addShadowController(ShadowController*);
    void requestCalcActorShadowAppear(LiveActor*);
    void requestCalcActorShadow(LiveActor*);
};
