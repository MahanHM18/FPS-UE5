// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy/Enemy.h"
#include "Components/SphereComponent.h"
#include "AIController.h"
#include "PlayerCharacter/FPSCharacter.h"

// Sets default values
AEnemy::AEnemy()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	AgroSphere = CreateDefaultSubobject<USphereComponent>(TEXT("AgroSphere"));
	AgroSphere->SetupAttachment(RootComponent);
	AgroSphere->SetSphereRadius(600.f);

	CombatShpere = CreateDefaultSubobject<USphereComponent>(TEXT("CombatSphere"));
	CombatShpere->SetupAttachment(RootComponent);
	CombatShpere->SetSphereRadius(70.f);

}

// Called when the game starts or when spawned
void AEnemy::BeginPlay()
{
	Super::BeginPlay();
	AIController = Cast<AAIController>(GetController());

	AgroSphere->OnComponentBeginOverlap.AddDynamic(this, &AEnemy::OnAgroOverlapBegin);
	AgroSphere->OnComponentEndOverlap.AddDynamic(this, &AEnemy::OnAgroOverlapEnd);


	CombatShpere->OnComponentBeginOverlap.AddDynamic(this, &AEnemy::OnCombatOverlapBegin);
	CombatShpere->OnComponentEndOverlap.AddDynamic(this, &AEnemy::OnCombatOverlapEnd);
}

// Called every frame
void AEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AEnemy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AEnemy::OnAgroOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor && OtherActor->ActorHasTag(FName("Player")))
	{
		MoveToTarget(Cast<AFPSCharacter>(OtherActor));
		GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Blue, FString::Printf(TEXT("Chasing")));
	}
}

void AEnemy::OnAgroOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (OtherActor && OtherActor->ActorHasTag(FName("Player")))
	{
		AIController->StopMovement();
		SetEnemyMovementStatus(EEnemyMovementStatus::EMS_Idle);
		GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Blue, FString::Printf(TEXT("Stopping")));
	}
}

void AEnemy::OnCombatOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor && OtherActor->ActorHasTag(FName("Player")))
	{
		AIController->StopMovement();
		GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Blue, FString::Printf(TEXT("Attakcing")));
		SetEnemyMovementStatus(EEnemyMovementStatus::EMS_Attack);
	}
}

void AEnemy::OnCombatOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (OtherActor && OtherActor->ActorHasTag(FName("Player")))
	{
		MoveToTarget(Cast<AFPSCharacter>(OtherActor));
		SetEnemyMovementStatus(EEnemyMovementStatus::EMS_Chase);
		GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Blue, FString::Printf(TEXT("ChasingA")));

	}
}

void AEnemy::MoveToTarget(AFPSCharacter* Player)
{
	SetEnemyMovementStatus(EEnemyMovementStatus::EMS_Chase);

	if (AIController)
	{
		FAIMoveRequest MoveRquest;
		MoveRquest.SetGoalActor(Player);
		MoveRquest.SetAcceptanceRadius(10);

		FNavPathSharedPtr Nav;
		AIController->MoveTo(MoveRquest, &Nav);


		UE_LOG(LogTemp, Warning, TEXT("Chasing"));
	}
}

