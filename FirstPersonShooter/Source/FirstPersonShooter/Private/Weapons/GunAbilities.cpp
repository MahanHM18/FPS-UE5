// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapons/GunAbilities.h"
#include "Camera/CameraComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundBase.h"
#include "Enemy/Enemy.h"

// Sets default values for this component's properties
UGunAbilities::UGunAbilities() :
	IsReloading(false),
	bCanShoot(true)
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	// ...
}


// Called when the game starts
void UGunAbilities::BeginPlay()
{
	Super::BeginPlay();
	CurrentAmmo = MaxAmmo;
	CurrentMag = MaxMag;
	// ...

}



// Called every frame
void UGunAbilities::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);


	// ...
}



void UGunAbilities::Recoil(UCameraComponent* Camera, float MainDeltaTime)
{
	if (CurrentAmmo > 0 && !IsReloading && bCanShoot)
	{
		GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, FString::Printf(TEXT("Recoil")));

		float randZ = FMath::RandRange(-50, 50);
		float randY = FMath::RandRange(0, 100);


		Camera->SetRelativeRotation(FRotator(FMath::FInterpTo(Camera->GetRelativeRotation().Pitch, randY, MainDeltaTime, 1), FMath::FInterpTo(Camera->GetRelativeRotation().Yaw, randZ, MainDeltaTime, 1), 0));

	}

}

void UGunAbilities::Reload(UAnimInstance* HandMesh)
{

	CharacterHandMesh = HandMesh;

	if (!IsReloading && CurrentMag > 0 && CurrentAmmo != MaxAmmo)
	{

		UGameplayStatics::PlaySound2D(this, ReloadSound);

		GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Green, FString::Printf(TEXT("Reloading")));

		IsReloading = true;

		if (ReloadMontage)
		{
			FTimerHandle ReloadTimeHandle;
			if (GunType != EGunType::ShotGun)
			{

				GetWorld()->GetTimerManager().SetTimer(ReloadTimeHandle, this, &UGunAbilities::ReloadFinish, ReloadTime, false);
			}

			HandMesh->Montage_Play(ReloadMontage);

			if (GunType == EGunType::ShotGun)
			{
				CharacterHandMesh->Montage_Play(ReloadMontage);
				GetWorld()->GetTimerManager().SetTimer(ShotGunReloadTimeHandle, this, &UGunAbilities::ReloadInsert, ReloadTime, true);
			}
		}
	}

}

void UGunAbilities::CanShoot()
{
	bCanShoot = true;
}

void UGunAbilities::ReloadInsert()
{
	UGameplayStatics::PlaySound2D(this, ReloadInsertSound);
	CharacterHandMesh->Montage_Play(ReloadInsertMontage);
	if (CurrentAmmo == MaxAmmo)
	{
		ReloadFinish();
		GetWorld()->GetTimerManager().PauseTimer(ShotGunReloadTimeHandle);
		CharacterHandMesh->Montage_Play(ReloadCloseMontage);
		
		return;
	}
	
	CurrentAmmo++;
	GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Green, FString::Printf(TEXT("s Finish")));
}

void UGunAbilities::ReloadFinish()
{
	GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Green, FString::Printf(TEXT("Reload Finish")));
	IsReloading = false;
	CurrentMag--;
	CurrentAmmo = MaxAmmo;

	if (GunType == EGunType::ShotGun)
	{
		UGameplayStatics::PlaySound2D(this, ReloadCloseSound);
	}
}

void UGunAbilities::Fire(FVector Start, FVector End, UAnimInstance* HandAnimInstance, FVector MuzzleFlashLocation, FQuat4d MuzzleFlashQuat, bool IsAiming)
{
	if (CurrentAmmo > 0 && !IsReloading && bCanShoot)
	{
		CurrentAmmo--;
		FTransform MuzzleFlashTransform;

		MuzzleFlashTransform.SetLocation(MuzzleFlashLocation);
		MuzzleFlashTransform.SetRotation(MuzzleFlashQuat);
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), MuzzleFlash, MuzzleFlashTransform);

		FHitResult OutHit;
		GetWorld()->LineTraceSingleByChannel(OutHit, Start, End, ECollisionChannel::ECC_Visibility);

		UGameplayStatics::PlaySound2D(this, FireSound);

		DrawDebugLine(GetWorld(), Start, End, FColor::Red, false, 1, 0, 1);

		if (OutHit.bBlockingHit)
		{
			GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Green, FString::Printf(TEXT("We are hiting %s"), *OutHit.GetActor()->GetName()));

			UGameplayStatics::SpawnDecalAtLocation(this, Decal, FVector(20, 20, 20), OutHit.Location, OutHit.Normal.Rotation());

			UGameplayStatics::PlaySoundAtLocation(this, ImapctSound, OutHit.Location);

			if (OutHit.GetActor()->ActorHasTag(FName("Enemy")))
			{
				AEnemy* Enemy = Cast<AEnemy>(OutHit.GetActor());
				Enemy->DecreaseDamage(Damage);
			}

		}

		HandAnimInstance->Montage_Play(IsAiming ? AimFireMontage : FireMontage);


		if (GunType == EGunType::ShotGun || GunType == EGunType::Pistol || GunType == EGunType::Sniper)
		{
			bCanShoot = false;

			FTimerHandle Handle;

			GetWorld()->GetTimerManager().SetTimer(Handle, this, &UGunAbilities::CanShoot, TimeToNextShoot, false);
		}

	}


}