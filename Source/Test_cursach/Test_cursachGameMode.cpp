// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "Test_cursachGameMode.h"
#include "Test_cursachPawn.h"
#include "Test_cursachHud.h"

ATest_cursachGameMode::ATest_cursachGameMode()
{
	DefaultPawnClass = ATest_cursachPawn::StaticClass();
	HUDClass = ATest_cursachHud::StaticClass();
}
