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
	AGENCYPROTO_API UScriptStruct* Z_Construct_UScriptStruct_FAmmoBagStruct();
	UPackage* Z_Construct_UPackage__Script_AgencyProto();
	AGENCYPROTO_API UClass* Z_Construct_UClass_UBaseGun_NoRegister();
	AGENCYPROTO_API UClass* Z_Construct_UClass_UBaseGun();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
// End Cross Module References
class UScriptStruct* FAmmoBagStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AGENCYPROTO_API uint32 Get_Z_Construct_UScriptStruct_FAmmoBagStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAmmoBagStruct, Z_Construct_UPackage__Script_AgencyProto(), TEXT("AmmoBagStruct"), sizeof(FAmmoBagStruct), Get_Z_Construct_UScriptStruct_FAmmoBagStruct_Hash());
	}
	return Singleton;
}
template<> AGENCYPROTO_API UScriptStruct* StaticStruct<FAmmoBagStruct>()
{
	return FAmmoBagStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAmmoBagStruct(FAmmoBagStruct::StaticStruct, TEXT("/Script/AgencyProto"), TEXT("AmmoBagStruct"), false, nullptr, nullptr);
static struct FScriptStruct_AgencyProto_StaticRegisterNativesFAmmoBagStruct
{
	FScriptStruct_AgencyProto_StaticRegisterNativesFAmmoBagStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AmmoBagStruct")),new UScriptStruct::TCppStructOps<FAmmoBagStruct>);
	}
} ScriptStruct_AgencyProto_StaticRegisterNativesFAmmoBagStruct;
	struct Z_Construct_UScriptStruct_FAmmoBagStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
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
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAmmoBagStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "BaseGun.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAmmoBagStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAmmoBagStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAmmoBagStruct_Statics::NewProp_AmmoTotalCanCarry_MetaData[] = {
		{ "Category", "AmmoBagStruct" },
		{ "ModuleRelativePath", "BaseGun.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAmmoBagStruct_Statics::NewProp_AmmoTotalCanCarry = { "AmmoTotalCanCarry", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAmmoBagStruct, AmmoTotalCanCarry), METADATA_PARAMS(Z_Construct_UScriptStruct_FAmmoBagStruct_Statics::NewProp_AmmoTotalCanCarry_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAmmoBagStruct_Statics::NewProp_AmmoTotalCanCarry_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAmmoBagStruct_Statics::NewProp_AmmoTotalCarried_MetaData[] = {
		{ "Category", "AmmoBagStruct" },
		{ "ModuleRelativePath", "BaseGun.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAmmoBagStruct_Statics::NewProp_AmmoTotalCarried = { "AmmoTotalCarried", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAmmoBagStruct, AmmoTotalCarried), METADATA_PARAMS(Z_Construct_UScriptStruct_FAmmoBagStruct_Statics::NewProp_AmmoTotalCarried_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAmmoBagStruct_Statics::NewProp_AmmoTotalCarried_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAmmoBagStruct_Statics::NewProp_AmmoClipCurrent_MetaData[] = {
		{ "Category", "AmmoBagStruct" },
		{ "ModuleRelativePath", "BaseGun.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAmmoBagStruct_Statics::NewProp_AmmoClipCurrent = { "AmmoClipCurrent", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAmmoBagStruct, AmmoClipCurrent), METADATA_PARAMS(Z_Construct_UScriptStruct_FAmmoBagStruct_Statics::NewProp_AmmoClipCurrent_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAmmoBagStruct_Statics::NewProp_AmmoClipCurrent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAmmoBagStruct_Statics::NewProp_AmmoClipSize_MetaData[] = {
		{ "Category", "AmmoBagStruct" },
		{ "ModuleRelativePath", "BaseGun.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAmmoBagStruct_Statics::NewProp_AmmoClipSize = { "AmmoClipSize", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAmmoBagStruct, AmmoClipSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FAmmoBagStruct_Statics::NewProp_AmmoClipSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAmmoBagStruct_Statics::NewProp_AmmoClipSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAmmoBagStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmmoBagStruct_Statics::NewProp_AmmoTotalCanCarry,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmmoBagStruct_Statics::NewProp_AmmoTotalCarried,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmmoBagStruct_Statics::NewProp_AmmoClipCurrent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmmoBagStruct_Statics::NewProp_AmmoClipSize,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAmmoBagStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AgencyProto,
		nullptr,
		&NewStructOps,
		"AmmoBagStruct",
		sizeof(FAmmoBagStruct),
		alignof(FAmmoBagStruct),
		Z_Construct_UScriptStruct_FAmmoBagStruct_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAmmoBagStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAmmoBagStruct_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAmmoBagStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAmmoBagStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAmmoBagStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AgencyProto();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AmmoBagStruct"), sizeof(FAmmoBagStruct), Get_Z_Construct_UScriptStruct_FAmmoBagStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAmmoBagStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAmmoBagStruct_Hash() { return 939041441U; }
	void UBaseGun::StaticRegisterNativesUBaseGun()
	{
	}
	UClass* Z_Construct_UClass_UBaseGun_NoRegister()
	{
		return UBaseGun::StaticClass();
	}
	struct Z_Construct_UClass_UBaseGun_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmmoBag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AmmoBag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_reloadTimeInSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_reloadTimeInSeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bulletsPerTriggerPull_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bulletsPerTriggerPull;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bulletsPerSecond_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bulletsPerSecond;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GunName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GunName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseGun_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AgencyProto,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseGun_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "BaseGun.h" },
		{ "ModuleRelativePath", "BaseGun.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseGun_Statics::NewProp_AmmoBag_MetaData[] = {
		{ "Category", "BaseGun" },
		{ "ModuleRelativePath", "BaseGun.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseGun_Statics::NewProp_AmmoBag = { "AmmoBag", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseGun, AmmoBag), Z_Construct_UScriptStruct_FAmmoBagStruct, METADATA_PARAMS(Z_Construct_UClass_UBaseGun_Statics::NewProp_AmmoBag_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBaseGun_Statics::NewProp_AmmoBag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseGun_Statics::NewProp_reloadTimeInSeconds_MetaData[] = {
		{ "Category", "BaseGun" },
		{ "Comment", "//0 = no limit\n" },
		{ "ModuleRelativePath", "BaseGun.h" },
		{ "ToolTip", "0 = no limit" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBaseGun_Statics::NewProp_reloadTimeInSeconds = { "reloadTimeInSeconds", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseGun, reloadTimeInSeconds), METADATA_PARAMS(Z_Construct_UClass_UBaseGun_Statics::NewProp_reloadTimeInSeconds_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBaseGun_Statics::NewProp_reloadTimeInSeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseGun_Statics::NewProp_bulletsPerTriggerPull_MetaData[] = {
		{ "Category", "BaseGun" },
		{ "ModuleRelativePath", "BaseGun.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBaseGun_Statics::NewProp_bulletsPerTriggerPull = { "bulletsPerTriggerPull", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseGun, bulletsPerTriggerPull), METADATA_PARAMS(Z_Construct_UClass_UBaseGun_Statics::NewProp_bulletsPerTriggerPull_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBaseGun_Statics::NewProp_bulletsPerTriggerPull_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseGun_Statics::NewProp_bulletsPerSecond_MetaData[] = {
		{ "Category", "BaseGun" },
		{ "Comment", "//link to asset?\n" },
		{ "ModuleRelativePath", "BaseGun.h" },
		{ "ToolTip", "link to asset?" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBaseGun_Statics::NewProp_bulletsPerSecond = { "bulletsPerSecond", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseGun, bulletsPerSecond), METADATA_PARAMS(Z_Construct_UClass_UBaseGun_Statics::NewProp_bulletsPerSecond_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBaseGun_Statics::NewProp_bulletsPerSecond_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseGun_Statics::NewProp_GunName_MetaData[] = {
		{ "Category", "BaseGun" },
		{ "ModuleRelativePath", "BaseGun.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBaseGun_Statics::NewProp_GunName = { "GunName", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseGun, GunName), METADATA_PARAMS(Z_Construct_UClass_UBaseGun_Statics::NewProp_GunName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBaseGun_Statics::NewProp_GunName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseGun_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseGun_Statics::NewProp_AmmoBag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseGun_Statics::NewProp_reloadTimeInSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseGun_Statics::NewProp_bulletsPerTriggerPull,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseGun_Statics::NewProp_bulletsPerSecond,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseGun_Statics::NewProp_GunName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseGun_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseGun>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBaseGun_Statics::ClassParams = {
		&UBaseGun::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBaseGun_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UBaseGun_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseGun_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBaseGun_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseGun()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBaseGun_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBaseGun, 2250486456);
	template<> AGENCYPROTO_API UClass* StaticClass<UBaseGun>()
	{
		return UBaseGun::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBaseGun(Z_Construct_UClass_UBaseGun, &UBaseGun::StaticClass, TEXT("/Script/AgencyProto"), TEXT("UBaseGun"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseGun);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
