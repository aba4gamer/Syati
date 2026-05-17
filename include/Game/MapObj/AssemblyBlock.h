#pragma once

#include "Game/LiveActor/PartsModel.h"

class AssemblyBlock : public LiveActor {
public:
	AssemblyBlock(const char*);

    virtual ~AssemblyBlock();
    virtual void init(const JMapInfoIter& rIter);
    virtual void calcAndSetBaseMtx();

    void exeWait();
    void exeAssemble();
    void exeAssembleWait();
    void exeReturn();
    void exeTimer();
    bool tryStartAssemble();
    bool tryStartReturn();

    TPos3f _90;
    TPos3f _C0;
    TPos3f _F0;
    s32 mIsTimed; // 0x120
    f32 mActivationRange;  // 0x124
    TVec3f _128;
    f32 _134;
    s32 mActivationTime;      // 0x138
    PartsModel* mBloomModel;  // 0x13C
    bool _140;
};

namespace NrvAssemblyBlock {
    NERVE(AssemblyBlockNrvWait);
    NERVE(AssemblyBlockNrvAssemble);
    NERVE(AssemblyBlockNrvAssembleWait);
    NERVE(AssemblyBlockNrvReturn);
    NERVE(AssemblyBlockNrvTimer);
}
