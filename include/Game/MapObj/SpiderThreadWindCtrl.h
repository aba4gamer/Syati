#pragma once

#include "JSystem/JGeometry/TVec.h"

class SpiderThreadWindCtrl {
public:
    // SpiderThreadWindCtrl(); // Removed in SMG2

    void update();
    // void startWindBattle(); // Removed in SMG2
    // void startWindChance(); // Removed in SMG2
    // void startWindBattleEnd(); // Removed in SMG2

    s32 getTimeToStartWind() const;
    s32 getWindTime() const;

    f32 mWindTargetSpeed; // 0x00 
    f32 mWindSpeed; // 0x04 
    f32 mWindAccel; // 0x08 
    TVec3f mWindDirection; // 0x0C 
    TVec3f mWind; // 0x18 
};
