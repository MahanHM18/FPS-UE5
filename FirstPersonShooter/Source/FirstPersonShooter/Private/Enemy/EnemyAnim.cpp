// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy/EnemyAnim.h"
#include "Enemy/Enemy.h"
#include "GameFramework/CharacterMovementComponent.h"


void UEnemyAnim::NativeInitializeAnimation()
{
	if (Pawn == nullptr)
	{
		Pawn = TryGetPawnOwner();

		if (Pawn)
		{
			Enemy = Cast<AEnemy>(Pawn);
		}
	}
}

void UEnemyAnim::UpdateAnimationProperties(float DeltaTime)
{
	if (Enemy)
	{
		FVector Velocity = Enemy->GetVelocity();
		Velocity.Z = 0;
		Speed = Velocity.Size();

		bIsAir = Enemy->GetCharacterMovement()->IsFalling();

		Status = Enemy->MovementStatus;

	}
}
