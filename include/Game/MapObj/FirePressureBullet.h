#pragma once

#include "Game/LiveActor.h"

class AnimScaleController;
class WalkerStateBindStarPointer;

class FirePressureBullet : public LiveActor {
public:
    FirePressureBullet(const char *pName);
    ~FirePressureBullet();
    virtual void init(const JMapInfoIter &rIter);
    virtual void kill();
    virtual void control();
    virtual void calcAndSetBaseMtx();
    virtual void attackSensor(HitSensor *, HitSensor *);
    virtual bool receiveMsgPlayerAttack(u32, HitSensor *, HitSensor *);
    virtual bool receiveOtherMsg(u32, HitSensor *, HitSensor *);
    void shotFireBullet(LiveActor *, const TPos3f &, const f32&, bool, bool);
    void exeFly();
    bool isCrash() const;

    AnimScaleController* _90; // 0x90
    WalkerStateBindStarPointer* _94; // 0x94
    TVec3f _98; // 0x98
    LiveActor* _A4; // 0xA4
    f32 _A8; // 0xA8
    bool _AC; // 0xAC
    bool _AD; // 0xAD
};

namespace NrvFirePressureBullet {
    NERVE(FirePressureBulletNrvFly);
    NERVE(FirePressureBulletNrvSupportFreeze);
}