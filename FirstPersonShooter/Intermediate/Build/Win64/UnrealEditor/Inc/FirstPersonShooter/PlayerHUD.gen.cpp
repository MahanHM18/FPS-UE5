// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstPersonShooter/Public/Widgets/PlayerHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerHUD() {}
// Cross Module References
	FIRSTPERSONSHOOTER_API UClass* Z_Construct_UClass_UPlayerHUD_NoRegister();
	FIRSTPERSONSHOOTER_API UClass* Z_Construct_UClass_UPlayerHUD();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_FirstPersonShooter();
	FIRSTPERSONSHOOTER_API UClass* Z_Construct_UClass_AFPSCharacter_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPlayerHUD::execGetPlayerCurrentMag)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPlayerCurrentMag();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerHUD::execGetPlayerCurrentAmmo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPlayerCurrentAmmo();
		P_NATIVE_END;
	}
	void UPlayerHUD::StaticRegisterNativesUPlayerHUD()
	{
		UClass* Class = UPlayerHUD::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPlayerCurrentAmmo", &UPlayerHUD::execGetPlayerCurrentAmmo },
			{ "GetPlayerCurrentMag", &UPlayerHUD::execGetPlayerCurrentMag },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayerHUD_GetPlayerCurrentAmmo_Statics
	{
		struct PlayerHUD_eventGetPlayerCurrentAmmo_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPlayerHUD_GetPlayerCurrentAmmo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerHUD_eventGetPlayerCurrentAmmo_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerHUD_GetPlayerCurrentAmmo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerHUD_GetPlayerCurrentAmmo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerHUD_GetPlayerCurrentAmmo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/PlayerHUD.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerHUD_GetPlayerCurrentAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerHUD, nullptr, "GetPlayerCurrentAmmo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayerHUD_GetPlayerCurrentAmmo_Statics::PlayerHUD_eventGetPlayerCurrentAmmo_Parms), Z_Construct_UFunction_UPlayerHUD_GetPlayerCurrentAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerHUD_GetPlayerCurrentAmmo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerHUD_GetPlayerCurrentAmmo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerHUD_GetPlayerCurrentAmmo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerHUD_GetPlayerCurrentAmmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerHUD_GetPlayerCurrentAmmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerHUD_GetPlayerCurrentMag_Statics
	{
		struct PlayerHUD_eventGetPlayerCurrentMag_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPlayerHUD_GetPlayerCurrentMag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerHUD_eventGetPlayerCurrentMag_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerHUD_GetPlayerCurrentMag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerHUD_GetPlayerCurrentMag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerHUD_GetPlayerCurrentMag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/PlayerHUD.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerHUD_GetPlayerCurrentMag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerHUD, nullptr, "GetPlayerCurrentMag", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayerHUD_GetPlayerCurrentMag_Statics::PlayerHUD_eventGetPlayerCurrentMag_Parms), Z_Construct_UFunction_UPlayerHUD_GetPlayerCurrentMag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerHUD_GetPlayerCurrentMag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerHUD_GetPlayerCurrentMag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerHUD_GetPlayerCurrentMag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerHUD_GetPlayerCurrentMag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerHUD_GetPlayerCurrentMag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerHUD);
	UClass* Z_Construct_UClass_UPlayerHUD_NoRegister()
	{
		return UPlayerHUD::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Player_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_FirstPersonShooter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayerHUD_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerHUD_GetPlayerCurrentAmmo, "GetPlayerCurrentAmmo" }, // 1759279720
		{ &Z_Construct_UFunction_UPlayerHUD_GetPlayerCurrentMag, "GetPlayerCurrentMag" }, // 3303709518
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerHUD_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Widgets/PlayerHUD.h" },
		{ "ModuleRelativePath", "Public/Widgets/PlayerHUD.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerHUD_Statics::NewProp_Player_MetaData[] = {
		{ "Category", "PlayerHUD" },
		{ "ModuleRelativePath", "Public/Widgets/PlayerHUD.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerHUD_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerHUD, Player), Z_Construct_UClass_AFPSCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerHUD_Statics::NewProp_Player_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerHUD_Statics::NewProp_Player_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerHUD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerHUD_Statics::NewProp_Player,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerHUD>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerHUD_Statics::ClassParams = {
		&UPlayerHUD::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPlayerHUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerHUD_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerHUD()
	{
		if (!Z_Registration_Info_UClass_UPlayerHUD.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerHUD.OuterSingleton, Z_Construct_UClass_UPlayerHUD_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlayerHUD.OuterSingleton;
	}
	template<> FIRSTPERSONSHOOTER_API UClass* StaticClass<UPlayerHUD>()
	{
		return UPlayerHUD::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerHUD);
	struct Z_CompiledInDeferFile_FID_FirstPersonShooter_Source_FirstPersonShooter_Public_Widgets_PlayerHUD_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FirstPersonShooter_Source_FirstPersonShooter_Public_Widgets_PlayerHUD_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerHUD, UPlayerHUD::StaticClass, TEXT("UPlayerHUD"), &Z_Registration_Info_UClass_UPlayerHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerHUD), 3078234627U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FirstPersonShooter_Source_FirstPersonShooter_Public_Widgets_PlayerHUD_h_2355226424(TEXT("/Script/FirstPersonShooter"),
		Z_CompiledInDeferFile_FID_FirstPersonShooter_Source_FirstPersonShooter_Public_Widgets_PlayerHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FirstPersonShooter_Source_FirstPersonShooter_Public_Widgets_PlayerHUD_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
