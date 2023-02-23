// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleRTS/Public/RTS_Character_Additions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTS_Character_Additions() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	SIMPLERTS_API UClass* Z_Construct_UClass_ARTS_Character_Additions();
	SIMPLERTS_API UClass* Z_Construct_UClass_ARTS_Character_Additions_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SimpleRTS();
// End Cross Module References
	DEFINE_FUNCTION(ARTS_Character_Additions::execCheckAlive)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_health);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ARTS_Character_Additions::CheckAlive(Z_Param_health);
		P_NATIVE_END;
	}
	void ARTS_Character_Additions::StaticRegisterNativesARTS_Character_Additions()
	{
		UClass* Class = ARTS_Character_Additions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckAlive", &ARTS_Character_Additions::execCheckAlive },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARTS_Character_Additions_CheckAlive_Statics
	{
		struct RTS_Character_Additions_eventCheckAlive_Parms
		{
			int32 health;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_health;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ARTS_Character_Additions_CheckAlive_Statics::NewProp_health = { "health", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RTS_Character_Additions_eventCheckAlive_Parms, health), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ARTS_Character_Additions_CheckAlive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RTS_Character_Additions_eventCheckAlive_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARTS_Character_Additions_CheckAlive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RTS_Character_Additions_eventCheckAlive_Parms), &Z_Construct_UFunction_ARTS_Character_Additions_CheckAlive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTS_Character_Additions_CheckAlive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTS_Character_Additions_CheckAlive_Statics::NewProp_health,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTS_Character_Additions_CheckAlive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARTS_Character_Additions_CheckAlive_Statics::Function_MetaDataParams[] = {
		{ "Category", "RTS Code" },
		{ "ModuleRelativePath", "Public/RTS_Character_Additions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTS_Character_Additions_CheckAlive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARTS_Character_Additions, nullptr, "CheckAlive", nullptr, nullptr, sizeof(Z_Construct_UFunction_ARTS_Character_Additions_CheckAlive_Statics::RTS_Character_Additions_eventCheckAlive_Parms), Z_Construct_UFunction_ARTS_Character_Additions_CheckAlive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARTS_Character_Additions_CheckAlive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARTS_Character_Additions_CheckAlive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARTS_Character_Additions_CheckAlive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARTS_Character_Additions_CheckAlive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTS_Character_Additions_CheckAlive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARTS_Character_Additions);
	UClass* Z_Construct_UClass_ARTS_Character_Additions_NoRegister()
	{
		return ARTS_Character_Additions::StaticClass();
	}
	struct Z_Construct_UClass_ARTS_Character_Additions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnitName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UnitName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARTS_Character_Additions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleRTS,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARTS_Character_Additions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARTS_Character_Additions_CheckAlive, "CheckAlive" }, // 785523583
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTS_Character_Additions_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "RTS_Character_Additions.h" },
		{ "ModuleRelativePath", "Public/RTS_Character_Additions.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTS_Character_Additions_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "RTS Code" },
		{ "ModuleRelativePath", "Public/RTS_Character_Additions.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ARTS_Character_Additions_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARTS_Character_Additions, Health), METADATA_PARAMS(Z_Construct_UClass_ARTS_Character_Additions_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTS_Character_Additions_Statics::NewProp_Health_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTS_Character_Additions_Statics::NewProp_UnitName_MetaData[] = {
		{ "Category", "RTS Code" },
		{ "ModuleRelativePath", "Public/RTS_Character_Additions.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ARTS_Character_Additions_Statics::NewProp_UnitName = { "UnitName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARTS_Character_Additions, UnitName), METADATA_PARAMS(Z_Construct_UClass_ARTS_Character_Additions_Statics::NewProp_UnitName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTS_Character_Additions_Statics::NewProp_UnitName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTS_Character_Additions_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "RTS Code" },
		{ "ModuleRelativePath", "Public/RTS_Character_Additions.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ARTS_Character_Additions_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARTS_Character_Additions, Damage), METADATA_PARAMS(Z_Construct_UClass_ARTS_Character_Additions_Statics::NewProp_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTS_Character_Additions_Statics::NewProp_Damage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTS_Character_Additions_Statics::NewProp_AttackSpeed_MetaData[] = {
		{ "Category", "RTS Code" },
		{ "ModuleRelativePath", "Public/RTS_Character_Additions.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARTS_Character_Additions_Statics::NewProp_AttackSpeed = { "AttackSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARTS_Character_Additions, AttackSpeed), METADATA_PARAMS(Z_Construct_UClass_ARTS_Character_Additions_Statics::NewProp_AttackSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTS_Character_Additions_Statics::NewProp_AttackSpeed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARTS_Character_Additions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTS_Character_Additions_Statics::NewProp_Health,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTS_Character_Additions_Statics::NewProp_UnitName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTS_Character_Additions_Statics::NewProp_Damage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTS_Character_Additions_Statics::NewProp_AttackSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARTS_Character_Additions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARTS_Character_Additions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARTS_Character_Additions_Statics::ClassParams = {
		&ARTS_Character_Additions::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARTS_Character_Additions_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ARTS_Character_Additions_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARTS_Character_Additions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARTS_Character_Additions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARTS_Character_Additions()
	{
		if (!Z_Registration_Info_UClass_ARTS_Character_Additions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARTS_Character_Additions.OuterSingleton, Z_Construct_UClass_ARTS_Character_Additions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARTS_Character_Additions.OuterSingleton;
	}
	template<> SIMPLERTS_API UClass* StaticClass<ARTS_Character_Additions>()
	{
		return ARTS_Character_Additions::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARTS_Character_Additions);
	ARTS_Character_Additions::~ARTS_Character_Additions() {}
	struct Z_CompiledInDeferFile_FID_Users_mh_Documents_GitHub_RTS_like_SimpleRTS_Source_SimpleRTS_Public_RTS_Character_Additions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_mh_Documents_GitHub_RTS_like_SimpleRTS_Source_SimpleRTS_Public_RTS_Character_Additions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARTS_Character_Additions, ARTS_Character_Additions::StaticClass, TEXT("ARTS_Character_Additions"), &Z_Registration_Info_UClass_ARTS_Character_Additions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARTS_Character_Additions), 2411203693U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_mh_Documents_GitHub_RTS_like_SimpleRTS_Source_SimpleRTS_Public_RTS_Character_Additions_h_775075616(TEXT("/Script/SimpleRTS"),
		Z_CompiledInDeferFile_FID_Users_mh_Documents_GitHub_RTS_like_SimpleRTS_Source_SimpleRTS_Public_RTS_Character_Additions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_mh_Documents_GitHub_RTS_like_SimpleRTS_Source_SimpleRTS_Public_RTS_Character_Additions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
