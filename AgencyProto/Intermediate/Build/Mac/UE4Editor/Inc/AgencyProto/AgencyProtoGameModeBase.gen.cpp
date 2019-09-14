// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AgencyProto/AgencyProtoGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAgencyProtoGameModeBase() {}
// Cross Module References
	AGENCYPROTO_API UClass* Z_Construct_UClass_AAgencyProtoGameModeBase_NoRegister();
	AGENCYPROTO_API UClass* Z_Construct_UClass_AAgencyProtoGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_AgencyProto();
// End Cross Module References
	void AAgencyProtoGameModeBase::StaticRegisterNativesAAgencyProtoGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AAgencyProtoGameModeBase_NoRegister()
	{
		return AAgencyProtoGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AAgencyProtoGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAgencyProtoGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AgencyProto,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAgencyProtoGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "AgencyProtoGameModeBase.h" },
		{ "ModuleRelativePath", "AgencyProtoGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAgencyProtoGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAgencyProtoGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAgencyProtoGameModeBase_Statics::ClassParams = {
		&AAgencyProtoGameModeBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A8u,
		METADATA_PARAMS(Z_Construct_UClass_AAgencyProtoGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AAgencyProtoGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAgencyProtoGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAgencyProtoGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAgencyProtoGameModeBase, 1943420877);
	template<> AGENCYPROTO_API UClass* StaticClass<AAgencyProtoGameModeBase>()
	{
		return AAgencyProtoGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAgencyProtoGameModeBase(Z_Construct_UClass_AAgencyProtoGameModeBase, &AAgencyProtoGameModeBase::StaticClass, TEXT("/Script/AgencyProto"), TEXT("AAgencyProtoGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAgencyProtoGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
