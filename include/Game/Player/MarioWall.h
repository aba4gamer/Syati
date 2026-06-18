#pragma once

#include "Game/Player/MarioState.h"
#include "Game/Player/MarioActor.h"
#include "revolution/types.h"
#include "JSystem/JGeometry/TVec.h"

class MarioWall : public MarioState {
public:
    MarioWall(MarioActor *);

    virtual bool start();
    virtual bool update();
    virtual bool close();
    virtual bool notice();

    void initTriangleJump();
    bool isCancel();
    bool startJump();
    bool startBackJump(u32);

    u32 _14;
    u32 _18;
    u8 _1C;
    u8 _1D;
    u8 _1E;
    f32 _20;
    TVec3f _24;
    TVec3f _30;
};