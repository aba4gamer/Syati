#pragma once

#include "Game/LiveActor/LiveActor.h"
#include "revolution/types.h"

class MiniRouteLine : public LiveActor {
public:
    MiniRouteLine(const char *, u32); // 2nd arg is a class with its ctor in 804EC230

    virtual ~MiniRouteLine();
    virtual void init(const JMapInfoIter&);
    virtual void appear();
    virtual void kill();
    virtual void calcAndSetBaseMtx();

    void setCloseCondition(const char*, s32, const char*);
    bool testCloseCondition();
    bool isValidCloseGameFlag();
    void func_804EBA40(); // undocumented
    void setType(bool);
    void func_804EBB50(); // undocumented
    void func_804EBBB0(); // ^
    void func_804EBC80(); // ^
    void func_804EBD40(); // ^
    void func_804EBE30(); // ^
    void func_804EBED0(); // ^
    void func_804EBEE0(); // ^
    void func_804EBEF0(); // ^
    void func_804EBF00(); // ^
    void func_804EBFE0(); // ^
    void func_804EC020(); // ^
    void func_804EC100(); // ^
    void func_804EC150(); // ^
    bool isEqualPointIndex(s32, s32);

    /* 0x90 */ s32 mPointIndexA;
    /* 0x94 */ s32 mPointIndexB;
    /* 0x98 */ const char* mCloseStageName;
    /* 0x9C */ u32 mCloseStageScenarioNo;
    /* 0xA0 */ const char* mCloseGameFlag;
    u8 _A4;
    u8 _A5;
    u8 _A6;
    u8 _A7;
    u8 _A8;
    f32 _AC;
    f32 _B0;
    f32 _B4;
    f32 _B8;
    f32 _BC;
    f32 _C0;
    f32 _C4;
    u32 _C8;
    u32 _CC;
    u32 _D0;
    u32 _D4;
};