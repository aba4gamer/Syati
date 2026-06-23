#pragma once

#include "revolution/types.h"

class JMapInfo;
class PointPartsHolder;

class WorldMapObjHolder {
public:
    WorldMapObjHolder(s32 worldNo);

    void init(bool);
    void appear();
    void kill();

    s32 mWorldNo;
    u32 _4;
    u32 _8;
    u32 _C;
    u32 _10;
    PointPartsHolder* mPointPartsHolder;
    u32 _18;
    u32 _1C;
};