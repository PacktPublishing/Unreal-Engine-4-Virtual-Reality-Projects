// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/VRRootComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRRootComponent() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRRootComponent_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRRootComponent();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRRootComponent_SetCapsuleHalfHeightVR();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRRootComponent_SetCapsuleSizeVR();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPVRWaistTracking_Info();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRTrackedParentInterface_NoRegister();
// End Cross Module References
	void UVRRootComponent::StaticRegisterNativesUVRRootComponent()
	{
		UClass* Class = UVRRootComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetCapsuleHalfHeightVR", &UVRRootComponent::execSetCapsuleHalfHeightVR },
			{ "SetCapsuleSizeVR", &UVRRootComponent::execSetCapsuleSizeVR },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVRRootComponent_SetCapsuleHalfHeightVR_Statics
	{
		struct VRRootComponent_eventSetCapsuleHalfHeightVR_Parms
		{
			float HalfHeight;
			bool bUpdateOverlaps;
		};
		static void NewProp_bUpdateOverlaps_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateOverlaps;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HalfHeight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVRRootComponent_SetCapsuleHalfHeightVR_Statics::NewProp_bUpdateOverlaps_SetBit(void* Obj)
	{
		((VRRootComponent_eventSetCapsuleHalfHeightVR_Parms*)Obj)->bUpdateOverlaps = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRRootComponent_SetCapsuleHalfHeightVR_Statics::NewProp_bUpdateOverlaps = { "bUpdateOverlaps", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRRootComponent_eventSetCapsuleHalfHeightVR_Parms), &Z_Construct_UFunction_UVRRootComponent_SetCapsuleHalfHeightVR_Statics::NewProp_bUpdateOverlaps_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRRootComponent_SetCapsuleHalfHeightVR_Statics::NewProp_HalfHeight = { "HalfHeight", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRRootComponent_eventSetCapsuleHalfHeightVR_Parms, HalfHeight), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRRootComponent_SetCapsuleHalfHeightVR_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRRootComponent_SetCapsuleHalfHeightVR_Statics::NewProp_bUpdateOverlaps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRRootComponent_SetCapsuleHalfHeightVR_Statics::NewProp_HalfHeight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRRootComponent_SetCapsuleHalfHeightVR_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Capsule" },
		{ "CPP_Default_bUpdateOverlaps", "true" },
		{ "ModuleRelativePath", "Public/VRRootComponent.h" },
		{ "ToolTip", "Used to update the capsule half height and calculate the new offset value for VR" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRRootComponent_SetCapsuleHalfHeightVR_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRRootComponent, nullptr, "SetCapsuleHalfHeightVR", sizeof(VRRootComponent_eventSetCapsuleHalfHeightVR_Parms), Z_Construct_UFunction_UVRRootComponent_SetCapsuleHalfHeightVR_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVRRootComponent_SetCapsuleHalfHeightVR_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRRootComponent_SetCapsuleHalfHeightVR_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVRRootComponent_SetCapsuleHalfHeightVR_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRRootComponent_SetCapsuleHalfHeightVR()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRRootComponent_SetCapsuleHalfHeightVR_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRRootComponent_SetCapsuleSizeVR_Statics
	{
		struct VRRootComponent_eventSetCapsuleSizeVR_Parms
		{
			float NewRadius;
			float NewHalfHeight;
			bool bUpdateOverlaps;
		};
		static void NewProp_bUpdateOverlaps_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateOverlaps;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewHalfHeight;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewRadius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVRRootComponent_SetCapsuleSizeVR_Statics::NewProp_bUpdateOverlaps_SetBit(void* Obj)
	{
		((VRRootComponent_eventSetCapsuleSizeVR_Parms*)Obj)->bUpdateOverlaps = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRRootComponent_SetCapsuleSizeVR_Statics::NewProp_bUpdateOverlaps = { "bUpdateOverlaps", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRRootComponent_eventSetCapsuleSizeVR_Parms), &Z_Construct_UFunction_UVRRootComponent_SetCapsuleSizeVR_Statics::NewProp_bUpdateOverlaps_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRRootComponent_SetCapsuleSizeVR_Statics::NewProp_NewHalfHeight = { "NewHalfHeight", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRRootComponent_eventSetCapsuleSizeVR_Parms, NewHalfHeight), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRRootComponent_SetCapsuleSizeVR_Statics::NewProp_NewRadius = { "NewRadius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRRootComponent_eventSetCapsuleSizeVR_Parms, NewRadius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRRootComponent_SetCapsuleSizeVR_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRRootComponent_SetCapsuleSizeVR_Statics::NewProp_bUpdateOverlaps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRRootComponent_SetCapsuleSizeVR_Statics::NewProp_NewHalfHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRRootComponent_SetCapsuleSizeVR_Statics::NewProp_NewRadius,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRRootComponent_SetCapsuleSizeVR_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Capsule" },
		{ "CPP_Default_bUpdateOverlaps", "true" },
		{ "ModuleRelativePath", "Public/VRRootComponent.h" },
		{ "ToolTip", "This is overidden for the VR Character to re-set physics location\nChange the capsule size. This is the unscaled size, before component scale is applied.\n@param        InRadius : radius of end-cap hemispheres and center cylinder.\n@param        InHalfHeight : half-height, from capsule center to end of top or bottom hemisphere.\n@param        bUpdateOverlaps: if true and this shape is registered and collides, updates touching array for owner actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRRootComponent_SetCapsuleSizeVR_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRRootComponent, nullptr, "SetCapsuleSizeVR", sizeof(VRRootComponent_eventSetCapsuleSizeVR_Parms), Z_Construct_UFunction_UVRRootComponent_SetCapsuleSizeVR_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVRRootComponent_SetCapsuleSizeVR_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRRootComponent_SetCapsuleSizeVR_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVRRootComponent_SetCapsuleSizeVR_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRRootComponent_SetCapsuleSizeVR()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRRootComponent_SetCapsuleSizeVR_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVRRootComponent_NoRegister()
	{
		return UVRRootComponent::StaticClass();
	}
	struct Z_Construct_UClass_UVRRootComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHadRelativeMovement_MetaData[];
#endif
		static void NewProp_bHadRelativeMovement_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHadRelativeMovement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WalkingCollisionOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WalkingCollisionOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseWalkingCollisionOverride_MetaData[];
#endif
		static void NewProp_bUseWalkingCollisionOverride_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseWalkingCollisionOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowSimulatingCollision_MetaData[];
#endif
		static void NewProp_bAllowSimulatingCollision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowSimulatingCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCenterCapsuleOnHMD_MetaData[];
#endif
		static void NewProp_bCenterCapsuleOnHMD_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCenterCapsuleOnHMD;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VRCapsuleOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VRCapsuleOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetPrimitiveComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetPrimitiveComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OptionalWaistTrackingParent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OptionalWaistTrackingParent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVRRootComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCapsuleComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVRRootComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVRRootComponent_SetCapsuleHalfHeightVR, "SetCapsuleHalfHeightVR" }, // 2360045670
		{ &Z_Construct_UFunction_UVRRootComponent_SetCapsuleSizeVR, "SetCapsuleSizeVR" }, // 2829394758
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRRootComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "VRExpansionLibrary" },
		{ "HideCategories", "Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger" },
		{ "IncludePath", "VRRootComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VRRootComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A capsule component that repositions its physics scene and rendering location to the camera/HMD's relative position.\nGenerally not to be used by itself unless on a base Pawn and not a character, the VRCharacter has been highly customized to correctly support it." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRRootComponent_Statics::NewProp_bHadRelativeMovement_MetaData[] = {
		{ "Category", "VRExpansionLibrary" },
		{ "ModuleRelativePath", "Public/VRRootComponent.h" },
		{ "ToolTip", "While misnamed, is true if we collided with a wall/obstacle due to the HMDs movement in this frame (not movement components)" },
	};
#endif
	void Z_Construct_UClass_UVRRootComponent_Statics::NewProp_bHadRelativeMovement_SetBit(void* Obj)
	{
		((UVRRootComponent*)Obj)->bHadRelativeMovement = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRRootComponent_Statics::NewProp_bHadRelativeMovement = { "bHadRelativeMovement", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVRRootComponent), &Z_Construct_UClass_UVRRootComponent_Statics::NewProp_bHadRelativeMovement_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRRootComponent_Statics::NewProp_bHadRelativeMovement_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVRRootComponent_Statics::NewProp_bHadRelativeMovement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRRootComponent_Statics::NewProp_WalkingCollisionOverride_MetaData[] = {
		{ "Category", "VRExpansionLibrary" },
		{ "ModuleRelativePath", "Public/VRRootComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVRRootComponent_Statics::NewProp_WalkingCollisionOverride = { "WalkingCollisionOverride", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRRootComponent, WalkingCollisionOverride), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(Z_Construct_UClass_UVRRootComponent_Statics::NewProp_WalkingCollisionOverride_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVRRootComponent_Statics::NewProp_WalkingCollisionOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRRootComponent_Statics::NewProp_bUseWalkingCollisionOverride_MetaData[] = {
		{ "Category", "VRExpansionLibrary" },
		{ "ModuleRelativePath", "Public/VRRootComponent.h" },
	};
#endif
	void Z_Construct_UClass_UVRRootComponent_Statics::NewProp_bUseWalkingCollisionOverride_SetBit(void* Obj)
	{
		((UVRRootComponent*)Obj)->bUseWalkingCollisionOverride = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRRootComponent_Statics::NewProp_bUseWalkingCollisionOverride = { "bUseWalkingCollisionOverride", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVRRootComponent), &Z_Construct_UClass_UVRRootComponent_Statics::NewProp_bUseWalkingCollisionOverride_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRRootComponent_Statics::NewProp_bUseWalkingCollisionOverride_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVRRootComponent_Statics::NewProp_bUseWalkingCollisionOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRRootComponent_Statics::NewProp_bAllowSimulatingCollision_MetaData[] = {
		{ "Category", "VRExpansionLibrary" },
		{ "ModuleRelativePath", "Public/VRRootComponent.h" },
		{ "ToolTip", "Allows the root component to be blocked by simulating objects (default off due to sickness inducing stuttering)." },
	};
#endif
	void Z_Construct_UClass_UVRRootComponent_Statics::NewProp_bAllowSimulatingCollision_SetBit(void* Obj)
	{
		((UVRRootComponent*)Obj)->bAllowSimulatingCollision = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRRootComponent_Statics::NewProp_bAllowSimulatingCollision = { "bAllowSimulatingCollision", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVRRootComponent), &Z_Construct_UClass_UVRRootComponent_Statics::NewProp_bAllowSimulatingCollision_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRRootComponent_Statics::NewProp_bAllowSimulatingCollision_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVRRootComponent_Statics::NewProp_bAllowSimulatingCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRRootComponent_Statics::NewProp_bCenterCapsuleOnHMD_MetaData[] = {
		{ "Category", "VRExpansionLibrary" },
		{ "ModuleRelativePath", "Public/VRRootComponent.h" },
		{ "ToolTip", "#TODO: See if making this multiplayer compatible is viable\nOffsets capsule to be centered on HMD - currently NOT multiplayer compatible" },
	};
#endif
	void Z_Construct_UClass_UVRRootComponent_Statics::NewProp_bCenterCapsuleOnHMD_SetBit(void* Obj)
	{
		((UVRRootComponent*)Obj)->bCenterCapsuleOnHMD = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRRootComponent_Statics::NewProp_bCenterCapsuleOnHMD = { "bCenterCapsuleOnHMD", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVRRootComponent), &Z_Construct_UClass_UVRRootComponent_Statics::NewProp_bCenterCapsuleOnHMD_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRRootComponent_Statics::NewProp_bCenterCapsuleOnHMD_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVRRootComponent_Statics::NewProp_bCenterCapsuleOnHMD_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRRootComponent_Statics::NewProp_VRCapsuleOffset_MetaData[] = {
		{ "Category", "VRExpansionLibrary" },
		{ "ModuleRelativePath", "Public/VRRootComponent.h" },
		{ "ToolTip", "Used to offset the collision (IE backwards from the player slightly.\nThe default 2.15 Z offset is to account for floor hover from the character movement component." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVRRootComponent_Statics::NewProp_VRCapsuleOffset = { "VRCapsuleOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRRootComponent, VRCapsuleOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UVRRootComponent_Statics::NewProp_VRCapsuleOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVRRootComponent_Statics::NewProp_VRCapsuleOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRRootComponent_Statics::NewProp_TargetPrimitiveComponent_MetaData[] = {
		{ "Category", "VRExpansionLibrary" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VRRootComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVRRootComponent_Statics::NewProp_TargetPrimitiveComponent = { "TargetPrimitiveComponent", nullptr, (EPropertyFlags)0x001000000008200c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRRootComponent, TargetPrimitiveComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVRRootComponent_Statics::NewProp_TargetPrimitiveComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVRRootComponent_Statics::NewProp_TargetPrimitiveComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRRootComponent_Statics::NewProp_OptionalWaistTrackingParent_MetaData[] = {
		{ "Category", "VRTrackedParentInterface" },
		{ "ModuleRelativePath", "Public/VRRootComponent.h" },
		{ "ToolTip", "If valid will use this as the tracked parent instead of the HMD / Parent" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVRRootComponent_Statics::NewProp_OptionalWaistTrackingParent = { "OptionalWaistTrackingParent", nullptr, (EPropertyFlags)0x0010008000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRRootComponent, OptionalWaistTrackingParent), Z_Construct_UScriptStruct_FBPVRWaistTracking_Info, METADATA_PARAMS(Z_Construct_UClass_UVRRootComponent_Statics::NewProp_OptionalWaistTrackingParent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVRRootComponent_Statics::NewProp_OptionalWaistTrackingParent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVRRootComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRRootComponent_Statics::NewProp_bHadRelativeMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRRootComponent_Statics::NewProp_WalkingCollisionOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRRootComponent_Statics::NewProp_bUseWalkingCollisionOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRRootComponent_Statics::NewProp_bAllowSimulatingCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRRootComponent_Statics::NewProp_bCenterCapsuleOnHMD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRRootComponent_Statics::NewProp_VRCapsuleOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRRootComponent_Statics::NewProp_TargetPrimitiveComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRRootComponent_Statics::NewProp_OptionalWaistTrackingParent,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UVRRootComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UVRTrackedParentInterface_NoRegister, (int32)VTABLE_OFFSET(UVRRootComponent, IVRTrackedParentInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVRRootComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVRRootComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVRRootComponent_Statics::ClassParams = {
		&UVRRootComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVRRootComponent_Statics::PropPointers,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UVRRootComponent_Statics::PropPointers),
		ARRAY_COUNT(InterfaceParams),
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVRRootComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UVRRootComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVRRootComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVRRootComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVRRootComponent, 3279863323);
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UVRRootComponent>()
	{
		return UVRRootComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVRRootComponent(Z_Construct_UClass_UVRRootComponent, &UVRRootComponent::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("UVRRootComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVRRootComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
