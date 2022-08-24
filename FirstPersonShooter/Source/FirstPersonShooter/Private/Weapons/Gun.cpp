// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapons/Gun.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SceneComponent.h"
#include "Weapons/GunAbilities.h"
#include "Components/BoxComponent.h"
#include "PlayerCharacter/FPSCharacter.h"

// Sets default values
AGun::AGun() :
	bDoOnce(true)
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	GunMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("GunMesh"));
	RootComponent = GunMesh;
	GunMesh->CastShadow = false;


	FirePoint = CreateDefaultSubobject<USceneComponent>(TEXT("FirePoint"));
	FirePoint->SetupAttachment(GunMesh);

	GunAbilities = CreateDefaultSubobject<UGunAbilities>(TEXT("GunAbilities"));

	PickUpBox = CreateDefaultSubobject<UBoxComponent>(TEXT("PickUpCollision"));
	PickUpBox->SetupAttachment(GunMesh);

}

// Called when the game starts or when spawned
void AGun::BeginPlay()
{
	Super::BeginPlay();

	GunMesh->CastShadow = false;

	if (Setup == EGunSetup::PickUp)
	{
		PickUpBox->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	}
	else
	{
		PickUpBox->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	}

	PickUpBox->OnComponentBeginOverlap.AddDynamic(this, &AGun::OnOverlapBegin);
}

void AGun::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (Setup == EGunSetup::PickUp)
	{
		RootComponent->AddWorldRotation(FRotator(0, 2.f, 0));
	}
}

void AGun::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor->ActorHasTag("Player"))
	{
		if (bDoOnce)
		{
			bDoOnce = false;
			AFPSCharacter* Player = Cast<AFPSCharacter>(OtherActor);
			SetActorRelativeLocation(FVector(0, 0, 0));
			SetActorRelativeRotation(FRotator(0, 0, 0));
			Player->GetGun(this);
			
			GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, FString::Printf(TEXT("P")));
		}

	}
}



