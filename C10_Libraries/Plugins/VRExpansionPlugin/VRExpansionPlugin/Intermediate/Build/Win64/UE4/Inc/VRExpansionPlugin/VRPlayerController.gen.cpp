// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/VRPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRPlayerController() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AVRPlayerController_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AVRPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
// End Cross Module References
	void AVRPlayerController::StaticRegisterNativesAVRPlayerController()
	{
	}
	UClass* Z_Construct_UClass_AVRPlayerController_NoRegister()
	{
		return AVRPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AVRPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableServerUpdateCamera_MetaData[];
#endif
		static void NewProp_bDisableServerUpdateCamera_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableServerUpdateCamera;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVRPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "VRPlayerController.h" },
		{ "ModuleRelativePath", "Public/VRPlayerController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRPlayerController_Statics::NewProp_bDisableServerUpdateCamera_MetaData[] = {
		{ "Category", "VRPlayerController" },
		{ "ModuleRelativePath", "Public/VRPlayerController.h" },
		{ "ToolTip", "Disable the ServerUpdateCamera function defaulted on in PlayerCameraManager\nWe are manually replicating the camera position and rotation ourselves anyway\nGenerally that function will just be additional replication overhead" },
	};
#endif
	void Z_Construct_UClass_AVRPlayerController_Statics::NewProp_bDisableServerUpdateCamera_SetBit(void* Obj)
	{
		((AVRPlayerController*)Obj)->bDisableServerUpdateCamera = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVRPlayerController_Statics::NewProp_bDisableServerUpdateCamera = { "bDisableServerUpdateCamera", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AVRPlayerController), &Z_Construct_UClass_AVRPlayerController_Statics::NewProp_bDisableServerUpdateCamera_SetBit, METADATA_PARAMS(Z_Construct_UClass_AVRPlayerController_Statics::NewProp_bDisableServerUpdateCamera_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVRPlayerController_Statics::NewProp_bDisableServerUpdateCamera_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVRPlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRPlayerController_Statics::NewProp_bDisableServerUpdateCamera,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVRPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVRPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AVRPlayerController_Statics::ClassParams = {
		&AVRPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AVRPlayerController_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AVRPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AVRPlayerController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AVRPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVRPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AVRPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVRPlayerController, 315280872);
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<AVRPlayerController>()
	{
		return AVRPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVRPlayerController(Z_Construct_UClass_AVRPlayerController, &AVRPlayerController::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("AVRPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVRPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
