#pragma once

#include "Game/LiveActor/LiveActor.h"
#include "revolution/types.h"

class MiniRouteLine : public LiveActor {
public:
    MiniRouteLine(const char *, u32); // 2nd arg is a class with its ctor in 804EC230

    virtual ~MiniRouteLine();
    virtual void init(const JMapInfoIter&);
    virtual void appear();
    virtual void kill();
    virtual void calcAndSetBaseMtx();

    u32 _90;
    u32 _94;
    u32 _98;
    u32 _9C;
    u32 _A0;
    u8 _A4;
    u8 _A5;
    u8 _A6;
    u8 _A7;
    u8 _A8;
    f32 _AC;
    f32 _B0;
    f32 _B4;
    f32 _B8;
    f32 _BC;
    f32 _C0;
    f32 _C4;
    u32 _C8;
    u32 _CC;
    u32 _D0;
    u32 _D4;
};