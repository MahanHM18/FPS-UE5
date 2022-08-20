// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSCharacter.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Animation/AnimMontage.h"
#include "Engine/World.h"
#include "Math/UnrealMathUtility.h"
#include "Particles/ParticleSystem.h"
#include "Kismet/GameplayStatics.h"
#include "Components/SceneComponent.h"
#include "Components/ChildActorComponent.h"
#include "Gun.h"
#include "Blueprint/UserWidget.h"
#include "GameFramework/PlayerController.h"
#include "Gun.h"
#include "Engine/World.h"
#include "Grenade.h"
#include "GameFramework/ProjectileMovementComponent.h"

// Sets default values
AFPSCharacter::AFPSCharacter() :
	TurnRate(45.f),
	WalkSpeed(400.f),
	RunSpeed(600.f),
	AimFOV(60.f),
	DefaultFOV(90.f),
	AimInterpSpeed(5.f),
	IsReloading(false)
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 0.f;
	CameraBoom->SetRelativeLocation(FVector(0, 0, 51.f));
	CameraBoom->bUsePawnControlRotation = true;

	CameraFollow = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraFollow"));
	CameraFollow->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);

	HandMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("HandMesh"));
	HandMesh->SetupAttachment(CameraFollow);
	HandMesh->SetRelativeLocation(FVector(48.0, 0.f, -13.f));
	HandMesh->CastShadow = false;

	//GunMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("GunMesh"));
	//GunMesh->SetupAttachment(HandMesh, "Weapon_Position");

	MagMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MagMesh"));
	MagMesh->SetupAttachment(HandMesh, "Mag_Position");


	AutoPossessPlayer = EAutoReceiveInput::Player0;

	GetCharacterMovement()->MaxWalkSpeed = 400.f;






}

// Called when the game starts or when spawned
void AFPSCharacter::BeginPlay()
{
	Super::BeginPlay();

	if (PlayerWidgetClass != nullptr)
	{
		PlayerWidget = CreateWidget(GetWorld(), PlayerWidgetClass);
		PlayerWidget->AddToViewport();
	}


	PlayerController = GetWorld()->GetFirstPlayerController();



	for (int i = 0; i < GunClasses.Num(); i++)
	{

		AGun* Base = GetWorld()->SpawnActor<AGun>(GunClasses[i]);
		Guns.Add(Base);
		Base->AttachToComponent(HandMesh, FAttachmentTransformRules::KeepRelativeTransform, "Weapon_Position");
		Base->SetOwner(this);
	}

	for (int i = 0; i < Guns.Num(); i++)
	{
		Guns[i]->SetActorHiddenInGame(true);
	}

	CurrentGun = 0;
	Guns[CurrentGun]->SetActorHiddenInGame(false);
	CurrentGunType = Guns[CurrentGun]->GunType;

	//GunMesh->SetStaticMesh(Guns[CurrentGun]->GetGunMesh());
	MagMesh->SetStaticMesh(Guns[CurrentGun]->GetMagMesh());
}
void AFPSCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Green, FString::Printf(TEXT("Lol with %s"), GunBase->GetCurrentAmmo()));
	MainDeltaTime = DeltaTime;

	if (IsAiming)
	{
		CameraFollow->FieldOfView = FMath::FInterpTo(CameraFollow->FieldOfView, AimFOV, DeltaTime, AimInterpSpeed);
	}
	else
	{
		CameraFollow->FieldOfView = FMath::FInterpTo(CameraFollow->FieldOfView, DefaultFOV, DeltaTime, AimInterpSpeed);
	}
	if (!IsShooting)
	{
		CameraFollow->SetRelativeRotation(FMath::RInterpTo(CameraFollow->GetRelativeRotation(), FRotator(0, 0, 0), DeltaTime, 3));
	}

	SwitchGunWithKeyboard();
}

void AFPSCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	check(PlayerInputComponent);


	PlayerInputComponent->BindAxis(FName("MoveForward"), this, &AFPSCharacter::MoveForwrd);
	PlayerInputComponent->BindAxis(FName("MoveRight"), this, &AFPSCharacter::MoveRight);

	PlayerInputComponent->BindAxis(FName("LookUp"), this, &AFPSCharacter::LookUp);
	PlayerInputComponent->BindAxis(FName("LookRight"), this, &AFPSCharacter::LookRight);
	PlayerInputComponent->BindAxis(FName("ChangeGun"), this, &AFPSCharacter::SwitchWithScroller);

	PlayerInputComponent->BindAction(FName("Run"), IE_Pressed, this, &AFPSCharacter::RunButtonPressed);
	PlayerInputComponent->BindAction(FName("Run"), IE_Released, this, &AFPSCharacter::RunButtonReleased);

	PlayerInputComponent->BindAction(FName("Jump"), IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction(FName("Jump"), IE_Released, this, &ACharacter::StopJumping);

	PlayerInputComponent->BindAction(FName("Aim"), IE_Pressed, this, &AFPSCharacter::AimButtonPressed);
	PlayerInputComponent->BindAction(FName("Aim"), IE_Released, this, &AFPSCharacter::AimButtonReleased);

	PlayerInputComponent->BindAction(FName("Fire"), IE_Pressed, this, &AFPSCharacter::FireButtonPressed);
	PlayerInputComponent->BindAction(FName("Fire"), IE_Released, this, &AFPSCharacter::FireButtonReleased);

	PlayerInputComponent->BindAction(FName("Reload"), IE_Pressed, this, &AFPSCharacter::Reload);


	PlayerInputComponent->BindAction(FName("ThrowGrenade"), IE_Pressed, this, &AFPSCharacter::ThrowGrenade);

}


void AFPSCharacter::MoveForwrd(float Value)
{
	if (Controller && Value != 0)
	{
		AddMovementInput(GetActorForwardVector(), Value);
	}
}

void AFPSCharacter::MoveRight(float Value)
{
	if (Controller && Value != 0)
	{
		AddMovementInput(GetActorRightVector(), Value);
	}
}

void AFPSCharacter::LookRight(float Value)
{
	AddControllerYawInput(Value * TurnRate * GetWorld()->GetDeltaSeconds());
}

void AFPSCharacter::LookUp(float Value)
{
	AddControllerPitchInput(Value * TurnRate * GetWorld()->GetDeltaSeconds());
}

void AFPSCharacter::RunButtonPressed()
{
	GetCharacterMovement()->MaxWalkSpeed = 600.f;
}

void AFPSCharacter::RunButtonReleased()
{
	GetCharacterMovement()->MaxWalkSpeed = 400.f;
}

void AFPSCharacter::AimButtonPressed()
{
	IsAiming = true;

}
void AFPSCharacter::AimButtonReleased()
{
	IsAiming = false;
}

void AFPSCharacter::FireButtonPressed()
{

	Fire();
	IsShooting = true;

	if (CurrentGunType != EGunType::Pistol)
	{
		GetWorldTimerManager().SetTimer(Handle, this, &AFPSCharacter::Fire, Guns[CurrentGun]->FireRate, true);
	}


}

void AFPSCharacter::FireButtonReleased()
{
	GetWorldTimerManager().PauseTimer(Handle);
	IsShooting = false;
}

