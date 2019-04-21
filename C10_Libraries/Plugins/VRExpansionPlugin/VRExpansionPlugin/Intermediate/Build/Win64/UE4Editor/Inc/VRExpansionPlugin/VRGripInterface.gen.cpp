// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/VRGripInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRGripInterface() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRGripInterface_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRGripInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGripInterface_AdvancedGripSettings();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPAdvGripSettings();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGripInterface_ClosestGripSlotInRange();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGripMotionControllerComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGripInterface_DenyGripping();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGripInterface_GetGripScripts();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRGripScriptBase_NoRegister();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGripInterface_GetGripStiffnessAndDamping();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGripInterface_GetPrimaryGripType();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EGripCollisionType();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGripInterface_GripBreakDistance();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGripInterface_GripLateUpdateSetting();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EGripLateUpdateSettings();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGripInterface_GripMovementReplicationType();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EGripMovementReplicationSettings();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGripInterface_IsHeld();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGripInterface_OnChildGrip();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPActorGripInformation();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGripInterface_OnChildGripRelease();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGripInterface_OnEndSecondaryUsed();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGripInterface_OnEndUsed();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGripInterface_OnGrip();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGripInterface_OnGripRelease();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGripInterface_OnInput();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EInputEvent();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGripInterface_OnSecondaryGrip();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGripInterface_OnSecondaryGripRelease();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGripInterface_OnSecondaryUsed();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGripInterface_OnUsed();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGripInterface_RequestsSocketing();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FTransform_NetQuantize();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGripInterface_SecondaryGripType();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_ESecondaryGripType();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGripInterface_SetHeld();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGripInterface_SimulateOnDrop();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGripInterface_TeleportBehavior();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EGripInterfaceTeleportBehavior();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGripInterface_TickGrip();
// End Cross Module References
	FBPAdvGripSettings IVRGripInterface::AdvancedGripSettings()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_AdvancedGripSettings instead.");
		VRGripInterface_eventAdvancedGripSettings_Parms Parms;
		return Parms.ReturnValue;
	}
	void IVRGripInterface::ClosestGripSlotInRange(FVector WorldLocation, bool bSecondarySlot, bool& bHadSlotInRange, FTransform& SlotWorldTransform, UGripMotionControllerComponent* CallingController, FName OverridePrefix)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ClosestGripSlotInRange instead.");
	}
	bool IVRGripInterface::DenyGripping()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_DenyGripping instead.");
		VRGripInterface_eventDenyGripping_Parms Parms;
		return Parms.ReturnValue;
	}
	bool IVRGripInterface::GetGripScripts(TArray<UVRGripScriptBase*>& ArrayReference)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetGripScripts instead.");
		VRGripInterface_eventGetGripScripts_Parms Parms;
		return Parms.ReturnValue;
	}
	void IVRGripInterface::GetGripStiffnessAndDamping(float& GripStiffnessOut, float& GripDampingOut)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetGripStiffnessAndDamping instead.");
	}
	EGripCollisionType IVRGripInterface::GetPrimaryGripType(bool bIsSlot)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetPrimaryGripType instead.");
		VRGripInterface_eventGetPrimaryGripType_Parms Parms;
		return Parms.ReturnValue;
	}
	float IVRGripInterface::GripBreakDistance()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GripBreakDistance instead.");
		VRGripInterface_eventGripBreakDistance_Parms Parms;
		return Parms.ReturnValue;
	}
	EGripLateUpdateSettings IVRGripInterface::GripLateUpdateSetting()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GripLateUpdateSetting instead.");
		VRGripInterface_eventGripLateUpdateSetting_Parms Parms;
		return Parms.ReturnValue;
	}
	EGripMovementReplicationSettings IVRGripInterface::GripMovementReplicationType()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GripMovementReplicationType instead.");
		VRGripInterface_eventGripMovementReplicationType_Parms Parms;
		return Parms.ReturnValue;
	}
	void IVRGripInterface::IsHeld(UGripMotionControllerComponent*& HoldingController, bool& bIsHeld)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_IsHeld instead.");
	}
	void IVRGripInterface::OnChildGrip(UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnChildGrip instead.");
	}
	void IVRGripInterface::OnChildGripRelease(UGripMotionControllerComponent* ReleasingController, FBPActorGripInformation const& GripInformation, bool bWasSocketed)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnChildGripRelease instead.");
	}
	void IVRGripInterface::OnEndSecondaryUsed()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnEndSecondaryUsed instead.");
	}
	void IVRGripInterface::OnEndUsed()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnEndUsed instead.");
	}
	void IVRGripInterface::OnGrip(UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnGrip instead.");
	}
	void IVRGripInterface::OnGripRelease(UGripMotionControllerComponent* ReleasingController, FBPActorGripInformation const& GripInformation, bool bWasSocketed)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnGripRelease instead.");
	}
	void IVRGripInterface::OnInput(FKey Key, EInputEvent KeyEvent)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnInput instead.");
	}
	void IVRGripInterface::OnSecondaryGrip(USceneComponent* SecondaryGripComponent, FBPActorGripInformation const& GripInformation)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnSecondaryGrip instead.");
	}
	void IVRGripInterface::OnSecondaryGripRelease(USceneComponent* ReleasingSecondaryGripComponent, FBPActorGripInformation const& GripInformation)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnSecondaryGripRelease instead.");
	}
	void IVRGripInterface::OnSecondaryUsed()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnSecondaryUsed instead.");
	}
	void IVRGripInterface::OnUsed()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnUsed instead.");
	}
	bool IVRGripInterface::RequestsSocketing(USceneComponent*& ParentToSocketTo, FName& OptionalSocketName, FTransform_NetQuantize& RelativeTransform)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_RequestsSocketing instead.");
		VRGripInterface_eventRequestsSocketing_Parms Parms;
		return Parms.ReturnValue;
	}
	ESecondaryGripType IVRGripInterface::SecondaryGripType()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SecondaryGripType instead.");
		VRGripInterface_eventSecondaryGripType_Parms Parms;
		return Parms.ReturnValue;
	}
	void IVRGripInterface::SetHeld(UGripMotionControllerComponent* HoldingController, bool bIsHeld)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetHeld instead.");
	}
	bool IVRGripInterface::SimulateOnDrop()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SimulateOnDrop instead.");
		VRGripInterface_eventSimulateOnDrop_Parms Parms;
		return Parms.ReturnValue;
	}
	EGripInterfaceTeleportBehavior IVRGripInterface::TeleportBehavior()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_TeleportBehavior instead.");
		VRGripInterface_eventTeleportBehavior_Parms Parms;
		return Parms.ReturnValue;
	}
	void IVRGripInterface::TickGrip(UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation, float DeltaTime)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_TickGrip instead.");
	}
	void UVRGripInterface::StaticRegisterNativesUVRGripInterface()
	{
		UClass* Class = UVRGripInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AdvancedGripSettings", &IVRGripInterface::execAdvancedGripSettings },
			{ "ClosestGripSlotInRange", &IVRGripInterface::execClosestGripSlotInRange },
			{ "DenyGripping", &IVRGripInterface::execDenyGripping },
			{ "GetGripScripts", &IVRGripInterface::execGetGripScripts },
			{ "GetGripStiffnessAndDamping", &IVRGripInterface::execGetGripStiffnessAndDamping },
			{ "GetPrimaryGripType", &IVRGripInterface::execGetPrimaryGripType },
			{ "GripBreakDistance", &IVRGripInterface::execGripBreakDistance },
			{ "GripLateUpdateSetting", &IVRGripInterface::execGripLateUpdateSetting },
			{ "GripMovementReplicationType", &IVRGripInterface::execGripMovementReplicationType },
			{ "IsHeld", &IVRGripInterface::execIsHeld },
			{ "OnChildGrip", &IVRGripInterface::execOnChildGrip },
			{ "OnChildGripRelease", &IVRGripInterface::execOnChildGripRelease },
			{ "OnEndSecondaryUsed", &IVRGripInterface::execOnEndSecondaryUsed },
			{ "OnEndUsed", &IVRGripInterface::execOnEndUsed },
			{ "OnGrip", &IVRGripInterface::execOnGrip },
			{ "OnGripRelease", &IVRGripInterface::execOnGripRelease },
			{ "OnInput", &IVRGripInterface::execOnInput },
			{ "OnSecondaryGrip", &IVRGripInterface::execOnSecondaryGrip },
			{ "OnSecondaryGripRelease", &IVRGripInterface::execOnSecondaryGripRelease },
			{ "OnSecondaryUsed", &IVRGripInterface::execOnSecondaryUsed },
			{ "OnUsed", &IVRGripInterface::execOnUsed },
			{ "RequestsSocketing", &IVRGripInterface::execRequestsSocketing },
			{ "SecondaryGripType", &IVRGripInterface::execSecondaryGripType },
			{ "SetHeld", &IVRGripInterface::execSetHeld },
			{ "SimulateOnDrop", &IVRGripInterface::execSimulateOnDrop },
			{ "TeleportBehavior", &IVRGripInterface::execTeleportBehavior },
			{ "TickGrip", &IVRGripInterface::execTickGrip },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVRGripInterface_AdvancedGripSettings_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGripInterface_AdvancedGripSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripInterface_eventAdvancedGripSettings_Parms, ReturnValue), Z_Construct_UScriptStruct_FBPAdvGripSettings, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripInterface_AdvancedGripSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_AdvancedGripSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripInterface_AdvancedGripSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "ModuleRelativePath", "Public/VRGripInterface.h" },
		{ "ToolTip", "Get the advanced physics settings for this grip" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripInterface_AdvancedGripSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, nullptr, "AdvancedGripSettings", sizeof(VRGripInterface_eventAdvancedGripSettings_Parms), Z_Construct_UFunction_UVRGripInterface_AdvancedGripSettings_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_AdvancedGripSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGripInterface_AdvancedGripSettings_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_AdvancedGripSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGripInterface_AdvancedGripSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGripInterface_AdvancedGripSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGripInterface_ClosestGripSlotInRange_Statics
	{
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OverridePrefix;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CallingController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CallingController;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SlotWorldTransform;
		static void NewProp_bHadSlotInRange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHadSlotInRange;
		static void NewProp_bSecondarySlot_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSecondarySlot;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVRGripInterface_ClosestGripSlotInRange_Statics::NewProp_OverridePrefix = { "OverridePrefix", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripInterface_eventClosestGripSlotInRange_Parms, OverridePrefix), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripInterface_ClosestGripSlotInRange_Statics::NewProp_CallingController_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGripInterface_ClosestGripSlotInRange_Statics::NewProp_CallingController = { "CallingController", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripInterface_eventClosestGripSlotInRange_Parms, CallingController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVRGripInterface_ClosestGripSlotInRange_Statics::NewProp_CallingController_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_ClosestGripSlotInRange_Statics::NewProp_CallingController_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGripInterface_ClosestGripSlotInRange_Statics::NewProp_SlotWorldTransform = { "SlotWorldTransform", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripInterface_eventClosestGripSlotInRange_Parms, SlotWorldTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVRGripInterface_ClosestGripSlotInRange_Statics::NewProp_bHadSlotInRange_SetBit(void* Obj)
	{
		((VRGripInterface_eventClosestGripSlotInRange_Parms*)Obj)->bHadSlotInRange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGripInterface_ClosestGripSlotInRange_Statics::NewProp_bHadSlotInRange = { "bHadSlotInRange", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRGripInterface_eventClosestGripSlotInRange_Parms), &Z_Construct_UFunction_UVRGripInterface_ClosestGripSlotInRange_Statics::NewProp_bHadSlotInRange_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVRGripInterface_ClosestGripSlotInRange_Statics::NewProp_bSecondarySlot_SetBit(void* Obj)
	{
		((VRGripInterface_eventClosestGripSlotInRange_Parms*)Obj)->bSecondarySlot = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGripInterface_ClosestGripSlotInRange_Statics::NewProp_bSecondarySlot = { "bSecondarySlot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRGripInterface_eventClosestGripSlotInRange_Parms), &Z_Construct_UFunction_UVRGripInterface_ClosestGripSlotInRange_Statics::NewProp_bSecondarySlot_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGripInterface_ClosestGripSlotInRange_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripInterface_eventClosestGripSlotInRange_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripInterface_ClosestGripSlotInRange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_ClosestGripSlotInRange_Statics::NewProp_OverridePrefix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_ClosestGripSlotInRange_Statics::NewProp_CallingController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_ClosestGripSlotInRange_Statics::NewProp_SlotWorldTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_ClosestGripSlotInRange_Statics::NewProp_bHadSlotInRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_ClosestGripSlotInRange_Statics::NewProp_bSecondarySlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_ClosestGripSlotInRange_Statics::NewProp_WorldLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripInterface_ClosestGripSlotInRange_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "CPP_Default_CallingController", "None" },
		{ "CPP_Default_OverridePrefix", "None" },
		{ "ModuleRelativePath", "Public/VRGripInterface.h" },
		{ "ToolTip", "Get closest slot in range" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripInterface_ClosestGripSlotInRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, nullptr, "ClosestGripSlotInRange", sizeof(VRGripInterface_eventClosestGripSlotInRange_Parms), Z_Construct_UFunction_UVRGripInterface_ClosestGripSlotInRange_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_ClosestGripSlotInRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGripInterface_ClosestGripSlotInRange_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_ClosestGripSlotInRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGripInterface_ClosestGripSlotInRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGripInterface_ClosestGripSlotInRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGripInterface_DenyGripping_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVRGripInterface_DenyGripping_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VRGripInterface_eventDenyGripping_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGripInterface_DenyGripping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRGripInterface_eventDenyGripping_Parms), &Z_Construct_UFunction_UVRGripInterface_DenyGripping_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripInterface_DenyGripping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_DenyGripping_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripInterface_DenyGripping_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "DisplayName", "IsDenyingGrips" },
		{ "ModuleRelativePath", "Public/VRGripInterface.h" },
		{ "ToolTip", "Set up as deny instead of allow so that default allows for gripping" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripInterface_DenyGripping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, nullptr, "DenyGripping", sizeof(VRGripInterface_eventDenyGripping_Parms), Z_Construct_UFunction_UVRGripInterface_DenyGripping_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_DenyGripping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGripInterface_DenyGripping_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_DenyGripping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGripInterface_DenyGripping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGripInterface_DenyGripping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGripInterface_GetGripScripts_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArrayReference_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ArrayReference;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ArrayReference_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVRGripInterface_GetGripScripts_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VRGripInterface_eventGetGripScripts_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGripInterface_GetGripScripts_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRGripInterface_eventGetGripScripts_Parms), &Z_Construct_UFunction_UVRGripInterface_GetGripScripts_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripInterface_GetGripScripts_Statics::NewProp_ArrayReference_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVRGripInterface_GetGripScripts_Statics::NewProp_ArrayReference = { "ArrayReference", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripInterface_eventGetGripScripts_Parms, ArrayReference), METADATA_PARAMS(Z_Construct_UFunction_UVRGripInterface_GetGripScripts_Statics::NewProp_ArrayReference_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_GetGripScripts_Statics::NewProp_ArrayReference_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGripInterface_GetGripScripts_Statics::NewProp_ArrayReference_Inner = { "ArrayReference", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UVRGripScriptBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripInterface_GetGripScripts_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_GetGripScripts_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_GetGripScripts_Statics::NewProp_ArrayReference,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_GetGripScripts_Statics::NewProp_ArrayReference_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripInterface_GetGripScripts_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "ModuleRelativePath", "Public/VRGripInterface.h" },
		{ "ToolTip", "Get grip scripts" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripInterface_GetGripScripts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, nullptr, "GetGripScripts", sizeof(VRGripInterface_eventGetGripScripts_Parms), Z_Construct_UFunction_UVRGripInterface_GetGripScripts_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_GetGripScripts_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGripInterface_GetGripScripts_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_GetGripScripts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGripInterface_GetGripScripts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGripInterface_GetGripScripts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGripInterface_GetGripStiffnessAndDamping_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GripDampingOut;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GripStiffnessOut;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRGripInterface_GetGripStiffnessAndDamping_Statics::NewProp_GripDampingOut = { "GripDampingOut", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripInterface_eventGetGripStiffnessAndDamping_Parms, GripDampingOut), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRGripInterface_GetGripStiffnessAndDamping_Statics::NewProp_GripStiffnessOut = { "GripStiffnessOut", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripInterface_eventGetGripStiffnessAndDamping_Parms, GripStiffnessOut), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripInterface_GetGripStiffnessAndDamping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_GetGripStiffnessAndDamping_Statics::NewProp_GripDampingOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_GetGripStiffnessAndDamping_Statics::NewProp_GripStiffnessOut,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripInterface_GetGripStiffnessAndDamping_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "ModuleRelativePath", "Public/VRGripInterface.h" },
		{ "ToolTip", "What grip stiffness and damping to use if using a physics constraint" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripInterface_GetGripStiffnessAndDamping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, nullptr, "GetGripStiffnessAndDamping", sizeof(VRGripInterface_eventGetGripStiffnessAndDamping_Parms), Z_Construct_UFunction_UVRGripInterface_GetGripStiffnessAndDamping_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_GetGripStiffnessAndDamping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGripInterface_GetGripStiffnessAndDamping_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_GetGripStiffnessAndDamping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGripInterface_GetGripStiffnessAndDamping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGripInterface_GetGripStiffnessAndDamping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGripInterface_GetPrimaryGripType_Statics
	{
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static void NewProp_bIsSlot_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSlot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVRGripInterface_GetPrimaryGripType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripInterface_eventGetPrimaryGripType_Parms, ReturnValue), Z_Construct_UEnum_VRExpansionPlugin_EGripCollisionType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVRGripInterface_GetPrimaryGripType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVRGripInterface_GetPrimaryGripType_Statics::NewProp_bIsSlot_SetBit(void* Obj)
	{
		((VRGripInterface_eventGetPrimaryGripType_Parms*)Obj)->bIsSlot = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGripInterface_GetPrimaryGripType_Statics::NewProp_bIsSlot = { "bIsSlot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRGripInterface_eventGetPrimaryGripType_Parms), &Z_Construct_UFunction_UVRGripInterface_GetPrimaryGripType_Statics::NewProp_bIsSlot_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripInterface_GetPrimaryGripType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_GetPrimaryGripType_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_GetPrimaryGripType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_GetPrimaryGripType_Statics::NewProp_bIsSlot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripInterface_GetPrimaryGripType_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "ModuleRelativePath", "Public/VRGripInterface.h" },
		{ "ToolTip", "Grip type to use" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripInterface_GetPrimaryGripType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, nullptr, "GetPrimaryGripType", sizeof(VRGripInterface_eventGetPrimaryGripType_Parms), Z_Construct_UFunction_UVRGripInterface_GetPrimaryGripType_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_GetPrimaryGripType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGripInterface_GetPrimaryGripType_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_GetPrimaryGripType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGripInterface_GetPrimaryGripType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGripInterface_GetPrimaryGripType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGripInterface_GripBreakDistance_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRGripInterface_GripBreakDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripInterface_eventGripBreakDistance_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripInterface_GripBreakDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_GripBreakDistance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripInterface_GripBreakDistance_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "ModuleRelativePath", "Public/VRGripInterface.h" },
		{ "ToolTip", "What distance to break a grip at (only relevent with physics enabled grips" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripInterface_GripBreakDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, nullptr, "GripBreakDistance", sizeof(VRGripInterface_eventGripBreakDistance_Parms), Z_Construct_UFunction_UVRGripInterface_GripBreakDistance_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_GripBreakDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGripInterface_GripBreakDistance_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_GripBreakDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGripInterface_GripBreakDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGripInterface_GripBreakDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGripInterface_GripLateUpdateSetting_Statics
	{
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVRGripInterface_GripLateUpdateSetting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripInterface_eventGripLateUpdateSetting_Parms, ReturnValue), Z_Construct_UEnum_VRExpansionPlugin_EGripLateUpdateSettings, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVRGripInterface_GripLateUpdateSetting_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripInterface_GripLateUpdateSetting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_GripLateUpdateSetting_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_GripLateUpdateSetting_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripInterface_GripLateUpdateSetting_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "ModuleRelativePath", "Public/VRGripInterface.h" },
		{ "ToolTip", "Define the late update setting" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripInterface_GripLateUpdateSetting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, nullptr, "GripLateUpdateSetting", sizeof(VRGripInterface_eventGripLateUpdateSetting_Parms), Z_Construct_UFunction_UVRGripInterface_GripLateUpdateSetting_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_GripLateUpdateSetting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGripInterface_GripLateUpdateSetting_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_GripLateUpdateSetting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGripInterface_GripLateUpdateSetting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGripInterface_GripLateUpdateSetting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGripInterface_GripMovementReplicationType_Statics
	{
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVRGripInterface_GripMovementReplicationType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripInterface_eventGripMovementReplicationType_Parms, ReturnValue), Z_Construct_UEnum_VRExpansionPlugin_EGripMovementReplicationSettings, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVRGripInterface_GripMovementReplicationType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripInterface_GripMovementReplicationType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_GripMovementReplicationType_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_GripMovementReplicationType_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripInterface_GripMovementReplicationType_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "ModuleRelativePath", "Public/VRGripInterface.h" },
		{ "ToolTip", "Define which movement repliation setting to use" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripInterface_GripMovementReplicationType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, nullptr, "GripMovementReplicationType", sizeof(VRGripInterface_eventGripMovementReplicationType_Parms), Z_Construct_UFunction_UVRGripInterface_GripMovementReplicationType_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_GripMovementReplicationType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGripInterface_GripMovementReplicationType_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_GripMovementReplicationType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGripInterface_GripMovementReplicationType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGripInterface_GripMovementReplicationType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGripInterface_IsHeld_Statics
	{
		static void NewProp_bIsHeld_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsHeld;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoldingController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HoldingController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVRGripInterface_IsHeld_Statics::NewProp_bIsHeld_SetBit(void* Obj)
	{
		((VRGripInterface_eventIsHeld_Parms*)Obj)->bIsHeld = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGripInterface_IsHeld_Statics::NewProp_bIsHeld = { "bIsHeld", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRGripInterface_eventIsHeld_Parms), &Z_Construct_UFunction_UVRGripInterface_IsHeld_Statics::NewProp_bIsHeld_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripInterface_IsHeld_Statics::NewProp_HoldingController_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGripInterface_IsHeld_Statics::NewProp_HoldingController = { "HoldingController", nullptr, (EPropertyFlags)0x0010000000080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripInterface_eventIsHeld_Parms, HoldingController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVRGripInterface_IsHeld_Statics::NewProp_HoldingController_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_IsHeld_Statics::NewProp_HoldingController_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripInterface_IsHeld_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_IsHeld_Statics::NewProp_bIsHeld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_IsHeld_Statics::NewProp_HoldingController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripInterface_IsHeld_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "ModuleRelativePath", "Public/VRGripInterface.h" },
		{ "ToolTip", "Returns if the object is held and if so, which pawn is holding it" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripInterface_IsHeld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, nullptr, "IsHeld", sizeof(VRGripInterface_eventIsHeld_Parms), Z_Construct_UFunction_UVRGripInterface_IsHeld_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_IsHeld_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGripInterface_IsHeld_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_IsHeld_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGripInterface_IsHeld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGripInterface_IsHeld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGripInterface_OnChildGrip_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripInformation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GripInformation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrippingController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GrippingController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripInterface_OnChildGrip_Statics::NewProp_GripInformation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGripInterface_OnChildGrip_Statics::NewProp_GripInformation = { "GripInformation", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripInterface_eventOnChildGrip_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_UVRGripInterface_OnChildGrip_Statics::NewProp_GripInformation_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_OnChildGrip_Statics::NewProp_GripInformation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripInterface_OnChildGrip_Statics::NewProp_GrippingController_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGripInterface_OnChildGrip_Statics::NewProp_GrippingController = { "GrippingController", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripInterface_eventOnChildGrip_Parms, GrippingController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVRGripInterface_OnChildGrip_Statics::NewProp_GrippingController_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_OnChildGrip_Statics::NewProp_GrippingController_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripInterface_OnChildGrip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_OnChildGrip_Statics::NewProp_GripInformation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_OnChildGrip_Statics::NewProp_GrippingController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripInterface_OnChildGrip_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "ModuleRelativePath", "Public/VRGripInterface.h" },
		{ "ToolTip", "Event triggered on the interfaced object when child component is gripped" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripInterface_OnChildGrip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, nullptr, "OnChildGrip", sizeof(VRGripInterface_eventOnChildGrip_Parms), Z_Construct_UFunction_UVRGripInterface_OnChildGrip_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_OnChildGrip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGripInterface_OnChildGrip_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_OnChildGrip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGripInterface_OnChildGrip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGripInterface_OnChildGrip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGripInterface_OnChildGripRelease_Statics
	{
		static void NewProp_bWasSocketed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasSocketed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripInformation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GripInformation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReleasingController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReleasingController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVRGripInterface_OnChildGripRelease_Statics::NewProp_bWasSocketed_SetBit(void* Obj)
	{
		((VRGripInterface_eventOnChildGripRelease_Parms*)Obj)->bWasSocketed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGripInterface_OnChildGripRelease_Statics::NewProp_bWasSocketed = { "bWasSocketed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRGripInterface_eventOnChildGripRelease_Parms), &Z_Construct_UFunction_UVRGripInterface_OnChildGripRelease_Statics::NewProp_bWasSocketed_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripInterface_OnChildGripRelease_Statics::NewProp_GripInformation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGripInterface_OnChildGripRelease_Statics::NewProp_GripInformation = { "GripInformation", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripInterface_eventOnChildGripRelease_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_UVRGripInterface_OnChildGripRelease_Statics::NewProp_GripInformation_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_OnChildGripRelease_Statics::NewProp_GripInformation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripInterface_OnChildGripRelease_Statics::NewProp_ReleasingController_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGripInterface_OnChildGripRelease_Statics::NewProp_ReleasingController = { "ReleasingController", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripInterface_eventOnChildGripRelease_Parms, ReleasingController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVRGripInterface_OnChildGripRelease_Statics::NewProp_ReleasingController_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_OnChildGripRelease_Statics::NewProp_ReleasingController_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripInterface_OnChildGripRelease_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_OnChildGripRelease_Statics::NewProp_bWasSocketed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_OnChildGripRelease_Statics::NewProp_GripInformation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_OnChildGripRelease_Statics::NewProp_ReleasingController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripInterface_OnChildGripRelease_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "ModuleRelativePath", "Public/VRGripInterface.h" },
		{ "ToolTip", "Event triggered on the interfaced object when child component is released" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripInterface_OnChildGripRelease_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, nullptr, "OnChildGripRelease", sizeof(VRGripInterface_eventOnChildGripRelease_Parms), Z_Construct_UFunction_UVRGripInterface_OnChildGripRelease_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_OnChildGripRelease_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGripInterface_OnChildGripRelease_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_OnChildGripRelease_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGripInterface_OnChildGripRelease()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGripInterface_OnChildGripRelease_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGripInterface_OnEndSecondaryUsed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripInterface_OnEndSecondaryUsed_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "ModuleRelativePath", "Public/VRGripInterface.h" },
		{ "ToolTip", "Call to stop using an object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripInterface_OnEndSecondaryUsed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, nullptr, "OnEndSecondaryUsed", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGripInterface_OnEndSecondaryUsed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_OnEndSecondaryUsed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGripInterface_OnEndSecondaryUsed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGripInterface_OnEndSecondaryUsed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGripInterface_OnEndUsed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripInterface_OnEndUsed_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "ModuleRelativePath", "Public/VRGripInterface.h" },
		{ "ToolTip", "Call to stop using an object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripInterface_OnEndUsed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, nullptr, "OnEndUsed", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGripInterface_OnEndUsed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_OnEndUsed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGripInterface_OnEndUsed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGripInterface_OnEndUsed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGripInterface_OnGrip_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripInformation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GripInformation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrippingController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GrippingController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripInterface_OnGrip_Statics::NewProp_GripInformation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGripInterface_OnGrip_Statics::NewProp_GripInformation = { "GripInformation", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripInterface_eventOnGrip_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_UVRGripInterface_OnGrip_Statics::NewProp_GripInformation_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_OnGrip_Statics::NewProp_GripInformation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripInterface_OnGrip_Statics::NewProp_GrippingController_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGripInterface_OnGrip_Statics::NewProp_GrippingController = { "GrippingController", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripInterface_eventOnGrip_Parms, GrippingController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVRGripInterface_OnGrip_Statics::NewProp_GrippingController_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_OnGrip_Statics::NewProp_GrippingController_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripInterface_OnGrip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_OnGrip_Statics::NewProp_GripInformation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_OnGrip_Statics::NewProp_GrippingController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripInterface_OnGrip_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "ModuleRelativePath", "Public/VRGripInterface.h" },
		{ "ToolTip", "Event triggered on the interfaced object when gripped" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripInterface_OnGrip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, nullptr, "OnGrip", sizeof(VRGripInterface_eventOnGrip_Parms), Z_Construct_UFunction_UVRGripInterface_OnGrip_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_OnGrip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGripInterface_OnGrip_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_OnGrip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGripInterface_OnGrip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGripInterface_OnGrip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGripInterface_OnGripRelease_Statics
	{
		static void NewProp_bWasSocketed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasSocketed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripInformation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GripInformation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReleasingController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReleasingController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVRGripInterface_OnGripRelease_Statics::NewProp_bWasSocketed_SetBit(void* Obj)
	{
		((VRGripInterface_eventOnGripRelease_Parms*)Obj)->bWasSocketed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGripInterface_OnGripRelease_Statics::NewProp_bWasSocketed = { "bWasSocketed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRGripInterface_eventOnGripRelease_Parms), &Z_Construct_UFunction_UVRGripInterface_OnGripRelease_Statics::NewProp_bWasSocketed_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripInterface_OnGripRelease_Statics::NewProp_GripInformation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGripInterface_OnGripRelease_Statics::NewProp_GripInformation = { "GripInformation", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripInterface_eventOnGripRelease_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_UVRGripInterface_OnGripRelease_Statics::NewProp_GripInformation_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_OnGripRelease_Statics::NewProp_GripInformation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripInterface_OnGripRelease_Statics::NewProp_ReleasingController_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGripInterface_OnGripRelease_Statics::NewProp_ReleasingController = { "ReleasingController", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripInterface_eventOnGripRelease_Parms, ReleasingController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVRGripInterface_OnGripRelease_Statics::NewProp_ReleasingController_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_OnGripRelease_Statics::NewProp_ReleasingController_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripInterface_OnGripRelease_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_OnGripRelease_Statics::NewProp_bWasSocketed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_OnGripRelease_Statics::NewProp_GripInformation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_OnGripRelease_Statics::NewProp_ReleasingController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripInterface_OnGripRelease_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "ModuleRelativePath", "Public/VRGripInterface.h" },
		{ "ToolTip", "Event triggered on the interfaced object when grip is released" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripInterface_OnGripRelease_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, nullptr, "OnGripRelease", sizeof(VRGripInterface_eventOnGripRelease_Parms), Z_Construct_UFunction_UVRGripInterface_OnGripRelease_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_OnGripRelease_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGripInterface_OnGripRelease_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_OnGripRelease_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGripInterface_OnGripRelease()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGripInterface_OnGripRelease_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGripInterface_OnInput_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_KeyEvent;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVRGripInterface_OnInput_Statics::NewProp_KeyEvent = { "KeyEvent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripInterface_eventOnInput_Parms, KeyEvent), Z_Construct_UEnum_Engine_EInputEvent, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGripInterface_OnInput_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripInterface_eventOnInput_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripInterface_OnInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_OnInput_Statics::NewProp_KeyEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_OnInput_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripInterface_OnInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "ModuleRelativePath", "Public/VRGripInterface.h" },
		{ "ToolTip", "Call to send an action event to the object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripInterface_OnInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, nullptr, "OnInput", sizeof(VRGripInterface_eventOnInput_Parms), Z_Construct_UFunction_UVRGripInterface_OnInput_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_OnInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGripInterface_OnInput_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_OnInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGripInterface_OnInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGripInterface_OnInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGripInterface_OnSecondaryGrip_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripInformation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GripInformation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondaryGripComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SecondaryGripComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripInterface_OnSecondaryGrip_Statics::NewProp_GripInformation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGripInterface_OnSecondaryGrip_Statics::NewProp_GripInformation = { "GripInformation", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripInterface_eventOnSecondaryGrip_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_UVRGripInterface_OnSecondaryGrip_Statics::NewProp_GripInformation_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_OnSecondaryGrip_Statics::NewProp_GripInformation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripInterface_OnSecondaryGrip_Statics::NewProp_SecondaryGripComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGripInterface_OnSecondaryGrip_Statics::NewProp_SecondaryGripComponent = { "SecondaryGripComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripInterface_eventOnSecondaryGrip_Parms, SecondaryGripComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVRGripInterface_OnSecondaryGrip_Statics::NewProp_SecondaryGripComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_OnSecondaryGrip_Statics::NewProp_SecondaryGripComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripInterface_OnSecondaryGrip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_OnSecondaryGrip_Statics::NewProp_GripInformation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_OnSecondaryGrip_Statics::NewProp_SecondaryGripComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripInterface_OnSecondaryGrip_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "ModuleRelativePath", "Public/VRGripInterface.h" },
		{ "ToolTip", "Event triggered on the interfaced object when secondary gripped" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripInterface_OnSecondaryGrip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, nullptr, "OnSecondaryGrip", sizeof(VRGripInterface_eventOnSecondaryGrip_Parms), Z_Construct_UFunction_UVRGripInterface_OnSecondaryGrip_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_OnSecondaryGrip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGripInterface_OnSecondaryGrip_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_OnSecondaryGrip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGripInterface_OnSecondaryGrip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGripInterface_OnSecondaryGrip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGripInterface_OnSecondaryGripRelease_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripInformation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GripInformation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReleasingSecondaryGripComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReleasingSecondaryGripComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripInterface_OnSecondaryGripRelease_Statics::NewProp_GripInformation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGripInterface_OnSecondaryGripRelease_Statics::NewProp_GripInformation = { "GripInformation", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripInterface_eventOnSecondaryGripRelease_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_UVRGripInterface_OnSecondaryGripRelease_Statics::NewProp_GripInformation_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_OnSecondaryGripRelease_Statics::NewProp_GripInformation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripInterface_OnSecondaryGripRelease_Statics::NewProp_ReleasingSecondaryGripComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGripInterface_OnSecondaryGripRelease_Statics::NewProp_ReleasingSecondaryGripComponent = { "ReleasingSecondaryGripComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripInterface_eventOnSecondaryGripRelease_Parms, ReleasingSecondaryGripComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVRGripInterface_OnSecondaryGripRelease_Statics::NewProp_ReleasingSecondaryGripComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_OnSecondaryGripRelease_Statics::NewProp_ReleasingSecondaryGripComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripInterface_OnSecondaryGripRelease_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_OnSecondaryGripRelease_Statics::NewProp_GripInformation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_OnSecondaryGripRelease_Statics::NewProp_ReleasingSecondaryGripComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripInterface_OnSecondaryGripRelease_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "ModuleRelativePath", "Public/VRGripInterface.h" },
		{ "ToolTip", "Event triggered on the interfaced object when secondary grip is released" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripInterface_OnSecondaryGripRelease_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, nullptr, "OnSecondaryGripRelease", sizeof(VRGripInterface_eventOnSecondaryGripRelease_Parms), Z_Construct_UFunction_UVRGripInterface_OnSecondaryGripRelease_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_OnSecondaryGripRelease_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGripInterface_OnSecondaryGripRelease_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_OnSecondaryGripRelease_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGripInterface_OnSecondaryGripRelease()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGripInterface_OnSecondaryGripRelease_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGripInterface_OnSecondaryUsed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripInterface_OnSecondaryUsed_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "ModuleRelativePath", "Public/VRGripInterface.h" },
		{ "ToolTip", "Call to use an object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripInterface_OnSecondaryUsed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, nullptr, "OnSecondaryUsed", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGripInterface_OnSecondaryUsed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_OnSecondaryUsed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGripInterface_OnSecondaryUsed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGripInterface_OnSecondaryUsed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGripInterface_OnUsed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripInterface_OnUsed_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "ModuleRelativePath", "Public/VRGripInterface.h" },
		{ "ToolTip", "Call to use an object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripInterface_OnUsed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, nullptr, "OnUsed", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGripInterface_OnUsed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_OnUsed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGripInterface_OnUsed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGripInterface_OnUsed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGripInterface_RequestsSocketing_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RelativeTransform;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OptionalSocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentToSocketTo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParentToSocketTo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVRGripInterface_RequestsSocketing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VRGripInterface_eventRequestsSocketing_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGripInterface_RequestsSocketing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRGripInterface_eventRequestsSocketing_Parms), &Z_Construct_UFunction_UVRGripInterface_RequestsSocketing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGripInterface_RequestsSocketing_Statics::NewProp_RelativeTransform = { "RelativeTransform", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripInterface_eventRequestsSocketing_Parms, RelativeTransform), Z_Construct_UScriptStruct_FTransform_NetQuantize, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVRGripInterface_RequestsSocketing_Statics::NewProp_OptionalSocketName = { "OptionalSocketName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripInterface_eventRequestsSocketing_Parms, OptionalSocketName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripInterface_RequestsSocketing_Statics::NewProp_ParentToSocketTo_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGripInterface_RequestsSocketing_Statics::NewProp_ParentToSocketTo = { "ParentToSocketTo", nullptr, (EPropertyFlags)0x0010000000080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripInterface_eventRequestsSocketing_Parms, ParentToSocketTo), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVRGripInterface_RequestsSocketing_Statics::NewProp_ParentToSocketTo_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_RequestsSocketing_Statics::NewProp_ParentToSocketTo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripInterface_RequestsSocketing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_RequestsSocketing_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_RequestsSocketing_Statics::NewProp_RelativeTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_RequestsSocketing_Statics::NewProp_OptionalSocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_RequestsSocketing_Statics::NewProp_ParentToSocketTo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripInterface_RequestsSocketing_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "ModuleRelativePath", "Public/VRGripInterface.h" },
		{ "ToolTip", "Returns if the object requests to be socketed to something" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripInterface_RequestsSocketing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, nullptr, "RequestsSocketing", sizeof(VRGripInterface_eventRequestsSocketing_Parms), Z_Construct_UFunction_UVRGripInterface_RequestsSocketing_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_RequestsSocketing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGripInterface_RequestsSocketing_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_RequestsSocketing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGripInterface_RequestsSocketing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGripInterface_RequestsSocketing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGripInterface_SecondaryGripType_Statics
	{
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVRGripInterface_SecondaryGripType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripInterface_eventSecondaryGripType_Parms, ReturnValue), Z_Construct_UEnum_VRExpansionPlugin_ESecondaryGripType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVRGripInterface_SecondaryGripType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripInterface_SecondaryGripType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_SecondaryGripType_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_SecondaryGripType_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripInterface_SecondaryGripType_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "ModuleRelativePath", "Public/VRGripInterface.h" },
		{ "ToolTip", "Double Grip Type" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripInterface_SecondaryGripType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, nullptr, "SecondaryGripType", sizeof(VRGripInterface_eventSecondaryGripType_Parms), Z_Construct_UFunction_UVRGripInterface_SecondaryGripType_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_SecondaryGripType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGripInterface_SecondaryGripType_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_SecondaryGripType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGripInterface_SecondaryGripType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGripInterface_SecondaryGripType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGripInterface_SetHeld_Statics
	{
		static void NewProp_bIsHeld_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsHeld;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoldingController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HoldingController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVRGripInterface_SetHeld_Statics::NewProp_bIsHeld_SetBit(void* Obj)
	{
		((VRGripInterface_eventSetHeld_Parms*)Obj)->bIsHeld = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGripInterface_SetHeld_Statics::NewProp_bIsHeld = { "bIsHeld", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRGripInterface_eventSetHeld_Parms), &Z_Construct_UFunction_UVRGripInterface_SetHeld_Statics::NewProp_bIsHeld_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripInterface_SetHeld_Statics::NewProp_HoldingController_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGripInterface_SetHeld_Statics::NewProp_HoldingController = { "HoldingController", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripInterface_eventSetHeld_Parms, HoldingController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVRGripInterface_SetHeld_Statics::NewProp_HoldingController_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_SetHeld_Statics::NewProp_HoldingController_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripInterface_SetHeld_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_SetHeld_Statics::NewProp_bIsHeld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_SetHeld_Statics::NewProp_HoldingController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripInterface_SetHeld_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "ModuleRelativePath", "Public/VRGripInterface.h" },
		{ "ToolTip", "BlueprintCallable," },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripInterface_SetHeld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, nullptr, "SetHeld", sizeof(VRGripInterface_eventSetHeld_Parms), Z_Construct_UFunction_UVRGripInterface_SetHeld_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_SetHeld_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGripInterface_SetHeld_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_SetHeld_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGripInterface_SetHeld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGripInterface_SetHeld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGripInterface_SimulateOnDrop_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVRGripInterface_SimulateOnDrop_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VRGripInterface_eventSimulateOnDrop_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGripInterface_SimulateOnDrop_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRGripInterface_eventSimulateOnDrop_Parms), &Z_Construct_UFunction_UVRGripInterface_SimulateOnDrop_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripInterface_SimulateOnDrop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_SimulateOnDrop_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripInterface_SimulateOnDrop_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "ModuleRelativePath", "Public/VRGripInterface.h" },
		{ "ToolTip", "Should this object simulate on drop" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripInterface_SimulateOnDrop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, nullptr, "SimulateOnDrop", sizeof(VRGripInterface_eventSimulateOnDrop_Parms), Z_Construct_UFunction_UVRGripInterface_SimulateOnDrop_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_SimulateOnDrop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGripInterface_SimulateOnDrop_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_SimulateOnDrop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGripInterface_SimulateOnDrop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGripInterface_SimulateOnDrop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGripInterface_TeleportBehavior_Statics
	{
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVRGripInterface_TeleportBehavior_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripInterface_eventTeleportBehavior_Parms, ReturnValue), Z_Construct_UEnum_VRExpansionPlugin_EGripInterfaceTeleportBehavior, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVRGripInterface_TeleportBehavior_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripInterface_TeleportBehavior_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_TeleportBehavior_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_TeleportBehavior_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripInterface_TeleportBehavior_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "ModuleRelativePath", "Public/VRGripInterface.h" },
		{ "ToolTip", "How an interfaced object behaves when teleporting" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripInterface_TeleportBehavior_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, nullptr, "TeleportBehavior", sizeof(VRGripInterface_eventTeleportBehavior_Parms), Z_Construct_UFunction_UVRGripInterface_TeleportBehavior_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_TeleportBehavior_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGripInterface_TeleportBehavior_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_TeleportBehavior_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGripInterface_TeleportBehavior()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGripInterface_TeleportBehavior_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGripInterface_TickGrip_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripInformation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GripInformation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrippingController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GrippingController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRGripInterface_TickGrip_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripInterface_eventTickGrip_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripInterface_TickGrip_Statics::NewProp_GripInformation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGripInterface_TickGrip_Statics::NewProp_GripInformation = { "GripInformation", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripInterface_eventTickGrip_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_UVRGripInterface_TickGrip_Statics::NewProp_GripInformation_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_TickGrip_Statics::NewProp_GripInformation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripInterface_TickGrip_Statics::NewProp_GrippingController_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGripInterface_TickGrip_Statics::NewProp_GrippingController = { "GrippingController", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripInterface_eventTickGrip_Parms, GrippingController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVRGripInterface_TickGrip_Statics::NewProp_GrippingController_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_TickGrip_Statics::NewProp_GrippingController_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripInterface_TickGrip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_TickGrip_Statics::NewProp_DeltaTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_TickGrip_Statics::NewProp_GripInformation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_TickGrip_Statics::NewProp_GrippingController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripInterface_TickGrip_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "ModuleRelativePath", "Public/VRGripInterface.h" },
		{ "ToolTip", "Event triggered each tick on the interfaced object when gripped, can be used for custom movement or grip based logic" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripInterface_TickGrip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, nullptr, "TickGrip", sizeof(VRGripInterface_eventTickGrip_Parms), Z_Construct_UFunction_UVRGripInterface_TickGrip_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_TickGrip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGripInterface_TickGrip_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_TickGrip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGripInterface_TickGrip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGripInterface_TickGrip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVRGripInterface_NoRegister()
	{
		return UVRGripInterface::StaticClass();
	}
	struct Z_Construct_UClass_UVRGripInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVRGripInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVRGripInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVRGripInterface_AdvancedGripSettings, "AdvancedGripSettings" }, // 1594669955
		{ &Z_Construct_UFunction_UVRGripInterface_ClosestGripSlotInRange, "ClosestGripSlotInRange" }, // 481272195
		{ &Z_Construct_UFunction_UVRGripInterface_DenyGripping, "DenyGripping" }, // 1890266048
		{ &Z_Construct_UFunction_UVRGripInterface_GetGripScripts, "GetGripScripts" }, // 4220006745
		{ &Z_Construct_UFunction_UVRGripInterface_GetGripStiffnessAndDamping, "GetGripStiffnessAndDamping" }, // 2336978416
		{ &Z_Construct_UFunction_UVRGripInterface_GetPrimaryGripType, "GetPrimaryGripType" }, // 4042989163
		{ &Z_Construct_UFunction_UVRGripInterface_GripBreakDistance, "GripBreakDistance" }, // 3933894961
		{ &Z_Construct_UFunction_UVRGripInterface_GripLateUpdateSetting, "GripLateUpdateSetting" }, // 2607992979
		{ &Z_Construct_UFunction_UVRGripInterface_GripMovementReplicationType, "GripMovementReplicationType" }, // 841077978
		{ &Z_Construct_UFunction_UVRGripInterface_IsHeld, "IsHeld" }, // 1628530497
		{ &Z_Construct_UFunction_UVRGripInterface_OnChildGrip, "OnChildGrip" }, // 995736588
		{ &Z_Construct_UFunction_UVRGripInterface_OnChildGripRelease, "OnChildGripRelease" }, // 3336654336
		{ &Z_Construct_UFunction_UVRGripInterface_OnEndSecondaryUsed, "OnEndSecondaryUsed" }, // 4241255034
		{ &Z_Construct_UFunction_UVRGripInterface_OnEndUsed, "OnEndUsed" }, // 2441221650
		{ &Z_Construct_UFunction_UVRGripInterface_OnGrip, "OnGrip" }, // 645581037
		{ &Z_Construct_UFunction_UVRGripInterface_OnGripRelease, "OnGripRelease" }, // 1545140351
		{ &Z_Construct_UFunction_UVRGripInterface_OnInput, "OnInput" }, // 4277243897
		{ &Z_Construct_UFunction_UVRGripInterface_OnSecondaryGrip, "OnSecondaryGrip" }, // 4283023718
		{ &Z_Construct_UFunction_UVRGripInterface_OnSecondaryGripRelease, "OnSecondaryGripRelease" }, // 2832860323
		{ &Z_Construct_UFunction_UVRGripInterface_OnSecondaryUsed, "OnSecondaryUsed" }, // 3158466969
		{ &Z_Construct_UFunction_UVRGripInterface_OnUsed, "OnUsed" }, // 1588603841
		{ &Z_Construct_UFunction_UVRGripInterface_RequestsSocketing, "RequestsSocketing" }, // 1054990419
		{ &Z_Construct_UFunction_UVRGripInterface_SecondaryGripType, "SecondaryGripType" }, // 1321017317
		{ &Z_Construct_UFunction_UVRGripInterface_SetHeld, "SetHeld" }, // 3128663042
		{ &Z_Construct_UFunction_UVRGripInterface_SimulateOnDrop, "SimulateOnDrop" }, // 1529003169
		{ &Z_Construct_UFunction_UVRGripInterface_TeleportBehavior, "TeleportBehavior" }, // 1357289447
		{ &Z_Construct_UFunction_UVRGripInterface_TickGrip, "TickGrip" }, // 2198290199
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRGripInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VRGripInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVRGripInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IVRGripInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVRGripInterface_Statics::ClassParams = {
		&UVRGripInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UVRGripInterface_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UVRGripInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVRGripInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVRGripInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVRGripInterface, 3021106113);
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UVRGripInterface>()
	{
		return UVRGripInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVRGripInterface(Z_Construct_UClass_UVRGripInterface, &UVRGripInterface::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("UVRGripInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVRGripInterface);
	static FName NAME_UVRGripInterface_AdvancedGripSettings = FName(TEXT("AdvancedGripSettings"));
	FBPAdvGripSettings IVRGripInterface::Execute_AdvancedGripSettings(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
		VRGripInterface_eventAdvancedGripSettings_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_AdvancedGripSettings);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
		{
			Parms.ReturnValue = I->AdvancedGripSettings_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UVRGripInterface_ClosestGripSlotInRange = FName(TEXT("ClosestGripSlotInRange"));
	void IVRGripInterface::Execute_ClosestGripSlotInRange(UObject* O, FVector WorldLocation, bool bSecondarySlot, bool& bHadSlotInRange, FTransform& SlotWorldTransform, UGripMotionControllerComponent* CallingController, FName OverridePrefix)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
		VRGripInterface_eventClosestGripSlotInRange_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_ClosestGripSlotInRange);
		if (Func)
		{
			Parms.WorldLocation=WorldLocation;
			Parms.bSecondarySlot=bSecondarySlot;
			Parms.bHadSlotInRange=bHadSlotInRange;
			Parms.SlotWorldTransform=SlotWorldTransform;
			Parms.CallingController=CallingController;
			Parms.OverridePrefix=OverridePrefix;
			O->ProcessEvent(Func, &Parms);
			bHadSlotInRange=Parms.bHadSlotInRange;
			SlotWorldTransform=Parms.SlotWorldTransform;
		}
		else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
		{
			I->ClosestGripSlotInRange_Implementation(WorldLocation,bSecondarySlot,bHadSlotInRange,SlotWorldTransform,CallingController,OverridePrefix);
		}
	}
	static FName NAME_UVRGripInterface_DenyGripping = FName(TEXT("DenyGripping"));
	bool IVRGripInterface::Execute_DenyGripping(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
		VRGripInterface_eventDenyGripping_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_DenyGripping);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
		{
			Parms.ReturnValue = I->DenyGripping_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UVRGripInterface_GetGripScripts = FName(TEXT("GetGripScripts"));
	bool IVRGripInterface::Execute_GetGripScripts(UObject* O, TArray<UVRGripScriptBase*>& ArrayReference)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
		VRGripInterface_eventGetGripScripts_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_GetGripScripts);
		if (Func)
		{
			Parms.ArrayReference=ArrayReference;
			O->ProcessEvent(Func, &Parms);
			ArrayReference=Parms.ArrayReference;
		}
		else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetGripScripts_Implementation(ArrayReference);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UVRGripInterface_GetGripStiffnessAndDamping = FName(TEXT("GetGripStiffnessAndDamping"));
	void IVRGripInterface::Execute_GetGripStiffnessAndDamping(UObject* O, float& GripStiffnessOut, float& GripDampingOut)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
		VRGripInterface_eventGetGripStiffnessAndDamping_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_GetGripStiffnessAndDamping);
		if (Func)
		{
			Parms.GripStiffnessOut=GripStiffnessOut;
			Parms.GripDampingOut=GripDampingOut;
			O->ProcessEvent(Func, &Parms);
			GripStiffnessOut=Parms.GripStiffnessOut;
			GripDampingOut=Parms.GripDampingOut;
		}
		else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
		{
			I->GetGripStiffnessAndDamping_Implementation(GripStiffnessOut,GripDampingOut);
		}
	}
	static FName NAME_UVRGripInterface_GetPrimaryGripType = FName(TEXT("GetPrimaryGripType"));
	EGripCollisionType IVRGripInterface::Execute_GetPrimaryGripType(UObject* O, bool bIsSlot)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
		VRGripInterface_eventGetPrimaryGripType_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_GetPrimaryGripType);
		if (Func)
		{
			Parms.bIsSlot=bIsSlot;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetPrimaryGripType_Implementation(bIsSlot);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UVRGripInterface_GripBreakDistance = FName(TEXT("GripBreakDistance"));
	float IVRGripInterface::Execute_GripBreakDistance(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
		VRGripInterface_eventGripBreakDistance_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_GripBreakDistance);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GripBreakDistance_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UVRGripInterface_GripLateUpdateSetting = FName(TEXT("GripLateUpdateSetting"));
	EGripLateUpdateSettings IVRGripInterface::Execute_GripLateUpdateSetting(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
		VRGripInterface_eventGripLateUpdateSetting_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_GripLateUpdateSetting);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GripLateUpdateSetting_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UVRGripInterface_GripMovementReplicationType = FName(TEXT("GripMovementReplicationType"));
	EGripMovementReplicationSettings IVRGripInterface::Execute_GripMovementReplicationType(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
		VRGripInterface_eventGripMovementReplicationType_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_GripMovementReplicationType);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GripMovementReplicationType_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UVRGripInterface_IsHeld = FName(TEXT("IsHeld"));
	void IVRGripInterface::Execute_IsHeld(UObject* O, UGripMotionControllerComponent*& HoldingController, bool& bIsHeld)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
		VRGripInterface_eventIsHeld_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_IsHeld);
		if (Func)
		{
			Parms.HoldingController=HoldingController;
			Parms.bIsHeld=bIsHeld;
			O->ProcessEvent(Func, &Parms);
			HoldingController=Parms.HoldingController;
			bIsHeld=Parms.bIsHeld;
		}
		else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
		{
			I->IsHeld_Implementation(HoldingController,bIsHeld);
		}
	}
	static FName NAME_UVRGripInterface_OnChildGrip = FName(TEXT("OnChildGrip"));
	void IVRGripInterface::Execute_OnChildGrip(UObject* O, UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
		VRGripInterface_eventOnChildGrip_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_OnChildGrip);
		if (Func)
		{
			Parms.GrippingController=GrippingController;
			Parms.GripInformation=GripInformation;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
		{
			I->OnChildGrip_Implementation(GrippingController,GripInformation);
		}
	}
	static FName NAME_UVRGripInterface_OnChildGripRelease = FName(TEXT("OnChildGripRelease"));
	void IVRGripInterface::Execute_OnChildGripRelease(UObject* O, UGripMotionControllerComponent* ReleasingController, FBPActorGripInformation const& GripInformation, bool bWasSocketed)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
		VRGripInterface_eventOnChildGripRelease_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_OnChildGripRelease);
		if (Func)
		{
			Parms.ReleasingController=ReleasingController;
			Parms.GripInformation=GripInformation;
			Parms.bWasSocketed=bWasSocketed;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
		{
			I->OnChildGripRelease_Implementation(ReleasingController,GripInformation,bWasSocketed);
		}
	}
	static FName NAME_UVRGripInterface_OnEndSecondaryUsed = FName(TEXT("OnEndSecondaryUsed"));
	void IVRGripInterface::Execute_OnEndSecondaryUsed(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_OnEndSecondaryUsed);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
		{
			I->OnEndSecondaryUsed_Implementation();
		}
	}
	static FName NAME_UVRGripInterface_OnEndUsed = FName(TEXT("OnEndUsed"));
	void IVRGripInterface::Execute_OnEndUsed(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_OnEndUsed);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
		{
			I->OnEndUsed_Implementation();
		}
	}
	static FName NAME_UVRGripInterface_OnGrip = FName(TEXT("OnGrip"));
	void IVRGripInterface::Execute_OnGrip(UObject* O, UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
		VRGripInterface_eventOnGrip_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_OnGrip);
		if (Func)
		{
			Parms.GrippingController=GrippingController;
			Parms.GripInformation=GripInformation;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
		{
			I->OnGrip_Implementation(GrippingController,GripInformation);
		}
	}
	static FName NAME_UVRGripInterface_OnGripRelease = FName(TEXT("OnGripRelease"));
	void IVRGripInterface::Execute_OnGripRelease(UObject* O, UGripMotionControllerComponent* ReleasingController, FBPActorGripInformation const& GripInformation, bool bWasSocketed)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
		VRGripInterface_eventOnGripRelease_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_OnGripRelease);
		if (Func)
		{
			Parms.ReleasingController=ReleasingController;
			Parms.GripInformation=GripInformation;
			Parms.bWasSocketed=bWasSocketed;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
		{
			I->OnGripRelease_Implementation(ReleasingController,GripInformation,bWasSocketed);
		}
	}
	static FName NAME_UVRGripInterface_OnInput = FName(TEXT("OnInput"));
	void IVRGripInterface::Execute_OnInput(UObject* O, FKey Key, EInputEvent KeyEvent)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
		VRGripInterface_eventOnInput_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_OnInput);
		if (Func)
		{
			Parms.Key=Key;
			Parms.KeyEvent=KeyEvent;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
		{
			I->OnInput_Implementation(Key,KeyEvent);
		}
	}
	static FName NAME_UVRGripInterface_OnSecondaryGrip = FName(TEXT("OnSecondaryGrip"));
	void IVRGripInterface::Execute_OnSecondaryGrip(UObject* O, USceneComponent* SecondaryGripComponent, FBPActorGripInformation const& GripInformation)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
		VRGripInterface_eventOnSecondaryGrip_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_OnSecondaryGrip);
		if (Func)
		{
			Parms.SecondaryGripComponent=SecondaryGripComponent;
			Parms.GripInformation=GripInformation;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
		{
			I->OnSecondaryGrip_Implementation(SecondaryGripComponent,GripInformation);
		}
	}
	static FName NAME_UVRGripInterface_OnSecondaryGripRelease = FName(TEXT("OnSecondaryGripRelease"));
	void IVRGripInterface::Execute_OnSecondaryGripRelease(UObject* O, USceneComponent* ReleasingSecondaryGripComponent, FBPActorGripInformation const& GripInformation)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
		VRGripInterface_eventOnSecondaryGripRelease_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_OnSecondaryGripRelease);
		if (Func)
		{
			Parms.ReleasingSecondaryGripComponent=ReleasingSecondaryGripComponent;
			Parms.GripInformation=GripInformation;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
		{
			I->OnSecondaryGripRelease_Implementation(ReleasingSecondaryGripComponent,GripInformation);
		}
	}
	static FName NAME_UVRGripInterface_OnSecondaryUsed = FName(TEXT("OnSecondaryUsed"));
	void IVRGripInterface::Execute_OnSecondaryUsed(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_OnSecondaryUsed);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
		{
			I->OnSecondaryUsed_Implementation();
		}
	}
	static FName NAME_UVRGripInterface_OnUsed = FName(TEXT("OnUsed"));
	void IVRGripInterface::Execute_OnUsed(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_OnUsed);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
		{
			I->OnUsed_Implementation();
		}
	}
	static FName NAME_UVRGripInterface_RequestsSocketing = FName(TEXT("RequestsSocketing"));
	bool IVRGripInterface::Execute_RequestsSocketing(UObject* O, USceneComponent*& ParentToSocketTo, FName& OptionalSocketName, FTransform_NetQuantize& RelativeTransform)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
		VRGripInterface_eventRequestsSocketing_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_RequestsSocketing);
		if (Func)
		{
			Parms.ParentToSocketTo=ParentToSocketTo;
			Parms.OptionalSocketName=OptionalSocketName;
			Parms.RelativeTransform=RelativeTransform;
			O->ProcessEvent(Func, &Parms);
			ParentToSocketTo=Parms.ParentToSocketTo;
			OptionalSocketName=Parms.OptionalSocketName;
			RelativeTransform=Parms.RelativeTransform;
		}
		else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
		{
			Parms.ReturnValue = I->RequestsSocketing_Implementation(ParentToSocketTo,OptionalSocketName,RelativeTransform);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UVRGripInterface_SecondaryGripType = FName(TEXT("SecondaryGripType"));
	ESecondaryGripType IVRGripInterface::Execute_SecondaryGripType(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
		VRGripInterface_eventSecondaryGripType_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_SecondaryGripType);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
		{
			Parms.ReturnValue = I->SecondaryGripType_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UVRGripInterface_SetHeld = FName(TEXT("SetHeld"));
	void IVRGripInterface::Execute_SetHeld(UObject* O, UGripMotionControllerComponent* HoldingController, bool bIsHeld)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
		VRGripInterface_eventSetHeld_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_SetHeld);
		if (Func)
		{
			Parms.HoldingController=HoldingController;
			Parms.bIsHeld=bIsHeld;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
		{
			I->SetHeld_Implementation(HoldingController,bIsHeld);
		}
	}
	static FName NAME_UVRGripInterface_SimulateOnDrop = FName(TEXT("SimulateOnDrop"));
	bool IVRGripInterface::Execute_SimulateOnDrop(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
		VRGripInterface_eventSimulateOnDrop_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_SimulateOnDrop);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
		{
			Parms.ReturnValue = I->SimulateOnDrop_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UVRGripInterface_TeleportBehavior = FName(TEXT("TeleportBehavior"));
	EGripInterfaceTeleportBehavior IVRGripInterface::Execute_TeleportBehavior(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
		VRGripInterface_eventTeleportBehavior_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_TeleportBehavior);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
		{
			Parms.ReturnValue = I->TeleportBehavior_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UVRGripInterface_TickGrip = FName(TEXT("TickGrip"));
	void IVRGripInterface::Execute_TickGrip(UObject* O, UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation, float DeltaTime)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
		VRGripInterface_eventTickGrip_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_TickGrip);
		if (Func)
		{
			Parms.GrippingController=GrippingController;
			Parms.GripInformation=GripInformation;
			Parms.DeltaTime=DeltaTime;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
		{
			I->TickGrip_Implementation(GrippingController,GripInformation,DeltaTime);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
