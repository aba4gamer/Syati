#pragma once

#include "Game/LiveActor/LiveActor.h"
#include "revolution/types.h"
#include "Game/Util/JMapInfo.h"
#include "Game/Map/PointPartsHolder.h"

struct unk_804F39A0 {
    u32 mWorldNo;   // _0
    u32 _4;
    u32 _8;
    u32 _C;
    u32 _10;
    u32 _14;
    u32 _18;
    u32 _1C;
};

class MiniTicoMaster : public LiveActor {
public:
    MiniTicoMaster(unk_804F39A0 *, void *, u32, void *, void *);
    ~MiniTicoMaster();
    virtual void init(const JMapInfoIter &rIter);
    virtual void makeActorAppeared();
    virtual void makeActorDead();
    virtual void control();

    unk_804F39A0 *_90;
    s32 *_94;
    u32 _98;
    u32 _9C;
    u32 _A0;
    void *_A4;
    void *_A8;
    LiveActor *_AC;
    LiveActor *_B0;
    LiveActor *mMark;   // _B4
    u32 _B8;
    LiveActor *_BC;
};