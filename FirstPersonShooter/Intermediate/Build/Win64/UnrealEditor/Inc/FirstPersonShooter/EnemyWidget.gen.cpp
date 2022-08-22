// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstPersonShooter/Public/Widgets/EnemyWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyWidget() {}
// Cross Module References
	FIRSTPERSONSHOOTER_API UClass* Z_Construct_UClass_UEnemyWidget_NoRegister();
	FIRSTPERSONSHOOTER_API UClass* Z_Construct_UClass_UEnemyWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_FirstPersonShooter();
	FIRSTPERSONSHOOTER_API UClass* Z_Construct_UClass_AEnemy_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UEnemyWidget::execGetEnemyHealth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetEnemyHealth();
		P_NATIVE_END;
	}
	void UEnemyWidget::StaticRegisterNativesUEnemyWidget()
	{
		UClass* Class = UEnemyWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetEnemyHealth", &UEnemyWidget::execGetEnemyHealth },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEnemyWidget_GetEnemyHealth_Statics
	{
		struct EnemyWidget_eventGetEnemyHealth_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEnemyWidget_GetEnemyHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyWidget_eventGetEnemyHealth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnemyWidget_GetEnemyHealth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnemyWidget_GetEnemyHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnemyWidget_GetEnemyHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/EnemyWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnemyWidget_GetEnemyHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnemyWidget, nullptr, "GetEnemyHealth", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEnemyWidget_GetEnemyHealth_Statics::EnemyWidget_eventGetEnemyHealth_Parms), Z_Construct_UFunction_UEnemyWidget_GetEnemyHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyWidget_GetEnemyHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnemyWidget_GetEnemyHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyWidget_GetEnemyHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnemyWidget_GetEnemyHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnemyWidget_GetEnemyHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnemyWidget);
	UClass* Z_Construct_UClass_UEnemyWidget_NoRegister()
	{
		return UEnemyWidget::StaticClass();
	}
	struct Z_Construct_UClass_UEnemyWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Enemy_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Enemy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnemyWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_FirstPersonShooter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEnemyWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEnemyWidget_GetEnemyHealth, "GetEnemyHealth" }, // 2230604247
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Widgets/EnemyWidget.h" },
		{ "ModuleRelativePath", "Public/Widgets/EnemyWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyWidget_Statics::NewProp_Enemy_MetaData[] = {
		{ "Category", "EnemyWidget" },
		{ "ModuleRelativePath", "Public/Widgets/EnemyWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemyWidget_Statics::NewProp_Enemy = { "Enemy", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemyWidget, Enemy), Z_Construct_UClass_AEnemy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnemyWidget_Statics::NewProp_Enemy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyWidget_Statics::NewProp_Enemy_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnemyWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyWidget_Statics::NewProp_Enemy,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnemyWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnemyWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnemyWidget_Statics::ClassParams = {
		&UEnemyWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEnemyWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEnemyWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnemyWidget()
	{
		if (!Z_Registration_Info_UClass_UEnemyWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnemyWidget.OuterSingleton, Z_Construct_UClass_UEnemyWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEnemyWidget.OuterSingleton;
	}
	template<> FIRSTPERSONSHOOTER_API UClass* StaticClass<UEnemyWidget>()
	{
		return UEnemyWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemyWidget);
	struct Z_CompiledInDeferFile_FID_FirstPersonShooter_Source_FirstPersonShooter_Public_Widgets_EnemyWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FirstPersonShooter_Source_FirstPersonShooter_Public_Widgets_EnemyWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEnemyWidget, UEnemyWidget::StaticClass, TEXT("UEnemyWidget"), &Z_Registration_Info_UClass_UEnemyWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnemyWidget), 914936163U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FirstPersonShooter_Source_FirstPersonShooter_Public_Widgets_EnemyWidget_h_2724974462(TEXT("/Script/FirstPersonShooter"),
		Z_CompiledInDeferFile_FID_FirstPersonShooter_Source_FirstPersonShooter_Public_Widgets_EnemyWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FirstPersonShooter_Source_FirstPersonShooter_Public_Widgets_EnemyWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
