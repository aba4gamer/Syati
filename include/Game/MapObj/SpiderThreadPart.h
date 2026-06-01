#pragma once

#include "JSystem/JGeometry/TBox.h"
#include "JSystem/JGeometry/TVec.h"

class SpiderThreadMainPoint;
class SpiderThreadPoint;

class SpiderThreadPart {
public:
    // SpiderThreadPart(SpiderThreadMainPoint*, SpiderThreadMainPoint*, f32); // Removed in SMG2

    // void cut(SpiderThreadMainPoint*, SpiderThreadMainPoint*); // Removed in SMG2
    void updatePointerPos();
    void update();
    void draw() const;
    void startHang(s32);
    void updateHang(const TVec3f&, s32);
    void endHang(s32);
    // void stopAllPoints(); // Removed in SMG2
    // f32 calcNearestPointInfo(const TVec3f**, const TVec3f**, s32*, const TVec3f&); // Removed in SMG2
    void updatePointPosToLine();
    void updatePointPosAndBasePosToLine();
    // bool touchActor(s32, const TVec3f&); // Removed in SMG2
    void tryTouch(f32, const TVec3f&, s32);
    s32 findTouchPoint(f32, const TVec3f&, s32);
    // f32 findNearestPointNo(s32*, const TVec3f&) const; // Removed in SMG2
    void updatePointPosHanging(s32);
    void updatePointVelocityTouch(s32, const TVec3f&);
    void updateBasePos();
    void updateForceAttach();
    void updateCutPoints();
    void updateDrawVec();

    void drawLine() const;
    void drawPoints() const;

    bool mIsStill; // 0x00
    bool mIsCut; // 0x01
    bool mIsFree; // 0x02
    s16 _4; // 0x04
    s32 mNumHangingPoints; // 0x08
    s32 mStopTime; // 0x0C
    s32 mTouchTimeout; // 0x10
    TVec3f mPointerPosPad0; // 0x14
    TVec3f mPointerPosPad1; // 0x20
    SpiderThreadMainPoint* mPointA; // 0x2C
    SpiderThreadMainPoint* mPointB; // 0x30
    s32 mNumPoints; // 0x34
    SpiderThreadPoint** mPoints; // 0x38
    TBoxVec3f mBoundBox; // 0x3C : changed from TBox3f to match the Extend symbol
    TVec3f mSide; // 0x54
    TVec3f mUp; // 0x60
    TVec3f mFront; // 0x6C
    f32 mDistBetweenMainPoints; // 0x78
    f32 mDistBetweenPoints; // 0x7C
    f32 mTextureOffset; // 0x80
};
