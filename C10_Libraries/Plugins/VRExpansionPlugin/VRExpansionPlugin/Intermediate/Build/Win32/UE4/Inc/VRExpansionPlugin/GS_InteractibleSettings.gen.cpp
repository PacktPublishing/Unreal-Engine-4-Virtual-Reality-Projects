// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/GripScripts/GS_InteractibleSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGS_InteractibleSettings() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPGS_InteractionSettings();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize100();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGS_InteractibleSettings_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGS_InteractibleSettings();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRGripScriptBase();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UGS_InteractibleSettings_RemoveHandRotation();
// End Cross Module References
class UScriptStruct* FBPGS_InteractionSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VREXPANSIONPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPGS_InteractionSettings, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("BPGS_InteractionSettings"), sizeof(FBPGS_InteractionSettings), Get_Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Hash());
	}
	return Singleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FBPGS_InteractionSettings>()
{
	return FBPGS_InteractionSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBPGS_InteractionSettings(FBPGS_InteractionSettings::StaticStruct, TEXT("/Script/VRExpansionPlugin"), TEXT("BPGS_InteractionSettings"), false, nullptr, nullptr);
static struct FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFBPGS_InteractionSettings
{
	FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFBPGS_InteractionSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BPGS_InteractionSettings")),new UScriptStruct::TCppStructOps<FBPGS_InteractionSettings>);
	}
} ScriptStruct_VRExpansionPlugin_StaticRegisterNativesFBPGS_InteractionSettings;
	struct Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAngularTranslation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxAngularTranslation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinAngularTranslation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MinAngularTranslation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialAngularTranslation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InitialAngularTranslation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxLinearTranslation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxLinearTranslation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinLinearTranslation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MinLinearTranslation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialLinearTranslation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InitialLinearTranslation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreHandRotation_MetaData[];
#endif
		static void NewProp_bIgnoreHandRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreHandRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLimitRoll_MetaData[];
#endif
		static void NewProp_bLimitRoll_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLimitRoll;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLimitYaw_MetaData[];
#endif
		static void NewProp_bLimitYaw_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLimitYaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLimitPitch_MetaData[];
#endif
		static void NewProp_bLimitPitch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLimitPitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLimitZ_MetaData[];
#endif
		static void NewProp_bLimitZ_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLimitZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLimitY_MetaData[];
#endif
		static void NewProp_bLimitY_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLimitY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLimitX_MetaData[];
#endif
		static void NewProp_bLimitX_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLimitX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGetInitialPositionsOnBeginPlay_MetaData[];
#endif
		static void NewProp_bGetInitialPositionsOnBeginPlay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGetInitialPositionsOnBeginPlay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLimitsInLocalSpace_MetaData[];
