// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Gun.generated.h"


UENUM(BlueprintType)
enum class EGunType : uint8
{
	Rifle = 0 UMETA(DisplayName = "Rifle"),
	Pistol = 1 UMETA(DisplayName = "Pistol")

};


UCLASS()
class FIRSTPERSONSHOOTER_API AGun : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AGun();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Gun, meta = (AllowPrivateAccess = "true"))
		int CurrentAmmo;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Gun, meta = (AllowPrivateAccess = "true"))
		int CurrentMag;
private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Gun, meta = (AllowPrivateAccess = "true"))
		class UStaticMeshComponent* GunMesh;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Gun, meta = (AllowPrivateAccess = "true"))
		UStaticMesh* MagMesh;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Gun, meta = (AllowPrivateAccess = "true"))
		class USceneComponent* FirePoint;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Gun, meta = (AllowPrivateAccess = "true"))
		float FireRate;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Gun, meta = (AllowPrivateAccess = "true"))
		int MaxAmmo;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Gun, meta = (AllowPrivateAccess = "true"))
		int MaxMag;


	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Gun, meta = (AllowPrivateAccess = "true"))
		float ReloadingTime;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Gun, meta = (AllowPrivateAccess = "true"))
		EGunType GunType;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Gun, meta = (AllowPrivateAccess = "true"))
		class UAnimMontage* FireMontage;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Gun, meta = (AllowPrivateAccess = "true"))
		class UAnimMontage* AimFireMontage;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Gun, meta = (AllowPrivateAccess = "true"))
		class UAnimMontage* ReloadMontage;

public:

	FORCEINLINE UStaticMesh* GetGunMesh() const { return GunMesh->GetStaticMesh(); }
	FORCEINLINE UStaticMesh* GetMagMesh() const { return MagMesh; }

	FORCEINLINE USceneComponent* GetFirePoint()const { return FirePoint; }

	FORCEINLINE float GetFireRate()const { return FireRate; }

	FORCEINLINE int GetMaxAmmo() const { return MaxAmmo; }
	FORCEINLINE int GetMaxMag() const { return MaxMag; }


	FORCEINLINE int GetCurrentAmmo() const { return CurrentAmmo; }

	FORCEINLINE int GetCurrentMag()const { return CurrentMag; }


	FORCEINLINE int DecnreaseAmmo() { return CurrentAmmo--; }
	FORCEINLINE void SetAmmo(int value) { CurrentAmmo = value; }


	FORCEINLINE int DecnreaseMag() { return CurrentMag--; }

	FORCEINLINE float GetReloadingTime() const { return ReloadingTime; }


	FORCEINLINE EGunType GetGun() const { return GunType; }

	FORCEINLINE UAnimMontage* GetFireMontage() const { return FireMontage; }
	FORCEINLINE UAnimMontage* GetAimFireMontage() const { return AimFireMontage; }
	FORCEINLINE UAnimMontage* GetReloadMontage() const { return ReloadMontage; }


};