void AFPSCharacter::Fire()
{

	if (Guns[CurrentGun]->CurrentAmmo <= 0)
	{
		Guns[CurrentGun]->CurrentAmmo--;
		FTransform FireTransform;
		FireTransform.SetLocation(Guns[CurrentGun]->GetFirePoint()->GetComponentLocation());
		FireTransform.SetRotation(Guns[CurrentGun]->GetFirePoint()->GetComponentQuat());
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), MuzzleFlash, FireTransform);
		UGameplayStatics::PlaySound2D(this, FireSound);

		UAnimInstance* AnimInstance = HandMesh->GetAnimInstance();
		if (AnimInstance)
		{
			if (IsAiming)
				AnimInstance->Montage_Play(Guns[CurrentGun]->AimFireMontage);
			else if (!IsAiming)
				AnimInstance->Montage_Play(Guns[CurrentGun]->FireMontage);
		}

		Recoil();

		FHitResult Hit;

		FVector StartPoint = CameraFollow->GetComponentLocation() + FVector(0, 0, -0.05f);
		FVector Forward = CameraFollow->GetForwardVector() + FVector(0, 0, -0.05f);
		FVector EndPoint = StartPoint + Forward * 5000;

		GetWorld()->LineTraceSingleByChannel(Hit, StartPoint, EndPoint, ECollisionChannel::ECC_Visibility);

		DrawDebugLine(GetWorld(), StartPoint, EndPoint, FColor::Red, false, 1, 0, 1);

		if (Hit.bBlockingHit)
		{
			GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Green, FString::Printf(TEXT("We are hiting %s"), *Hit.GetActor()->GetName()));
			UGameplayStatics::SpawnDecalAtLocation(this, Decal, FVector(20, 20, 20), Hit.Location, Hit.Normal.Rotation(), 10);
		}
	}


}

void AFPSCharacter::Recoil()
{
	float randZ = FMath::RandRange(-15, 15);
	float randY = FMath::RandRange(-60, 60);


	CameraFollow->SetRelativeRotation(FRotator(FMath::FInterpTo(CameraFollow->GetRelativeRotation().Pitch, randY, MainDeltaTime, 1), FMath::FInterpTo(CameraFollow->GetRelativeRotation().Pitch, randY, MainDeltaTime, 1), 0));
}

void AFPSCharacter::Reload()
{
	if (!IsReloading)
	{
		FTimerHandle ReloadTimeHandle;
		GetWorldTimerManager().SetTimer(ReloadTimeHandle, this, &AFPSCharacter::ReloadFinish, Guns[CurrentGun]->ReloadingTime, false);
		UGameplayStatics::PlaySound2D(this, ReloadSound);

		IsReloading = true;

		GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Green, FString::Printf(TEXT("Reloading")));

		UAnimInstance* Anim = HandMesh->GetAnimInstance();
		if (Guns[CurrentGun]->ReloadMontage)
			Anim->Montage_Play(Guns[CurrentGun]->ReloadMontage);
	}




}

void AFPSCharacter::ReloadFinish()
{
	GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Green, FString::Printf(TEXT("Reload Finish")));
	IsReloading = false;
	Guns[CurrentGun]->CurrentMag--;
	Guns[CurrentGun]->CurrentAmmo = Guns[CurrentGun]->MaxAmmo;
}

void AFPSCharacter::SwitchGunWithKeyboard()
{
	if (PlayerController->WasInputKeyJustPressed(EKeys::One))
	{
		SwitchGun(0);
	}
	if (PlayerController->WasInputKeyJustPressed(EKeys::Two))
		SwitchGun(1);


}

void AFPSCharacter::SwitchGun(int Index)
{
	for (int i = 0; i < Guns.Num(); i++)
	{
		Guns[i]->SetActorHiddenInGame(true);
	}

	CurrentGun = Index;
	Guns[CurrentGun]->SetActorHiddenInGame(false);
	//GunMesh->SetStaticMesh(Guns[CurrentGun]->GetGunMesh());
	MagMesh->SetStaticMesh(Guns[CurrentGun]->GetMagMesh());
	CurrentGunType = Guns[CurrentGun]->GunType;
}

void AFPSCharacter::SwitchWithScroller(float Value)
{
	CurrentGun += Value;

	if (CurrentGun < 0)
		CurrentGun = Guns.Num() - 1;
	if (CurrentGun >= Guns.Num())
		CurrentGun = 0;

	SwitchGun(CurrentGun);
}

void AFPSCharacter::ThrowGrenade()
{
	if (GrenadeActor == nullptr)
	{
		AGrenade* Grenade = GetWorld()->SpawnActor<AGrenade>(GrenadeActor);
		Grenade->SetActorLocation(CameraFollow->GetComponentLocation() + GrenadeVector);
		Grenade->GetProjectileMovement()->Velocity = CameraFollow->GetForwardVector() * GrenadeSpeed;
	}

}

