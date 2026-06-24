#pragma once

#include "Game/System/BinaryDataChunkHolder.h"
#include "Game/System/BinaryDataContentHeaderSerializer.h"

class GameDataPlayerStatus : public BinaryDataChunkBase {
public:
    GameDataPlayerStatus();

	virtual u32 makeHeaderHashCode() const;
	virtual u32 getSignature() const;
	virtual u32 serialize(u8 *, u32) const;
	virtual u32 deserialize(const u8 *, u32);
	virtual void initializeData();

    s32 getPlayerLeft() const;
    void addPlayerLeft(s32);
    s32 getStockedStarPieceNum() const;
    void addStockedStarPieceNum(s32);
    s32 getStockedCoinNum() const;
    void addStockedCoinNum(s32);

    /* 0x04 */ BinaryDataContentHeaderSerializer* mHeaderSerializer;
    /* 0x08 */ u8 mPlayerLeft;
    /* 0x0A */ u16 mStockedStarPieceNum;
    /* 0x0C */ u16 mStockedCoinNum;
    /* 0x0E */ u16 mLast1upCoinNum;
    /* 0x10 */ u8 mFlag;
    /* 0x14 */ u32 _14;
};