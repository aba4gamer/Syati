#pragma once

#include "revolution.h"

#include "Game/NameObj/NameObj.h"
#include "Game/Util/Array.h"

class GalaxyStatusAccessor;
class JMapInfo;
class ScenarioData;

typedef MR::FixedArray<ScenarioData*, 96> ScenarioDataType; // I don't know why this is needed but I cannot compile without it...

class ScenarioDataParser : public NameObj {
public:
    /// @brief Creates a new `ScenarioDataParser`.
    /// @param pName A pointer to the null-terminated name of the object.
    ScenarioDataParser(const char* pName);

    virtual ~ScenarioDataParser();

    const ScenarioData* getScenarioData(const char*) const;
    GalaxyStatusAccessor makeAccessor(const char*) const;

    /* 0x10 */ MR::Vector<ScenarioDataType> mScenarioData;
};

class ScenarioDataIter {
public:
    inline ScenarioDataIter() {} // This MUST exist because there are many occasions where the game will init the variable of an iter and then actually create it later.
    ScenarioDataIter(const ScenarioDataParser*, int);

    virtual bool isValidWorldId(int idx) const;

    bool isEnd() const;
    void goNext();
    void goNextValidWorldId(int idx);
    GalaxyStatusAccessor makeAccessor() const;

    /* 0x04 */ const ScenarioDataParser* mParser;
    /* 0x08 */ int mCur;
};

class ScenarioData {
public:
    ScenarioData(const char*);

    void initialize(const char*);

    s32 getNormalPowerStarNum() const;
    s32 getPowerStarNum() const;
    bool getValueString(const char*, s32, const char**) const;
    bool getValueS32(const char*, s32, s32*) const;

    // I cannot verify the next two functions

    bool isPowerStarTypeHidden(s32) const; // new to SMG2
    bool isPowerStarTypeGreen(s32) const; // new to SMG2
    s32 getZoneNum() const;
    const char* getZoneName(s32) const;
    s32 getZoneId(const char*) const;
    s32 getWorldNo() const;

    ScenarioDataIter getScenarioDataIter(s32) const;
    void getScenarioString(const char*, s32, const char**);

    /* 0x00 */ const char* mGalaxyName;
    /* 0x04 */ JMapInfo* mScenarioData;
    /* 0x08 */ JMapInfo* mZoneList;
    /* 0x0C */ JMapInfo* mGalaxyInfo;
};

namespace ScenarioDataFunction {
    ScenarioDataParser* getScenarioDataParser();
    u32 getCurrentCommonLayers(const char*);
    u32 getCurrentScenarioLayers(const char*, s32);
};  // namespace ScenarioDataFunction

namespace MR {
    void makeBeginScenarioDataIter(ScenarioDataIter* pOut);
}