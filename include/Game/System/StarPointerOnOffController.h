#pragma once

#include "Game/System/NerveExecutor.h"

enum StarPointerModeEnum {
    StarPointerMode_HomeButton = 0,
    StarPointerMode_ErrorWindow = 1,
    StarPointerMode_SaveLoad = 2,
	StarPointerMode_Logo = 3,
	StarPointerMode_Title = 4,
	StarPointerMode_FileSelect = 5,
	StarPointerMode_ScenarioSelectScene = 6,
	StarPointerMode_PauseMenu = 7,
	StarPointerMode_ChooseYesNo = 8,
	// StarPointerMode_PictureBook = 9, // Removed in SMG2
	StarPointerMode_DemoWithStarPointer = 9,
	StarPointerMode_DemoWithHandPointerFinger = 10,
	StarPointerMode_Demo = 11,
	StarPointerMode_DemoMarioDeath = 12,
	StarPointerMode_PowerStarGetDemo = 13,
	StarPointerMode_1PInvalid2PValid = 14,
	// StarPointerMode_SphereSelectorOnReaction = 16, // Removed in SMG2
	StarPointerMode_SphereSelectorFinger = 15, // Used for worldmaps only?
	StarPointerMode_MarioLauncher = 16,
	//StarPointerMode_CommandStream = 19, // Removed in SMG2
	StarPointerMode_BlueStar = 17,
	StarPointerMode_BlueStarReady = 18,
	StarPointerMode_StarPieceTarget = 19,
	StarPointerMode_BigBubble = 20,
	StarPointerMode_UNKNOWN = 21, // NEW to SMG2, seems related to Yoshi as well, but I couldn't get it to trigger
	StarPointerMode_Yoshi = 22,   // NEW to SMG2
	StarPointerMode_Base = 23,
	StarPointerMode_Game = 24,

    StarPointerMode_Count,
};

class StarPointerOnOffController : public NerveExecutor {
public:
	StarPointerOnOffController();

	virtual ~StarPointerOnOffController();

	bool isMode(StarPointerModeEnum mode);
	void update();
	void setStateToTitle(void* pCaller);
	void setStateToFileSelect(void* pCaller);
	void setStateToBase(void* pCaller);
	void popState(void* pCaller);
	void requestMode(void* pCaller, StarPointerModeEnum mode); // Does nothing if a Tip Network or Cosmic Guide is active

	void setupHomeButton();
	void setupErrorWindow();
	void setupLogo();
	void setupTitle();
	void setupFileSelect();
	void show();
	void setupDemo();
	void setupDemoWithStarPointer();
	void setupDemoWithHandPointerFinger();
	void setupDemoMarioDeath();
	void setup1PInvalid2PValid();
	void setupMarioLauncher();
	void setupChooseYesNo();
	void setupPauseMenu();
	void setupScenarioSelectScene();
	void setupBlueStar();
	void setupBlueStarReady();
	void setupPowerStarGetDemo();
	void setupStarPieceTarget();
	void setupSphereSelectorFinger();
	void setupBigBubble();
	// void sub_804CD5A0(); // startYoshi?
	// void sub_804CD620(); // Also yoshi related?
	void setupGame();
	void setupBase();

	void updateMode();
	void clearInfo();
	void incModeCounter(void* pHost, s32 mode); // Does nothing if a Tip Network or Cosmic Guide is active
	void decModeCounter(void* pHost);


	bool _8;
	void* _C[16];
	u32 _4C[StarPointerMode_Count];
	bool _B0[StarPointerMode_Count];
	s32 _CC;
};