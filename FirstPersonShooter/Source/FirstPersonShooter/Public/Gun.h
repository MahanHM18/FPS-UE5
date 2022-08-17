// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Gun.generated.h"

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
		int CurrentAmmo;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Gun, meta = (AllowPrivateAccess = "true"))
		int CurrentMag;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Gun, meta = (AllowPrivateAccess = "true"))
		float ReloadingTime;

public:
	FORCEINLINE UStaticMeshComponent* GetGunMesh() { return GunMesh; }
	FORCEINLINE UStaticMesh* GetMagMesh() { return MagMesh; }

	FORCEINLINE USceneComponent* GetFirePoint() { return FirePoint; }

	FORCEINLINE float GetFireRate() { return FireRate; }

	FORCEINLINE int GetMaxAmmo() { return MaxAmmo; }
	FORCEINLINE int GetMaxMag() { return MaxMag; }

	FORCEINLINE int GetCurrentAmmo() { return CurrentAmmo; }
	FORCEINLINE int GetCurrentMag() { return CurrentMag; }


	FORCEINLINE int DecnreaseAmmo() { return CurrentAmmo--; }
	FORCEINLINE void SetAmmo(int value) { CurrentAmmo = value; }


	FORCEINLINE int DecnreaseMag() { return CurrentMag--; }

	FORCEINLINE float GetReloadingTime() { return ReloadingTime; }

};
