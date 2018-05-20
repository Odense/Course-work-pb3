// Fill out your copyright notice in the Description page of Project Settings.

#include "HelathBonus.h"
#include "Test_cursachPawn.h"


void UHelathBonus::GiveEffect(ATest_cursachPawn *pawn)
{
	pawn->AddHP(10.0f);
}
