// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIRSTPERSONSHOOTER_Gun_generated_h
#error "Gun.generated.h already included, missing '#pragma once' in Gun.h"
#endif
#define FIRSTPERSONSHOOTER_Gun_generated_h

#define FID_FirstPersonShooter_Source_FirstPersonShooter_Public_Weapons_Gun_h_22_SPARSE_DATA
#define FID_FirstPersonShooter_Source_FirstPersonShooter_Public_Weapons_Gun_h_22_RPC_WRAPPERS
#define FID_FirstPersonShooter_Source_FirstPersonShooter_Public_Weapons_Gun_h_22_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_FirstPersonShooter_Source_FirstPersonShooter_Public_Weapons_Gun_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGun(); \
	friend struct Z_Construct_UClass_AGun_Statics; \
public: \
	DECLARE_CLASS(AGun, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstPersonShooter"), NO_API) \
	DECLARE_SERIALIZER(AGun)


#define FID_FirstPersonShooter_Source_FirstPersonShooter_Public_Weapons_Gun_h_22_INCLASS \
private: \
	static void StaticRegisterNativesAGun(); \
	friend struct Z_Construct_UClass_AGun_Statics; \
public: \
	DECLARE_CLASS(AGun, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstPersonShooter"), NO_API) \
	DECLARE_SERIALIZER(AGun)


#define FID_FirstPersonShooter_Source_FirstPersonShooter_Public_Weapons_Gun_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGun(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGun) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGun); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGun); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGun(AGun&&); \
	NO_API AGun(const AGun&); \
public:


#define FID_FirstPersonShooter_Source_FirstPersonShooter_Public_Weapons_Gun_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGun(AGun&&); \
	NO_API AGun(const AGun&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGun); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGun); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGun)


#define FID_FirstPersonShooter_Source_FirstPersonShooter_Public_Weapons_Gun_h_19_PROLOG
#define FID_FirstPersonShooter_Source_FirstPersonShooter_Public_Weapons_Gun_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FirstPersonShooter_Source_FirstPersonShooter_Public_Weapons_Gun_h_22_SPARSE_DATA \
	FID_FirstPersonShooter_Source_FirstPersonShooter_Public_Weapons_Gun_h_22_RPC_WRAPPERS \
	FID_FirstPersonShooter_Source_FirstPersonShooter_Public_Weapons_Gun_h_22_INCLASS \
	FID_FirstPersonShooter_Source_FirstPersonShooter_Public_Weapons_Gun_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_FirstPersonShooter_Source_FirstPersonShooter_Public_Weapons_Gun_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FirstPersonShooter_Source_FirstPersonShooter_Public_Weapons_Gun_h_22_SPARSE_DATA \
	FID_FirstPersonShooter_Source_FirstPersonShooter_Public_Weapons_Gun_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_FirstPersonShooter_Source_FirstPersonShooter_Public_Weapons_Gun_h_22_INCLASS_NO_PURE_DECLS \
	FID_FirstPersonShooter_Source_FirstPersonShooter_Public_Weapons_Gun_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTPERSONSHOOTER_API UClass* StaticClass<class AGun>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FirstPersonShooter_Source_FirstPersonShooter_Public_Weapons_Gun_h


#define FOREACH_ENUM_EGUNTYPE(op) \
	op(EGunType::Rifle) \
	op(EGunType::Pistol) 

enum class EGunType : uint8;
template<> FIRSTPERSONSHOOTER_API UEnum* StaticEnum<EGunType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
