// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Gun.generated.h"


UENUM(BlueprintType)
enum class EGunType : uint8
{
	Rifle = 0		UMETA(DisplayName = "Rifle"),
	Pistol = 1		UMETA(DisplayName = "Pistol"),
	Sniper = 2		UMETA(DisplayName = "Sniper"),
	ShotGun = 3		UMETA(DisplayName = "ShutGun")
};

UENUM(BlueprintType)
enum class EGunSetup : uint8
{
	PickUp = 0		UMETA(DisplayName = "PickUp"),
	Attached = 1	UMETA(DisplayName = "Attached")
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
	virtual void Tick(float DeltaTime) override;


	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

public:

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Gun, meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* GunMesh;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Gun, meta = (AllowPrivateAccess = "true"))
	UStaticMesh* MagMesh;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Gun, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* BarrelMesh;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Gun, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* ScopeMesh;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Gun, meta = (AllowPrivateAccess = "true"))
	class UGunAbilities* GunAbilities;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Gun, meta = (AllowPrivateAccess = "true"))
	class USceneComponent* FirePoint;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Gun, meta = (AllowPrivateAccess = "true"))
	EGunSetup Setup;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Gun, meta = (AllowPrivateAccess = "true"))
	class UBoxComponent* PickUpBox;

	bool bDoOnce;

public:

	FORCEINLINE UStaticMeshComponent* GetGunMesh() const { return GunMesh; }
	FORCEINLINE UStaticMeshComponent* GetBarrelMesh() const { return BarrelMesh; }
	FORCEINLINE UStaticMeshComponent* GetScopMesh() const { return ScopeMesh; }

	FORCEINLINE UStaticMesh* GetMagMesh() const { return MagMesh; }

	FORCEINLINE USceneComponent* GetFirePoint() const { return FirePoint; }


	FORCEINLINE UGunAbilities* GetGunAbility() const { return GunAbilities; }

	FORCEINLINE void SetGunSetup(EGunSetup S) { Setup = S; }
	FORCEINLINE EGunSetup GetGunSetup() const { return Setup; }


};
