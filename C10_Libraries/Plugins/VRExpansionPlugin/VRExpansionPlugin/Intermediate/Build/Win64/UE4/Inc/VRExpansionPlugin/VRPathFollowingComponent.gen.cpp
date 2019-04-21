// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/VRPathFollowingComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRPathFollowingComponent() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRPathFollowingComponent_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRPathFollowingComponent();
	AIMODULE_API UClass* Z_Construct_UClass_UPathFollowingComponent();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRBaseCharacterMovementComponent_NoRegister();
// End Cross Module References
	void UVRPathFollowingComponent::StaticRegisterNativesUVRPathFollowingComponent()
	{
	}
	UClass* Z_Construct_UClass_UVRPathFollowingComponent_NoRegister()
	{
		return UVRPathFollowingComponent::StaticClass();
	}
	struct Z_Construct_UClass_UVRPathFollowingComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VRMovementComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VRMovementComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVRPathFollowingComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPathFollowingComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRPathFollowingComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VRPathFollowingComponent.h" },
		{ "ModuleRelativePath", "Public/VRPathFollowingComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRPathFollowingComponent_Statics::NewProp_VRMovementComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VRPathFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVRPathFollowingComponent_Statics::NewProp_VRMovementComp = { "VRMovementComp", nullptr, (EPropertyFlags)0x0010000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRPathFollowingComponent, VRMovementComp), Z_Construct_UClass_UVRBaseCharacterMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVRPathFollowingComponent_Statics::NewProp_VRMovementComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVRPathFollowingComponent_Statics::NewProp_VRMovementComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVRPathFollowingComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRPathFollowingComponent_Statics::NewProp_VRMovementComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVRPathFollowingComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVRPathFollowingComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVRPathFollowingComponent_Statics::ClassParams = {
		&UVRPathFollowingComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVRPathFollowingComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UVRPathFollowingComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVRPathFollowingComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UVRPathFollowingComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVRPathFollowingComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVRPathFollowingComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVRPathFollowingComponent, 3549404158);
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UVRPathFollowingComponent>()
	{
		return UVRPathFollowingComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVRPathFollowingComponent(Z_Construct_UClass_UVRPathFollowingComponent, &UVRPathFollowingComponent::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("UVRPathFollowingComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVRPathFollowingComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
