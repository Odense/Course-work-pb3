// Fill out your copyright notice in the Description page of Project Settings.

#include "BonusBase.h"
#include "Components/StaticMeshComponent.h"
#include "FuelBonusComponent.h"
#include "Test_cursachPawn.h"


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
	BonusComponent = NewObject<UBonusComponent>(this, BonusTemplate.Get());
	//BonusComponent = NewObject<UBonusComponent>(this, UFuelBonusComponent::StaticClass());


	//CapsuleComponent->OnComponentBeginOverlap.AddDynamic(this, &AYourClass::YourFunction)
	this->OnActorBeginOverlap.AddDynamic(this, &ABonusBase::Overlape);
}

// Called every frame
void ABonusBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FRotator rot = GetActorRotation();
	rot.Yaw += 220 * DeltaTime;
	SetActorRotation(rot);
}

void ABonusBase::Overlape(AActor * me, AActor * Other)
{
	if (ATest_cursachPawn * mashinka = Cast<ATest_cursachPawn>(Other))
	{
		BonusComponent->GiveEffect(mashinka);

		Destroy();
	}
}

