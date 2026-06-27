#pragma once

#include "Game/LiveActor/ActorCameraInfo.h"
#include "Game/LiveActor/LiveActor.h"
#include "Game/LiveActor/LiveActorGroup.h"
#include "Game/NPC/TalkMessageCtrl.h"

class MarioFaceShipAttentionConversationExecutor;

class MarioFaceShipAttentionConversationDirector : public NameObj {
public:
    MarioFaceShipAttentionConversationDirector(const char *pName);

    LiveActorGroup **_14;
    u32 mNumGroups;                                             // _18
    LiveActor *_1C;
    MarioFaceShipAttentionConversationExecutor **mExecutors;    // _20
    s32 mNumExecutors;                                          // _24
};

class MarioFaceShipAttentionConversationExecutor : public LiveActor {
public:
    MarioFaceShipAttentionConversationExecutor(const char *pName);
    virtual ~MarioFaceShipAttentionConversationExecutor();
    virtual void init(const JMapInfoIter &rIter);
    // many unknown nerves

    LiveActor *_90;
    s32 _94;
    LiveActor *_98;
    LiveActorGroup *_9C;
    u32 _A0;
    ActorCameraInfo *_A4;
    TalkMessageCtrl *_A8;
    ActorCameraInfo *_AC;
    ActorCameraInfo *_B0;
    ActorCameraInfo *_B4;
    ActorCameraInfo *_B8;
    u8 _BC;
    u8 _BD;
    u8 _BE;
    u8 _BF;
    u8 _C0;
};