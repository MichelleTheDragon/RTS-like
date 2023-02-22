// Fill out your copyright notice in the Description page of Project Settings.


#include "RTS_Character_Additions.h"

// Sets default values
ARTS_Character_Additions::ARTS_Character_Additions()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

bool ARTS_Character_Additions::CheckAlive(int health) {
	if (health <= 0) {
		return false;
	}
	else {
		return true;
	}
}

// Called when the game starts or when spawned
void ARTS_Character_Additions::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARTS_Character_Additions::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ARTS_Character_Additions::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

