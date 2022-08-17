// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "FPSCharacter.generated.h"


UCLASS()
class FIRSTPERSONSHOOTER_API AFPSCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AFPSCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void MoveForwrd(float Value);
	void MoveRight(float Value);
	void LookRight(float Value);
	void LookUp(float Value);

	void RunButtonPressed();
	void RunButtonReleased();

	void AimButtonPressed();
	void AimButtonReleased();

	void FireButtonPressed();
	void FireButtonReleased();

	void Fire();

	void Recoil();

	void Reload();

	void ReloadFinish();
public:

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		class USpringArmComponent* CameraBoom;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		class UCameraComponent* CameraFollow;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		class USkeletalMeshComponent* HandMesh;
	UPROPERTY(Editanywhere, BlueprintReadOnly, Category = Movement, meta = (AllowPrivateAccess = "true"))
		float WalkSpeed;
	UPROPERTY(Editanywhere, BlueprintReadOnly, Category = Movement, meta = (AllowPrivateAccess = "true"))
		float RunSpeed;
	UPROPERTY(Editanywhere, BlueprintReadOnly, Category = Aiming, meta = (AllowPrivateAccess = "true"))
		float AimFOV;
	UPROPERTY(Editanywhere, BlueprintReadOnly, Category = Aiming, meta = (AllowPrivateAccess = "true"))
		float DefaultFOV;
	UPROPERTY(Editanywhere, BlueprintReadOnly, Category = Aiming, meta = (AllowPrivateAccess = "true"))
		float AimInterpSpeed;
	UPROPERTY(Editanywhere, BlueprintReadOnly, Category = Combat, meta = (AllowPrivateAccess = "true"))
		class UAnimMontage* FireMontage;
	UPROPERTY(Editanywhere, BlueprintReadOnly, Category = Combat, meta = (AllowPrivateAccess = "true"))
		class UAnimMontage* FireAimMontage;
	UPROPERTY(Editanywhere, BlueprintReadOnly, Category = Combat, meta = (AllowPrivateAccess = "true"))
		class UAnimMontage* ReloadMontage;
	UPROPERTY(Editanywhere, BlueprintReadOnly, Category = Combat, meta = (AllowPrivateAccess = "true"))
		FTimerHandle Handle;
	UPROPERTY(Editanywhere, BlueprintReadOnly, Category = Combat, meta = (AllowPrivateAccess = "true"))
		class UParticleSystem* MuzzleFlash;
	UPROPERTY(Editanywhere, BlueprintReadOnly, Category = Combat, meta = (AllowPrivateAccess = "true"))
		class USoundBase* FireSound;
	UPROPERTY(Editanywhere, BlueprintReadOnly, Category = Combat, meta = (AllowPrivateAccess = "true"))
		class USoundBase* ReloadSound;
	UPROPERTY(Editanywhere, BlueprintReadOnly, Category = Combat, meta = (AllowPrivateAccess = "true"))
		class UMaterialInterface* Decal;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Combat, meta = (AllowPrivateAccess = "true"))
		class UStaticMeshComponent* MagMesh;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Gun, meta = (AllowPrivateAccess = "true"))
		class AGun* GunBase;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Widget, meta = (AllowPrivateAccess = "true"))
		TSubclassOf<class UUserWidget> PlayerWidgetClass;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Widget, meta = (AllowPrivateAccess = "true"))
		UUserWidget* PlayerWidget;

	float MainDeltaTime;

	bool IsAiming;

	bool IsShooting;

	float TurnRate;

	bool IsReloading;

	APlayerController* PlayerController;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		class UChildActorComponent* Gun;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		class UChildActorComponent* Pistol;
public:

	FORCEINLINE bool GetAiming() { return IsAiming; }
};
