#pragma once

#include "revolution.h"

class StarPointerController;
class StarPointerLayout;
class StarPointerGuidance;

class StarPointerPeekZ {
public:
    StarPointerPeekZ();

    virtual void drawSyncCallback(u16);

    u16 mToken;             // 0x4
    u32 _8;
    f32 mProjection;        // 0xC
    u32 _10;
    u32 _14;
    u32 _18;
    u32 _1C;
    u32 _20;
    u32 _24;
    f32* mViewport;         // 0x28
    u32 _2C;
    u32 _30;
    u32 _34;
    u32 _38;
    u32 _3C;
};

class StarPointerTransformHolder {
public:
    StarPointerTransformHolder();

    void movement();

    Mtx _0;
    Mtx44 _30;
    f32 mFovy;      // 0x70
    f32 _74;
};

class StarPointerDirector {
public:
    StarPointerDirector();

    void update();
    void draw();
    void createLayout();

    void startHandPointer();
    void startFingerPointer();
    void startStarPointer();
    void startStarPointerNozzle();
    // two unknown functions. Related to yoshi pointer most likely...
    void setGameSceneCameraMtx();
    StarPointerController* getStarPointerController(s32) const;
    StarPointerLayout* getStarPointerLayout(s32) const;

    bool mIsUpdateTransHolder;
    bool mIsAllowP1StarPieceShot;
    bool mIsAllowP2StarPieceShot;
    bool mIsOSPointerMode;
    StarPointerController* mControllers;        // 0x4
    StarPointerLayout* mStarPointerLayouts;     // 0x8
    StarPointerTransformHolder* mTransHolder;   // 0xC
    StarPointerPeekZ* mPeekZ;                   // 0x10
    StarPointerGuidance* mGuidance;             // 0x14
    void* _18;                                  // 0x18 : NEW to SMG2, Pointer to something
    s32 _1C;                                    // 0x1C
    TVec3f mNozzleAimPos;                       // 0x20
};

namespace StarPointerFunction {
    StarPointerDirector* getStarPointerDirector();
    s32 getNumStarPointer();
    bool canShoot(s32);
    void forceInsideScreenEdge(TVec2f*);
}