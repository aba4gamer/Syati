#pragma once

#include "Game/Effect/MultiEmitterParticleCallBack.h"
#include "revolution.h"

class SpinPullParticleCallBack : public MultiEmitterParticleCallBack {
public:
    SpinPullParticleCallBack();

    virtual void execute(JPABaseEmitter*, JPABaseParticle*);

    f32 _4;
};