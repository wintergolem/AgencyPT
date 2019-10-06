// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AgencyProto/BaseGun.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseGun() {}
// Cross Module References
	AGENCYPROTO_API UScriptStruct* Z_Construct_UScriptStruct_FShotVariableWeighted();
	UPackage* Z_Construct_UPackage__Script_AgencyProto();
	AGENCYPROTO_API UClass* Z_Construct_UClass_ABaseGun_NoRegister();
	AGENCYPROTO_API UClass* Z_Construct_UClass_ABaseGun();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	AGENCYPROTO_API UFunction* Z_Construct_UFunction_ABaseGun_Reload();
	AGENCYPROTO_API UFunction* Z_Construct_UFunction_ABaseGun_TriggerPull();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FShotVariableWeighted::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AGENCYPROTO_API uint32 Get_Z_Construct_UScriptStruct_FShotVariableWeighted_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FShotVariableWeighted, Z_Construct_UPackage__Script_AgencyProto(), TEXT("ShotVariableWeighted"), sizeof(FShotVariableWeighted), Get_Z_Construct_UScriptStruct_FShotVariableWeighted_Hash());
	}
	return Singleton;
}
template<> AGENCYPROTO_API UScriptStruct* StaticStruct<FShotVariableWeighted>()
{
	return FShotVariableWeighted::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FShotVariableWeighted(FShotVariableWeighted::StaticStruct, TEXT("/Script/AgencyProto"), TEXT("ShotVariableWeighted"), false, nullptr, nullptr);
static struct FScriptStruct_AgencyProto_StaticRegisterNativesFShotVariableWeighted
{
	FScriptStruct_AgencyProto_StaticRegisterNativesFShotVariableWeighted()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ShotVariableWeighted")),new UScriptStruct::TCppStructOps<FShotVariableWeighted>);
	}
} ScriptStruct_AgencyProto_StaticRegisterNativesFShotVariableWeighted;
	struct Z_Construct_UScriptStruct_FShotVariableWeighted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Distance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Weight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShotVariableWeighted_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "BaseGun.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FShotVariableWeighted_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FShotVariableWeighted>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShotVariableWeighted_Statics::NewProp_Distance_MetaData[] = {
		{ "Category", "ShotVariableWeighted" },
		{ "ModuleRelativePath", "BaseGun.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FShotVariableWeighted_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FShotVariableWeighted, Distance), METADATA_PARAMS(Z_Construct_UScriptStruct_FShotVariableWeighted_Statics::NewProp_Distance_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FShotVariableWeighted_Statics::NewProp_Distance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShotVariableWeighted_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "ShotVariableWeighted" },
		{ "ModuleRelativePath", "BaseGun.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FShotVariableWeighted_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FShotVariableWeighted, Weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FShotVariableWeighted_Statics::NewProp_Weight_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FShotVariableWeighted_Statics::NewProp_Weight_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FShotVariableWeighted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShotVariableWeighted_Statics::NewProp_Distance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShotVariableWeighted_Statics::NewProp_Weight,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FShotVariableWeighted_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AgencyProto,
		nullptr,
		&NewStructOps,
		"ShotVariableWeighted",
		sizeof(FShotVariableWeighted),
		alignof(FShotVariableWeighted),
		Z_Construct_UScriptStruct_FShotVariableWeighted_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FShotVariableWeighted_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FShotVariableWeighted_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FShotVariableWeighted_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FShotVariableWeighted()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FShotVariableWeighted_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AgencyProto();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ShotVariableWeighted"), sizeof(FShotVariableWeighted), Get_Z_Construct_UScriptStruct_FShotVariableWeighted_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FShotVariableWeighted_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FShotVariableWeighted_Hash() { return 1916857306U; }
	void ABaseGun::StaticRegisterNativesABaseGun()
	{
		UClass* Class = ABaseGun::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Reload", &ABaseGun::execReload },
			{ "TriggerPull", &ABaseGun::execTriggerPull },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABaseGun_Reload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseGun_Reload_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BaseGun.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseGun_Reload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseGun, nullptr, "Reload", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseGun_Reload_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABaseGun_Reload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseGun_Reload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseGun_Reload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseGun_TriggerPull_Statics
	{
		struct BaseGun_eventTriggerPull_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ABaseGun_TriggerPull_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BaseGun_eventTriggerPull_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABaseGun_TriggerPull_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseGun_eventTriggerPull_Parms), &Z_Construct_UFunction_ABaseGun_TriggerPull_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseGun_TriggerPull_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseGun_TriggerPull_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseGun_TriggerPull_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BaseGun.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseGun_TriggerPull_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseGun, nullptr, "TriggerPull", nullptr, nullptr, sizeof(BaseGun_eventTriggerPull_Parms), Z_Construct_UFunction_ABaseGun_TriggerPull_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ABaseGun_TriggerPull_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseGun_TriggerPull_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABaseGun_TriggerPull_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseGun_TriggerPull()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseGun_TriggerPull_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABaseGun_NoRegister()
	{
		return ABaseGun::StaticClass();
	}
	struct Z_Construct_UClass_ABaseGun_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ADSActive_MetaData[];
#endif
		static void NewProp_ADSActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ADSActive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShotVariableWeights_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ShotVariableWeights;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShotVariableWeights_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShotVariableDistances_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ShotVariableDistances;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShotVariableDistances_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmmoTotalCanCarry_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AmmoTotalCanCarry;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmmoTotalCarried_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AmmoTotalCarried;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmmoClipCurrent_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AmmoClipCurrent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmmoClipSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AmmoClipSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReloadTimeInSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReloadTimeInSeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BulletsPerTriggerPull_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BulletsPerTriggerPull;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BulletsPerSecond_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BulletsPerSecond;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamagePerBullet_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamagePerBullet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GunName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GunName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FP_Gun_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FP_Gun;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GunMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GunMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Camera;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseGun_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AgencyProto,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABaseGun_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABaseGun_Reload, "Reload" }, // 2858917005
		{ &Z_Construct_UFunction_ABaseGun_TriggerPull, "TriggerPull" }, // 1168152204
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGun_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "BaseGun.h" },
		{ "ModuleRelativePath", "BaseGun.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGun_Statics::NewProp_ADSActive_MetaData[] = {
		{ "Category", "BaseGun" },
		{ "ModuleRelativePath", "BaseGun.h" },
	};
#endif
	void Z_Construct_UClass_ABaseGun_Statics::NewProp_ADSActive_SetBit(void* Obj)
	{
		((ABaseGun*)Obj)->ADSActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseGun_Statics::NewProp_ADSActive = { "ADSActive", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABaseGun), &Z_Construct_UClass_ABaseGun_Statics::NewProp_ADSActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABaseGun_Statics::NewProp_ADSActive_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseGun_Statics::NewProp_ADSActive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGun_Statics::NewProp_ShotVariableWeights_MetaData[] = {
		{ "Category", "BaseGun" },
		{ "ModuleRelativePath", "BaseGun.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABaseGun_Statics::NewProp_ShotVariableWeights = { "ShotVariableWeights", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseGun, ShotVariableWeights), METADATA_PARAMS(Z_Construct_UClass_ABaseGun_Statics::NewProp_ShotVariableWeights_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseGun_Statics::NewProp_ShotVariableWeights_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseGun_Statics::NewProp_ShotVariableWeights_Inner = { "ShotVariableWeights", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGun_Statics::NewProp_ShotVariableDistances_MetaData[] = {
		{ "Category", "BaseGun" },
		{ "ModuleRelativePath", "BaseGun.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABaseGun_Statics::NewProp_ShotVariableDistances = { "ShotVariableDistances", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseGun, ShotVariableDistances), METADATA_PARAMS(Z_Construct_UClass_ABaseGun_Statics::NewProp_ShotVariableDistances_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseGun_Statics::NewProp_ShotVariableDistances_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseGun_Statics::NewProp_ShotVariableDistances_Inner = { "ShotVariableDistances", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGun_Statics::NewProp_AmmoTotalCanCarry_MetaData[] = {
		{ "Category", "BaseGun" },
		{ "Comment", "//doesn't not include what's in the clip\n" },
		{ "ModuleRelativePath", "BaseGun.h" },
		{ "ToolTip", "doesn't not include what's in the clip" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABaseGun_Statics::NewProp_AmmoTotalCanCarry = { "AmmoTotalCanCarry", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseGun, AmmoTotalCanCarry), METADATA_PARAMS(Z_Construct_UClass_ABaseGun_Statics::NewProp_AmmoTotalCanCarry_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseGun_Statics::NewProp_AmmoTotalCanCarry_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGun_Statics::NewProp_AmmoTotalCarried_MetaData[] = {
		{ "Category", "BaseGun" },
		{ "ModuleRelativePath", "BaseGun.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABaseGun_Statics::NewProp_AmmoTotalCarried = { "AmmoTotalCarried", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseGun, AmmoTotalCarried), METADATA_PARAMS(Z_Construct_UClass_ABaseGun_Statics::NewProp_AmmoTotalCarried_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseGun_Statics::NewProp_AmmoTotalCarried_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGun_Statics::NewProp_AmmoClipCurrent_MetaData[] = {
		{ "Category", "BaseGun" },
		{ "ModuleRelativePath", "BaseGun.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABaseGun_Statics::NewProp_AmmoClipCurrent = { "AmmoClipCurrent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseGun, AmmoClipCurrent), METADATA_PARAMS(Z_Construct_UClass_ABaseGun_Statics::NewProp_AmmoClipCurrent_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseGun_Statics::NewProp_AmmoClipCurrent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGun_Statics::NewProp_AmmoClipSize_MetaData[] = {
		{ "Category", "BaseGun" },
		{ "ModuleRelativePath", "BaseGun.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABaseGun_Statics::NewProp_AmmoClipSize = { "AmmoClipSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseGun, AmmoClipSize), METADATA_PARAMS(Z_Construct_UClass_ABaseGun_Statics::NewProp_AmmoClipSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseGun_Statics::NewProp_AmmoClipSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGun_Statics::NewProp_ReloadTimeInSeconds_MetaData[] = {
		{ "Category", "BaseGun" },
		{ "Comment", "//0 = no limit\n" },
		{ "ModuleRelativePath", "BaseGun.h" },
		{ "ToolTip", "0 = no limit" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseGun_Statics::NewProp_ReloadTimeInSeconds = { "ReloadTimeInSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseGun, ReloadTimeInSeconds), METADATA_PARAMS(Z_Construct_UClass_ABaseGun_Statics::NewProp_ReloadTimeInSeconds_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseGun_Statics::NewProp_ReloadTimeInSeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGun_Statics::NewProp_BulletsPerTriggerPull_MetaData[] = {
		{ "Category", "BaseGun" },
		{ "ModuleRelativePath", "BaseGun.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseGun_Statics::NewProp_BulletsPerTriggerPull = { "BulletsPerTriggerPull", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseGun, BulletsPerTriggerPull), METADATA_PARAMS(Z_Construct_UClass_ABaseGun_Statics::NewProp_BulletsPerTriggerPull_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseGun_Statics::NewProp_BulletsPerTriggerPull_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGun_Statics::NewProp_BulletsPerSecond_MetaData[] = {
		{ "Category", "BaseGun" },
		{ "ModuleRelativePath", "BaseGun.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseGun_Statics::NewProp_BulletsPerSecond = { "BulletsPerSecond", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseGun, BulletsPerSecond), METADATA_PARAMS(Z_Construct_UClass_ABaseGun_Statics::NewProp_BulletsPerSecond_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseGun_Statics::NewProp_BulletsPerSecond_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGun_Statics::NewProp_DamagePerBullet_MetaData[] = {
		{ "Category", "BaseGun" },
		{ "ModuleRelativePath", "BaseGun.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseGun_Statics::NewProp_DamagePerBullet = { "DamagePerBullet", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseGun, DamagePerBullet), METADATA_PARAMS(Z_Construct_UClass_ABaseGun_Statics::NewProp_DamagePerBullet_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseGun_Statics::NewProp_DamagePerBullet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGun_Statics::NewProp_GunName_MetaData[] = {
		{ "Category", "BaseGun" },
		{ "ModuleRelativePath", "BaseGun.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ABaseGun_Statics::NewProp_GunName = { "GunName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseGun, GunName), METADATA_PARAMS(Z_Construct_UClass_ABaseGun_Statics::NewProp_GunName_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseGun_Statics::NewProp_GunName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGun_Statics::NewProp_FP_Gun_MetaData[] = {
		{ "Category", "BaseGun" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BaseGun.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseGun_Statics::NewProp_FP_Gun = { "FP_Gun", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseGun, FP_Gun), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseGun_Statics::NewProp_FP_Gun_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseGun_Statics::NewProp_FP_Gun_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGun_Statics::NewProp_GunMesh_MetaData[] = {
		{ "Category", "BaseGun" },
		{ "ModuleRelativePath", "BaseGun.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseGun_Statics::NewProp_GunMesh = { "GunMesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseGun, GunMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseGun_Statics::NewProp_GunMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseGun_Statics::NewProp_GunMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGun_Statics::NewProp_Character_MetaData[] = {
		{ "Category", "BaseGun" },
		{ "ModuleRelativePath", "BaseGun.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseGun_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseGun, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseGun_Statics::NewProp_Character_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseGun_Statics::NewProp_Character_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGun_Statics::NewProp_PlayerController_MetaData[] = {
		{ "Category", "BaseGun" },
		{ "ModuleRelativePath", "BaseGun.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseGun_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseGun, PlayerController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseGun_Statics::NewProp_PlayerController_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseGun_Statics::NewProp_PlayerController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGun_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "BaseGun" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BaseGun.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseGun_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseGun, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseGun_Statics::NewProp_Camera_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseGun_Statics::NewProp_Camera_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseGun_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGun_Statics::NewProp_ADSActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGun_Statics::NewProp_ShotVariableWeights,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGun_Statics::NewProp_ShotVariableWeights_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGun_Statics::NewProp_ShotVariableDistances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGun_Statics::NewProp_ShotVariableDistances_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGun_Statics::NewProp_AmmoTotalCanCarry,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGun_Statics::NewProp_AmmoTotalCarried,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGun_Statics::NewProp_AmmoClipCurrent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGun_Statics::NewProp_AmmoClipSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGun_Statics::NewProp_ReloadTimeInSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGun_Statics::NewProp_BulletsPerTriggerPull,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGun_Statics::NewProp_BulletsPerSecond,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGun_Statics::NewProp_DamagePerBullet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGun_Statics::NewProp_GunName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGun_Statics::NewProp_FP_Gun,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGun_Statics::NewProp_GunMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGun_Statics::NewProp_Character,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGun_Statics::NewProp_PlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGun_Statics::NewProp_Camera,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseGun_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseGun>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABaseGun_Statics::ClassParams = {
		&ABaseGun::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABaseGun_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ABaseGun_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ABaseGun_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABaseGun_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseGun()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABaseGun_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABaseGun, 2700802047);
	template<> AGENCYPROTO_API UClass* StaticClass<ABaseGun>()
	{
		return ABaseGun::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABaseGun(Z_Construct_UClass_ABaseGun, &ABaseGun::StaticClass, TEXT("/Script/AgencyProto"), TEXT("ABaseGun"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseGun);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
