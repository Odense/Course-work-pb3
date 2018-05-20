// Fill out your copyright notice in the Description page of Project Settings.

#include "BonusBase.h"
#include "Components/StaticMeshComponent.h"
#include "FuelBonusComponent.h"


// Sets default values
ABonusBase::ABonusBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//*
	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Bonus Mesh Component"));
	RootComponent = MeshComponent;

	//*

}

// Called when the game starts or when spawned
void ABonusBase::BeginPlay()
{
	Super::BeginPlay();
	
	//*
	MeshComponent->SetStaticMesh(BonusMesh);
	//*

	//BonusComponent = N<BonusTemplate>(TEXT("Bonus Component"));
	//BonusComponent = NewObject<UBonusComponent>(this, BonusTemplate->StaticClass());
	BonusComponent = NewObject<UBonusComponent>(this, UFuelBonusComponent::StaticClass());

}

// Called every frame
void ABonusBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}


