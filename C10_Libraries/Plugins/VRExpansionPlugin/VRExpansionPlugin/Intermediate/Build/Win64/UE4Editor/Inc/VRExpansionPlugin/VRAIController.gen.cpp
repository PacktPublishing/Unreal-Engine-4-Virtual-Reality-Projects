// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/VRAIController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRAIController() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AVRAIController_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AVRAIController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AVRDetourCrowdAIController_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AVRDetourCrowdAIController();
// End Cross Module References
	void AVRAIController::StaticRegisterNativesAVRAIController()
	{
	}
	UClass* Z_Construct_UClass_AVRAIController_NoRegister()
	{
		return AVRAIController::StaticClass();
	}
	struct Z_Construct_UClass_AVRAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVRAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRAIController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "VRAIController.h" },
		{ "ModuleRelativePath", "Public/VRAIController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVRAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVRAIController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AVRAIController_Statics::ClassParams = {
		&AVRAIController::StaticClass,
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
		0x009002A0u,
		METADATA_PARAMS(Z_Construct_UClass_AVRAIController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AVRAIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVRAIController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AVRAIController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVRAIController, 2213614394);
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<AVRAIController>()
	{
		return AVRAIController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVRAIController(Z_Construct_UClass_AVRAIController, &AVRAIController::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("AVRAIController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVRAIController);
	void AVRDetourCrowdAIController::StaticRegisterNativesAVRDetourCrowdAIController()
	{
	}
	UClass* Z_Construct_UClass_AVRDetourCrowdAIController_NoRegister()
	{
		return AVRDetourCrowdAIController::StaticClass();
	}
	struct Z_Construct_UClass_AVRDetourCrowdAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVRDetourCrowdAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVRAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRDetourCrowdAIController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "VRAIController.h" },
		{ "ModuleRelativePath", "Public/VRAIController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVRDetourCrowdAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVRDetourCrowdAIController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AVRDetourCrowdAIController_Statics::ClassParams = {
		&AVRDetourCrowdAIController::StaticClass,
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
		0x008002A0u,
		METADATA_PARAMS(Z_Construct_UClass_AVRDetourCrowdAIController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AVRDetourCrowdAIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVRDetourCrowdAIController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AVRDetourCrowdAIController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVRDetourCrowdAIController, 3095749860);
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<AVRDetourCrowdAIController>()
	{
		return AVRDetourCrowdAIController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVRDetourCrowdAIController(Z_Construct_UClass_AVRDetourCrowdAIController, &AVRDetourCrowdAIController::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("AVRDetourCrowdAIController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVRDetourCrowdAIController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
