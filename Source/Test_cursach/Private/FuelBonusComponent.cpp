// Fill out your copyright notice in the Description page of Project Settings.

#include "FuelBonusComponent.h"
#include "Test_cursachPawn.h"

void UFuelBonusComponent::GiveEffect(ATest_cursachPawn * Pawn)
{
	Pawn->AddFuel(5.0f);
}


