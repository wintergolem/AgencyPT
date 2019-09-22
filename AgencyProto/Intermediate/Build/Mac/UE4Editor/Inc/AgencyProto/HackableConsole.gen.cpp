// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AgencyProto/HackableConsole.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHackableConsole() {}
// Cross Module References
	AGENCYPROTO_API UClass* Z_Construct_UClass_AHackableConsole_NoRegister();
	AGENCYPROTO_API UClass* Z_Construct_UClass_AHackableConsole();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_AgencyProto();
	AGENCYPROTO_API UFunction* Z_Construct_UFunction_AHackableConsole_OnOverlapBeginHackArea();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AGENCYPROTO_API UFunction* Z_Construct_UFunction_AHackableConsole_OnOverlapBeginHackStart();
	AGENCYPROTO_API UFunction* Z_Construct_UFunction_AHackableConsole_OnOverlapEndHackArea();
	AGENCYPROTO_API UFunction* Z_Construct_UFunction_AHackableConsole_OnOverlapEndHackStart();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	void AHackableConsole::StaticRegisterNativesAHackableConsole()
	{
		UClass* Class = AHackableConsole::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnOverlapBeginHackArea", &AHackableConsole::execOnOverlapBeginHackArea },
			{ "OnOverlapBeginHackStart", &AHackableConsole::execOnOverlapBeginHackStart },
			{ "OnOverlapEndHackArea", &AHackableConsole::execOnOverlapEndHackArea },
			{ "OnOverlapEndHackStart", &AHackableConsole::execOnOverlapEndHackStart },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AHackableConsole_OnOverlapBeginHackArea_Statics
	{
		struct HackableConsole_eventOnOverlapBeginHackArea_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHackableConsole_OnOverlapBeginHackArea_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHackableConsole_OnOverlapBeginHackArea_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HackableConsole_eventOnOverlapBeginHackArea_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AHackableConsole_OnOverlapBeginHackArea_Statics::NewProp_SweepResult_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AHackableConsole_OnOverlapBeginHackArea_Statics::NewProp_SweepResult_MetaData)) };
	void Z_Construct_UFunction_AHackableConsole_OnOverlapBeginHackArea_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((HackableConsole_eventOnOverlapBeginHackArea_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AHackableConsole_OnOverlapBeginHackArea_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HackableConsole_eventOnOverlapBeginHackArea_Parms), &Z_Construct_UFunction_AHackableConsole_OnOverlapBeginHackArea_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AHackableConsole_OnOverlapBeginHackArea_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HackableConsole_eventOnOverlapBeginHackArea_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHackableConsole_OnOverlapBeginHackArea_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHackableConsole_OnOverlapBeginHackArea_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HackableConsole_eventOnOverlapBeginHackArea_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AHackableConsole_OnOverlapBeginHackArea_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AHackableConsole_OnOverlapBeginHackArea_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHackableConsole_OnOverlapBeginHackArea_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HackableConsole_eventOnOverlapBeginHackArea_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHackableConsole_OnOverlapBeginHackArea_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHackableConsole_OnOverlapBeginHackArea_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HackableConsole_eventOnOverlapBeginHackArea_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AHackableConsole_OnOverlapBeginHackArea_Statics::NewProp_OverlappedComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AHackableConsole_OnOverlapBeginHackArea_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHackableConsole_OnOverlapBeginHackArea_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHackableConsole_OnOverlapBeginHackArea_Statics::NewProp_SweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHackableConsole_OnOverlapBeginHackArea_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHackableConsole_OnOverlapBeginHackArea_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHackableConsole_OnOverlapBeginHackArea_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHackableConsole_OnOverlapBeginHackArea_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHackableConsole_OnOverlapBeginHackArea_Statics::NewProp_OverlappedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHackableConsole_OnOverlapBeginHackArea_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HackableConsole.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHackableConsole_OnOverlapBeginHackArea_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHackableConsole, nullptr, "OnOverlapBeginHackArea", nullptr, nullptr, sizeof(HackableConsole_eventOnOverlapBeginHackArea_Parms), Z_Construct_UFunction_AHackableConsole_OnOverlapBeginHackArea_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AHackableConsole_OnOverlapBeginHackArea_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHackableConsole_OnOverlapBeginHackArea_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AHackableConsole_OnOverlapBeginHackArea_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHackableConsole_OnOverlapBeginHackArea()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHackableConsole_OnOverlapBeginHackArea_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHackableConsole_OnOverlapBeginHackStart_Statics
	{
		struct HackableConsole_eventOnOverlapBeginHackStart_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHackableConsole_OnOverlapBeginHackStart_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHackableConsole_OnOverlapBeginHackStart_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HackableConsole_eventOnOverlapBeginHackStart_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AHackableConsole_OnOverlapBeginHackStart_Statics::NewProp_SweepResult_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AHackableConsole_OnOverlapBeginHackStart_Statics::NewProp_SweepResult_MetaData)) };
	void Z_Construct_UFunction_AHackableConsole_OnOverlapBeginHackStart_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((HackableConsole_eventOnOverlapBeginHackStart_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AHackableConsole_OnOverlapBeginHackStart_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HackableConsole_eventOnOverlapBeginHackStart_Parms), &Z_Construct_UFunction_AHackableConsole_OnOverlapBeginHackStart_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AHackableConsole_OnOverlapBeginHackStart_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HackableConsole_eventOnOverlapBeginHackStart_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHackableConsole_OnOverlapBeginHackStart_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHackableConsole_OnOverlapBeginHackStart_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HackableConsole_eventOnOverlapBeginHackStart_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AHackableConsole_OnOverlapBeginHackStart_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AHackableConsole_OnOverlapBeginHackStart_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHackableConsole_OnOverlapBeginHackStart_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HackableConsole_eventOnOverlapBeginHackStart_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHackableConsole_OnOverlapBeginHackStart_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHackableConsole_OnOverlapBeginHackStart_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HackableConsole_eventOnOverlapBeginHackStart_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AHackableConsole_OnOverlapBeginHackStart_Statics::NewProp_OverlappedComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AHackableConsole_OnOverlapBeginHackStart_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHackableConsole_OnOverlapBeginHackStart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHackableConsole_OnOverlapBeginHackStart_Statics::NewProp_SweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHackableConsole_OnOverlapBeginHackStart_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHackableConsole_OnOverlapBeginHackStart_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHackableConsole_OnOverlapBeginHackStart_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHackableConsole_OnOverlapBeginHackStart_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHackableConsole_OnOverlapBeginHackStart_Statics::NewProp_OverlappedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHackableConsole_OnOverlapBeginHackStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HackableConsole.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHackableConsole_OnOverlapBeginHackStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHackableConsole, nullptr, "OnOverlapBeginHackStart", nullptr, nullptr, sizeof(HackableConsole_eventOnOverlapBeginHackStart_Parms), Z_Construct_UFunction_AHackableConsole_OnOverlapBeginHackStart_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AHackableConsole_OnOverlapBeginHackStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHackableConsole_OnOverlapBeginHackStart_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AHackableConsole_OnOverlapBeginHackStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHackableConsole_OnOverlapBeginHackStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHackableConsole_OnOverlapBeginHackStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHackableConsole_OnOverlapEndHackArea_Statics
	{
		struct HackableConsole_eventOnOverlapEndHackArea_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AHackableConsole_OnOverlapEndHackArea_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HackableConsole_eventOnOverlapEndHackArea_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHackableConsole_OnOverlapEndHackArea_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHackableConsole_OnOverlapEndHackArea_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HackableConsole_eventOnOverlapEndHackArea_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AHackableConsole_OnOverlapEndHackArea_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AHackableConsole_OnOverlapEndHackArea_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHackableConsole_OnOverlapEndHackArea_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HackableConsole_eventOnOverlapEndHackArea_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHackableConsole_OnOverlapEndHackArea_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHackableConsole_OnOverlapEndHackArea_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HackableConsole_eventOnOverlapEndHackArea_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AHackableConsole_OnOverlapEndHackArea_Statics::NewProp_OverlappedComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AHackableConsole_OnOverlapEndHackArea_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHackableConsole_OnOverlapEndHackArea_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHackableConsole_OnOverlapEndHackArea_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHackableConsole_OnOverlapEndHackArea_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHackableConsole_OnOverlapEndHackArea_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHackableConsole_OnOverlapEndHackArea_Statics::NewProp_OverlappedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHackableConsole_OnOverlapEndHackArea_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HackableConsole.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHackableConsole_OnOverlapEndHackArea_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHackableConsole, nullptr, "OnOverlapEndHackArea", nullptr, nullptr, sizeof(HackableConsole_eventOnOverlapEndHackArea_Parms), Z_Construct_UFunction_AHackableConsole_OnOverlapEndHackArea_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AHackableConsole_OnOverlapEndHackArea_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHackableConsole_OnOverlapEndHackArea_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AHackableConsole_OnOverlapEndHackArea_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHackableConsole_OnOverlapEndHackArea()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHackableConsole_OnOverlapEndHackArea_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHackableConsole_OnOverlapEndHackStart_Statics
	{
		struct HackableConsole_eventOnOverlapEndHackStart_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AHackableConsole_OnOverlapEndHackStart_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HackableConsole_eventOnOverlapEndHackStart_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHackableConsole_OnOverlapEndHackStart_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHackableConsole_OnOverlapEndHackStart_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HackableConsole_eventOnOverlapEndHackStart_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AHackableConsole_OnOverlapEndHackStart_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AHackableConsole_OnOverlapEndHackStart_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHackableConsole_OnOverlapEndHackStart_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HackableConsole_eventOnOverlapEndHackStart_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHackableConsole_OnOverlapEndHackStart_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHackableConsole_OnOverlapEndHackStart_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HackableConsole_eventOnOverlapEndHackStart_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AHackableConsole_OnOverlapEndHackStart_Statics::NewProp_OverlappedComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AHackableConsole_OnOverlapEndHackStart_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHackableConsole_OnOverlapEndHackStart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHackableConsole_OnOverlapEndHackStart_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHackableConsole_OnOverlapEndHackStart_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHackableConsole_OnOverlapEndHackStart_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHackableConsole_OnOverlapEndHackStart_Statics::NewProp_OverlappedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHackableConsole_OnOverlapEndHackStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HackableConsole.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHackableConsole_OnOverlapEndHackStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHackableConsole, nullptr, "OnOverlapEndHackStart", nullptr, nullptr, sizeof(HackableConsole_eventOnOverlapEndHackStart_Parms), Z_Construct_UFunction_AHackableConsole_OnOverlapEndHackStart_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AHackableConsole_OnOverlapEndHackStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHackableConsole_OnOverlapEndHackStart_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AHackableConsole_OnOverlapEndHackStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHackableConsole_OnOverlapEndHackStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHackableConsole_OnOverlapEndHackStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AHackableConsole_NoRegister()
	{
		return AHackableConsole::StaticClass();
	}
	struct Z_Construct_UClass_AHackableConsole_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HackAreaTriggerVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HackAreaTriggerVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HackStartTriggerVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HackStartTriggerVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HackCompleted_MetaData[];
#endif
		static void NewProp_HackCompleted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HackCompleted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HackActive_MetaData[];
#endif
		static void NewProp_HackActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HackActive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HackStarted_MetaData[];
#endif
		static void NewProp_HackStarted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HackStarted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractintText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InteractintText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InteractText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HackTimePercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HackTimePercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalHackTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TotalHackTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHackableConsole_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AgencyProto,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AHackableConsole_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AHackableConsole_OnOverlapBeginHackArea, "OnOverlapBeginHackArea" }, // 3591026784
		{ &Z_Construct_UFunction_AHackableConsole_OnOverlapBeginHackStart, "OnOverlapBeginHackStart" }, // 1414818661
		{ &Z_Construct_UFunction_AHackableConsole_OnOverlapEndHackArea, "OnOverlapEndHackArea" }, // 2699023004
		{ &Z_Construct_UFunction_AHackableConsole_OnOverlapEndHackStart, "OnOverlapEndHackStart" }, // 3186458141
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHackableConsole_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HackableConsole.h" },
		{ "ModuleRelativePath", "HackableConsole.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHackableConsole_Statics::NewProp_HackAreaTriggerVolume_MetaData[] = {
		{ "Category", "HackableConsole" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HackableConsole.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHackableConsole_Statics::NewProp_HackAreaTriggerVolume = { "HackAreaTriggerVolume", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHackableConsole, HackAreaTriggerVolume), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHackableConsole_Statics::NewProp_HackAreaTriggerVolume_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHackableConsole_Statics::NewProp_HackAreaTriggerVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHackableConsole_Statics::NewProp_HackStartTriggerVolume_MetaData[] = {
		{ "Category", "HackableConsole" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HackableConsole.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHackableConsole_Statics::NewProp_HackStartTriggerVolume = { "HackStartTriggerVolume", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHackableConsole, HackStartTriggerVolume), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHackableConsole_Statics::NewProp_HackStartTriggerVolume_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHackableConsole_Statics::NewProp_HackStartTriggerVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHackableConsole_Statics::NewProp_HackCompleted_MetaData[] = {
		{ "Category", "HackableConsole" },
		{ "Comment", "//a player is range to continue hack progress\n" },
		{ "ModuleRelativePath", "HackableConsole.h" },
		{ "ToolTip", "a player is range to continue hack progress" },
	};
#endif
	void Z_Construct_UClass_AHackableConsole_Statics::NewProp_HackCompleted_SetBit(void* Obj)
	{
		((AHackableConsole*)Obj)->HackCompleted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHackableConsole_Statics::NewProp_HackCompleted = { "HackCompleted", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AHackableConsole), &Z_Construct_UClass_AHackableConsole_Statics::NewProp_HackCompleted_SetBit, METADATA_PARAMS(Z_Construct_UClass_AHackableConsole_Statics::NewProp_HackCompleted_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHackableConsole_Statics::NewProp_HackCompleted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHackableConsole_Statics::NewProp_HackActive_MetaData[] = {
		{ "Category", "HackableConsole" },
		{ "Comment", "//hack has been started\n" },
		{ "ModuleRelativePath", "HackableConsole.h" },
		{ "ToolTip", "hack has been started" },
	};
#endif
	void Z_Construct_UClass_AHackableConsole_Statics::NewProp_HackActive_SetBit(void* Obj)
	{
		((AHackableConsole*)Obj)->HackActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHackableConsole_Statics::NewProp_HackActive = { "HackActive", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AHackableConsole), &Z_Construct_UClass_AHackableConsole_Statics::NewProp_HackActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_AHackableConsole_Statics::NewProp_HackActive_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHackableConsole_Statics::NewProp_HackActive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHackableConsole_Statics::NewProp_HackStarted_MetaData[] = {
		{ "Category", "HackableConsole" },
		{ "ModuleRelativePath", "HackableConsole.h" },
	};
#endif
	void Z_Construct_UClass_AHackableConsole_Statics::NewProp_HackStarted_SetBit(void* Obj)
	{
		((AHackableConsole*)Obj)->HackStarted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHackableConsole_Statics::NewProp_HackStarted = { "HackStarted", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AHackableConsole), &Z_Construct_UClass_AHackableConsole_Statics::NewProp_HackStarted_SetBit, METADATA_PARAMS(Z_Construct_UClass_AHackableConsole_Statics::NewProp_HackStarted_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHackableConsole_Statics::NewProp_HackStarted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHackableConsole_Statics::NewProp_InteractintText_MetaData[] = {
		{ "Category", "HackableConsole" },
		{ "ModuleRelativePath", "HackableConsole.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AHackableConsole_Statics::NewProp_InteractintText = { "InteractintText", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHackableConsole, InteractintText), METADATA_PARAMS(Z_Construct_UClass_AHackableConsole_Statics::NewProp_InteractintText_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHackableConsole_Statics::NewProp_InteractintText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHackableConsole_Statics::NewProp_InteractText_MetaData[] = {
		{ "Category", "HackableConsole" },
		{ "ModuleRelativePath", "HackableConsole.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AHackableConsole_Statics::NewProp_InteractText = { "InteractText", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHackableConsole, InteractText), METADATA_PARAMS(Z_Construct_UClass_AHackableConsole_Statics::NewProp_InteractText_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHackableConsole_Statics::NewProp_InteractText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHackableConsole_Statics::NewProp_HackTimePercentage_MetaData[] = {
		{ "Category", "HackableConsole" },
		{ "ModuleRelativePath", "HackableConsole.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHackableConsole_Statics::NewProp_HackTimePercentage = { "HackTimePercentage", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHackableConsole, HackTimePercentage), METADATA_PARAMS(Z_Construct_UClass_AHackableConsole_Statics::NewProp_HackTimePercentage_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHackableConsole_Statics::NewProp_HackTimePercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHackableConsole_Statics::NewProp_TotalHackTime_MetaData[] = {
		{ "Category", "HackableConsole" },
		{ "ModuleRelativePath", "HackableConsole.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHackableConsole_Statics::NewProp_TotalHackTime = { "TotalHackTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHackableConsole, TotalHackTime), METADATA_PARAMS(Z_Construct_UClass_AHackableConsole_Statics::NewProp_TotalHackTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHackableConsole_Statics::NewProp_TotalHackTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHackableConsole_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHackableConsole_Statics::NewProp_HackAreaTriggerVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHackableConsole_Statics::NewProp_HackStartTriggerVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHackableConsole_Statics::NewProp_HackCompleted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHackableConsole_Statics::NewProp_HackActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHackableConsole_Statics::NewProp_HackStarted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHackableConsole_Statics::NewProp_InteractintText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHackableConsole_Statics::NewProp_InteractText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHackableConsole_Statics::NewProp_HackTimePercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHackableConsole_Statics::NewProp_TotalHackTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHackableConsole_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHackableConsole>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHackableConsole_Statics::ClassParams = {
		&AHackableConsole::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AHackableConsole_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AHackableConsole_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AHackableConsole_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AHackableConsole_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHackableConsole()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHackableConsole_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHackableConsole, 3210444120);
	template<> AGENCYPROTO_API UClass* StaticClass<AHackableConsole>()
	{
		return AHackableConsole::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHackableConsole(Z_Construct_UClass_AHackableConsole, &AHackableConsole::StaticClass, TEXT("/Script/AgencyProto"), TEXT("AHackableConsole"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHackableConsole);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
