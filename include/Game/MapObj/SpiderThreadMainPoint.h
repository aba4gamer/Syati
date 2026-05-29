#pragma once

#include "Game/MapObj/SpiderThreadPoint.h"
#include "JSystem/JGeometry/TVec.h"

class SpiderThreadPart;
class SpiderThreadRadialLine;
class SpiderThreadMainPoint;

class SpiderThreadPointNearInfo {
public:
    // SpiderThreadPointNearInfo(); // Removed in SMG2

    void setInfo(f32, SpiderThreadPart*, const TVec3f&);
    void clear();
    const TVec3f* getPos() const;

    SpiderThreadMainPoint* mMainPoint; // 0x00
    SpiderThreadPoint* mPartPoint; // 0x04
    f32 mDistToPoint; // 0x08
    f32 mSpringFactor; // 0x0C
    SpiderThreadPart* mThreadPart; // 0x10
};

class SpiderThreadMainPoint : public SpiderThreadPoint {
public:
    // SpiderThreadMainPoint(const TVec3f&, int); // Removed in SMG2

    // void addNearMainPoint(SpiderThreadMainPoint*, SpiderThreadPart*); // Removed in SMG2
    void addNearPartPoint(SpiderThreadPoint*, f32);
    void removeNearPoint(const SpiderThreadPoint*);
    void addNearPointToRadial(SpiderThreadPoint*);
    void removeNearPointFromRadial(const SpiderThreadPoint*);
    // void cutNearPoints(s32*, SpiderThreadMainPoint**); // Removed in SMG2
    void updateVelocity();
    void closeToNearPoint(const SpiderThreadPointNearInfo*);

    SpiderThreadPointNearInfo* getNearPointInfo(int idx) const {
        return &mNearInfos[idx];
    }

    inline SpiderThreadPointNearInfo* getLastInfo() const {
        return &mNearInfos[mNumNearInfos - 1];
    }

    SpiderThreadRadialLine* mRadialLine; // 0x4C
    s32 mNearInfoBufferSize; // 0x50
    s32 mNumNearInfos; // 0x54
    SpiderThreadPointNearInfo* mNearInfos; // 0x58
};
