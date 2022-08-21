// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PlayerHUD.generated.h"

/**
 * 
 */
UCLASS()
class FIRSTPERSONSHOOTER_API UPlayerHUD : public UUserWidget
{
	GENERATED_BODY()
	
private:

	UPROPERTY(VisibleAnywhere)
	class AFPSCharacter* Player;
public:
	
	UFUNCTION(Blueprintpure)
	int GetPlayerCurrentAmmo();

	UFUNCTION(Blueprintpure)
	int GetPlayerCurrentMag();

	void FindPlayerCharacter();
};
