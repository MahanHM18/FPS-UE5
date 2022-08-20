// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Enemy.generated.h"

UENUM(BlueprintType)
enum class EEnemyMovementStatus : uint8
{
	EMS_Idle UMETA(DisplayName = "Idle"),
	EMS_Chase UMETA(DisplayName = "Chase"),
	EMS_Attack UMETA(DisplayName = "Attakc")
};


UCLASS()
class FIRSTPERSONSHOOTER_API AEnemy : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AEnemy();


	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Movement)
	EEnemyMovementStatus MovementStatus;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = AI)
	class USphereComponent* AgroSphere;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = AI)
	class USphereComponent* CombatShpere;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = AI)
	class AAIController* AIController;

	FORCEINLINE void SetEnemyMovementStatus(EEnemyMovementStatus Status) { MovementStatus = Status; }

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION()
	void OnAgroOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	
	UFUNCTION()
	void OnAgroOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	UFUNCTION()
	void OnCombatOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	void MoveToTarget(class AFPSCharacter* Player);

};
