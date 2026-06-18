#pragma once

#include "Game/LiveActor.h"
#include "Game/Camera/CameraTargetMtx.h"
#include "Game/Util/JMapInfo.h"
#include "Game/LiveActor/HitSensor.h"
#include "revolution/types.h"

class Triangle;

class MarioLauncher : public LiveActor {
public:
    MarioLauncher(const char *);
    virtual void init(const JMapInfoIter &);
    virtual MtxPtr getBaseMtx() const;
    virtual void attackSensor(HitSensor *pSender, HitSensor *pReceiver);
    virtual bool receiveMsgEnemyAttack(u32 msg, HitSensor *pSender, HitSensor *pReceiver);
    virtual bool receiveMsgPush(HitSensor *pSender, HitSensor *pReceiver);
    virtual bool receiveOtherMsg(u32 msg, HitSensor *pSender, HitSensor *pReceiver);
    
    void exeWait();
    void exeReady();
    void exePlayerIn();
    void exePrep();
    void exeAim();
    void exeFlight();
    void exeKill();
    void exeReject();
    void exeLand();
    
    void calcBaseMtx();
    bool doReady(HitSensor *);
    bool doPrep();
    bool doAim();
    bool doReject();
    bool doEject();
    bool doFlight();
    bool doLanding(s32);
    bool testHitCollision();
    bool isBreak(const Triangle *);
    void onSwitchA();
    void offSwitchA();

    u32 _90;
    u32 _94;
    u32 _98;
    u8 _9C;
    u32 _A0;                // Padding
    Mtx _A4;
    Mtx _D4;
    CameraTargetMtx _104;
    u32 _194;               // Padding
    Mtx _198;
    Mtx _1C8;
    Mtx _1F8;
    u8 _228;
    s32 _22C;
};

namespace NrvMarioLauncher {
    NERVE(MarioLauncherNrvWait);
    NERVE(MarioLauncherNrvReady);
    NERVE(MarioLauncherNrvPlayerIn);
    NERVE(MarioLauncherNrvPrep);
    NERVE(MarioLauncherNrvAim);
    NERVE(MarioLauncherNrvFlight);
    NERVE(MarioLauncherNrvKill);
    NERVE(MarioLauncherNrvLand);
    NERVE(MarioLauncherNrvReject);
};