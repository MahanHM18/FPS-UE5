// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerHUD.h"
#include "Kismet/GameplayStatics.h"
#include "PlayerCharacter/FPSCharacter.h"
#include "Weapons/GunAbilities.h"

int UPlayerHUD::GetPlayerCurrentAmmo()
{
	FindPlayerCharacter();

	return Player->GetCurrentGun()->GetGunAbility()->CurrentAmmo;
}

int UPlayerHUD::GetPlayerCurrentMag()
{
	FindPlayerCharacter();
	return Player->GetCurrentGun()->GetGunAbility()->CurrentMag;
}

void UPlayerHUD::FindPlayerCharacter()
{
	ACharacter* Character = UGameplayStatics::GetPlayerCharacter(this, 0);
	Player = Cast<AFPSCharacter>(Character);
}
