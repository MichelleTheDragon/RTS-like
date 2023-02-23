// Fill out your copyright notice in the Description page of Project Settings.


#include "TriggerColliders.h"
#include "Components/BoxComponent.h"
#include "Engine/Engine.h"

// Sets default values
ATriggerColliders::ATriggerColliders()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
	CollisionBox->SetBoxExtent(FVector(32.0f, 32.0f, 32.0f));
	CollisionBox->SetCollisionProfileName("Trigger");
	RootComponent = CollisionBox;

	CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &ATriggerColliders::OnOverlapBegin);
	CollisionBox->OnComponentEndOverlap.AddDynamic(this, &ATriggerColliders::OnOverlapEnd);

}

// Called when the game starts or when spawned
void ATriggerColliders::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATriggerColliders::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


void ATriggerColliders::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	
}

void ATriggerColliders::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{

}

