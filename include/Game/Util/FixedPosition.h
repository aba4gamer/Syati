#pragma once

#include "revolution.h"
#include "JSystem.h"

class LiveActor;

class FixedPosition {
public:
	FixedPosition(const LiveActor *, const char *, const TVec3f &, const TVec3f &);
	FixedPosition(const LiveActor *, const TVec3f &, const TVec3f &);
	FixedPosition(MtxPtr, const char *, const TVec3f &, const TVec3f &);
	FixedPosition(const LiveActor *, const char *, const LiveActor *);

	void init(MtxPtr, const TVec3f &, const TVec3f &);
	void calc();
	void setBaseMtx(MtxPtr);
	void setLocalTrans(const TVec3f &);
	void copyTrans(TVec3f *) const;
	void copyRotate(TVec3f *) const;

	MtxPtr mBaseMtx; // 0x00
	TVec3f mLocalTrans; // 0x04
	TVec3f mRotDegrees; // 0x10
	TPos3f mMtx; // 0x1C
	bool mNormalizeScale; // 0x4C
};
