// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSAnimInstance.h"
#include "FPSCharacter.h"


void UFPSAnimInstance::UpdateAnimInstance(float DeltaTime)
{
	if (Character == nullptr)
		Character = Cast<AFPSCharacter>(TryGetPawnOwner());

	if (Character)
	{
		FVector Velocity = Character->GetVelocity();
		Velocity.Z = 0;
		Speed = Velocity.Size();

		bIsAiming = Character->GetAiming();
	
		GunType = Character->GetGunTpye();
	
	
	}

}
