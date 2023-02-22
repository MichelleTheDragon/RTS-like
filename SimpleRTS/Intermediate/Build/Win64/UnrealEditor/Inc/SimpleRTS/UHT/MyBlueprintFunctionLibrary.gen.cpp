// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleRTS/Public/MyBlueprintFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyBlueprintFunctionLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	SIMPLERTS_API UClass* Z_Construct_UClass_UMyBlueprintFunctionLibrary();
	SIMPLERTS_API UClass* Z_Construct_UClass_UMyBlueprintFunctionLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SimpleRTS();
// End Cross Module References
	void UMyBlueprintFunctionLibrary::StaticRegisterNativesUMyBlueprintFunctionLibrary()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyBlueprintFunctionLibrary);
	UClass* Z_Construct_UClass_UMyBlueprintFunctionLibrary_NoRegister()
	{
		return UMyBlueprintFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleRTS,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MyBlueprintFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/MyBlueprintFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyBlueprintFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::ClassParams = {
		&UMyBlueprintFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyBlueprintFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UMyBlueprintFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyBlueprintFunctionLibrary.OuterSingleton, Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMyBlueprintFunctionLibrary.OuterSingleton;
	}
	template<> SIMPLERTS_API UClass* StaticClass<UMyBlueprintFunctionLibrary>()
	{
		return UMyBlueprintFunctionLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyBlueprintFunctionLibrary);
	UMyBlueprintFunctionLibrary::~UMyBlueprintFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_Users_mh_Documents_GitHub_RTS_like_SimpleRTS_Source_SimpleRTS_Public_MyBlueprintFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_mh_Documents_GitHub_RTS_like_SimpleRTS_Source_SimpleRTS_Public_MyBlueprintFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMyBlueprintFunctionLibrary, UMyBlueprintFunctionLibrary::StaticClass, TEXT("UMyBlueprintFunctionLibrary"), &Z_Registration_Info_UClass_UMyBlueprintFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyBlueprintFunctionLibrary), 2675839405U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_mh_Documents_GitHub_RTS_like_SimpleRTS_Source_SimpleRTS_Public_MyBlueprintFunctionLibrary_h_2822437826(TEXT("/Script/SimpleRTS"),
		Z_CompiledInDeferFile_FID_Users_mh_Documents_GitHub_RTS_like_SimpleRTS_Source_SimpleRTS_Public_MyBlueprintFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_mh_Documents_GitHub_RTS_like_SimpleRTS_Source_SimpleRTS_Public_MyBlueprintFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
