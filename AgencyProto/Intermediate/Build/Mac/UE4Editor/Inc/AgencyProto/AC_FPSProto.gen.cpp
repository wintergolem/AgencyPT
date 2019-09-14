// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AgencyProto/AC_FPSProto.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAC_FPSProto() {}
// Cross Module References
	AGENCYPROTO_API UClass* Z_Construct_UClass_UAC_FPSProto_NoRegister();
	AGENCYPROTO_API UClass* Z_Construct_UClass_UAC_FPSProto();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_AgencyProto();
// End Cross Module References
	void UAC_FPSProto::StaticRegisterNativesUAC_FPSProto()
	{
	}
	UClass* Z_Construct_UClass_UAC_FPSProto_NoRegister()
	{
		return UAC_FPSProto::StaticClass();
	}
	struct Z_Construct_UClass_UAC_FPSProto_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAC_FPSProto_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AgencyProto,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAC_FPSProto_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "AC_FPSProto.h" },
		{ "ModuleRelativePath", "AC_FPSProto.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAC_FPSProto_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAC_FPSProto>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAC_FPSProto_Statics::ClassParams = {
		&UAC_FPSProto::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAC_FPSProto_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAC_FPSProto_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAC_FPSProto()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAC_FPSProto_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAC_FPSProto, 2518741761);
	template<> AGENCYPROTO_API UClass* StaticClass<UAC_FPSProto>()
	{
		return UAC_FPSProto::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAC_FPSProto(Z_Construct_UClass_UAC_FPSProto, &UAC_FPSProto::StaticClass, TEXT("/Script/AgencyProto"), TEXT("UAC_FPSProto"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAC_FPSProto);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
