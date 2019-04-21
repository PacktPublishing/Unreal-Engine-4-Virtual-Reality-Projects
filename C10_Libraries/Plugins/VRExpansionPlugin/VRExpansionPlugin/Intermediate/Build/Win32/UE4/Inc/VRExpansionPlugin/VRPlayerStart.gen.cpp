// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/Misc/VRPlayerStart.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRPlayerStart() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AVRPlayerStart_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AVRPlayerStart();
	ENGINE_API UClass* Z_Construct_UClass_APlayerStart();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	void AVRPlayerStart::StaticRegisterNativesAVRPlayerStart()
	{
	}
	UClass* Z_Construct_UClass_AVRPlayerStart_NoRegister()
	{
		return AVRPlayerStart::StaticClass();
	}
	struct Z_Construct_UClass_AVRPlayerStart_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VRRootComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VRRootComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVRPlayerStart_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerStart,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRPlayerStart_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Common" },
		{ "HideCategories", "Collision Collision Lighting LightColor Force" },
		{ "IncludePath", "Misc/VRPlayerStart.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Misc/VRPlayerStart.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A normal player start except I replaced the root component with a scene component so that the spawn\ntransform will match our VR characters." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRPlayerStart_Statics::NewProp_VRRootComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Misc/VRPlayerStart.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVRPlayerStart_Statics::NewProp_VRRootComp = { "VRRootComp", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVRPlayerStart, VRRootComp), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVRPlayerStart_Statics::NewProp_VRRootComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVRPlayerStart_Statics::NewProp_VRRootComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVRPlayerStart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRPlayerStart_Statics::NewProp_VRRootComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVRPlayerStart_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVRPlayerStart>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AVRPlayerStart_Statics::ClassParams = {
		&AVRPlayerStart::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AVRPlayerStart_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AVRPlayerStart_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AVRPlayerStart_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AVRPlayerStart_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVRPlayerStart()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AVRPlayerStart_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVRPlayerStart, 178253797);
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<AVRPlayerStart>()
	{
		return AVRPlayerStart::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVRPlayerStart(Z_Construct_UClass_AVRPlayerStart, &AVRPlayerStart::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("AVRPlayerStart"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVRPlayerStart);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
