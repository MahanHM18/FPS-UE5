// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCharacter/FPSAnimInstance.h"
#include "PlayerCharacter/FPSCharacter.h"


void UFPSAnimInstance::NativeInitializeAnimation()
{
	if (Character == nullptr)
	{
		Character = Cast<AFPSCharacter>(TryGetPawnOwner());
	}

}

void UFPSAnimInstance::UpdateAnimInstance(float DeltaTime)
{


	if (Character)
	{
		FVector Velocity = Character->GetVelocity();
		Velocity.Z = 0;
		Speed = Velocity.Size();

		bIsAiming = Character->GetAiming();

		GunType = Character->GetGunTpye();

		bIsHolsing = Character->GetHolster();
	}

}
