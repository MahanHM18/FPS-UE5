// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstPersonShooter/Public/PlayerCharacter/FPSAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSAnimInstance() {}
// Cross Module References
	FIRSTPERSONSHOOTER_API UClass* Z_Construct_UClass_UFPSAnimInstance_NoRegister();
	FIRSTPERSONSHOOTER_API UClass* Z_Construct_UClass_UFPSAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_FirstPersonShooter();
	FIRSTPERSONSHOOTER_API UClass* Z_Construct_UClass_AFPSCharacter_NoRegister();
	FIRSTPERSONSHOOTER_API UEnum* Z_Construct_UEnum_FirstPersonShooter_EGunType();
// End Cross Module References
	DEFINE_FUNCTION(UFPSAnimInstance::execUpdateAnimInstance)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateAnimInstance(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	void UFPSAnimInstance::StaticRegisterNativesUFPSAnimInstance()
	{
		UClass* Class = UFPSAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateAnimInstance", &UFPSAnimInstance::execUpdateAnimInstance },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFPSAnimInstance_UpdateAnimInstance_Statics
	{
		struct FPSAnimInstance_eventUpdateAnimInstance_Parms
		{
			float DeltaTime;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFPSAnimInstance_UpdateAnimInstance_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSAnimInstance_eventUpdateAnimInstance_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFPSAnimInstance_UpdateAnimInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSAnimInstance_UpdateAnimInstance_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSAnimInstance_UpdateAnimInstance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerCharacter/FPSAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSAnimInstance_UpdateAnimInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSAnimInstance, nullptr, "UpdateAnimInstance", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFPSAnimInstance_UpdateAnimInstance_Statics::FPSAnimInstance_eventUpdateAnimInstance_Parms), Z_Construct_UFunction_UFPSAnimInstance_UpdateAnimInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSAnimInstance_UpdateAnimInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFPSAnimInstance_UpdateAnimInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSAnimInstance_UpdateAnimInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFPSAnimInstance_UpdateAnimInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFPSAnimInstance_UpdateAnimInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFPSAnimInstance);
	UClass* Z_Construct_UClass_UFPSAnimInstance_NoRegister()
	{
		return UFPSAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UFPSAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsAiming_MetaData[];
#endif
		static void NewProp_bIsAiming_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAiming;
		static const UECodeGen_Private::FBytePropertyParams NewProp_GunType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GunType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_GunType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFPSAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_FirstPersonShooter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFPSAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFPSAnimInstance_UpdateAnimInstance, "UpdateAnimInstance" }, // 1693666908
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "PlayerCharacter/FPSAnimInstance.h" },
		{ "ModuleRelativePath", "Public/PlayerCharacter/FPSAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSAnimInstance_Statics::NewProp_Speed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/PlayerCharacter/FPSAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFPSAnimInstance_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSAnimInstance, Speed), METADATA_PARAMS(Z_Construct_UClass_UFPSAnimInstance_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSAnimInstance_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSAnimInstance_Statics::NewProp_Character_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/PlayerCharacter/FPSAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFPSAnimInstance_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSAnimInstance, Character), Z_Construct_UClass_AFPSCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFPSAnimInstance_Statics::NewProp_Character_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSAnimInstance_Statics::NewProp_Character_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSAnimInstance_Statics::NewProp_bIsAiming_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/PlayerCharacter/FPSAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UFPSAnimInstance_Statics::NewProp_bIsAiming_SetBit(void* Obj)
	{
		((UFPSAnimInstance*)Obj)->bIsAiming = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFPSAnimInstance_Statics::NewProp_bIsAiming = { "bIsAiming", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFPSAnimInstance), &Z_Construct_UClass_UFPSAnimInstance_Statics::NewProp_bIsAiming_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFPSAnimInstance_Statics::NewProp_bIsAiming_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSAnimInstance_Statics::NewProp_bIsAiming_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFPSAnimInstance_Statics::NewProp_GunType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSAnimInstance_Statics::NewProp_GunType_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/PlayerCharacter/FPSAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFPSAnimInstance_Statics::NewProp_GunType = { "GunType", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSAnimInstance, GunType), Z_Construct_UEnum_FirstPersonShooter_EGunType, METADATA_PARAMS(Z_Construct_UClass_UFPSAnimInstance_Statics::NewProp_GunType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSAnimInstance_Statics::NewProp_GunType_MetaData)) }; // 3855632602
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFPSAnimInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSAnimInstance_Statics::NewProp_Speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSAnimInstance_Statics::NewProp_Character,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSAnimInstance_Statics::NewProp_bIsAiming,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSAnimInstance_Statics::NewProp_GunType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSAnimInstance_Statics::NewProp_GunType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFPSAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFPSAnimInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFPSAnimInstance_Statics::ClassParams = {
		&UFPSAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFPSAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFPSAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UFPSAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFPSAnimInstance()
	{
		if (!Z_Registration_Info_UClass_UFPSAnimInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFPSAnimInstance.OuterSingleton, Z_Construct_UClass_UFPSAnimInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFPSAnimInstance.OuterSingleton;
	}
	template<> FIRSTPERSONSHOOTER_API UClass* StaticClass<UFPSAnimInstance>()
	{
		return UFPSAnimInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFPSAnimInstance);
	struct Z_CompiledInDeferFile_FID_FirstPersonShooter_Source_FirstPersonShooter_Public_PlayerCharacter_FPSAnimInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FirstPersonShooter_Source_FirstPersonShooter_Public_PlayerCharacter_FPSAnimInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFPSAnimInstance, UFPSAnimInstance::StaticClass, TEXT("UFPSAnimInstance"), &Z_Registration_Info_UClass_UFPSAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFPSAnimInstance), 2768308345U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FirstPersonShooter_Source_FirstPersonShooter_Public_PlayerCharacter_FPSAnimInstance_h_3106059262(TEXT("/Script/FirstPersonShooter"),
		Z_CompiledInDeferFile_FID_FirstPersonShooter_Source_FirstPersonShooter_Public_PlayerCharacter_FPSAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FirstPersonShooter_Source_FirstPersonShooter_Public_PlayerCharacter_FPSAnimInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