#endif
		static void NewProp_bLimitsInLocalSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLimitsInLocalSpace;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "VRExpansionLibrary" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_InteractibleSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPGS_InteractionSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_MaxAngularTranslation_MetaData[] = {
		{ "Category", "Settings|Angular" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_InteractibleSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_MaxAngularTranslation = { "MaxAngularTranslation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPGS_InteractionSettings, MaxAngularTranslation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_MaxAngularTranslation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_MaxAngularTranslation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_MinAngularTranslation_MetaData[] = {
		{ "Category", "Settings|Angular" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_InteractibleSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_MinAngularTranslation = { "MinAngularTranslation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPGS_InteractionSettings, MinAngularTranslation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_MinAngularTranslation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_MinAngularTranslation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_InitialAngularTranslation_MetaData[] = {
		{ "Category", "Settings|Angular" },
		{ "editcondition", "!bGetInitialPositionsOnBeginPlay" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_InteractibleSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_InitialAngularTranslation = { "InitialAngularTranslation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPGS_InteractionSettings, InitialAngularTranslation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_InitialAngularTranslation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_InitialAngularTranslation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_MaxLinearTranslation_MetaData[] = {
		{ "Category", "Settings|Linear" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_InteractibleSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_MaxLinearTranslation = { "MaxLinearTranslation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPGS_InteractionSettings, MaxLinearTranslation), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_MaxLinearTranslation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_MaxLinearTranslation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_MinLinearTranslation_MetaData[] = {
		{ "Category", "Settings|Linear" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_InteractibleSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_MinLinearTranslation = { "MinLinearTranslation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPGS_InteractionSettings, MinLinearTranslation), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_MinLinearTranslation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_MinLinearTranslation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_InitialLinearTranslation_MetaData[] = {
		{ "Category", "Settings|Linear" },
		{ "editcondition", "!bGetInitialPositionsOnBeginPlay" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_InteractibleSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_InitialLinearTranslation = { "InitialLinearTranslation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPGS_InteractionSettings, InitialLinearTranslation), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_InitialLinearTranslation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_InitialLinearTranslation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bIgnoreHandRotation_MetaData[] = {
		{ "Category", "Settings|Angular" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_InteractibleSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bIgnoreHandRotation_SetBit(void* Obj)
	{
		((FBPGS_InteractionSettings*)Obj)->bIgnoreHandRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bIgnoreHandRotation = { "bIgnoreHandRotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FBPGS_InteractionSettings), &Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bIgnoreHandRotation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bIgnoreHandRotation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bIgnoreHandRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitRoll_MetaData[] = {
		{ "Category", "Settings|Angular" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_InteractibleSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitRoll_SetBit(void* Obj)
	{
		((FBPGS_InteractionSettings*)Obj)->bLimitRoll = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitRoll = { "bLimitRoll", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FBPGS_InteractionSettings), &Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitRoll_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitRoll_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitRoll_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitYaw_MetaData[] = {
		{ "Category", "Settings|Angular" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_InteractibleSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitYaw_SetBit(void* Obj)
	{
		((FBPGS_InteractionSettings*)Obj)->bLimitYaw = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitYaw = { "bLimitYaw", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FBPGS_InteractionSettings), &Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitYaw_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitYaw_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitYaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitPitch_MetaData[] = {
		{ "Category", "Settings|Angular" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_InteractibleSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitPitch_SetBit(void* Obj)
	{
		((FBPGS_InteractionSettings*)Obj)->bLimitPitch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitPitch = { "bLimitPitch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FBPGS_InteractionSettings), &Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitPitch_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitPitch_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitPitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitZ_MetaData[] = {
		{ "Category", "Settings|Linear" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_InteractibleSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitZ_SetBit(void* Obj)
	{
		((FBPGS_InteractionSettings*)Obj)->bLimitZ = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitZ = { "bLimitZ", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FBPGS_InteractionSettings), &Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitZ_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitZ_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitY_MetaData[] = {
		{ "Category", "Settings|Linear" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_InteractibleSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitY_SetBit(void* Obj)
	{
		((FBPGS_InteractionSettings*)Obj)->bLimitY = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitY = { "bLimitY", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FBPGS_InteractionSettings), &Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitY_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitY_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitX_MetaData[] = {
		{ "Category", "Settings|Linear" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_InteractibleSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitX_SetBit(void* Obj)
	{
		((FBPGS_InteractionSettings*)Obj)->bLimitX = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitX = { "bLimitX", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FBPGS_InteractionSettings), &Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitX_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitX_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bGetInitialPositionsOnBeginPlay_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_InteractibleSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bGetInitialPositionsOnBeginPlay_SetBit(void* Obj)
	{
		((FBPGS_InteractionSettings*)Obj)->bGetInitialPositionsOnBeginPlay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bGetInitialPositionsOnBeginPlay = { "bGetInitialPositionsOnBeginPlay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FBPGS_InteractionSettings), &Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bGetInitialPositionsOnBeginPlay_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bGetInitialPositionsOnBeginPlay_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bGetInitialPositionsOnBeginPlay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitsInLocalSpace_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_InteractibleSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitsInLocalSpace_SetBit(void* Obj)
	{
		((FBPGS_InteractionSettings*)Obj)->bLimitsInLocalSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitsInLocalSpace = { "bLimitsInLocalSpace", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FBPGS_InteractionSettings), &Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitsInLocalSpace_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitsInLocalSpace_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitsInLocalSpace_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_MaxAngularTranslation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_MinAngularTranslation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_InitialAngularTranslation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_MaxLinearTranslation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_MinLinearTranslation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_InitialLinearTranslation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bIgnoreHandRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitRoll,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitYaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitPitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bGetInitialPositionsOnBeginPlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitsInLocalSpace,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		&NewStructOps,
		"BPGS_InteractionSettings",
		sizeof(FBPGS_InteractionSettings),
		alignof(FBPGS_InteractionSettings),
		Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBPGS_InteractionSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BPGS_InteractionSettings"), sizeof(FBPGS_InteractionSettings), Get_Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Hash() { return 4283477634U; }
	void UGS_InteractibleSettings::StaticRegisterNativesUGS_InteractibleSettings()
	{
		UClass* Class = UGS_InteractibleSettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RemoveHandRotation", &UGS_InteractibleSettings::execRemoveHandRotation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGS_InteractibleSettings_RemoveHandRotation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGS_InteractibleSettings_RemoveHandRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "InteractionSettings" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_InteractibleSettings.h" },
		{ "ToolTip", "Flags the the interaction settings so that it will regenerate removing the hand rotation.\nUse this if you just changed the relative hand transform." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGS_InteractibleSettings_RemoveHandRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGS_InteractibleSettings, nullptr, "RemoveHandRotation", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGS_InteractibleSettings_RemoveHandRotation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGS_InteractibleSettings_RemoveHandRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGS_InteractibleSettings_RemoveHandRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGS_InteractibleSettings_RemoveHandRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGS_InteractibleSettings_NoRegister()
	{
		return UGS_InteractibleSettings::StaticClass();
	}
	struct Z_Construct_UClass_UGS_InteractibleSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InteractionSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGS_InteractibleSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVRGripScriptBase,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGS_InteractibleSettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGS_InteractibleSettings_RemoveHandRotation, "RemoveHandRotation" }, // 1032977959
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGS_InteractibleSettings_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "VRExpansionPlugin" },
		{ "HideCategories", "DefaultSettings" },
		{ "IncludePath", "GripScripts/GS_InteractibleSettings.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_InteractibleSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A Grip script that overrides the default grip behavior and adds custom clamping logic instead," },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGS_InteractibleSettings_Statics::NewProp_InteractionSettings_MetaData[] = {
		{ "Category", "InteractionSettings" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_InteractibleSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGS_InteractibleSettings_Statics::NewProp_InteractionSettings = { "InteractionSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGS_InteractibleSettings, InteractionSettings), Z_Construct_UScriptStruct_FBPGS_InteractionSettings, METADATA_PARAMS(Z_Construct_UClass_UGS_InteractibleSettings_Statics::NewProp_InteractionSettings_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGS_InteractibleSettings_Statics::NewProp_InteractionSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGS_InteractibleSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGS_InteractibleSettings_Statics::NewProp_InteractionSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGS_InteractibleSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGS_InteractibleSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGS_InteractibleSettings_Statics::ClassParams = {
		&UGS_InteractibleSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGS_InteractibleSettings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UGS_InteractibleSettings_Statics::PropPointers),
		0,
		0x003010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGS_InteractibleSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGS_InteractibleSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGS_InteractibleSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGS_InteractibleSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGS_InteractibleSettings, 1756648569);
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UGS_InteractibleSettings>()
	{
		return UGS_InteractibleSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGS_InteractibleSettings(Z_Construct_UClass_UGS_InteractibleSettings, &UGS_InteractibleSettings::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("UGS_InteractibleSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGS_InteractibleSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
