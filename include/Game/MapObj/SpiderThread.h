#pragma once

#include "Game/LiveActor/LiveActor.h"

class SpiderThreadHangInfo;
class SpiderThreadMainPoint;
class SpiderThreadPart;
class SpiderThreadPoint;
class SpiderThreadRadialLine;
class SpiderThreadWindCtrl;

class JUTTexture;

class SpiderThread : public LiveActor {
public:
    SpiderThread(const char*);

    virtual void init(const JMapInfoIter& rIter);
    virtual void movement();
    virtual void draw() const;
    virtual bool receiveOtherMsg(u32 msg, HitSensor* pSender, HitSensor* pReceiver);

    // void initThread(const TVec3f&); // Removed from SMG2
    // void startActorBind(LiveActor*, const TVec3f**, const TVec3f**, const TVec3f**, const TVec3f&, const TVec3f&, s32); // Removed from SMG2
    // bool touchActor(const TVec3f&, const TVec3f&); // Removed from SMG2
    // void tryPush(const TVec3f&, f32); // Removed from SMG2
    // void stopAllPartsPoint(); // Removed from SMG2
    // void cutSpiderThread(); // Removed from SMG2
    // void initMainThreads(); // Removed from SMG2
    // void connectMainPoint(SpiderThreadPoint*, SpiderThreadPoint*, bool); // Removed from SMG2
    void updatePointerInfo();
    void updateHangedPoint();
    void tryTouchPoint(s32);
    // void findNearestPointPos(const TVec3f**, const TVec3f**, s32*, s32*, const TVec3f&) const; // Removed from SMG2
    SpiderThreadHangInfo* findHangInfo(LiveActor*) const;
    void initDraw() const;


    SpiderThreadMainPoint* mMainPoint; // 0x90
    SpiderThreadHangInfo** mHangInfos;
    s32 mNumHangInfos;
    SpiderThreadHangInfo* mShootHangInfo;
    s32 mNumRadialLines;
    SpiderThreadRadialLine** mRadialLines;
    SpiderThreadMainPoint** mAnchorPoints;
    s32 mRadialPartsBufferSize;
    s32 mNumRadialParts;
    SpiderThreadPart** mRadialParts;
    s32 mCirclePartsBufferSize;
    s32 mNumCircleParts;
    SpiderThreadPart** mCircleParts;
    s32 mCutPointsBufferSize;
    s32 mNumCutPoints;
    SpiderThreadMainPoint** mCutPoints;
    TVec3f mFront;
    SpiderThreadWindCtrl* mWindCtrl;
    bool mIsBloomOn;
    JUTTexture* mThreadTexture;
    JUTTexture* mIndirectTexture;
};

namespace MR {
    //void initSpiderThread(const TVec3f&); // Removed from SMG2
    //void appearSpiderThread(); // Removed from SMG2
    //void startSpiderThreadBattle(); // Removed from SMG2
    //void startSpiderThreadChance(); // Removed from SMG2
    //void startSpiderThreadBattleEnd(); // Removed from SMG2
    //void pauseOffSpiderThread(); // Removed from SMG2
    //f32 getSpiderThreadPosZ(); // Removed from SMG2
    //void startActorBindToSpiderThread(LiveActor*, const TVec3f**, const TVec3f**, const TVec3f**, const TVec3f&, const TVec3f&); // Removed from SMG2
    //bool sendMsgToSpiderThread(u32, HitSensor*); // Removed from SMG2
    //bool touchActorToSpiderThread(const TVec3f&, const TVec3f&); // Removed from SMG2
    //void tryPushSpiderThread(const TVec3f&, f32); // Removed from SMG2
    //void onSpiderThreadBloom(); // Removed from SMG2
    void drawSpiderThreadBloom();
};  // namespace MR