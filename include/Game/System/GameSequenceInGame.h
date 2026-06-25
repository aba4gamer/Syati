#pragma once

#include "revolution.h"
#include "Game/NameObj.h"

class GameSequence;
class PlayResultInStageHolder;
class PlayResultMarioFaceShipHolder;

class PlayResultWorldMapHolder : public NameObj {
public:
	PlayResultWorldMapHolder();
	virtual ~PlayResultWorldMapHolder();
	void reset();

	u32 _14;
	s32 _18;
	u32 _1C;
	u8 _20[0x210];
};

class GameSequenceInGame {
public:
	GameSequenceInGame(GameSequence *);
	PlayResultInStageHolder* getPlayResultInStageHolder();
	PlayResultMarioFaceShipHolder* getPlayResultMarioFaceShipHolder();
	PlayResultWorldMapHolder* getPlayResultWorldMapHolder();
	void init();
	bool isMarioFace() const;
	void setBeforeKoopaVs3();
	void setInStage(const char *);
	void setMarioFace();
	void setOpening();
	void setWorldMap();
};
