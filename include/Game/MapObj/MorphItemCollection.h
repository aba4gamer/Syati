#pragma once

#include "revolution.h"
#include "Game/MapObj/MorphItemObjNeo.h"

class MorphItemCollection : public LiveActor {
public:
	MorphItemCollection(const char *);

	virtual ~MorphItemCollection();
	virtual void init(const JMapInfoIter &);
	virtual void calcAndSetBaseMtx();

	void initPowerUpModel(const JMapInfoIter &);
	void exeWait();

	s32 mPowerUpType; // _90
	f32 mRotation; // _94
	bool mIsDrill; // _98
};

namespace NrvMorphItemCollection {
	NERVE(MorphItemCollectionNrvWait);
}