// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleRTS/Public/TriggerColliders.h"
#include "Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerColliders() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	SIMPLERTS_API UClass* Z_Construct_UClass_ATriggerColliders();
	SIMPLERTS_API UClass* Z_Construct_UClass_ATriggerColliders_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SimpleRTS();
// End Cross Module References
	DEFINE_FUNCTION(ATriggerColliders::execOnOverlapEnd)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapEnd(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATriggerColliders::execOnOverlapBegin)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATriggerColliders::execChangeBoxSize)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_BoxWidth);
		P_GET_PROPERTY(FIntProperty,Z_Param_BoxDepth);
		P_GET_PROPERTY(FIntProperty,Z_Param_BoxHeight);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeBoxSize(Z_Param_BoxWidth,Z_Param_BoxDepth,Z_Param_BoxHeight);
		P_NATIVE_END;
	}
	void ATriggerColliders::StaticRegisterNativesATriggerColliders()
	{
		UClass* Class = ATriggerColliders::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeBoxSize", &ATriggerColliders::execChangeBoxSize },
			{ "OnOverlapBegin", &ATriggerColliders::execOnOverlapBegin },
			{ "OnOverlapEnd", &ATriggerColliders::execOnOverlapEnd },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATriggerColliders_ChangeBoxSize_Statics
	{
		struct TriggerColliders_eventChangeBoxSize_Parms
		{
			int32 BoxWidth;
			int32 BoxDepth;
			int32 BoxHeight;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_BoxWidth;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_BoxDepth;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_BoxHeight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ATriggerColliders_ChangeBoxSize_Statics::NewProp_BoxWidth = { "BoxWidth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TriggerColliders_eventChangeBoxSize_Parms, BoxWidth), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ATriggerColliders_ChangeBoxSize_Statics::NewProp_BoxDepth = { "BoxDepth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TriggerColliders_eventChangeBoxSize_Parms, BoxDepth), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ATriggerColliders_ChangeBoxSize_Statics::NewProp_BoxHeight = { "BoxHeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TriggerColliders_eventChangeBoxSize_Parms, BoxHeight), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATriggerColliders_ChangeBoxSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerColliders_ChangeBoxSize_Statics::NewProp_BoxWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerColliders_ChangeBoxSize_Statics::NewProp_BoxDepth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerColliders_ChangeBoxSize_Statics::NewProp_BoxHeight,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATriggerColliders_ChangeBoxSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "RTS Triggers" },
		{ "ModuleRelativePath", "Public/TriggerColliders.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATriggerColliders_ChangeBoxSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATriggerColliders, nullptr, "ChangeBoxSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATriggerColliders_ChangeBoxSize_Statics::TriggerColliders_eventChangeBoxSize_Parms), Z_Construct_UFunction_ATriggerColliders_ChangeBoxSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerColliders_ChangeBoxSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATriggerColliders_ChangeBoxSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerColliders_ChangeBoxSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATriggerColliders_ChangeBoxSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATriggerColliders_ChangeBoxSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATriggerColliders_OnOverlapBegin_Statics
	{
		struct TriggerColliders_eventOnOverlapBegin_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATriggerColliders_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATriggerColliders_OnOverlapBegin_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TriggerColliders_eventOnOverlapBegin_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATriggerColliders_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerColliders_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATriggerColliders_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TriggerColliders_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATriggerColliders_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATriggerColliders_OnOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TriggerColliders_eventOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATriggerColliders_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerColliders_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATriggerColliders_OnOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TriggerColliders_eventOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ATriggerColliders_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((TriggerColliders_eventOnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATriggerColliders_OnOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TriggerColliders_eventOnOverlapBegin_Parms), &Z_Construct_UFunction_ATriggerColliders_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATriggerColliders_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATriggerColliders_OnOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TriggerColliders_eventOnOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ATriggerColliders_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerColliders_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData)) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATriggerColliders_OnOverlapBegin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerColliders_OnOverlapBegin_Statics::NewProp_OverlappedComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerColliders_OnOverlapBegin_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerColliders_OnOverlapBegin_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerColliders_OnOverlapBegin_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerColliders_OnOverlapBegin_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerColliders_OnOverlapBegin_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATriggerColliders_OnOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "Category", "RTS Triggers" },
		{ "ModuleRelativePath", "Public/TriggerColliders.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATriggerColliders_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATriggerColliders, nullptr, "OnOverlapBegin", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATriggerColliders_OnOverlapBegin_Statics::TriggerColliders_eventOnOverlapBegin_Parms), Z_Construct_UFunction_ATriggerColliders_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerColliders_OnOverlapBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATriggerColliders_OnOverlapBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerColliders_OnOverlapBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATriggerColliders_OnOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATriggerColliders_OnOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATriggerColliders_OnOverlapEnd_Statics
	{
		struct TriggerColliders_eventOnOverlapEnd_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATriggerColliders_OnOverlapEnd_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATriggerColliders_OnOverlapEnd_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TriggerColliders_eventOnOverlapEnd_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATriggerColliders_OnOverlapEnd_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerColliders_OnOverlapEnd_Statics::NewProp_OverlappedComp_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATriggerColliders_OnOverlapEnd_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TriggerColliders_eventOnOverlapEnd_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATriggerColliders_OnOverlapEnd_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATriggerColliders_OnOverlapEnd_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TriggerColliders_eventOnOverlapEnd_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATriggerColliders_OnOverlapEnd_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerColliders_OnOverlapEnd_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATriggerColliders_OnOverlapEnd_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TriggerColliders_eventOnOverlapEnd_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATriggerColliders_OnOverlapEnd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerColliders_OnOverlapEnd_Statics::NewProp_OverlappedComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerColliders_OnOverlapEnd_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerColliders_OnOverlapEnd_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerColliders_OnOverlapEnd_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATriggerColliders_OnOverlapEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "RTS Triggers" },
		{ "ModuleRelativePath", "Public/TriggerColliders.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATriggerColliders_OnOverlapEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATriggerColliders, nullptr, "OnOverlapEnd", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATriggerColliders_OnOverlapEnd_Statics::TriggerColliders_eventOnOverlapEnd_Parms), Z_Construct_UFunction_ATriggerColliders_OnOverlapEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerColliders_OnOverlapEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATriggerColliders_OnOverlapEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerColliders_OnOverlapEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATriggerColliders_OnOverlapEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATriggerColliders_OnOverlapEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATriggerColliders);
	UClass* Z_Construct_UClass_ATriggerColliders_NoRegister()
	{
		return ATriggerColliders::StaticClass();
	}
	struct Z_Construct_UClass_ATriggerColliders_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Triggered_MetaData[];
#endif
		static void NewProp_Triggered_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Triggered;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Box_Width_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Box_Width;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Box_Depth_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Box_Depth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Box_Height_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Box_Height;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATriggerColliders_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleRTS,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATriggerColliders_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATriggerColliders_ChangeBoxSize, "ChangeBoxSize" }, // 2839223339
		{ &Z_Construct_UFunction_ATriggerColliders_OnOverlapBegin, "OnOverlapBegin" }, // 4102850829
		{ &Z_Construct_UFunction_ATriggerColliders_OnOverlapEnd, "OnOverlapEnd" }, // 3453962994
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerColliders_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TriggerColliders.h" },
		{ "ModuleRelativePath", "Public/TriggerColliders.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerColliders_Statics::NewProp_CollisionBox_MetaData[] = {
		{ "Category", "RTS Triggers" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TriggerColliders.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATriggerColliders_Statics::NewProp_CollisionBox = { "CollisionBox", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATriggerColliders, CollisionBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATriggerColliders_Statics::NewProp_CollisionBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerColliders_Statics::NewProp_CollisionBox_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerColliders_Statics::NewProp_Triggered_MetaData[] = {
		{ "Category", "RTS Triggers" },
		{ "ModuleRelativePath", "Public/TriggerColliders.h" },
	};
#endif
	void Z_Construct_UClass_ATriggerColliders_Statics::NewProp_Triggered_SetBit(void* Obj)
	{
		((ATriggerColliders*)Obj)->Triggered = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATriggerColliders_Statics::NewProp_Triggered = { "Triggered", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ATriggerColliders), &Z_Construct_UClass_ATriggerColliders_Statics::NewProp_Triggered_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATriggerColliders_Statics::NewProp_Triggered_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerColliders_Statics::NewProp_Triggered_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerColliders_Statics::NewProp_Box_Width_MetaData[] = {
		{ "Category", "RTS Triggers" },
		{ "ModuleRelativePath", "Public/TriggerColliders.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ATriggerColliders_Statics::NewProp_Box_Width = { "Box_Width", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATriggerColliders, Box_Width), METADATA_PARAMS(Z_Construct_UClass_ATriggerColliders_Statics::NewProp_Box_Width_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerColliders_Statics::NewProp_Box_Width_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerColliders_Statics::NewProp_Box_Depth_MetaData[] = {
		{ "Category", "RTS Triggers" },
		{ "ModuleRelativePath", "Public/TriggerColliders.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ATriggerColliders_Statics::NewProp_Box_Depth = { "Box_Depth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATriggerColliders, Box_Depth), METADATA_PARAMS(Z_Construct_UClass_ATriggerColliders_Statics::NewProp_Box_Depth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerColliders_Statics::NewProp_Box_Depth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerColliders_Statics::NewProp_Box_Height_MetaData[] = {
		{ "Category", "RTS Triggers" },
		{ "ModuleRelativePath", "Public/TriggerColliders.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ATriggerColliders_Statics::NewProp_Box_Height = { "Box_Height", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATriggerColliders, Box_Height), METADATA_PARAMS(Z_Construct_UClass_ATriggerColliders_Statics::NewProp_Box_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerColliders_Statics::NewProp_Box_Height_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATriggerColliders_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerColliders_Statics::NewProp_CollisionBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerColliders_Statics::NewProp_Triggered,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerColliders_Statics::NewProp_Box_Width,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerColliders_Statics::NewProp_Box_Depth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerColliders_Statics::NewProp_Box_Height,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATriggerColliders_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATriggerColliders>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATriggerColliders_Statics::ClassParams = {
		&ATriggerColliders::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATriggerColliders_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerColliders_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATriggerColliders_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerColliders_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATriggerColliders()
	{
		if (!Z_Registration_Info_UClass_ATriggerColliders.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATriggerColliders.OuterSingleton, Z_Construct_UClass_ATriggerColliders_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATriggerColliders.OuterSingleton;
	}
	template<> SIMPLERTS_API UClass* StaticClass<ATriggerColliders>()
	{
		return ATriggerColliders::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATriggerColliders);
	ATriggerColliders::~ATriggerColliders() {}
	struct Z_CompiledInDeferFile_FID_Users_mh_Documents_GitHub_RTS_like_SimpleRTS_Source_SimpleRTS_Public_TriggerColliders_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_mh_Documents_GitHub_RTS_like_SimpleRTS_Source_SimpleRTS_Public_TriggerColliders_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATriggerColliders, ATriggerColliders::StaticClass, TEXT("ATriggerColliders"), &Z_Registration_Info_UClass_ATriggerColliders, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATriggerColliders), 3069944567U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_mh_Documents_GitHub_RTS_like_SimpleRTS_Source_SimpleRTS_Public_TriggerColliders_h_3086371126(TEXT("/Script/SimpleRTS"),
		Z_CompiledInDeferFile_FID_Users_mh_Documents_GitHub_RTS_like_SimpleRTS_Source_SimpleRTS_Public_TriggerColliders_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_mh_Documents_GitHub_RTS_like_SimpleRTS_Source_SimpleRTS_Public_TriggerColliders_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
