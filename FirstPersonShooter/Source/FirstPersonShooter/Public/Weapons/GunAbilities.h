// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GunAbilities.generated.h"


UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class FIRSTPERSONSHOOTER_API UGunAbilities : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UGunAbilities();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
private:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Particle, meta = (AllowPrivateAccess = "true"))
		UParticleSystem* MuzzleFlash;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Particle, meta = (AllowPrivateAccess = "true"))
		UMaterialInterface* Decal;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Sound, meta = (AllowPrivateAccess = "true"))
		class USoundBase* FireSound;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Sound, meta = (AllowPrivateAccess = "true"))
		class USoundBase* ReloadSound;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Montage, meta = (AllowPrivateAccess = "true"))
		class UAnimMontage* FireMontage;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Montage, meta = (AllowPrivateAccess = "true"))
		class UAnimMontage* AimFireMontage;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Montage, meta = (AllowPrivateAccess = "true"))
		class UAnimMontage* ReloadMontage;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Properties, meta = (AllowPrivateAccess = "true"))
		int MaxAmmo;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Properties, meta = (AllowPrivateAccess = "true"))
		int MaxMag;

	bool IsReloading;

	float MainDeltaTime;

	void ReloadFinish();
public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Properties)
		int CurrentAmmo;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Properties)
		int CurrentMag;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Properties)
		float FireRate;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Properties)
		float ReloadTime;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	void Fire(FVector Start, FVector End, UAnimInstance* HandMesh, FVector MuzzleFlashLocation, FQuat4d MuzzleFlashQuat, bool IsAiming);

	void Recoil(class UCameraComponent* Camera);

	void Reload(class UAnimInstance* HandMesh);



};
