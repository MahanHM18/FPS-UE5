// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIRSTPERSONSHOOTER_PlayerHUD_generated_h
#error "PlayerHUD.generated.h already included, missing '#pragma once' in PlayerHUD.h"
#endif
#define FIRSTPERSONSHOOTER_PlayerHUD_generated_h

#define FID_FirstPersonShooter_Source_FirstPersonShooter_Public_Widgets_PlayerHUD_h_15_SPARSE_DATA
#define FID_FirstPersonShooter_Source_FirstPersonShooter_Public_Widgets_PlayerHUD_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPlayerCurrentMag); \
	DECLARE_FUNCTION(execGetPlayerCurrentAmmo);


#define FID_FirstPersonShooter_Source_FirstPersonShooter_Public_Widgets_PlayerHUD_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPlayerCurrentMag); \
	DECLARE_FUNCTION(execGetPlayerCurrentAmmo);


#define FID_FirstPersonShooter_Source_FirstPersonShooter_Public_Widgets_PlayerHUD_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerHUD(); \
	friend struct Z_Construct_UClass_UPlayerHUD_Statics; \
public: \
	DECLARE_CLASS(UPlayerHUD, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirstPersonShooter"), NO_API) \
	DECLARE_SERIALIZER(UPlayerHUD)


#define FID_FirstPersonShooter_Source_FirstPersonShooter_Public_Widgets_PlayerHUD_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUPlayerHUD(); \
	friend struct Z_Construct_UClass_UPlayerHUD_Statics; \
public: \
	DECLARE_CLASS(UPlayerHUD, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirstPersonShooter"), NO_API) \
	DECLARE_SERIALIZER(UPlayerHUD)


#define FID_FirstPersonShooter_Source_FirstPersonShooter_Public_Widgets_PlayerHUD_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerHUD(UPlayerHUD&&); \
	NO_API UPlayerHUD(const UPlayerHUD&); \
public:


#define FID_FirstPersonShooter_Source_FirstPersonShooter_Public_Widgets_PlayerHUD_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerHUD(UPlayerHUD&&); \
	NO_API UPlayerHUD(const UPlayerHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerHUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerHUD)


#define FID_FirstPersonShooter_Source_FirstPersonShooter_Public_Widgets_PlayerHUD_h_12_PROLOG
#define FID_FirstPersonShooter_Source_FirstPersonShooter_Public_Widgets_PlayerHUD_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FirstPersonShooter_Source_FirstPersonShooter_Public_Widgets_PlayerHUD_h_15_SPARSE_DATA \
	FID_FirstPersonShooter_Source_FirstPersonShooter_Public_Widgets_PlayerHUD_h_15_RPC_WRAPPERS \
	FID_FirstPersonShooter_Source_FirstPersonShooter_Public_Widgets_PlayerHUD_h_15_INCLASS \
	FID_FirstPersonShooter_Source_FirstPersonShooter_Public_Widgets_PlayerHUD_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_FirstPersonShooter_Source_FirstPersonShooter_Public_Widgets_PlayerHUD_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FirstPersonShooter_Source_FirstPersonShooter_Public_Widgets_PlayerHUD_h_15_SPARSE_DATA \
	FID_FirstPersonShooter_Source_FirstPersonShooter_Public_Widgets_PlayerHUD_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_FirstPersonShooter_Source_FirstPersonShooter_Public_Widgets_PlayerHUD_h_15_INCLASS_NO_PURE_DECLS \
	FID_FirstPersonShooter_Source_FirstPersonShooter_Public_Widgets_PlayerHUD_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTPERSONSHOOTER_API UClass* StaticClass<class UPlayerHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FirstPersonShooter_Source_FirstPersonShooter_Public_Widgets_PlayerHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
