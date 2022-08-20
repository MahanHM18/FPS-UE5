// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "Weapons/Gun.h"
#include "FPSAnimInstance.generated.h"

/**
 *
 */
UCLASS()
class FIRSTPERSONSHOOTER_API UFPSAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
public:
	virtual	void NativeInitializeAnimation() override;
protected:
	UFUNCTION(BlueprintCallable)
		 void UpdateAnimInstance(float DeltaTime);
private:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Movement, meta = (AllowPrivateAccess = "true"))
		float Speed;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		class AFPSCharacter* Character;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		bool bIsAiming;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		EGunType GunType;
};
