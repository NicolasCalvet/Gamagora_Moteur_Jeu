// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TP8UE4/MonActeur.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMonActeur() {}
// Cross Module References
	TP8UE4_API UClass* Z_Construct_UClass_AMonActeur_NoRegister();
	TP8UE4_API UClass* Z_Construct_UClass_AMonActeur();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TP8UE4();
// End Cross Module References
	void AMonActeur::StaticRegisterNativesAMonActeur()
	{
	}
	UClass* Z_Construct_UClass_AMonActeur_NoRegister()
	{
		return AMonActeur::StaticClass();
	}
	struct Z_Construct_UClass_AMonActeur_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMonActeur_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TP8UE4,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonActeur_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MonActeur.h" },
		{ "ModuleRelativePath", "MonActeur.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMonActeur_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMonActeur>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMonActeur_Statics::ClassParams = {
		&AMonActeur::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMonActeur_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMonActeur_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMonActeur()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMonActeur_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMonActeur, 1836812227);
	template<> TP8UE4_API UClass* StaticClass<AMonActeur>()
	{
		return AMonActeur::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMonActeur(Z_Construct_UClass_AMonActeur, &AMonActeur::StaticClass, TEXT("/Script/TP8UE4"), TEXT("AMonActeur"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMonActeur);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
