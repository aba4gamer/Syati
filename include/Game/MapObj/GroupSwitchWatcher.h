#pragma once

#include "Game/LiveActor.h"

class GroupSwitchWatcher : public LiveActor {
public:
    GroupSwitchWatcher(const char *pName);
    virtual ~GroupSwitchWatcher();
    virtual void init(const JMapInfoIter &rIter);
    virtual void control();

    StageSwitchCtrl *_90;
    s32 _94;
    s32 _98;
    s32 _9C;
};