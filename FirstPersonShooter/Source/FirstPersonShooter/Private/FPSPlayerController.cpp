// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSPlayerController.h"
#include "Engine/Engine.h"
#include "Blueprint/UserWidget.h"

void AFPSPlayerController::BeginPlay()
{
	Super::BeginPlay();

	GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Green, FString::Printf(TEXT("lol")));

	if (PlayerWidgetClass != nullptr)
	{
		PlayerWidget = CreateWidget(GetWorld(), PlayerWidgetClass);
		PlayerWidget->AddToViewport();
	}

}
