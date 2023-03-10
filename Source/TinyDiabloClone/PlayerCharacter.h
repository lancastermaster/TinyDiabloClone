// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PlayerCharacter.generated.h"

UCLASS()
class TINYDIABLOCLONE_API APlayerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APlayerCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
/*----------------
	Meshes:
	-Head
	-Body (Repurpose Inherited Mesh)
	-Mount (Extra Goodie - don't even touch this - just a convenience)
	-Mainhand
	-Offhand

	variables:
	-attack montage
	-death montage
	-hit montage
-----------------*/
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
