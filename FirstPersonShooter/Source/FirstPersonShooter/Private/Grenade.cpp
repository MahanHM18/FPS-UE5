// Fill out your copyright notice in the Description page of Project Settings.


#include "Grenade.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AGrenade::AGrenade()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	GrenadeMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	RootComponent = GrenadeMesh;

	Projectile = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement"));
	Projectile->bShouldBounce = true;

	ExplosionCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("ExplosionBoxCollision"));
	ExplosionCollision->SetupAttachment(GrenadeMesh);
	
}

// Called when the game starts or when spawned
void AGrenade::BeginPlay()
{
	Super::BeginPlay();
	
	ExplosionCollision->OnComponentBeginOverlap.AddDynamic(this, &AGrenade::OnOverlapBegin);
	ExplosionCollision->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	FTimerHandle Handle;

	GetWorldTimerManager().SetTimer(Handle, this, &AGrenade::Explosion, TimeToExplosion,false);

}

void AGrenade::Explosion()
{
	GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, FString::Printf(TEXT("Explosion")));
	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ExplosionParticle, GetActorTransform());
}

// Called every frame
void AGrenade::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AGrenade::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Black, FString::Printf(TEXT("Overlapped %s"), *OtherActor->GetName()));
}

