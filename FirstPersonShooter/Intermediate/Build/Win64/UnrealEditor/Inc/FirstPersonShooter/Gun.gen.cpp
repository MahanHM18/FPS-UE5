// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstPersonShooter/Public/Weapons/Gun.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGun() {}
// Cross Module References
	FIRSTPERSONSHOOTER_API UEnum* Z_Construct_UEnum_FirstPersonShooter_EGunType();
	UPackage* Z_Construct_UPackage__Script_FirstPersonShooter();
	FIRSTPERSONSHOOTER_API UClass* Z_Construct_UClass_AGun_NoRegister();
	FIRSTPERSONSHOOTER_API UClass* Z_Construct_UClass_AGun();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	FIRSTPERSONSHOOTER_API UClass* Z_Construct_UClass_UGunAbilities_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGunType;
	static UEnum* EGunType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGunType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGunType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FirstPersonShooter_EGunType, Z_Construct_UPackage__Script_FirstPersonShooter(), TEXT("EGunType"));
		}
		return Z_Registration_Info_UEnum_EGunType.OuterSingleton;
	}
	template<> FIRSTPERSONSHOOTER_API UEnum* StaticEnum<EGunType>()
	{
		return EGunType_StaticEnum();
	}
	struct Z_Construct_UEnum_FirstPersonShooter_EGunType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_FirstPersonShooter_EGunType_Statics::Enumerators[] = {
		{ "EGunType::Rifle", (int64)EGunType::Rifle },
		{ "EGunType::Pistol", (int64)EGunType::Pistol },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_FirstPersonShooter_EGunType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Weapons/Gun.h" },
		{ "Pistol.DisplayName", "Pistol" },
		{ "Pistol.Name", "EGunType::Pistol" },
		{ "Rifle.DisplayName", "Rifle" },
		{ "Rifle.Name", "EGunType::Rifle" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FirstPersonShooter_EGunType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_FirstPersonShooter,
		nullptr,
		"EGunType",
		"EGunType",
		Z_Construct_UEnum_FirstPersonShooter_EGunType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_FirstPersonShooter_EGunType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_FirstPersonShooter_EGunType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_FirstPersonShooter_EGunType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_FirstPersonShooter_EGunType()
	{
		if (!Z_Registration_Info_UEnum_EGunType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGunType.InnerSingleton, Z_Construct_UEnum_FirstPersonShooter_EGunType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGunType.InnerSingleton;
	}
	void AGun::StaticRegisterNativesAGun()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGun);
	UClass* Z_Construct_UClass_AGun_NoRegister()
	{
		return AGun::StaticClass();
	}
	struct Z_Construct_UClass_AGun_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GunMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GunMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MagMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MagMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GunAbilities_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GunAbilities;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirePoint_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FirePoint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGun_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FirstPersonShooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Weapons/Gun.h" },
		{ "ModuleRelativePath", "Public/Weapons/Gun.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::NewProp_GunMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Gun" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapons/Gun.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGun_Statics::NewProp_GunMesh = { "GunMesh", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGun, GunMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGun_Statics::NewProp_GunMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::NewProp_GunMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::NewProp_MagMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "Public/Weapons/Gun.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGun_Statics::NewProp_MagMesh = { "MagMesh", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGun, MagMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGun_Statics::NewProp_MagMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::NewProp_MagMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::NewProp_GunAbilities_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Gun" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapons/Gun.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGun_Statics::NewProp_GunAbilities = { "GunAbilities", nullptr, (EPropertyFlags)0x004000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGun, GunAbilities), Z_Construct_UClass_UGunAbilities_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGun_Statics::NewProp_GunAbilities_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::NewProp_GunAbilities_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::NewProp_FirePoint_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Gun" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapons/Gun.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGun_Statics::NewProp_FirePoint = { "FirePoint", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGun, FirePoint), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGun_Statics::NewProp_FirePoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::NewProp_FirePoint_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGun_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_GunMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_MagMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_GunAbilities,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_FirePoint,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGun_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGun>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGun_Statics::ClassParams = {
		&AGun::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGun_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGun_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGun()
	{
		if (!Z_Registration_Info_UClass_AGun.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGun.OuterSingleton, Z_Construct_UClass_AGun_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGun.OuterSingleton;
	}
	template<> FIRSTPERSONSHOOTER_API UClass* StaticClass<AGun>()
	{
		return AGun::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGun);
	struct Z_CompiledInDeferFile_FID_FirstPersonShooter_Source_FirstPersonShooter_Public_Weapons_Gun_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FirstPersonShooter_Source_FirstPersonShooter_Public_Weapons_Gun_h_Statics::EnumInfo[] = {
		{ EGunType_StaticEnum, TEXT("EGunType"), &Z_Registration_Info_UEnum_EGunType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3855632602U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FirstPersonShooter_Source_FirstPersonShooter_Public_Weapons_Gun_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGun, AGun::StaticClass, TEXT("AGun"), &Z_Registration_Info_UClass_AGun, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGun), 2905010194U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FirstPersonShooter_Source_FirstPersonShooter_Public_Weapons_Gun_h_1083233684(TEXT("/Script/FirstPersonShooter"),
		Z_CompiledInDeferFile_FID_FirstPersonShooter_Source_FirstPersonShooter_Public_Weapons_Gun_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FirstPersonShooter_Source_FirstPersonShooter_Public_Weapons_Gun_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_FirstPersonShooter_Source_FirstPersonShooter_Public_Weapons_Gun_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FirstPersonShooter_Source_FirstPersonShooter_Public_Weapons_Gun_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
