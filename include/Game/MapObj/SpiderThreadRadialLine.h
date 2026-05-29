#pragma once

#include "JSystem/JGeometry/TVec.h"

class SpiderThreadMainPoint;

class SpiderThreadRadialLine {
public:
    // SpiderThreadRadialLine(int); // Removed in SMG2

    // void addPoint(SpiderThreadMainPoint*); // Removed in SMG2
    void updateVelocity();
    void updatePos();

    SpiderThreadMainPoint* getPoint(int idx) const {
        return mPoints[idx];
    }

    /* 0x00 */ int mBufferSize;
    /* 0x04 */ s32 mNumPoints;
    /* 0x08 */ SpiderThreadMainPoint** mPoints;
};
