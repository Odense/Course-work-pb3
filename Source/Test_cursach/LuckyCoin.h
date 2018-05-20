// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "BonusBase.h"
#include "LuckyCoin.generated.h"

UCLASS()
class TEST_CURSACH_API ALuckyCoin : public ABonusBase
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALuckyCoin();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY()
	int GoldAmount;
	
};
