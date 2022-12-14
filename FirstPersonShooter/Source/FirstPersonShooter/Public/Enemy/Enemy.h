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
	EMS_Attack UMETA(DisplayName = "Attakc"),
	EMS_Dead UMETA(DisplayName = "Dead")
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

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Health)
	class UWidgetComponent* HealthWidget;

	FORCEINLINE void SetEnemyMovementStatus(EEnemyMovementStatus Status) { MovementStatus = Status; }

	UFUNCTION(Blueprintpure)
	FORCEINLINE float GetEnemyHealth() { return Health; }

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void Die();

	void DestroyEnemy();

	void UnVisibleHealthWidget();

private:

	float Health;


	FTimerHandle DamageHandle;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Dead, meta = (AllowPrivateAccess = "true"))
	float TimeToDestroy;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Dead, meta = (AllowPrivateAccess = "true"))
	float TimeToUnVisible;

	float Timer;

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

	UFUNCTION()
	void OnCombatOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	UFUNCTION(BlueprintCallable)
	void DecreaseDamage(float value);


	void MoveToTarget(class AFPSCharacter* Player);


};
