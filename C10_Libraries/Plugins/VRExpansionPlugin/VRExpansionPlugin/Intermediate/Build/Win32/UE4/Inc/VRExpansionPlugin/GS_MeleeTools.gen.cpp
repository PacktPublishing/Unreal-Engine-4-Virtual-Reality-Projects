// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/GripScripts/GS_MeleeTools.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGS_MeleeTools() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGS_MeleeTools_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGS_MeleeTools();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGS_Default();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
// End Cross Module References
	void UGS_MeleeTools::StaticRegisterNativesUGS_MeleeTools()
	{
	}
	UClass* Z_Construct_UClass_UGS_MeleeTools_NoRegister()
	{
		return UGS_MeleeTools::StaticClass();
	}
	struct Z_Construct_UClass_UGS_MeleeTools_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGS_MeleeTools_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGS_Default,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGS_MeleeTools_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "VRExpansionPlugin" },
		{ "HideCategories", "DefaultSettings" },
		{ "IncludePath", "GripScripts/GS_MeleeTools.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_MeleeTools.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A grip script that adds useful melee functions and capabilities\nJust adding it to the grippable object provides the features without removing standard\nGrip features." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGS_MeleeTools_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGS_MeleeTools>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGS_MeleeTools_Statics::ClassParams = {
		&UGS_MeleeTools::StaticClass,
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
		0x003010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGS_MeleeTools_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGS_MeleeTools_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGS_MeleeTools()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGS_MeleeTools_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGS_MeleeTools, 3785699868);
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UGS_MeleeTools>()
	{
		return UGS_MeleeTools::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGS_MeleeTools(Z_Construct_UClass_UGS_MeleeTools, &UGS_MeleeTools::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("UGS_MeleeTools"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGS_MeleeTools);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
