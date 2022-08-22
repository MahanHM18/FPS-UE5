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
#ifdef FIRSTPERSONSHOOTER_Enemy_generated_h
#error "Enemy.generated.h already included, missing '#pragma once' in Enemy.h"
#endif
#define FIRSTPERSONSHOOTER_Enemy_generated_h

#define FID_FirstPersonShooter_Source_FirstPersonShooter_Public_Enemy_Enemy_h_22_SPARSE_DATA
#define FID_FirstPersonShooter_Source_FirstPersonShooter_Public_Enemy_Enemy_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDecreaseDamage); \
	DECLARE_FUNCTION(execOnCombatOverlapEnd); \
	DECLARE_FUNCTION(execOnCombatOverlapBegin); \
	DECLARE_FUNCTION(execOnAgroOverlapEnd); \
	DECLARE_FUNCTION(execOnAgroOverlapBegin); \
	DECLARE_FUNCTION(execGetEnemyHealth);


#define FID_FirstPersonShooter_Source_FirstPersonShooter_Public_Enemy_Enemy_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDecreaseDamage); \
	DECLARE_FUNCTION(execOnCombatOverlapEnd); \
	DECLARE_FUNCTION(execOnCombatOverlapBegin); \
	DECLARE_FUNCTION(execOnAgroOverlapEnd); \
	DECLARE_FUNCTION(execOnAgroOverlapBegin); \
	DECLARE_FUNCTION(execGetEnemyHealth);


#define FID_FirstPersonShooter_Source_FirstPersonShooter_Public_Enemy_Enemy_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemy(); \
	friend struct Z_Construct_UClass_AEnemy_Statics; \
public: \
	DECLARE_CLASS(AEnemy, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstPersonShooter"), NO_API) \
	DECLARE_SERIALIZER(AEnemy)


#define FID_FirstPersonShooter_Source_FirstPersonShooter_Public_Enemy_Enemy_h_22_INCLASS \
private: \
	static void StaticRegisterNativesAEnemy(); \
	friend struct Z_Construct_UClass_AEnemy_Statics; \
public: \
	DECLARE_CLASS(AEnemy, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstPersonShooter"), NO_API) \
	DECLARE_SERIALIZER(AEnemy)


#define FID_FirstPersonShooter_Source_FirstPersonShooter_Public_Enemy_Enemy_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemy(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemy(AEnemy&&); \
	NO_API AEnemy(const AEnemy&); \
public:


#define FID_FirstPersonShooter_Source_FirstPersonShooter_Public_Enemy_Enemy_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemy(AEnemy&&); \
	NO_API AEnemy(const AEnemy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemy)


#define FID_FirstPersonShooter_Source_FirstPersonShooter_Public_Enemy_Enemy_h_19_PROLOG
#define FID_FirstPersonShooter_Source_FirstPersonShooter_Public_Enemy_Enemy_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FirstPersonShooter_Source_FirstPersonShooter_Public_Enemy_Enemy_h_22_SPARSE_DATA \
	FID_FirstPersonShooter_Source_FirstPersonShooter_Public_Enemy_Enemy_h_22_RPC_WRAPPERS \
	FID_FirstPersonShooter_Source_FirstPersonShooter_Public_Enemy_Enemy_h_22_INCLASS \
	FID_FirstPersonShooter_Source_FirstPersonShooter_Public_Enemy_Enemy_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_FirstPersonShooter_Source_FirstPersonShooter_Public_Enemy_Enemy_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FirstPersonShooter_Source_FirstPersonShooter_Public_Enemy_Enemy_h_22_SPARSE_DATA \
	FID_FirstPersonShooter_Source_FirstPersonShooter_Public_Enemy_Enemy_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_FirstPersonShooter_Source_FirstPersonShooter_Public_Enemy_Enemy_h_22_INCLASS_NO_PURE_DECLS \
	FID_FirstPersonShooter_Source_FirstPersonShooter_Public_Enemy_Enemy_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTPERSONSHOOTER_API UClass* StaticClass<class AEnemy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FirstPersonShooter_Source_FirstPersonShooter_Public_Enemy_Enemy_h


#define FOREACH_ENUM_EENEMYMOVEMENTSTATUS(op) \
	op(EEnemyMovementStatus::EMS_Idle) \
	op(EEnemyMovementStatus::EMS_Chase) \
	op(EEnemyMovementStatus::EMS_Attack) 

enum class EEnemyMovementStatus : uint8;
template<> FIRSTPERSONSHOOTER_API UEnum* StaticEnum<EEnemyMovementStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
