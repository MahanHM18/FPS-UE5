// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Grenade.generated.h"

UCLASS()
class FIRSTPERSONSHOOTER_API AGrenade : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGrenade();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void Explosion();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Grenade, meta = (AllowPrivateAccess = "true"))
		class UStaticMeshComponent* GrenadeMesh;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Grenade, meta = (AllowPrivateAccess = "true"))
		class UProjectileMovementComponent* Projectile;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Grenade, meta = (AllowPrivateAccess = "true"))
		class UBoxComponent* ExplosionCollision;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Grenade, meta = (AllowPrivateAccess = "true"))
		class UParticleSystem* ExplosionParticle;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Grenade, meta = (AllowPrivateAccess = "true"))
		float TimeToExplosion;
	UFUNCTION()
		void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

public:
	FORCEINLINE UProjectileMovementComponent* GetProjectileMovement() const { return Projectile; }
};
