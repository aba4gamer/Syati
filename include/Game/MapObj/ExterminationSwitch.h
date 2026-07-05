#pragma once

#include "Game/LiveActor.h"

class ExterminationSwitch : public LiveActor {
public:
    ExterminationSwitch(const char *pName);
    virtual ~ExterminationSwitch();
    virtual void init(const JMapInfoIter &rIter);

    LiveActorGroup *_90;
    u32 _94;
    u32 _98;
    u8 _9C;
    u32 _A0;
};

// nerves