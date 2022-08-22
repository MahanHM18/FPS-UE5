// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EnemyWidget.generated.h"

/**
 * 
 */
UCLASS()
class FIRSTPERSONSHOOTER_API UEnemyWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(Blueprintpure)
	float GetEnemyHealth();

	UPROPERTY(VisibleAnywhere)
	class AEnemy* Enemy;
};
