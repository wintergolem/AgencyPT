// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
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
#ifdef AGENCYPROTO_HackableConsole_generated_h
#error "HackableConsole.generated.h already included, missing '#pragma once' in HackableConsole.h"
#endif
#define AGENCYPROTO_HackableConsole_generated_h

#define AgencyProto_Source_AgencyProto_HackableConsole_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapEndHackStart) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapEndHackStart(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapEndHackArea) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapEndHackArea(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapBeginHackArea) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBeginHackArea(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapBeginHackStart) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBeginHackStart(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define AgencyProto_Source_AgencyProto_HackableConsole_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapEndHackStart) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapEndHackStart(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapEndHackArea) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapEndHackArea(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapBeginHackArea) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBeginHackArea(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapBeginHackStart) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBeginHackStart(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define AgencyProto_Source_AgencyProto_HackableConsole_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHackableConsole(); \
	friend struct Z_Construct_UClass_AHackableConsole_Statics; \
public: \
	DECLARE_CLASS(AHackableConsole, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AgencyProto"), NO_API) \
	DECLARE_SERIALIZER(AHackableConsole)


#define AgencyProto_Source_AgencyProto_HackableConsole_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAHackableConsole(); \
	friend struct Z_Construct_UClass_AHackableConsole_Statics; \
public: \
	DECLARE_CLASS(AHackableConsole, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AgencyProto"), NO_API) \
	DECLARE_SERIALIZER(AHackableConsole)


#define AgencyProto_Source_AgencyProto_HackableConsole_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHackableConsole(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHackableConsole) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHackableConsole); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHackableConsole); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHackableConsole(AHackableConsole&&); \
	NO_API AHackableConsole(const AHackableConsole&); \
public:


#define AgencyProto_Source_AgencyProto_HackableConsole_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHackableConsole(AHackableConsole&&); \
	NO_API AHackableConsole(const AHackableConsole&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHackableConsole); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHackableConsole); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHackableConsole)


#define AgencyProto_Source_AgencyProto_HackableConsole_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HackStartTriggerVolume() { return STRUCT_OFFSET(AHackableConsole, HackStartTriggerVolume); } \
	FORCEINLINE static uint32 __PPO__HackAreaTriggerVolume() { return STRUCT_OFFSET(AHackableConsole, HackAreaTriggerVolume); }


#define AgencyProto_Source_AgencyProto_HackableConsole_h_11_PROLOG
#define AgencyProto_Source_AgencyProto_HackableConsole_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AgencyProto_Source_AgencyProto_HackableConsole_h_14_PRIVATE_PROPERTY_OFFSET \
	AgencyProto_Source_AgencyProto_HackableConsole_h_14_RPC_WRAPPERS \
	AgencyProto_Source_AgencyProto_HackableConsole_h_14_INCLASS \
	AgencyProto_Source_AgencyProto_HackableConsole_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AgencyProto_Source_AgencyProto_HackableConsole_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AgencyProto_Source_AgencyProto_HackableConsole_h_14_PRIVATE_PROPERTY_OFFSET \
	AgencyProto_Source_AgencyProto_HackableConsole_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	AgencyProto_Source_AgencyProto_HackableConsole_h_14_INCLASS_NO_PURE_DECLS \
	AgencyProto_Source_AgencyProto_HackableConsole_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AGENCYPROTO_API UClass* StaticClass<class AHackableConsole>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AgencyProto_Source_AgencyProto_HackableConsole_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
