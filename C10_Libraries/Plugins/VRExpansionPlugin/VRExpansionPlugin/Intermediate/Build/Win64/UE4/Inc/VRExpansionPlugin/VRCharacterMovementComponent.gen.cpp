// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/VRCharacterMovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRCharacterMovementComponent() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRCharacterMovementComponent_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRCharacterMovementComponent();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRBaseCharacterMovementComponent();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRRootComponent_NoRegister();
// End Cross Module References
	void UVRCharacterMovementComponent::StaticRegisterNativesUVRCharacterMovementComponent()
	{
	}
	UClass* Z_Construct_UClass_UVRCharacterMovementComponent_NoRegister()
	{
		return UVRCharacterMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UVRCharacterMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WallRepulsionMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WallRepulsionMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowMovementMerging_MetaData[];
#endif
		static void NewProp_bAllowMovementMerging_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowMovementMerging;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseClientControlRotation_MetaData[];
#endif
		static void NewProp_bUseClientControlRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseClientControlRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VRRootCapsule_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VRRootCapsule;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVRCharacterMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVRBaseCharacterMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRCharacterMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VRCharacterMovementComponent.h" },
		{ "ModuleRelativePath", "Public/VRCharacterMovementComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAIMoveCompletedSignature, FAIRequestID, RequestID, EPathFollowingResult::Type, Result);" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRCharacterMovementComponent_Statics::NewProp_WallRepulsionMultiplier_MetaData[] = {
		{ "Category", "VRCharacterMovementComponent" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.01" },
		{ "ModuleRelativePath", "Public/VRCharacterMovementComponent.h" },
		{ "ToolTip", "Higher values will cause more slide but better step up" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRCharacterMovementComponent_Statics::NewProp_WallRepulsionMultiplier = { "WallRepulsionMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRCharacterMovementComponent, WallRepulsionMultiplier), METADATA_PARAMS(Z_Construct_UClass_UVRCharacterMovementComponent_Statics::NewProp_WallRepulsionMultiplier_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVRCharacterMovementComponent_Statics::NewProp_WallRepulsionMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRCharacterMovementComponent_Statics::NewProp_bAllowMovementMerging_MetaData[] = {
		{ "Category", "VRCharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/VRCharacterMovementComponent.h" },
		{ "ToolTip", "Allow merging movement replication (may cause issues when >10 players due to capsule location" },
	};
#endif
	void Z_Construct_UClass_UVRCharacterMovementComponent_Statics::NewProp_bAllowMovementMerging_SetBit(void* Obj)
	{
		((UVRCharacterMovementComponent*)Obj)->bAllowMovementMerging = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRCharacterMovementComponent_Statics::NewProp_bAllowMovementMerging = { "bAllowMovementMerging", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVRCharacterMovementComponent), &Z_Construct_UClass_UVRCharacterMovementComponent_Statics::NewProp_bAllowMovementMerging_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRCharacterMovementComponent_Statics::NewProp_bAllowMovementMerging_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVRCharacterMovementComponent_Statics::NewProp_bAllowMovementMerging_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRCharacterMovementComponent_Statics::NewProp_bUseClientControlRotation_MetaData[] = {
		{ "Category", "VRCharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/VRCharacterMovementComponent.h" },
		{ "ToolTip", "When true will use the default engines behavior of setting rotation to match the clients instead of simulating rotations, this is really only here for FPS test pawns" },
	};
#endif
	void Z_Construct_UClass_UVRCharacterMovementComponent_Statics::NewProp_bUseClientControlRotation_SetBit(void* Obj)
	{
		((UVRCharacterMovementComponent*)Obj)->bUseClientControlRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRCharacterMovementComponent_Statics::NewProp_bUseClientControlRotation = { "bUseClientControlRotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVRCharacterMovementComponent), &Z_Construct_UClass_UVRCharacterMovementComponent_Statics::NewProp_bUseClientControlRotation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRCharacterMovementComponent_Statics::NewProp_bUseClientControlRotation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVRCharacterMovementComponent_Statics::NewProp_bUseClientControlRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRCharacterMovementComponent_Statics::NewProp_VRRootCapsule_MetaData[] = {
		{ "Category", "VRMovement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VRCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVRCharacterMovementComponent_Statics::NewProp_VRRootCapsule = { "VRRootCapsule", nullptr, (EPropertyFlags)0x001000000008201c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRCharacterMovementComponent, VRRootCapsule), Z_Construct_UClass_UVRRootComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVRCharacterMovementComponent_Statics::NewProp_VRRootCapsule_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVRCharacterMovementComponent_Statics::NewProp_VRRootCapsule_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVRCharacterMovementComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRCharacterMovementComponent_Statics::NewProp_WallRepulsionMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRCharacterMovementComponent_Statics::NewProp_bAllowMovementMerging,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRCharacterMovementComponent_Statics::NewProp_bUseClientControlRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRCharacterMovementComponent_Statics::NewProp_VRRootCapsule,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVRCharacterMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVRCharacterMovementComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVRCharacterMovementComponent_Statics::ClassParams = {
		&UVRCharacterMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVRCharacterMovementComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UVRCharacterMovementComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVRCharacterMovementComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UVRCharacterMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVRCharacterMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVRCharacterMovementComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVRCharacterMovementComponent, 1938771345);
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UVRCharacterMovementComponent>()
	{
		return UVRCharacterMovementComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVRCharacterMovementComponent(Z_Construct_UClass_UVRCharacterMovementComponent, &UVRCharacterMovementComponent::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("UVRCharacterMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVRCharacterMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
