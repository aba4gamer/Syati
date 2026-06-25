#pragma once

#include "Game/NPC/NPCActor.h"
#include "Game/Util/JMapInfo.h"
#include "Game/LiveActor/HitSensor.h"
#include "revolution/types.h"

class TicoFatStarPieceTransformation;

class TicoFatStarPiece : public NPCActor {
public:
    TicoFatStarPiece(const char *pName);
    virtual ~TicoFatStarPiece();
    virtual void init(const JMapInfoIter &rIter);
    virtual void control();
    virtual bool receiveMsgPlayerAttack(u32, HitSensor *, HitSensor);
    bool eventFunc(u32);

    u32 _164;
    u32 _168;
    s32 _16C;
    s32 _170;
    u32 _174;
    u32 _178;
    u32 _17C;
    u8 _180;
    u32 _184;
    u32 _188;
    u32 _18C;
    TicoFatStarPieceTransformation *_190;
};