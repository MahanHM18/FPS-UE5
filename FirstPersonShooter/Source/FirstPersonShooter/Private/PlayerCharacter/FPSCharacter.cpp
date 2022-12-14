// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCharacter/FPSCharacter.h"
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
#include "Weapons/Gun.h"
#include "Blueprint/UserWidget.h"
#include "GameFramework/PlayerController.h"
#include "Weapons/Gun.h"
#include "Engine/World.h"
#include "Weapons/Grenade.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Weapons/GunAbilities.h"
#include "FPSPlayerController.h"
#include <Components/StaticMeshComponent.h>
#include "GenericPlatform/GenericPlatformProcess.h"

// Sets default values
AFPSCharacter::AFPSCharacter() :
	TurnRate(45.f),
	WalkSpeed(400.f),
	RunSpeed(600.f),
	AimFOV(60.f),
	DefaultFOV(90.f),
	AimInterpSpeed(5.f),
	IsReloading(false),
	CurrentGun(0),
	bIsHolsing(false)
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
	MagMesh->CastShadow = false;

	AutoPossessPlayer = EAutoReceiveInput::Player0;

	GetCharacterMovement()->MaxWalkSpeed = 400.f;



}

// Called when the game starts or when spawned
void AFPSCharacter::BeginPlay()
{
	Super::BeginPlay();

	HandMesh->CastShadow = false;
	HandMesh->SetVisibility(false);

	PlayerController = GetWorld()->GetFirstPlayerController();

	BasicSetup();

	bIsHolsing = false;

}
void AFPSCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Green, FString::Printf(TEXT("Lol with %s"), GunBase->GetCurrentAmmo()));

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

	MainDeltaTime = DeltaTime;




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
	if (Guns.Num() > 0 && !bIsHolsing)
	{
		if (CurrentGunType == EGunType::Sniper)
		{
			AFPSPlayerController* PC = Cast<AFPSPlayerController>(UGameplayStatics::GetPlayerController(this, 0));
			PC->ShowSniperCrosshair();
			Guns[CurrentGun]->GetGunMesh()->SetVisibility(false);
			Guns[CurrentGun]->GetBarrelMesh()->SetVisibility(false);
			Guns[CurrentGun]->GetScopMesh()->SetVisibility(false);
			HandMesh->SetVisibility(false);
		}
		IsAiming = true;
	}


}
void AFPSCharacter::AimButtonReleased()
{
	if (CurrentGunType == EGunType::Sniper)
	{
		AFPSPlayerController* PC = Cast<AFPSPlayerController>(UGameplayStatics::GetPlayerController(this, 0));
		PC->DeshowSniperCrosshair();
		Guns[CurrentGun]->GetGunMesh()->SetVisibility(true);
		Guns[CurrentGun]->GetBarrelMesh()->SetVisibility(true);
		Guns[CurrentGun]->GetScopMesh()->SetVisibility(true);
		HandMesh->SetVisibility(true);
	}
	IsAiming = false;
}

void AFPSCharacter::FireButtonPressed()
{
	if (Guns.Num() == 0 && bIsHolsing)
		return;

	Fire();
	IsShooting = true;

	if (CurrentGunType != EGunType::Pistol)
	{
		GetWorldTimerManager().SetTimer(Handle, this, &AFPSCharacter::Fire, Guns[CurrentGun]->GetGunAbility()->FireRate, true);
	}


}

void AFPSCharacter::FireButtonReleased()
{
	GetWorldTimerManager().PauseTimer(Handle);
	IsShooting = false;
}

void AFPSCharacter::Fire()
{
	if (Guns.Num() > 0)
	{
		UAnimInstance* AnimInstance = HandMesh->GetAnimInstance();

		FVector StartPoint = CameraFollow->GetComponentLocation() + FVector(0, 0, -0.01f);
		FVector Forward = CameraFollow->GetForwardVector() + FVector(0, 0, -0.01f);
		FVector EndPoint = StartPoint + Forward * 5000;

		if (CurrentGunType == EGunType::Sniper && !IsAiming)
		{
			return;
		}
		Guns[CurrentGun]->GetGunAbility()->Recoil(CameraFollow, MainDeltaTime);
		Guns[CurrentGun]->GetGunAbility()->Fire(StartPoint, EndPoint, AnimInstance, Guns[CurrentGun]->GetFirePoint()->GetComponentLocation(), Guns[CurrentGun]->GetFirePoint()->GetComponentQuat(), IsAiming);


	}
}


