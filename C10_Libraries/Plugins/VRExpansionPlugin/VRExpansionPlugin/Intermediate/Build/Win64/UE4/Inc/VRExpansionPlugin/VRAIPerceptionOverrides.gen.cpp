// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/Misc/VRAIPerceptionOverrides.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRAIPerceptionOverrides() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FAISightEventVR();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UAISenseConfig_Sight_VR_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UAISenseConfig_Sight_VR();
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAISenseAffiliationFilter();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UAISense_Sight_VR_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UAISense_Sight_VR();
	AIMODULE_API UClass* Z_Construct_UClass_UAISense();
// End Cross Module References
class UScriptStruct* FAISightEventVR::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VREXPANSIONPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FAISightEventVR_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAISightEventVR, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("AISightEventVR"), sizeof(FAISightEventVR), Get_Z_Construct_UScriptStruct_FAISightEventVR_Hash());
	}
	return Singleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FAISightEventVR>()
{
	return FAISightEventVR::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAISightEventVR(FAISightEventVR::StaticStruct, TEXT("/Script/VRExpansionPlugin"), TEXT("AISightEventVR"), false, nullptr, nullptr);
static struct FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFAISightEventVR
{
	FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFAISightEventVR()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AISightEventVR")),new UScriptStruct::TCppStructOps<FAISightEventVR>);
	}
} ScriptStruct_VRExpansionPlugin_StaticRegisterNativesFAISightEventVR;
	struct Z_Construct_UScriptStruct_FAISightEventVR_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Observer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Observer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SeenActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SeenActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAISightEventVR_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Misc/VRAIPerceptionOverrides.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAISightEventVR_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAISightEventVR>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAISightEventVR_Statics::NewProp_Observer_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/VRAIPerceptionOverrides.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAISightEventVR_Statics::NewProp_Observer = { "Observer", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAISightEventVR, Observer), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAISightEventVR_Statics::NewProp_Observer_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAISightEventVR_Statics::NewProp_Observer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAISightEventVR_Statics::NewProp_SeenActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/VRAIPerceptionOverrides.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAISightEventVR_Statics::NewProp_SeenActor = { "SeenActor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAISightEventVR, SeenActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAISightEventVR_Statics::NewProp_SeenActor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAISightEventVR_Statics::NewProp_SeenActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAISightEventVR_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAISightEventVR_Statics::NewProp_Observer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAISightEventVR_Statics::NewProp_SeenActor,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAISightEventVR_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		&NewStructOps,
		"AISightEventVR",
		sizeof(FAISightEventVR),
		alignof(FAISightEventVR),
		Z_Construct_UScriptStruct_FAISightEventVR_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAISightEventVR_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAISightEventVR_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAISightEventVR_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAISightEventVR()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAISightEventVR_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AISightEventVR"), sizeof(FAISightEventVR), Get_Z_Construct_UScriptStruct_FAISightEventVR_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAISightEventVR_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAISightEventVR_Hash() { return 2544408011U; }
	void UAISenseConfig_Sight_VR::StaticRegisterNativesUAISenseConfig_Sight_VR()
	{
	}
	UClass* Z_Construct_UClass_UAISenseConfig_Sight_VR_NoRegister()
	{
		return UAISenseConfig_Sight_VR::StaticClass();
	}
	struct Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoSuccessRangeFromLastSeenLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AutoSuccessRangeFromLastSeenLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetectionByAffiliation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DetectionByAffiliation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PeripheralVisionAngleDegrees_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PeripheralVisionAngleDegrees;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoseSightRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LoseSightRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SightRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SightRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Implementation_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Implementation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAISenseConfig,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "AI Sight VR config" },
		{ "IncludePath", "Misc/VRAIPerceptionOverrides.h" },
		{ "ModuleRelativePath", "Public/Misc/VRAIPerceptionOverrides.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::NewProp_AutoSuccessRangeFromLastSeenLocation_MetaData[] = {
		{ "Category", "Sense" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/Misc/VRAIPerceptionOverrides.h" },
		{ "ToolTip", "If not an InvalidRange (which is the default), we will always be able to see the target that has already been seen if they are within this range of their last seen location." },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::NewProp_AutoSuccessRangeFromLastSeenLocation = { "AutoSuccessRangeFromLastSeenLocation", nullptr, (EPropertyFlags)0x0010000000014015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISenseConfig_Sight_VR, AutoSuccessRangeFromLastSeenLocation), METADATA_PARAMS(Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::NewProp_AutoSuccessRangeFromLastSeenLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::NewProp_AutoSuccessRangeFromLastSeenLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::NewProp_DetectionByAffiliation_MetaData[] = {
		{ "Category", "Sense" },
		{ "ModuleRelativePath", "Public/Misc/VRAIPerceptionOverrides.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::NewProp_DetectionByAffiliation = { "DetectionByAffiliation", nullptr, (EPropertyFlags)0x0010000000014015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISenseConfig_Sight_VR, DetectionByAffiliation), Z_Construct_UScriptStruct_FAISenseAffiliationFilter, METADATA_PARAMS(Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::NewProp_DetectionByAffiliation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::NewProp_DetectionByAffiliation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::NewProp_PeripheralVisionAngleDegrees_MetaData[] = {
		{ "Category", "Sense" },
		{ "ClampMax", "180.000000" },
		{ "ClampMin", "0.000000" },
		{ "DisplayName", "PeripheralVisionHalfAngleDegrees" },
		{ "ModuleRelativePath", "Public/Misc/VRAIPerceptionOverrides.h" },
		{ "ToolTip", "How far to the side AI can see, in degrees. Use SetPeripheralVisionAngle to change the value at runtime.\n     The value represents the angle measured in relation to the forward vector, not the whole range." },
		{ "UIMax", "180.000000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::NewProp_PeripheralVisionAngleDegrees = { "PeripheralVisionAngleDegrees", nullptr, (EPropertyFlags)0x0010000000014015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISenseConfig_Sight_VR, PeripheralVisionAngleDegrees), METADATA_PARAMS(Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::NewProp_PeripheralVisionAngleDegrees_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::NewProp_PeripheralVisionAngleDegrees_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::NewProp_LoseSightRadius_MetaData[] = {
		{ "Category", "Sense" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/Misc/VRAIPerceptionOverrides.h" },
		{ "ToolTip", "Maximum sight distance to see target that has been already seen." },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::NewProp_LoseSightRadius = { "LoseSightRadius", nullptr, (EPropertyFlags)0x0010000000014015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISenseConfig_Sight_VR, LoseSightRadius), METADATA_PARAMS(Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::NewProp_LoseSightRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::NewProp_LoseSightRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::NewProp_SightRadius_MetaData[] = {
		{ "Category", "Sense" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/Misc/VRAIPerceptionOverrides.h" },
		{ "ToolTip", "Maximum sight distance to notice a target." },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::NewProp_SightRadius = { "SightRadius", nullptr, (EPropertyFlags)0x0010000000014015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISenseConfig_Sight_VR, SightRadius), METADATA_PARAMS(Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::NewProp_SightRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::NewProp_SightRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::NewProp_Implementation_MetaData[] = {
		{ "Category", "Sense" },
		{ "ModuleRelativePath", "Public/Misc/VRAIPerceptionOverrides.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::NewProp_Implementation = { "Implementation", nullptr, (EPropertyFlags)0x0014000002014015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISenseConfig_Sight_VR, Implementation), Z_Construct_UClass_UAISense_Sight_VR_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::NewProp_Implementation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::NewProp_Implementation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::NewProp_AutoSuccessRangeFromLastSeenLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::NewProp_DetectionByAffiliation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::NewProp_PeripheralVisionAngleDegrees,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::NewProp_LoseSightRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::NewProp_SightRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::NewProp_Implementation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISenseConfig_Sight_VR>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::ClassParams = {
		&UAISenseConfig_Sight_VR::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::PropPointers),
		0,
		0x001010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAISenseConfig_Sight_VR()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAISenseConfig_Sight_VR, 1126092167);
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UAISenseConfig_Sight_VR>()
	{
		return UAISenseConfig_Sight_VR::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAISenseConfig_Sight_VR(Z_Construct_UClass_UAISenseConfig_Sight_VR, &UAISenseConfig_Sight_VR::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("UAISenseConfig_Sight_VR"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAISenseConfig_Sight_VR);
	void UAISense_Sight_VR::StaticRegisterNativesUAISense_Sight_VR()
	{
	}
	UClass* Z_Construct_UClass_UAISense_Sight_VR_NoRegister()
	{
		return UAISense_Sight_VR::StaticClass();
	}
	struct Z_Construct_UClass_UAISense_Sight_VR_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SightLimitQueryImportance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SightLimitQueryImportance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxQueryImportance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxQueryImportance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HighImportanceQueryDistanceThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HighImportanceQueryDistanceThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxTimeSlicePerTick_MetaData[];
#endif
		static const UE4CodeGen_Private::FDoublePropertyParams NewProp_MaxTimeSlicePerTick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinQueriesPerTimeSliceCheck_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinQueriesPerTimeSliceCheck;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxTracesPerTick_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxTracesPerTick;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAISense_Sight_VR_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAISense,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISense_Sight_VR_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "AI" },
		{ "IncludePath", "Misc/VRAIPerceptionOverrides.h" },
		{ "ModuleRelativePath", "Public/Misc/VRAIPerceptionOverrides.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISense_Sight_VR_Statics::NewProp_SightLimitQueryImportance_MetaData[] = {
		{ "Category", "AI Perception" },
		{ "ModuleRelativePath", "Public/Misc/VRAIPerceptionOverrides.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISense_Sight_VR_Statics::NewProp_SightLimitQueryImportance = { "SightLimitQueryImportance", nullptr, (EPropertyFlags)0x0020080000014001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISense_Sight_VR, SightLimitQueryImportance), METADATA_PARAMS(Z_Construct_UClass_UAISense_Sight_VR_Statics::NewProp_SightLimitQueryImportance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAISense_Sight_VR_Statics::NewProp_SightLimitQueryImportance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISense_Sight_VR_Statics::NewProp_MaxQueryImportance_MetaData[] = {
		{ "Category", "AI Perception" },
		{ "ModuleRelativePath", "Public/Misc/VRAIPerceptionOverrides.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISense_Sight_VR_Statics::NewProp_MaxQueryImportance = { "MaxQueryImportance", nullptr, (EPropertyFlags)0x0020080000014001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISense_Sight_VR, MaxQueryImportance), METADATA_PARAMS(Z_Construct_UClass_UAISense_Sight_VR_Statics::NewProp_MaxQueryImportance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAISense_Sight_VR_Statics::NewProp_MaxQueryImportance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISense_Sight_VR_Statics::NewProp_HighImportanceQueryDistanceThreshold_MetaData[] = {
		{ "Category", "AI Perception" },
		{ "ModuleRelativePath", "Public/Misc/VRAIPerceptionOverrides.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISense_Sight_VR_Statics::NewProp_HighImportanceQueryDistanceThreshold = { "HighImportanceQueryDistanceThreshold", nullptr, (EPropertyFlags)0x0020080000014001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISense_Sight_VR, HighImportanceQueryDistanceThreshold), METADATA_PARAMS(Z_Construct_UClass_UAISense_Sight_VR_Statics::NewProp_HighImportanceQueryDistanceThreshold_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAISense_Sight_VR_Statics::NewProp_HighImportanceQueryDistanceThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISense_Sight_VR_Statics::NewProp_MaxTimeSlicePerTick_MetaData[] = {
		{ "Category", "AI Perception" },
		{ "ModuleRelativePath", "Public/Misc/VRAIPerceptionOverrides.h" },
	};
#endif
	const UE4CodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UAISense_Sight_VR_Statics::NewProp_MaxTimeSlicePerTick = { "MaxTimeSlicePerTick", nullptr, (EPropertyFlags)0x0020080000014001, UE4CodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISense_Sight_VR, MaxTimeSlicePerTick), METADATA_PARAMS(Z_Construct_UClass_UAISense_Sight_VR_Statics::NewProp_MaxTimeSlicePerTick_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAISense_Sight_VR_Statics::NewProp_MaxTimeSlicePerTick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISense_Sight_VR_Statics::NewProp_MinQueriesPerTimeSliceCheck_MetaData[] = {
		{ "Category", "AI Perception" },
		{ "ModuleRelativePath", "Public/Misc/VRAIPerceptionOverrides.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAISense_Sight_VR_Statics::NewProp_MinQueriesPerTimeSliceCheck = { "MinQueriesPerTimeSliceCheck", nullptr, (EPropertyFlags)0x0020080000014001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISense_Sight_VR, MinQueriesPerTimeSliceCheck), METADATA_PARAMS(Z_Construct_UClass_UAISense_Sight_VR_Statics::NewProp_MinQueriesPerTimeSliceCheck_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAISense_Sight_VR_Statics::NewProp_MinQueriesPerTimeSliceCheck_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISense_Sight_VR_Statics::NewProp_MaxTracesPerTick_MetaData[] = {
		{ "Category", "AI Perception" },
		{ "ModuleRelativePath", "Public/Misc/VRAIPerceptionOverrides.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAISense_Sight_VR_Statics::NewProp_MaxTracesPerTick = { "MaxTracesPerTick", nullptr, (EPropertyFlags)0x0020080000014001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISense_Sight_VR, MaxTracesPerTick), METADATA_PARAMS(Z_Construct_UClass_UAISense_Sight_VR_Statics::NewProp_MaxTracesPerTick_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAISense_Sight_VR_Statics::NewProp_MaxTracesPerTick_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAISense_Sight_VR_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Sight_VR_Statics::NewProp_SightLimitQueryImportance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Sight_VR_Statics::NewProp_MaxQueryImportance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Sight_VR_Statics::NewProp_HighImportanceQueryDistanceThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Sight_VR_Statics::NewProp_MaxTimeSlicePerTick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Sight_VR_Statics::NewProp_MinQueriesPerTimeSliceCheck,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Sight_VR_Statics::NewProp_MaxTracesPerTick,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAISense_Sight_VR_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISense_Sight_VR>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAISense_Sight_VR_Statics::ClassParams = {
		&UAISense_Sight_VR::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAISense_Sight_VR_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UAISense_Sight_VR_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAISense_Sight_VR_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAISense_Sight_VR_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAISense_Sight_VR()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAISense_Sight_VR_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAISense_Sight_VR, 676558996);
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UAISense_Sight_VR>()
	{
		return UAISense_Sight_VR::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAISense_Sight_VR(Z_Construct_UClass_UAISense_Sight_VR, &UAISense_Sight_VR::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("UAISense_Sight_VR"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAISense_Sight_VR);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
