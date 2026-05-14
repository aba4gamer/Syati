#pragma once

#include "JSystem/JGeometry/TVec.h"

class PlantPoint {
public:
    PlantPoint(const TVec3f& pPos, const TVec3f& pUp, const TVec3f& pSide, f32 thickness);

    virtual void setAxisAndPos(const TVec3f& pSide, const TVec3f& pUp, const TVec3f& pFront, const TVec3f& pPos);

    /* 0x04 */ TVec3f mPosition;
    /* 0x10 */ TVec3f mSide;
    /* 0x1C */ TVec3f mUp;
    /* 0x28 */ TVec3f mFront;
    /* 0x34 */ f32 mThickness;
};