void AFPSCharacter::Reload()
{
	if (Guns.Num() > 0 && !bIsHolsing)
	{
		Guns[CurrentGun]->GetGunAbility()->Reload(HandMesh->GetAnimInstance());
	}

}


void AFPSCharacter::SwitchGunWithKeyboard()
{
	if (!bIsHolsing)
	{
		if (PlayerController->WasInputKeyJustPressed(EKeys::One))
		{
			SwitchGun(0);

		}
		if (PlayerController->WasInputKeyJustPressed(EKeys::Two) && Guns.Num() >= 2)
		{
			SwitchGun(1);

		}
	}


}

void AFPSCharacter::SwitchGun(int Index)
{
	if (IsAiming)
	{
		return;
	}


	if (Guns.Num() > 0)
	{
		for (int i = 0; i < Guns.Num(); i++)
		{


			Guns[i]->SetActorHiddenInGame(true);

		}

		CurrentGun = Index;
		Guns[CurrentGun]->SetActorHiddenInGame(false);
		MagMesh->SetStaticMesh(Guns[CurrentGun]->GetMagMesh());
		CurrentGunType = Guns[CurrentGun]->GetGunAbility()->GunType;
	}
}

void AFPSCharacter::SwitchWithScroller(float Value)
{
	if (!bIsHolsing)
	{
		if (Value > 0 || Value < 0)
		{
			bIsHolsing = true;
			CurrentGun += Value;

			if (CurrentGun < 0)
				CurrentGun = Guns.Num() - 1;
			if (CurrentGun >= Guns.Num())
				CurrentGun = 0;

			FTimerHandle HolsterHandle;
			FTimerHandle FinishHolsterHandle;
			FTimerDelegate Delegate;

			Delegate.BindUObject(this, &AFPSCharacter::SwitchGun, CurrentGun);

			GetWorldTimerManager().SetTimer(HolsterHandle, Delegate, 0.4, false);
			GetWorldTimerManager().SetTimer(FinishHolsterHandle, this, &AFPSCharacter::FinishHosling, 0.4, false);

		}

	}

}

void AFPSCharacter::ThrowGrenade()
{
	GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, FString::Printf(TEXT("Grenade")));
	if (GrenadeActor)
	{
		AGrenade* Grenade = GetWorld()->SpawnActor<AGrenade>(GrenadeActor);
		Grenade->SetActorLocation(CameraFollow->GetComponentLocation() + GrenadeVector);
		Grenade->GetProjectileMovement()->Velocity = CameraFollow->GetForwardVector() * GrenadeSpeed;
	}

}

void AFPSCharacter::BasicSetup()
{
	if (GunClasses.Num() > 0)
	{

		for (int i = 0; i < GunClasses.Num(); i++)
		{
			if (GunClasses[i])
			{
				AGun* Base = GetWorld()->SpawnActor<AGun>(GunClasses[i]);
				Guns.Add(Base);
				Base->AttachToComponent(HandMesh, FAttachmentTransformRules::KeepRelativeTransform, "Weapon_Position");
				Base->SetOwner(this);
				Base->SetGunSetup(EGunSetup::Attached);
			}

		}

		for (int i = 0; i < Guns.Num(); i++)
		{
			if (Guns[i])
			{
				Guns[i]->SetActorHiddenInGame(true);
			}

		}

		CurrentGun = 0;
		if (Guns[CurrentGun])
		{
			Guns[CurrentGun]->SetActorHiddenInGame(false);
			CurrentGunType = Guns[CurrentGun]->GetGunAbility()->GunType;

			//GunMesh->SetStaticMesh(Guns[CurrentGun]->GetGunMesh());

		}
		MagMesh->SetStaticMesh(Guns[CurrentGun]->GetMagMesh());
	}


}

void AFPSCharacter::FinishHosling()
{
	bIsHolsing = false;
}

void AFPSCharacter::GetGun(AGun* Gun)
{
	if (Gun == nullptr)
	{
		return;
	}

	if (Guns.Num() <= 0)
	{
		HandMesh->SetVisibility(true);
	}

	Guns.Add(Gun);
	Gun->SetGunSetup(EGunSetup::Attached);
	Gun->AttachToComponent(HandMesh, FAttachmentTransformRules::KeepWorldTransform, FName("Weapon_Position"));

	Gun->SetActorRelativeLocation(FVector(0, 0, 0));
	Gun->SetActorRelativeRotation(FRotator(0, 0, 0));
	if (Guns.Num() == 0)
	{
		CurrentGun = 0;

	}

	SwitchGun(CurrentGun);
}

