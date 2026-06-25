#pragma once

#include "Game/LiveActor/LiveActor.h"
#include "Game/Util/JMapInfo.h"
#include "Game/Util/ParabolicPath.h"
#include "JSystem/JGeometry/TVec.h"
#include "JSystem/JUtility/JUTTexture.h"

class SpinDriverShootPath {
public:
	SpinDriverShootPath();
	void calcClippingInfo(TVec3f *, f32 *, f32, f32);
	void calcDirection(TVec3f *, f32, f32) const;
	void calcInitPose(TVec3f *, TVec3f *, TVec3f *, f32) const;
	void calcPosition(TVec3f *, f32) const;
	f32 getTotalLength() const;
	void init(const JMapInfoIter &);
	void initUsingParabolic(const JMapInfoIter &, const TVec3f &);
	void setStartPosition(const TVec3f &);

	RailRider *mRailRider;			// _0
	ParabolicPath *mParabolicPath;	// _4
	u32 _8;
	u32 _C;
	u32 _10;
	u8 _14;
};

class SpinDriverPathDrawInit : public NameObj {
public:
	SpinDriverPathDrawInit();

	virtual ~SpinDriverPathDrawInit();

	void initDraw();

	JUTTexture* mTexBlue;
	JUTTexture* mTexGreen;
	JUTTexture* mTexPink;
	JUTTexture* mTexMask;
	bool mDrawAtOpa;
};

namespace MR {
	void setSpinDriverPathColorNormal();
	void setSpinDriverPathColorGreen();
	void setSpinDriverPathColorPink();
	void isDrawSpinDriverPathAtOpa();
	void onDrawSpinDriverPathAtOpa();
	void offDrawSpinDriverPathAtOpa();
};

class SpinDriverPathDrawer : public LiveActor {
public:
	SpinDriverPathDrawer(SpinDriverShootPath *);

	virtual ~SpinDriverPathDrawer();
	virtual void init(const JMapInfoIter &);
	virtual void draw() const;

	void calcPositionCount(f32, f32) const;
	void initPositionList(f32, f32);
	void initClipping();
	void initPathEnd();
	f32 calcDrawCode() const;
	f32 calcDrawBaseCode() const;
	void setCoord(f32);
	void setColorNormal();
	void setColorPink();
	void setMaskLength(f32);
	void setFadeScale(f32);
	void sendPoint(const TVec3f &, f32, f32) const;

	SpinDriverShootPath* _90;
	s32 _94;
	s32 _98;
	s32 _9C;
	s32 _A0;
	s32 _A4;
	s32 _A8;
	s32 _AC;
	f32 _B0;
	f32 _B4;
	s32 mColor;
	f32 _BC;
	f32 _C0;
	f32 _C4;
};
