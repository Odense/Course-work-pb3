// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BonusComponent.h"
#include "FuelBonusComponent.generated.h"

/**
 * 
 */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class TEST_CURSACH_API UFuelBonusComponent : public UBonusComponent
{
	GENERATED_BODY()

	virtual void GiveEffect(ATest_cursachPawn * Pawn) override;
	
	
};
