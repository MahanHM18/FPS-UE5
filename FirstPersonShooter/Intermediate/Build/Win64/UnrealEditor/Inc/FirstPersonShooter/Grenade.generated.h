// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef FIRSTPERSONSHOOTER_Grenade_generated_h
#error "Grenade.generated.h already included, missing '#pragma once' in Grenade.h"
#endif
#define FIRSTPERSONSHOOTER_Grenade_generated_h

#define FID_FirstPersonShooter_Source_FirstPersonShooter_Public_Weapons_Grenade_h_12_SPARSE_DATA
#define FID_FirstPersonShooter_Source_FirstPersonShooter_Public_Weapons_Grenade_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_FirstPersonShooter_Source_FirstPersonShooter_Public_Weapons_Grenade_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_FirstPersonShooter_Source_FirstPersonShooter_Public_Weapons_Grenade_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGrenade(); \
	friend struct Z_Construct_UClass_AGrenade_Statics; \
public: \
	DECLARE_CLASS(AGrenade, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstPersonShooter"), NO_API) \
	DECLARE_SERIALIZER(AGrenade)


#define FID_FirstPersonShooter_Source_FirstPersonShooter_Public_Weapons_Grenade_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAGrenade(); \
	friend struct Z_Construct_UClass_AGrenade_Statics; \
public: \
	DECLARE_CLASS(AGrenade, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstPersonShooter"), NO_API) \
	DECLARE_SERIALIZER(AGrenade)


#define FID_FirstPersonShooter_Source_FirstPersonShooter_Public_Weapons_Grenade_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGrenade(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGrenade) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGrenade); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGrenade); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGrenade(AGrenade&&); \
	NO_API AGrenade(const AGrenade&); \
public:


#define FID_FirstPersonShooter_Source_FirstPersonShooter_Public_Weapons_Grenade_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGrenade(AGrenade&&); \
	NO_API AGrenade(const AGrenade&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGrenade); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGrenade); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGrenade)


#define FID_FirstPersonShooter_Source_FirstPersonShooter_Public_Weapons_Grenade_h_9_PROLOG
#define FID_FirstPersonShooter_Source_FirstPersonShooter_Public_Weapons_Grenade_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FirstPersonShooter_Source_FirstPersonShooter_Public_Weapons_Grenade_h_12_SPARSE_DATA \
	FID_FirstPersonShooter_Source_FirstPersonShooter_Public_Weapons_Grenade_h_12_RPC_WRAPPERS \
	FID_FirstPersonShooter_Source_FirstPersonShooter_Public_Weapons_Grenade_h_12_INCLASS \
	FID_FirstPersonShooter_Source_FirstPersonShooter_Public_Weapons_Grenade_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_FirstPersonShooter_Source_FirstPersonShooter_Public_Weapons_Grenade_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FirstPersonShooter_Source_FirstPersonShooter_Public_Weapons_Grenade_h_12_SPARSE_DATA \
	FID_FirstPersonShooter_Source_FirstPersonShooter_Public_Weapons_Grenade_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_FirstPersonShooter_Source_FirstPersonShooter_Public_Weapons_Grenade_h_12_INCLASS_NO_PURE_DECLS \
	FID_FirstPersonShooter_Source_FirstPersonShooter_Public_Weapons_Grenade_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTPERSONSHOOTER_API UClass* StaticClass<class AGrenade>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FirstPersonShooter_Source_FirstPersonShooter_Public_Weapons_Grenade_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
