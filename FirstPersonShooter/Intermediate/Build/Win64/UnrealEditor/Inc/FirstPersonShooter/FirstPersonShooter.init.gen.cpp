// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirstPersonShooter_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_FirstPersonShooter;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_FirstPersonShooter()
	{
		if (!Z_Registration_Info_UPackage__Script_FirstPersonShooter.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/FirstPersonShooter",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x5F256015,
				0x58C7EF6F,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_FirstPersonShooter.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_FirstPersonShooter.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_FirstPersonShooter(Z_Construct_UPackage__Script_FirstPersonShooter, TEXT("/Script/FirstPersonShooter"), Z_Registration_Info_UPackage__Script_FirstPersonShooter, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x5F256015, 0x58C7EF6F));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
