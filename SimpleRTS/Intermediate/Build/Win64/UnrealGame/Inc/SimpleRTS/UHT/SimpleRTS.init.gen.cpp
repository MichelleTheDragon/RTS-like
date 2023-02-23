// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleRTS_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SimpleRTS;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SimpleRTS()
	{
		if (!Z_Registration_Info_UPackage__Script_SimpleRTS.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/SimpleRTS",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x093D5022,
				0xBA5DEA50,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SimpleRTS.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_SimpleRTS.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SimpleRTS(Z_Construct_UPackage__Script_SimpleRTS, TEXT("/Script/SimpleRTS"), Z_Registration_Info_UPackage__Script_SimpleRTS, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x093D5022, 0xBA5DEA50));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
