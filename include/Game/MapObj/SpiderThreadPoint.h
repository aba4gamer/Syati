#pragma once

#include "JSystem/JGeometry/TVec.h"

class SpiderThreadPoint {
public:
    // SpiderThreadPoint(const TVec3f&, f32); // Removed in SMG2

    bool updateSpring();
    void updateDrawVec(const TVec3f*, const TVec3f*);
    void updateWind(f32);
    void updatePos();
    void restrict(const TVec3f*, f32);
    void updateHang(const TVec3f&);
    bool tryTouch(f32, const TVec3f&, s32);
    // bool tryPush(const TVec3f&, f32); // Removed in SMG2
    void startThreadLevelSound();

    TVec3f mBasePos; // 0x00
    TVec3f mPosition; // 0x0C
    TVec3f mVelocity; // 0x18
    f32 mFriction; // 0x24
    TVec3f mUp; // 0x28
    TVec3f mFront; // 0x34
    s32 mWindStartTime; // 0x40
    s32 mWindTime; // 0x44
    f32 mPrevStretchDist; // 0x48
};
