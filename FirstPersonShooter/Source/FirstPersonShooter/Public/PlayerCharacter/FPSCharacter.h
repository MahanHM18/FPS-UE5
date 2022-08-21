// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Weapons/Gun.h"
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

	void Reload();

	void SwitchGunWithKeyboard();

	void SwitchGun(int Index);
	void SwitchWithScroller(float Value);

	void ThrowGrenade();

	void BasicSetup();
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
	FTimerHandle Handle;

	UPROPERTY(Editanywhere, BlueprintReadOnly, Category = Combat, meta = (AllowPrivateAccess = "true"))
	class USoundBase* ReloadSound;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Combat, meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* MagMesh;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Widget, meta = (AllowPrivateAccess = "true"))
	TSubclassOf<class UUserWidget> PlayerWidgetClass;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Widget, meta = (AllowPrivateAccess = "true"))
	UUserWidget* PlayerWidget;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Guns, meta = (AllowPrivateAccess = "true"))
	EGunType CurrentGunType;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Guns, meta = (AllowPrivateAccess = "true"))
	TArray<TSubclassOf<AGun>> GunClasses;


	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Guns, meta = (AllowPrivateAccess = "true"))
	int CurrentGun;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Grenade, meta = (AllowPrivateAccess = "true"))
	TSubclassOf<class AGrenade> GrenadeActor;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Grenade, meta = (AllowPrivateAccess = "true"))
	FVector GrenadeVector;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Grenade, meta = (AllowPrivateAccess = "true"))
	float GrenadeSpeed;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Guns, meta = (AllowPrivateAccess = "true"))
	TArray<AGun*> Guns;

	bool IsAiming;

	bool IsShooting;

	float TurnRate;

	bool IsReloading;

	float MainDeltaTime;

	APlayerController* PlayerController;


public:
	FORCEINLINE bool GetAiming() const { return IsAiming; }

	FORCEINLINE EGunType GetGunTpye() const { return CurrentGunType; }
	
	FORCEINLINE AGun* GetCurrentGun() const { return Guns[CurrentGun]; }

	
};
