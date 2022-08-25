// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "FPSPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class FIRSTPERSONSHOOTER_API AFPSPlayerController : public APlayerController
{
	GENERATED_BODY()
public:
	virtual void BeginPlay() override;
	
private:
	UPROPERTY(EditAnywhere,BlueprintReadOnly,Category = PlayerWidget,meta = (AllowPrivateAccess = "true"))
	TSubclassOf<class UUserWidget> PlayerWidgetClass;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = PlayerWidget, meta = (AllowPrivateAccess = "true"))
	class UUserWidget* PlayerWidget;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = PlayerWidget, meta = (AllowPrivateAccess = "true"))
	TSubclassOf<class UUserWidget> SniperCrosshairClass;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = PlayerWidget, meta = (AllowPrivateAccess = "true"))
	class UUserWidget* SniperCrosshairWidget;
public:

	void ShowSniperCrosshair();

	void DeshowSniperCrosshair();

};
