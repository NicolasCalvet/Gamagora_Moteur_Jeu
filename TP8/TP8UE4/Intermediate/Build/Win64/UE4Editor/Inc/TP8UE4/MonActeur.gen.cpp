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
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMonActeur::execleveCube)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_distance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->leveCube(Z_Param_distance);
		P_NATIVE_END;
	}
	void AMonActeur::StaticRegisterNativesAMonActeur()
	{
		UClass* Class = AMonActeur::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "leveCube", &AMonActeur::execleveCube },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMonActeur_leveCube_Statics
	{
		struct MonActeur_eventleveCube_Parms
		{
			float distance;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_distance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMonActeur_leveCube_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MonActeur_eventleveCube_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMonActeur_leveCube_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MonActeur_eventleveCube_Parms), &Z_Construct_UFunction_AMonActeur_leveCube_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMonActeur_leveCube_Statics::NewProp_distance = { "distance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MonActeur_eventleveCube_Parms, distance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMonActeur_leveCube_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMonActeur_leveCube_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMonActeur_leveCube_Statics::NewProp_distance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMonActeur_leveCube_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character" },
		{ "Comment", "/** QUESTION 5.1 **/" },
		{ "ModuleRelativePath", "MonActeur.h" },
		{ "ToolTip", "QUESTION 5.1 *" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMonActeur_leveCube_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMonActeur, nullptr, "leveCube", nullptr, nullptr, sizeof(MonActeur_eventleveCube_Parms), Z_Construct_UFunction_AMonActeur_leveCube_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMonActeur_leveCube_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMonActeur_leveCube_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMonActeur_leveCube_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMonActeur_leveCube()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMonActeur_leveCube_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMonActeur_NoRegister()
	{
		return AMonActeur::StaticClass();
	}
	struct Z_Construct_UClass_AMonActeur_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_effetFume_MetaData[];
#endif
		static void NewProp_effetFume_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_effetFume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_estStatique_MetaData[];
#endif
		static void NewProp_estStatique_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_estStatique;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_vitesseRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_vitesseRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_vitesseDeplacement_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_vitesseDeplacement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_monEffetParticule_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_monEffetParticule;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_monMaillage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_monMaillage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMonActeur_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TP8UE4,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMonActeur_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMonActeur_leveCube, "leveCube" }, // 3520770203
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonActeur_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MonActeur.h" },
		{ "ModuleRelativePath", "MonActeur.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonActeur_Statics::NewProp_effetFume_MetaData[] = {
		{ "Category", "ActeurFlottant" },
		{ "Comment", "/** QUESTION 4.4 **/" },
		{ "ModuleRelativePath", "MonActeur.h" },
		{ "ToolTip", "QUESTION 4.4 *" },
	};
#endif
	void Z_Construct_UClass_AMonActeur_Statics::NewProp_effetFume_SetBit(void* Obj)
	{
		((AMonActeur*)Obj)->effetFume = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMonActeur_Statics::NewProp_effetFume = { "effetFume", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMonActeur), &Z_Construct_UClass_AMonActeur_Statics::NewProp_effetFume_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMonActeur_Statics::NewProp_effetFume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonActeur_Statics::NewProp_effetFume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonActeur_Statics::NewProp_estStatique_MetaData[] = {
		{ "Category", "ActeurFlottant" },
		{ "Comment", "/** QUESTION 4.3 **/" },
		{ "ModuleRelativePath", "MonActeur.h" },
		{ "ToolTip", "QUESTION 4.3 *" },
	};
#endif
	void Z_Construct_UClass_AMonActeur_Statics::NewProp_estStatique_SetBit(void* Obj)
	{
		((AMonActeur*)Obj)->estStatique = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMonActeur_Statics::NewProp_estStatique = { "estStatique", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMonActeur), &Z_Construct_UClass_AMonActeur_Statics::NewProp_estStatique_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMonActeur_Statics::NewProp_estStatique_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonActeur_Statics::NewProp_estStatique_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonActeur_Statics::NewProp_vitesseRotation_MetaData[] = {
		{ "Category", "ActeurFlottant" },
		{ "ModuleRelativePath", "MonActeur.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMonActeur_Statics::NewProp_vitesseRotation = { "vitesseRotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonActeur, vitesseRotation), METADATA_PARAMS(Z_Construct_UClass_AMonActeur_Statics::NewProp_vitesseRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonActeur_Statics::NewProp_vitesseRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonActeur_Statics::NewProp_vitesseDeplacement_MetaData[] = {
		{ "Category", "ActeurFlottant" },
		{ "Comment", "/** QUESTION 4.1 & 4.2 **/" },
		{ "ModuleRelativePath", "MonActeur.h" },
		{ "ToolTip", "QUESTION 4.1 & 4.2 *" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMonActeur_Statics::NewProp_vitesseDeplacement = { "vitesseDeplacement", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonActeur, vitesseDeplacement), METADATA_PARAMS(Z_Construct_UClass_AMonActeur_Statics::NewProp_vitesseDeplacement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonActeur_Statics::NewProp_vitesseDeplacement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonActeur_Statics::NewProp_monEffetParticule_MetaData[] = {
		{ "Category", "MonActeur" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MonActeur.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMonActeur_Statics::NewProp_monEffetParticule = { "monEffetParticule", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonActeur, monEffetParticule), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMonActeur_Statics::NewProp_monEffetParticule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonActeur_Statics::NewProp_monEffetParticule_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonActeur_Statics::NewProp_monMaillage_MetaData[] = {
		{ "Category", "MonActeur" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MonActeur.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMonActeur_Statics::NewProp_monMaillage = { "monMaillage", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonActeur, monMaillage), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMonActeur_Statics::NewProp_monMaillage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonActeur_Statics::NewProp_monMaillage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMonActeur_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonActeur_Statics::NewProp_effetFume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonActeur_Statics::NewProp_estStatique,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonActeur_Statics::NewProp_vitesseRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonActeur_Statics::NewProp_vitesseDeplacement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonActeur_Statics::NewProp_monEffetParticule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonActeur_Statics::NewProp_monMaillage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMonActeur_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMonActeur>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMonActeur_Statics::ClassParams = {
		&AMonActeur::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMonActeur_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMonActeur_Statics::PropPointers),
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
	IMPLEMENT_CLASS(AMonActeur, 2203575733);
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
