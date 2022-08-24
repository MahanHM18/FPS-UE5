// Fill out your copyright notice in the Description page of Project Settings.


#include "Widgets/PlayerHUD.h"
#include "Kismet/GameplayStatics.h"
#include "PlayerCharacter/FPSCharacter.h"
#include "Weapons/GunAbilities.h"

int UPlayerHUD::GetPlayerCurrentAmmo()
{
	FindPlayerCharacter();
	if (Player->Guns.Num() > 0)
	{
		return Player->GetCurrentGun()->GetGunAbility()->CurrentAmmo;
	}
	return 0;
}

int UPlayerHUD::GetPlayerCurrentMag()
{
	FindPlayerCharacter();
	if (Player->Guns.Num() > 0)
	{
		return Player->GetCurrentGun()->GetGunAbility()->CurrentMag;
	}
	return 0;
}

void UPlayerHUD::FindPlayerCharacter()
{
	ACharacter* Character = UGameplayStatics::GetPlayerCharacter(this, 0);
	Player = Cast<AFPSCharacter>(Character);
}
