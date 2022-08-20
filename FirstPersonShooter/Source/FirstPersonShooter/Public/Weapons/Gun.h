// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Gun.generated.h"


UENUM(BlueprintType)
enum class EGunType : uint8
{
	Rifle = 0	UMETA(DisplayName = "Rifle"),
	Pistol = 1	 UMETA(DisplayName = "Pistol")

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

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Gun, meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* GunMesh;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Gun, meta = (AllowPrivateAccess = "true"))
	UStaticMesh* MagMesh;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Gun, meta = (AllowPrivateAccess = "true"))
	class UGunAbilities* GunAbilities;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Gun, meta = (AllowPrivateAccess = "true"))
	class USceneComponent* FirePoint;



public:

	FORCEINLINE UStaticMesh* GetGunMesh() const { return GunMesh->GetStaticMesh(); }
	FORCEINLINE UStaticMesh* GetMagMesh() const { return MagMesh; }

	FORCEINLINE USceneComponent* GetFirePoint() const { return FirePoint; }


	FORCEINLINE UGunAbilities* GetGunAbility() const { return GunAbilities; }


};
