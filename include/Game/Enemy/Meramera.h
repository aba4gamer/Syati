#pragma once

#include "Game/LiveActor/LiveActor.h"

class IceMerameraKing;
class AnimScaleController;
class WalkerStateBindStarPointer;
class ParabolicPath;

class Meramera : public LiveActor {
public:
    Meramera(const char*);

    virtual ~Meramera();
    virtual void init(const JMapInfoIter& rIter);
    virtual void initAfterPlacement();
    virtual void makeActorAppeared();
    virtual void kill();
    virtual void endClipped();
    virtual void control();
    virtual void calcAndSetBaseMtx();
    virtual void attackSensor(HitSensor* pSender, HitSensor* pReceiver);
    virtual bool receiveMsgPush(HitSensor* pSender, HitSensor* pReceiver);
    virtual bool receiveMsgPlayerAttack(u32 msg, HitSensor* pSender, HitSensor* pReceiver);
    virtual bool receiveMsgEnemyAttack(u32 msg, HitSensor* pSender, HitSensor* pReceiver);
    virtual bool receiveOtherMsg(u32 msg, HitSensor* pSender, HitSensor* pReceiver);


    s32 initElementType(const JMapInfoIter& rIter);
    void initEffect();
    void initAppearState(const JMapInfoIter& rIter);
    bool requestDamage(HitSensor*, HitSensor*);
    bool requestFire(HitSensor*, HitSensor*);
    bool requestForceRunaway();
    bool requestDownForce(HitSensor*, HitSensor*);
    bool requestDown(HitSensor*, HitSensor*);
    bool requestAttack(HitSensor*, HitSensor*);
    bool requestFlatDown(HitSensor*, HitSensor*);
    bool sendMsgElementAttack(HitSensor*, HitSensor*);
    // A function got squeezed in here. Related to the spawnable enemies from Kamek
    bool tryWalk();
    bool tryWalkEnd();
    bool tryChase();
    bool tryEndChase();
    bool tryStartDiving();
    bool tryForceSink();
    bool tryRecovery();
    bool tryPointBind();

    void exeWait();
    void exeWalk();
    // TODO: More nerve executors

    AnimScaleController* _90; // 0x90
    WalkerStateBindStarPointer* _94; // 0x94
    ParabolicPath* _98; // 0x98
    TPos3f _9C; // 0x9C
    TPos3f _CC; // 0xCC
    TPos3f _FC; // 0xFC
    TQuat4f _12C; // 0x12C
    TVec3f _13C; // 0x13C
    TVec3f _148; // 0x148
    TVec3f _154; // 0x154
    TVec3f _160; // 0x160
    TVec3f _16C; // 0x16C
    TVec3f _178; // 0x178
    TVec3f _184; // 0x184
    TVec3f _190; // 0x190
    TVec3f _19C; // 0x19C
    f32 _1A8; // 0x1A8
    f32 _1AC; // 0x1AC
    s32 mInitialBehaviour; // 0x1B0 : Obj_arg0
    // Variable that used to be here was removed from SMG2
    s32 _1B4; // 0x1B4
    s32 _1B8; // 0x1B8
    s32 _1BC; // 0x1BC
    bool _1C0; // 0x1C0
    bool _1C1; // 0x1C1 : Unused?
    bool mRespawnEnable; // 0x1C2 : Obj_arg2
};

// TODO:
namespace NrvMeramera {
    //NERVE(MerameraNrvWait);
    //NERVE(MerameraNrvWalk);
    //NERVE(MerameraNrvChaseStart);
    //NERVE(MerameraNrvChaseDash);
    //NERVE(MerameraNrvChaseTurn);
    //NERVE(MerameraNrvDamage);
    //NERVE(MerameraNrvRunaway);
    //NERVE(MerameraNrvStartDiving);
    //NERVE(MerameraNrvDiving);
    //NERVE(MerameraNrvSink);
    //NERVE(MerameraNrvFloat);
    //NERVE(MerameraNrvIgnition);
    //NERVE(MerameraNrvIgnitionForce);
    //NERVE(MerameraNrvAttackSuccess);
    //NERVE(MerameraNrvBindStarPointer);
    //NERVE(MerameraNrvBindStarPointerNoFire);
    //NERVE(MerameraNrvDown);
    //NERVE(MerameraNrvFlatDown);
    //NERVE(MerameraNrvReadyRestart);
}