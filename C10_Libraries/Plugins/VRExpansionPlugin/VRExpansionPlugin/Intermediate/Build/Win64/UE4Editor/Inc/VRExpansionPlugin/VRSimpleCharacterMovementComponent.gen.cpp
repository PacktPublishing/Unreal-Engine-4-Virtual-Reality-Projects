// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/SimpleChar/VRSimpleCharacterMovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRSimpleCharacterMovementComponent() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRSimpleCharacterMovementComponent_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRSimpleCharacterMovementComponent();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRBaseCharacterMovementComponent();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
// End Cross Module References
	void UVRSimpleCharacterMovementComponent::StaticRegisterNativesUVRSimpleCharacterMovementComponent()
	{
	}
	UClass* Z_Construct_UClass_UVRSimpleCharacterMovementComponent_NoRegister()
	{
		return UVRSimpleCharacterMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UVRSimpleCharacterMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSkipHMDChecks_MetaData[];
#endif
		static void NewProp_bSkipHMDChecks_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSkipHMDChecks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VRCameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VRCameraComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VRRootCapsule_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VRRootCapsule;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVRSimpleCharacterMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVRBaseCharacterMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRSimpleCharacterMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SimpleChar/VRSimpleCharacterMovementComponent.h" },
		{ "ModuleRelativePath", "Public/SimpleChar/VRSimpleCharacterMovementComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAIMoveCompletedSignature, FAIRequestID, RequestID, EPathFollowingResult::Type, Result);" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRSimpleCharacterMovementComponent_Statics::NewProp_bSkipHMDChecks_MetaData[] = {
		{ "Category", "VRMovement" },
		{ "ModuleRelativePath", "Public/SimpleChar/VRSimpleCharacterMovementComponent.h" },
		{ "ToolTip", "Skips checking for the HMD location on tick, for 2D pawns when a headset is connected" },
	};
#endif
	void Z_Construct_UClass_UVRSimpleCharacterMovementComponent_Statics::NewProp_bSkipHMDChecks_SetBit(void* Obj)
	{
		((UVRSimpleCharacterMovementComponent*)Obj)->bSkipHMDChecks = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRSimpleCharacterMovementComponent_Statics::NewProp_bSkipHMDChecks = { "bSkipHMDChecks", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVRSimpleCharacterMovementComponent), &Z_Construct_UClass_UVRSimpleCharacterMovementComponent_Statics::NewProp_bSkipHMDChecks_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRSimpleCharacterMovementComponent_Statics::NewProp_bSkipHMDChecks_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVRSimpleCharacterMovementComponent_Statics::NewProp_bSkipHMDChecks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRSimpleCharacterMovementComponent_Statics::NewProp_VRCameraComponent_MetaData[] = {
		{ "Category", "VRMovement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SimpleChar/VRSimpleCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVRSimpleCharacterMovementComponent_Statics::NewProp_VRCameraComponent = { "VRCameraComponent", nullptr, (EPropertyFlags)0x001000000008201c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRSimpleCharacterMovementComponent, VRCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVRSimpleCharacterMovementComponent_Statics::NewProp_VRCameraComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVRSimpleCharacterMovementComponent_Statics::NewProp_VRCameraComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRSimpleCharacterMovementComponent_Statics::NewProp_VRRootCapsule_MetaData[] = {
		{ "Category", "VRMovement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SimpleChar/VRSimpleCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVRSimpleCharacterMovementComponent_Statics::NewProp_VRRootCapsule = { "VRRootCapsule", nullptr, (EPropertyFlags)0x001000000008201c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRSimpleCharacterMovementComponent, VRRootCapsule), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVRSimpleCharacterMovementComponent_Statics::NewProp_VRRootCapsule_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVRSimpleCharacterMovementComponent_Statics::NewProp_VRRootCapsule_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVRSimpleCharacterMovementComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRSimpleCharacterMovementComponent_Statics::NewProp_bSkipHMDChecks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRSimpleCharacterMovementComponent_Statics::NewProp_VRCameraComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRSimpleCharacterMovementComponent_Statics::NewProp_VRRootCapsule,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVRSimpleCharacterMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVRSimpleCharacterMovementComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVRSimpleCharacterMovementComponent_Statics::ClassParams = {
		&UVRSimpleCharacterMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVRSimpleCharacterMovementComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UVRSimpleCharacterMovementComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVRSimpleCharacterMovementComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UVRSimpleCharacterMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVRSimpleCharacterMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVRSimpleCharacterMovementComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVRSimpleCharacterMovementComponent, 1453335019);
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UVRSimpleCharacterMovementComponent>()
	{
		return UVRSimpleCharacterMovementComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVRSimpleCharacterMovementComponent(Z_Construct_UClass_UVRSimpleCharacterMovementComponent, &UVRSimpleCharacterMovementComponent::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("UVRSimpleCharacterMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVRSimpleCharacterMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
