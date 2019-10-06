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

#define AgencyProto_Source_AgencyProto_BaseGun_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FShotVariableWeighted_Statics; \
	AGENCYPROTO_API static class UScriptStruct* StaticStruct();


template<> AGENCYPROTO_API UScriptStruct* StaticStruct<struct FShotVariableWeighted>();

#define AgencyProto_Source_AgencyProto_BaseGun_h_31_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execReload) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Reload(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTriggerPull) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->TriggerPull(); \
		P_NATIVE_END; \
	}


#define AgencyProto_Source_AgencyProto_BaseGun_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execReload) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Reload(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTriggerPull) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->TriggerPull(); \
		P_NATIVE_END; \
	}


#define AgencyProto_Source_AgencyProto_BaseGun_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseGun(); \
	friend struct Z_Construct_UClass_ABaseGun_Statics; \
public: \
	DECLARE_CLASS(ABaseGun, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AgencyProto"), NO_API) \
	DECLARE_SERIALIZER(ABaseGun)


#define AgencyProto_Source_AgencyProto_BaseGun_h_31_INCLASS \
private: \
	static void StaticRegisterNativesABaseGun(); \
	friend struct Z_Construct_UClass_ABaseGun_Statics; \
public: \
	DECLARE_CLASS(ABaseGun, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AgencyProto"), NO_API) \
	DECLARE_SERIALIZER(ABaseGun)


#define AgencyProto_Source_AgencyProto_BaseGun_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseGun(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseGun) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseGun); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseGun); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseGun(ABaseGun&&); \
	NO_API ABaseGun(const ABaseGun&); \
public:


#define AgencyProto_Source_AgencyProto_BaseGun_h_31_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseGun(ABaseGun&&); \
	NO_API ABaseGun(const ABaseGun&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseGun); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseGun); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseGun)


#define AgencyProto_Source_AgencyProto_BaseGun_h_31_PRIVATE_PROPERTY_OFFSET
#define AgencyProto_Source_AgencyProto_BaseGun_h_28_PROLOG
#define AgencyProto_Source_AgencyProto_BaseGun_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AgencyProto_Source_AgencyProto_BaseGun_h_31_PRIVATE_PROPERTY_OFFSET \
	AgencyProto_Source_AgencyProto_BaseGun_h_31_RPC_WRAPPERS \
	AgencyProto_Source_AgencyProto_BaseGun_h_31_INCLASS \
	AgencyProto_Source_AgencyProto_BaseGun_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AgencyProto_Source_AgencyProto_BaseGun_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AgencyProto_Source_AgencyProto_BaseGun_h_31_PRIVATE_PROPERTY_OFFSET \
	AgencyProto_Source_AgencyProto_BaseGun_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	AgencyProto_Source_AgencyProto_BaseGun_h_31_INCLASS_NO_PURE_DECLS \
	AgencyProto_Source_AgencyProto_BaseGun_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AGENCYPROTO_API UClass* StaticClass<class ABaseGun>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AgencyProto_Source_AgencyProto_BaseGun_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
