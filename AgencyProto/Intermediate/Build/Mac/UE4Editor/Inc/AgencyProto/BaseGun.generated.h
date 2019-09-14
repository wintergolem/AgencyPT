// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AGENCYPROTO_BaseGun_generated_h
#error "BaseGun.generated.h already included, missing '#pragma once' in BaseGun.h"
#endif
#define AGENCYPROTO_BaseGun_generated_h

#define AgencyProto_Source_AgencyProto_BaseGun_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAmmoBagStruct_Statics; \
	AGENCYPROTO_API static class UScriptStruct* StaticStruct();


template<> AGENCYPROTO_API UScriptStruct* StaticStruct<struct FAmmoBagStruct>();

#define AgencyProto_Source_AgencyProto_BaseGun_h_27_RPC_WRAPPERS
#define AgencyProto_Source_AgencyProto_BaseGun_h_27_RPC_WRAPPERS_NO_PURE_DECLS
#define AgencyProto_Source_AgencyProto_BaseGun_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseGun(); \
	friend struct Z_Construct_UClass_UBaseGun_Statics; \
public: \
	DECLARE_CLASS(UBaseGun, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AgencyProto"), NO_API) \
	DECLARE_SERIALIZER(UBaseGun)


#define AgencyProto_Source_AgencyProto_BaseGun_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUBaseGun(); \
	friend struct Z_Construct_UClass_UBaseGun_Statics; \
public: \
	DECLARE_CLASS(UBaseGun, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AgencyProto"), NO_API) \
	DECLARE_SERIALIZER(UBaseGun)


#define AgencyProto_Source_AgencyProto_BaseGun_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseGun(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseGun) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseGun); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseGun); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseGun(UBaseGun&&); \
	NO_API UBaseGun(const UBaseGun&); \
public:


#define AgencyProto_Source_AgencyProto_BaseGun_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseGun(UBaseGun&&); \
	NO_API UBaseGun(const UBaseGun&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseGun); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseGun); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBaseGun)


#define AgencyProto_Source_AgencyProto_BaseGun_h_27_PRIVATE_PROPERTY_OFFSET
#define AgencyProto_Source_AgencyProto_BaseGun_h_24_PROLOG
#define AgencyProto_Source_AgencyProto_BaseGun_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AgencyProto_Source_AgencyProto_BaseGun_h_27_PRIVATE_PROPERTY_OFFSET \
	AgencyProto_Source_AgencyProto_BaseGun_h_27_RPC_WRAPPERS \
	AgencyProto_Source_AgencyProto_BaseGun_h_27_INCLASS \
	AgencyProto_Source_AgencyProto_BaseGun_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AgencyProto_Source_AgencyProto_BaseGun_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AgencyProto_Source_AgencyProto_BaseGun_h_27_PRIVATE_PROPERTY_OFFSET \
	AgencyProto_Source_AgencyProto_BaseGun_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	AgencyProto_Source_AgencyProto_BaseGun_h_27_INCLASS_NO_PURE_DECLS \
	AgencyProto_Source_AgencyProto_BaseGun_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AGENCYPROTO_API UClass* StaticClass<class UBaseGun>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AgencyProto_Source_AgencyProto_BaseGun_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
