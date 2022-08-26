// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy/Enemy.h"
#include "Components/SphereComponent.h"
#include "AIController.h"
#include "PlayerCharacter/FPSCharacter.h"
#include "Components/WidgetComponent.h"
#include "Widgets/EnemyWidget.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AEnemy::AEnemy() :
	Health(100)
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	AgroSphere = CreateDefaultSubobject<USphereComponent>(TEXT("AgroSphere"));
	AgroSphere->SetupAttachment(RootComponent);
	AgroSphere->SetSphereRadius(600.f);

	CombatShpere = CreateDefaultSubobject<USphereComponent>(TEXT("CombatSphere"));
	CombatShpere->SetupAttachment(RootComponent);
	CombatShpere->SetSphereRadius(70.f);

	HealthWidget = CreateDefaultSubobject<UWidgetComponent>(TEXT("HelathWidget"));
	HealthWidget->SetupAttachment(GetMesh());


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

	UEnemyWidget* Widget = Cast<UEnemyWidget>(HealthWidget->GetUserWidgetObject());
	Widget->Enemy = this;

	HealthWidget->SetVisibility(false);
}



// Called every frame
void AEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	Timer += DeltaTime;
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
	if (MovementStatus == EEnemyMovementStatus::EMS_Dead)
	{
		return;
	}

	SetEnemyMovementStatus(EEnemyMovementStatus::EMS_Chase);

	if (AIController)
	{
		FAIMoveRequest MoveRquest;
		MoveRquest.SetGoalActor(Player);
		MoveRquest.SetAcceptanceRadius(30);

		FNavPathSharedPtr Nav;
		AIController->MoveTo(MoveRquest, &Nav);

		UE_LOG(LogTemp, Warning, TEXT("Chasing"));
	}
}

void AEnemy::DecreaseDamage(float value)
{	
	
	Health -= value;

	if (Health <= 0)
	{
		Die();
		SetEnemyMovementStatus(EEnemyMovementStatus::EMS_Dead);
		return;
	}
	AFPSCharacter* Player = Cast<AFPSCharacter>(UGameplayStatics::GetPlayerCharacter(this, 0));

	MoveToTarget(Player);

	HealthWidget->SetVisibility(true);

	FTimerHandle Handle;
	GetWorldTimerManager().SetTimer(Handle, this, &AEnemy::UnVisibleHealthWidget, TimeToUnVisible, false);




}

void AEnemy::Die()
{
	SetEnemyMovementStatus(EEnemyMovementStatus::EMS_Dead);

	AIController->StopMovement();

	AgroSphere->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	CombatShpere->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	GetWorldTimerManager().SetTimer(DamageHandle, this, &AEnemy::DestroyEnemy, TimeToDestroy, false);

	HealthWidget->SetVisibility(false);

}

void AEnemy::DestroyEnemy()
{
	Destroy();
}

void AEnemy::UnVisibleHealthWidget()
{
	HealthWidget->SetVisibility(false);
}