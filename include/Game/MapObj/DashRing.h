#pragma once

#include "Game/LiveActor/LiveActor.h"

class DashRing : public LiveActor {
public:
    DashRing(const char* pName);

    virtual ~DashRing();
    virtual void init(const JMapInfoIter&);
    virtual void initAfterPlacement(); // NEW to SMG2
    virtual void draw() const;
    virtual void control();
    virtual void calcAndSetBaseMtx();
    virtual void attackSensor(HitSensor*, HitSensor*);

    void calcAxis();
    void calcSubAxis();

    TVec3f _90;          // 0x90 : Shadow related, NEW to SMG2
    TVec3f mAxis;        // 0x9C
    TVec3f mSubAxis;     // 0xA8
    u16 _B4;             // 0xB4
    u16 _B6;             // 0xB6
    s32 mBoostTime;      // 0xB8 : Obj_arg0
    s32 mAccelTime;      // 0xBC : Obj_arg1
    f32 mBoostSpeed;     // 0xC0 : Obj_arg2
    u8 mRotateToPlayer;  // 0xC4 : Obj_arg3
    TVec3f _C8;          // 0xC8
};