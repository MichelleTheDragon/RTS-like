// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TriggerColliders.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef SIMPLERTS_TriggerColliders_generated_h
#error "TriggerColliders.generated.h already included, missing '#pragma once' in TriggerColliders.h"
#endif
#define SIMPLERTS_TriggerColliders_generated_h

#define FID_Users_mh_Documents_GitHub_RTS_like_SimpleRTS_Source_SimpleRTS_Public_TriggerColliders_h_12_SPARSE_DATA
#define FID_Users_mh_Documents_GitHub_RTS_like_SimpleRTS_Source_SimpleRTS_Public_TriggerColliders_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin); \
	DECLARE_FUNCTION(execChangeBoxSize);


#define FID_Users_mh_Documents_GitHub_RTS_like_SimpleRTS_Source_SimpleRTS_Public_TriggerColliders_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin); \
	DECLARE_FUNCTION(execChangeBoxSize);


#define FID_Users_mh_Documents_GitHub_RTS_like_SimpleRTS_Source_SimpleRTS_Public_TriggerColliders_h_12_ACCESSORS
#define FID_Users_mh_Documents_GitHub_RTS_like_SimpleRTS_Source_SimpleRTS_Public_TriggerColliders_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATriggerColliders(); \
	friend struct Z_Construct_UClass_ATriggerColliders_Statics; \
public: \
	DECLARE_CLASS(ATriggerColliders, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SimpleRTS"), NO_API) \
	DECLARE_SERIALIZER(ATriggerColliders)


#define FID_Users_mh_Documents_GitHub_RTS_like_SimpleRTS_Source_SimpleRTS_Public_TriggerColliders_h_12_INCLASS \
private: \
	static void StaticRegisterNativesATriggerColliders(); \
	friend struct Z_Construct_UClass_ATriggerColliders_Statics; \
public: \
	DECLARE_CLASS(ATriggerColliders, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SimpleRTS"), NO_API) \
	DECLARE_SERIALIZER(ATriggerColliders)


#define FID_Users_mh_Documents_GitHub_RTS_like_SimpleRTS_Source_SimpleRTS_Public_TriggerColliders_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATriggerColliders(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATriggerColliders) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATriggerColliders); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATriggerColliders); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATriggerColliders(ATriggerColliders&&); \
	NO_API ATriggerColliders(const ATriggerColliders&); \
public: \
	NO_API virtual ~ATriggerColliders();


#define FID_Users_mh_Documents_GitHub_RTS_like_SimpleRTS_Source_SimpleRTS_Public_TriggerColliders_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATriggerColliders(ATriggerColliders&&); \
	NO_API ATriggerColliders(const ATriggerColliders&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATriggerColliders); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATriggerColliders); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATriggerColliders) \
	NO_API virtual ~ATriggerColliders();


#define FID_Users_mh_Documents_GitHub_RTS_like_SimpleRTS_Source_SimpleRTS_Public_TriggerColliders_h_9_PROLOG
#define FID_Users_mh_Documents_GitHub_RTS_like_SimpleRTS_Source_SimpleRTS_Public_TriggerColliders_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_mh_Documents_GitHub_RTS_like_SimpleRTS_Source_SimpleRTS_Public_TriggerColliders_h_12_SPARSE_DATA \
	FID_Users_mh_Documents_GitHub_RTS_like_SimpleRTS_Source_SimpleRTS_Public_TriggerColliders_h_12_RPC_WRAPPERS \
	FID_Users_mh_Documents_GitHub_RTS_like_SimpleRTS_Source_SimpleRTS_Public_TriggerColliders_h_12_ACCESSORS \
	FID_Users_mh_Documents_GitHub_RTS_like_SimpleRTS_Source_SimpleRTS_Public_TriggerColliders_h_12_INCLASS \
	FID_Users_mh_Documents_GitHub_RTS_like_SimpleRTS_Source_SimpleRTS_Public_TriggerColliders_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_mh_Documents_GitHub_RTS_like_SimpleRTS_Source_SimpleRTS_Public_TriggerColliders_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_mh_Documents_GitHub_RTS_like_SimpleRTS_Source_SimpleRTS_Public_TriggerColliders_h_12_SPARSE_DATA \
	FID_Users_mh_Documents_GitHub_RTS_like_SimpleRTS_Source_SimpleRTS_Public_TriggerColliders_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_mh_Documents_GitHub_RTS_like_SimpleRTS_Source_SimpleRTS_Public_TriggerColliders_h_12_ACCESSORS \
	FID_Users_mh_Documents_GitHub_RTS_like_SimpleRTS_Source_SimpleRTS_Public_TriggerColliders_h_12_INCLASS_NO_PURE_DECLS \
	FID_Users_mh_Documents_GitHub_RTS_like_SimpleRTS_Source_SimpleRTS_Public_TriggerColliders_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIMPLERTS_API UClass* StaticClass<class ATriggerColliders>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_mh_Documents_GitHub_RTS_like_SimpleRTS_Source_SimpleRTS_Public_TriggerColliders_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
