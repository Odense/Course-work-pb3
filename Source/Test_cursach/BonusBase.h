// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Public/BonusComponent.h"
#include "BonusBase.generated.h"

UCLASS()
class TEST_CURSACH_API ABonusBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABonusBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Cursach")
	UStaticMesh * BonusMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UStaticMeshComponent * MeshComponent;

	//BonusInterface
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Cursach")
	TSubclassOf<UBonusComponent>  BonusTemplate;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UBonusComponent * BonusComponent;

};
