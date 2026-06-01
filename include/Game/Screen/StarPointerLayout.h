#pragma once

#include "Game/Screen/LayoutActor.h"

class StarPointerDirector;
class StarPointerBlur;
class StarPointerNumber;

enum StarPointerKind {
    StarPointerKind_NULL = -1,
    StarPointerKind_StarPointer = 0,
    StarPointerKind_HandPointer = 1,
    StarPointerKind_2 = 2,
    StarPointerKind_HandPointerReactionWithCrossCursor = 3,
    StarPointerKind_FingerPointer = 4,
    StarPointerKind_5 = 5,
    StarPointerKind_StarPointerNozzle = 6,
    StarPointerKind_7 = 7, // NEW to SMG2
    StarPointerKind_8 = 8, // NEW to SMG2
};

enum AnimType {
    AnimType_NULL = -1,
    AnimType_Finger = 0,
    AnimType_HandGuu = 1,
    AnimType_HandPaa = 2,
    AnimType_StarPointer = 3,
    // TODO: are there more for yoshi?
};

class StarPointerLayout : public LayoutActor {
public:
	StarPointerLayout(const char*);

    void hideBlur();
    void show();
    void changeToStarPointer();
    void changeToHandPointer();
    void startAnimHandPaa();
    void startAnimHandGuu();
    void startAnimHandFinger();

	TVec2f mPosition; // 0x2C
	StarPointerKind mPointerKind; // 0x34
    AnimType mAnimType; // 0x38
    s32 mTouchTimer; // 0x3C
    s32 mPadChannel; // 0x40
    f32 mRadius; // 0x44
    f32 _44; // 0x48 is this rotation? there was a variable removed here too
    StarPointerDirector* mDirector; // 0x4C
    StarPointerBlur* mBlur; // 0x50
    // StarPointerCommandStream* mCommandStream; // Removed in SMG2
    StarPointerNumber* mNumber; // 0x54
    u64 mNewTouchedID;  // 0x58 : NOTE: The use of this variable is a bit strange. It holds a unique identifier to check if the last touched object has
    // changed (usually via pointer), but this identifier can be pretty much anything: actor pointer, layout pointer + pane string
    // pointer, pointer to raw position data, etc. Basically: a pointer comparison with extra steps.
    u64 mTouchedID;  // 0x60
    bool mIsNewTouch; // 0x68
    bool mStartTouch; // 0x69
    bool mStartDisableShoot; // 0x6A
    bool mSingleTouch; // 0x6B
    bool mStartSingleTouch; // 0x6C
    bool mShootDisabled; // 0x6D
    bool mIsPointerValid; // 0x6E
    bool mIsAppear; // 0x6F
    s32 mAppearTime; // 0x70
    u32 _74; // 0x74
};

namespace NrvStarPointerLayout {
    NERVE(HostTypeNrvWait);
    ENDABLE_NERVE(HostTypeNrvOnReaction);
    NERVE(HostTypeNrvGrip);
    ENDABLE_NERVE(HostTypeNrvHold);
    ENDABLE_NERVE(HostTypeNrvHoldTouch);
    NERVE(HostTypeNrvRelease);
    NERVE(HostTypeNrvOutScreen);
    ENDABLE_NERVE(HostTypeNrvNotConnected);
    NERVE(HostTypeNrvHide);
    NERVE(HostTypeNrvHideImmediately);
    ENDABLE_NERVE(HostTypeNrvInvalidate);
    ENDABLE_NERVE(HostTypeNrvInvalidateWait);
}  // namespace NrvStarPointerLayout