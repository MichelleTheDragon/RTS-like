// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "RTS_Character_Additions.generated.h"

UCLASS()
class SIMPLERTS_API ARTS_Character_Additions : public ACharacter
{
	GENERATED_BODY()
		UFUNCTION(BlueprintCallable, category = "RTS Code")
		static bool CheckAlive(int health);

public:
	// Sets default values for this character's properties
	ARTS_Character_Additions();


		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RTS Code")
			int Health;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RTS Code")
			FString UnitName;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RTS Code")
			int Damage;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RTS Code")
			float AttackSpeed;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
