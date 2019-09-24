// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AgencyProto/BaseGunSMC.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseGunSMC() {}
// Cross Module References
	AGENCYPROTO_API UClass* Z_Construct_UClass_UBaseGunSMC_NoRegister();
	AGENCYPROTO_API UClass* Z_Construct_UClass_UBaseGunSMC();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent();
	UPackage* Z_Construct_UPackage__Script_AgencyProto();
// End Cross Module References
	void UBaseGunSMC::StaticRegisterNativesUBaseGunSMC()
	{
	}
	UClass* Z_Construct_UClass_UBaseGunSMC_NoRegister()
	{
		return UBaseGunSMC::StaticClass();
	}
	struct Z_Construct_UClass_UBaseGunSMC_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseGunSMC_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USkeletalMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AgencyProto,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseGunSMC_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object Object Mobility Trigger" },
		{ "IncludePath", "BaseGunSMC.h" },
		{ "ModuleRelativePath", "BaseGunSMC.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseGunSMC_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseGunSMC>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBaseGunSMC_Statics::ClassParams = {
		&UBaseGunSMC::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseGunSMC_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBaseGunSMC_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseGunSMC()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBaseGunSMC_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBaseGunSMC, 2839419989);
	template<> AGENCYPROTO_API UClass* StaticClass<UBaseGunSMC>()
	{
		return UBaseGunSMC::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBaseGunSMC(Z_Construct_UClass_UBaseGunSMC, &UBaseGunSMC::StaticClass, TEXT("/Script/AgencyProto"), TEXT("UBaseGunSMC"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseGunSMC);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
