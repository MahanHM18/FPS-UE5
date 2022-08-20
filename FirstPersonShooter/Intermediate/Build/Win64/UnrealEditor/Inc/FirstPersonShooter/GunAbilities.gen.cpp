// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstPersonShooter/Public/Weapons/GunAbilities.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGunAbilities() {}
// Cross Module References
	FIRSTPERSONSHOOTER_API UClass* Z_Construct_UClass_UGunAbilities_NoRegister();
	FIRSTPERSONSHOOTER_API UClass* Z_Construct_UClass_UGunAbilities();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_FirstPersonShooter();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	FIRSTPERSONSHOOTER_API UEnum* Z_Construct_UEnum_FirstPersonShooter_EGunType();
// End Cross Module References
	void UGunAbilities::StaticRegisterNativesUGunAbilities()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGunAbilities);
	UClass* Z_Construct_UClass_UGunAbilities_NoRegister()
	{
		return UGunAbilities::StaticClass();
	}
	struct Z_Construct_UClass_UGunAbilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MuzzleFlash_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MuzzleFlash;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Decal_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Decal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FireSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReloadSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReloadSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FireMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimFireMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AimFireMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReloadMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReloadMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxAmmo_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_MaxAmmo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxMag_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_MaxMag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentAmmo_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_CurrentAmmo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentMag_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_CurrentMag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FireRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReloadTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReloadTime;
		static const UECodeGen_Private::FBytePropertyParams NewProp_GunType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GunType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_GunType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGunAbilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FirstPersonShooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGunAbilities_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Weapons/GunAbilities.h" },
		{ "ModuleRelativePath", "Public/Weapons/GunAbilities.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGunAbilities_Statics::NewProp_MuzzleFlash_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Particle" },
		{ "ModuleRelativePath", "Public/Weapons/GunAbilities.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGunAbilities_Statics::NewProp_MuzzleFlash = { "MuzzleFlash", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGunAbilities, MuzzleFlash), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGunAbilities_Statics::NewProp_MuzzleFlash_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGunAbilities_Statics::NewProp_MuzzleFlash_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGunAbilities_Statics::NewProp_Decal_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Particle" },
		{ "ModuleRelativePath", "Public/Weapons/GunAbilities.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGunAbilities_Statics::NewProp_Decal = { "Decal", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGunAbilities, Decal), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGunAbilities_Statics::NewProp_Decal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGunAbilities_Statics::NewProp_Decal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGunAbilities_Statics::NewProp_FireSound_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Public/Weapons/GunAbilities.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGunAbilities_Statics::NewProp_FireSound = { "FireSound", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGunAbilities, FireSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGunAbilities_Statics::NewProp_FireSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGunAbilities_Statics::NewProp_FireSound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGunAbilities_Statics::NewProp_ReloadSound_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Public/Weapons/GunAbilities.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGunAbilities_Statics::NewProp_ReloadSound = { "ReloadSound", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGunAbilities, ReloadSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGunAbilities_Statics::NewProp_ReloadSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGunAbilities_Statics::NewProp_ReloadSound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGunAbilities_Statics::NewProp_FireMontage_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Montage" },
		{ "ModuleRelativePath", "Public/Weapons/GunAbilities.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGunAbilities_Statics::NewProp_FireMontage = { "FireMontage", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGunAbilities, FireMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGunAbilities_Statics::NewProp_FireMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGunAbilities_Statics::NewProp_FireMontage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGunAbilities_Statics::NewProp_AimFireMontage_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Montage" },
		{ "ModuleRelativePath", "Public/Weapons/GunAbilities.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGunAbilities_Statics::NewProp_AimFireMontage = { "AimFireMontage", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGunAbilities, AimFireMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGunAbilities_Statics::NewProp_AimFireMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGunAbilities_Statics::NewProp_AimFireMontage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGunAbilities_Statics::NewProp_ReloadMontage_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Montage" },
		{ "ModuleRelativePath", "Public/Weapons/GunAbilities.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGunAbilities_Statics::NewProp_ReloadMontage = { "ReloadMontage", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGunAbilities, ReloadMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGunAbilities_Statics::NewProp_ReloadMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGunAbilities_Statics::NewProp_ReloadMontage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGunAbilities_Statics::NewProp_MaxAmmo_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Public/Weapons/GunAbilities.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UGunAbilities_Statics::NewProp_MaxAmmo = { "MaxAmmo", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGunAbilities, MaxAmmo), METADATA_PARAMS(Z_Construct_UClass_UGunAbilities_Statics::NewProp_MaxAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGunAbilities_Statics::NewProp_MaxAmmo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGunAbilities_Statics::NewProp_MaxMag_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Public/Weapons/GunAbilities.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UGunAbilities_Statics::NewProp_MaxMag = { "MaxMag", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGunAbilities, MaxMag), METADATA_PARAMS(Z_Construct_UClass_UGunAbilities_Statics::NewProp_MaxMag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGunAbilities_Statics::NewProp_MaxMag_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGunAbilities_Statics::NewProp_CurrentAmmo_MetaData[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Public/Weapons/GunAbilities.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UGunAbilities_Statics::NewProp_CurrentAmmo = { "CurrentAmmo", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGunAbilities, CurrentAmmo), METADATA_PARAMS(Z_Construct_UClass_UGunAbilities_Statics::NewProp_CurrentAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGunAbilities_Statics::NewProp_CurrentAmmo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGunAbilities_Statics::NewProp_CurrentMag_MetaData[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Public/Weapons/GunAbilities.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UGunAbilities_Statics::NewProp_CurrentMag = { "CurrentMag", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGunAbilities, CurrentMag), METADATA_PARAMS(Z_Construct_UClass_UGunAbilities_Statics::NewProp_CurrentMag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGunAbilities_Statics::NewProp_CurrentMag_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGunAbilities_Statics::NewProp_FireRate_MetaData[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Public/Weapons/GunAbilities.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGunAbilities_Statics::NewProp_FireRate = { "FireRate", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGunAbilities, FireRate), METADATA_PARAMS(Z_Construct_UClass_UGunAbilities_Statics::NewProp_FireRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGunAbilities_Statics::NewProp_FireRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGunAbilities_Statics::NewProp_ReloadTime_MetaData[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Public/Weapons/GunAbilities.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGunAbilities_Statics::NewProp_ReloadTime = { "ReloadTime", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGunAbilities, ReloadTime), METADATA_PARAMS(Z_Construct_UClass_UGunAbilities_Statics::NewProp_ReloadTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGunAbilities_Statics::NewProp_ReloadTime_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGunAbilities_Statics::NewProp_GunType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGunAbilities_Statics::NewProp_GunType_MetaData[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Public/Weapons/GunAbilities.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGunAbilities_Statics::NewProp_GunType = { "GunType", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGunAbilities, GunType), Z_Construct_UEnum_FirstPersonShooter_EGunType, METADATA_PARAMS(Z_Construct_UClass_UGunAbilities_Statics::NewProp_GunType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGunAbilities_Statics::NewProp_GunType_MetaData)) }; // 3855632602
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGunAbilities_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGunAbilities_Statics::NewProp_MuzzleFlash,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGunAbilities_Statics::NewProp_Decal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGunAbilities_Statics::NewProp_FireSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGunAbilities_Statics::NewProp_ReloadSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGunAbilities_Statics::NewProp_FireMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGunAbilities_Statics::NewProp_AimFireMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGunAbilities_Statics::NewProp_ReloadMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGunAbilities_Statics::NewProp_MaxAmmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGunAbilities_Statics::NewProp_MaxMag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGunAbilities_Statics::NewProp_CurrentAmmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGunAbilities_Statics::NewProp_CurrentMag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGunAbilities_Statics::NewProp_FireRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGunAbilities_Statics::NewProp_ReloadTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGunAbilities_Statics::NewProp_GunType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGunAbilities_Statics::NewProp_GunType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGunAbilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGunAbilities>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGunAbilities_Statics::ClassParams = {
		&UGunAbilities::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGunAbilities_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGunAbilities_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGunAbilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGunAbilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGunAbilities()
	{
		if (!Z_Registration_Info_UClass_UGunAbilities.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGunAbilities.OuterSingleton, Z_Construct_UClass_UGunAbilities_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGunAbilities.OuterSingleton;
	}
	template<> FIRSTPERSONSHOOTER_API UClass* StaticClass<UGunAbilities>()
	{
		return UGunAbilities::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGunAbilities);
	struct Z_CompiledInDeferFile_FID_FirstPersonShooter_Source_FirstPersonShooter_Public_Weapons_GunAbilities_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FirstPersonShooter_Source_FirstPersonShooter_Public_Weapons_GunAbilities_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGunAbilities, UGunAbilities::StaticClass, TEXT("UGunAbilities"), &Z_Registration_Info_UClass_UGunAbilities, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGunAbilities), 4192598490U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FirstPersonShooter_Source_FirstPersonShooter_Public_Weapons_GunAbilities_h_2885373363(TEXT("/Script/FirstPersonShooter"),
		Z_CompiledInDeferFile_FID_FirstPersonShooter_Source_FirstPersonShooter_Public_Weapons_GunAbilities_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FirstPersonShooter_Source_FirstPersonShooter_Public_Weapons_GunAbilities_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
