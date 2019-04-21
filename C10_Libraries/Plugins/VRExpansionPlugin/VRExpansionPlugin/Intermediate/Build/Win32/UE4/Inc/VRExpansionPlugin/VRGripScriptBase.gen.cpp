// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/GripScripts/VRGripScriptBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRGripScriptBase() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EGSTransformOverrideType();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRGripScriptBase_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRGripScriptBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGripScriptBase_ForceGripToDrop();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGripScriptBase_GetGripTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPActorGripInformation();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGripScriptBase_GetOwner();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGripScriptBase_GetParent();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGripScriptBase_GetParentTransform();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGripMotionControllerComponent_NoRegister();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGripScriptBase_HasAuthority();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGripScriptBase_IsServer();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGripScriptBase_OnBeginPlay();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGripScriptBase_OnEndPlay();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEndPlayReason();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGripScriptBase_OnGrip();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGripScriptBase_OnGripRelease();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGrip();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGripRelease();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRGripScriptBaseBP_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRGripScriptBaseBP();
// End Cross Module References
	static UEnum* EGSTransformOverrideType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EGSTransformOverrideType, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EGSTransformOverrideType"));
		}
		return Singleton;
	}
	template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EGSTransformOverrideType>()
	{
		return EGSTransformOverrideType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGSTransformOverrideType(EGSTransformOverrideType_StaticEnum, TEXT("/Script/VRExpansionPlugin"), TEXT("EGSTransformOverrideType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VRExpansionPlugin_EGSTransformOverrideType_Hash() { return 2926517435U; }
	UEnum* Z_Construct_UEnum_VRExpansionPlugin_EGSTransformOverrideType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGSTransformOverrideType"), 0, Get_Z_Construct_UEnum_VRExpansionPlugin_EGSTransformOverrideType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGSTransformOverrideType::None", (int64)EGSTransformOverrideType::None },
				{ "EGSTransformOverrideType::OverridesWorldTransform", (int64)EGSTransformOverrideType::OverridesWorldTransform },
				{ "EGSTransformOverrideType::ModifiesWorldTransform", (int64)EGSTransformOverrideType::ModifiesWorldTransform },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IsBlueprintBase", "true" },
				{ "ModifiesWorldTransform.ToolTip", "Modifies the world transform" },
				{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
				{ "None.ToolTip", "Does not alter the world transform" },
				{ "OverridesWorldTransform.ToolTip", "Overrides the world transform" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
				nullptr,
				"EGSTransformOverrideType",
				"EGSTransformOverrideType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static FName NAME_UVRGripScriptBase_GetWorldTransform = FName(TEXT("GetWorldTransform"));
	bool UVRGripScriptBase::GetWorldTransform(UGripMotionControllerComponent* GrippingController, float DeltaTime, FTransform& WorldTransform, FTransform const& ParentTransform, FBPActorGripInformation& Grip, AActor* actor, UPrimitiveComponent* root, bool bRootHasInterface, bool bActorHasInterface, bool bIsForTeleport)
	{
		VRGripScriptBase_eventGetWorldTransform_Parms Parms;
		Parms.GrippingController=GrippingController;
		Parms.DeltaTime=DeltaTime;
		Parms.WorldTransform=WorldTransform;
		Parms.ParentTransform=ParentTransform;
		Parms.Grip=Grip;
		Parms.actor=actor;
		Parms.root=root;
		Parms.bRootHasInterface=bRootHasInterface ? true : false;
		Parms.bActorHasInterface=bActorHasInterface ? true : false;
		Parms.bIsForTeleport=bIsForTeleport ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UVRGripScriptBase_GetWorldTransform),&Parms);
		WorldTransform=Parms.WorldTransform;
		Grip=Parms.Grip;
		return !!Parms.ReturnValue;
	}
	static FName NAME_UVRGripScriptBase_OnBeginPlay = FName(TEXT("OnBeginPlay"));
	void UVRGripScriptBase::OnBeginPlay(UObject* CallingOwner)
	{
		VRGripScriptBase_eventOnBeginPlay_Parms Parms;
		Parms.CallingOwner=CallingOwner;
		ProcessEvent(FindFunctionChecked(NAME_UVRGripScriptBase_OnBeginPlay),&Parms);
	}
	static FName NAME_UVRGripScriptBase_OnEndPlay = FName(TEXT("OnEndPlay"));
	void UVRGripScriptBase::OnEndPlay(const EEndPlayReason::Type EndPlayReason)
	{
		VRGripScriptBase_eventOnEndPlay_Parms Parms;
		Parms.EndPlayReason=EndPlayReason;
		ProcessEvent(FindFunctionChecked(NAME_UVRGripScriptBase_OnEndPlay),&Parms);
	}
	static FName NAME_UVRGripScriptBase_OnGrip = FName(TEXT("OnGrip"));
	void UVRGripScriptBase::OnGrip(UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation)
	{
		VRGripScriptBase_eventOnGrip_Parms Parms;
		Parms.GrippingController=GrippingController;
		Parms.GripInformation=GripInformation;
		ProcessEvent(FindFunctionChecked(NAME_UVRGripScriptBase_OnGrip),&Parms);
	}
	static FName NAME_UVRGripScriptBase_OnGripRelease = FName(TEXT("OnGripRelease"));
	void UVRGripScriptBase::OnGripRelease(UGripMotionControllerComponent* ReleasingController, FBPActorGripInformation const& GripInformation, bool bWasSocketed)
	{
		VRGripScriptBase_eventOnGripRelease_Parms Parms;
		Parms.ReleasingController=ReleasingController;
		Parms.GripInformation=GripInformation;
		Parms.bWasSocketed=bWasSocketed ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UVRGripScriptBase_OnGripRelease),&Parms);
	}
	static FName NAME_UVRGripScriptBase_OnSecondaryGrip = FName(TEXT("OnSecondaryGrip"));
	void UVRGripScriptBase::OnSecondaryGrip(UGripMotionControllerComponent* Controller, USceneComponent* SecondaryGripComponent, FBPActorGripInformation const& GripInformation)
	{
		VRGripScriptBase_eventOnSecondaryGrip_Parms Parms;
		Parms.Controller=Controller;
		Parms.SecondaryGripComponent=SecondaryGripComponent;
		Parms.GripInformation=GripInformation;
		ProcessEvent(FindFunctionChecked(NAME_UVRGripScriptBase_OnSecondaryGrip),&Parms);
	}
	static FName NAME_UVRGripScriptBase_OnSecondaryGripRelease = FName(TEXT("OnSecondaryGripRelease"));
	void UVRGripScriptBase::OnSecondaryGripRelease(UGripMotionControllerComponent* Controller, USceneComponent* ReleasingSecondaryGripComponent, FBPActorGripInformation const& GripInformation)
	{
		VRGripScriptBase_eventOnSecondaryGripRelease_Parms Parms;
		Parms.Controller=Controller;
		Parms.ReleasingSecondaryGripComponent=ReleasingSecondaryGripComponent;
		Parms.GripInformation=GripInformation;
		ProcessEvent(FindFunctionChecked(NAME_UVRGripScriptBase_OnSecondaryGripRelease),&Parms);
	}
	void UVRGripScriptBase::StaticRegisterNativesUVRGripScriptBase()
	{
		UClass* Class = UVRGripScriptBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ForceGripToDrop", &UVRGripScriptBase::execForceGripToDrop },
			{ "GetGripTransform", &UVRGripScriptBase::execGetGripTransform },
			{ "GetOwner", &UVRGripScriptBase::execGetOwner },
			{ "GetParent", &UVRGripScriptBase::execGetParent },
			{ "GetParentTransform", &UVRGripScriptBase::execGetParentTransform },
			{ "GetWorldTransform", &UVRGripScriptBase::execGetWorldTransform },
			{ "HasAuthority", &UVRGripScriptBase::execHasAuthority },
			{ "IsServer", &UVRGripScriptBase::execIsServer },
			{ "OnBeginPlay", &UVRGripScriptBase::execOnBeginPlay },
			{ "OnEndPlay", &UVRGripScriptBase::execOnEndPlay },
			{ "OnGrip", &UVRGripScriptBase::execOnGrip },
			{ "OnGripRelease", &UVRGripScriptBase::execOnGripRelease },
			{ "OnSecondaryGrip", &UVRGripScriptBase::execOnSecondaryGrip },
			{ "OnSecondaryGripRelease", &UVRGripScriptBase::execOnSecondaryGripRelease },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVRGripScriptBase_ForceGripToDrop_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripScriptBase_ForceGripToDrop_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripScript" },
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
		{ "ToolTip", "Flags the grip to be dropped as soon as possible" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripScriptBase_ForceGripToDrop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripScriptBase, nullptr, "ForceGripToDrop", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGripScriptBase_ForceGripToDrop_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_ForceGripToDrop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGripScriptBase_ForceGripToDrop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGripScriptBase_ForceGripToDrop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGripScriptBase_GetGripTransform_Statics
	{
		struct VRGripScriptBase_eventGetGripTransform_Parms
		{
			FBPActorGripInformation Grip;
			FTransform ParentTransform;
			FTransform ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParentTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Grip_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Grip;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGripScriptBase_GetGripTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripScriptBase_eventGetGripTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripScriptBase_GetGripTransform_Statics::NewProp_ParentTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGripScriptBase_GetGripTransform_Statics::NewProp_ParentTransform = { "ParentTransform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripScriptBase_eventGetGripTransform_Parms, ParentTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UVRGripScriptBase_GetGripTransform_Statics::NewProp_ParentTransform_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_GetGripTransform_Statics::NewProp_ParentTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripScriptBase_GetGripTransform_Statics::NewProp_Grip_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGripScriptBase_GetGripTransform_Statics::NewProp_Grip = { "Grip", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripScriptBase_eventGetGripTransform_Parms, Grip), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_UVRGripScriptBase_GetGripTransform_Statics::NewProp_Grip_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_GetGripTransform_Statics::NewProp_Grip_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripScriptBase_GetGripTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_GetGripTransform_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_GetGripTransform_Statics::NewProp_ParentTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_GetGripTransform_Statics::NewProp_Grip,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripScriptBase_GetGripTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripScript" },
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
		{ "ToolTip", "Returns the expected grip transform (relative * controller + addition)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripScriptBase_GetGripTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripScriptBase, nullptr, "GetGripTransform", sizeof(VRGripScriptBase_eventGetGripTransform_Parms), Z_Construct_UFunction_UVRGripScriptBase_GetGripTransform_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_GetGripTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGripScriptBase_GetGripTransform_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_GetGripTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGripScriptBase_GetGripTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGripScriptBase_GetGripTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGripScriptBase_GetOwner_Statics
	{
		struct VRGripScriptBase_eventGetOwner_Parms
		{
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGripScriptBase_GetOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripScriptBase_eventGetOwner_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripScriptBase_GetOwner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_GetOwner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripScriptBase_GetOwner_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripScript" },
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
		{ "ToolTip", "Returns the owning actor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripScriptBase_GetOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripScriptBase, nullptr, "GetOwner", sizeof(VRGripScriptBase_eventGetOwner_Parms), Z_Construct_UFunction_UVRGripScriptBase_GetOwner_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_GetOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGripScriptBase_GetOwner_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_GetOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGripScriptBase_GetOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGripScriptBase_GetOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGripScriptBase_GetParent_Statics
	{
		struct VRGripScriptBase_eventGetParent_Parms
		{
			UObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGripScriptBase_GetParent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripScriptBase_eventGetParent_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripScriptBase_GetParent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_GetParent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripScriptBase_GetParent_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripScript" },
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
		{ "ToolTip", "Returns the parent component or actor to this" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripScriptBase_GetParent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripScriptBase, nullptr, "GetParent", sizeof(VRGripScriptBase_eventGetParent_Parms), Z_Construct_UFunction_UVRGripScriptBase_GetParent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_GetParent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGripScriptBase_GetParent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_GetParent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGripScriptBase_GetParent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGripScriptBase_GetParent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGripScriptBase_GetParentTransform_Statics
	{
		struct VRGripScriptBase_eventGetParentTransform_Parms
		{
			bool bGetWorldTransform;
			FTransform ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static void NewProp_bGetWorldTransform_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGetWorldTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGripScriptBase_GetParentTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripScriptBase_eventGetParentTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVRGripScriptBase_GetParentTransform_Statics::NewProp_bGetWorldTransform_SetBit(void* Obj)
	{
		((VRGripScriptBase_eventGetParentTransform_Parms*)Obj)->bGetWorldTransform = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGripScriptBase_GetParentTransform_Statics::NewProp_bGetWorldTransform = { "bGetWorldTransform", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRGripScriptBase_eventGetParentTransform_Parms), &Z_Construct_UFunction_UVRGripScriptBase_GetParentTransform_Statics::NewProp_bGetWorldTransform_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripScriptBase_GetParentTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_GetParentTransform_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_GetParentTransform_Statics::NewProp_bGetWorldTransform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripScriptBase_GetParentTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripScript" },
		{ "CPP_Default_bGetWorldTransform", "true" },
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
		{ "ToolTip", "Returns the current world transform of the owning object (or root comp of if it is an actor)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripScriptBase_GetParentTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripScriptBase, nullptr, "GetParentTransform", sizeof(VRGripScriptBase_eventGetParentTransform_Parms), Z_Construct_UFunction_UVRGripScriptBase_GetParentTransform_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_GetParentTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGripScriptBase_GetParentTransform_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_GetParentTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGripScriptBase_GetParentTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGripScriptBase_GetParentTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bIsForTeleport_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsForTeleport;
		static void NewProp_bActorHasInterface_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bActorHasInterface;
		static void NewProp_bRootHasInterface_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRootHasInterface;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_root_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_root;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Grip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParentTransform;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldTransform;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
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
	void Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VRGripScriptBase_eventGetWorldTransform_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRGripScriptBase_eventGetWorldTransform_Parms), &Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_bIsForTeleport_SetBit(void* Obj)
	{
		((VRGripScriptBase_eventGetWorldTransform_Parms*)Obj)->bIsForTeleport = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_bIsForTeleport = { "bIsForTeleport", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRGripScriptBase_eventGetWorldTransform_Parms), &Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_bIsForTeleport_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_bActorHasInterface_SetBit(void* Obj)
	{
		((VRGripScriptBase_eventGetWorldTransform_Parms*)Obj)->bActorHasInterface = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_bActorHasInterface = { "bActorHasInterface", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRGripScriptBase_eventGetWorldTransform_Parms), &Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_bActorHasInterface_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_bRootHasInterface_SetBit(void* Obj)
	{
		((VRGripScriptBase_eventGetWorldTransform_Parms*)Obj)->bRootHasInterface = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_bRootHasInterface = { "bRootHasInterface", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRGripScriptBase_eventGetWorldTransform_Parms), &Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_bRootHasInterface_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_root_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_root = { "root", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripScriptBase_eventGetWorldTransform_Parms, root), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_root_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_root_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_actor = { "actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripScriptBase_eventGetWorldTransform_Parms, actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_Grip = { "Grip", nullptr, (EPropertyFlags)0x0010008008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripScriptBase_eventGetWorldTransform_Parms, Grip), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_ParentTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_ParentTransform = { "ParentTransform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripScriptBase_eventGetWorldTransform_Parms, ParentTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_ParentTransform_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_ParentTransform_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_WorldTransform = { "WorldTransform", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripScriptBase_eventGetWorldTransform_Parms, WorldTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripScriptBase_eventGetWorldTransform_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_GrippingController_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_GrippingController = { "GrippingController", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripScriptBase_eventGetWorldTransform_Parms, GrippingController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_GrippingController_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_GrippingController_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_bIsForTeleport,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_bActorHasInterface,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_bRootHasInterface,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_root,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_Grip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_ParentTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_WorldTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_DeltaTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_GrippingController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripScript" },
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
		{ "ToolTip", "Overrides or Modifies the world transform with this grip script" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripScriptBase, nullptr, "GetWorldTransform", sizeof(VRGripScriptBase_eventGetWorldTransform_Parms), Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGripScriptBase_HasAuthority_Statics
	{
		struct VRGripScriptBase_eventHasAuthority_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVRGripScriptBase_HasAuthority_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VRGripScriptBase_eventHasAuthority_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGripScriptBase_HasAuthority_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRGripScriptBase_eventHasAuthority_Parms), &Z_Construct_UFunction_UVRGripScriptBase_HasAuthority_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripScriptBase_HasAuthority_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_HasAuthority_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripScriptBase_HasAuthority_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripScript" },
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
		{ "ToolTip", "If the owning actor has authority on this connection" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripScriptBase_HasAuthority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripScriptBase, nullptr, "HasAuthority", sizeof(VRGripScriptBase_eventHasAuthority_Parms), Z_Construct_UFunction_UVRGripScriptBase_HasAuthority_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_HasAuthority_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGripScriptBase_HasAuthority_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_HasAuthority_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGripScriptBase_HasAuthority()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGripScriptBase_HasAuthority_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGripScriptBase_IsServer_Statics
	{
		struct VRGripScriptBase_eventIsServer_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVRGripScriptBase_IsServer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VRGripScriptBase_eventIsServer_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGripScriptBase_IsServer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRGripScriptBase_eventIsServer_Parms), &Z_Construct_UFunction_UVRGripScriptBase_IsServer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripScriptBase_IsServer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_IsServer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripScriptBase_IsServer_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripScript" },
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
		{ "ToolTip", "If the owning actor is on the server on this connection" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripScriptBase_IsServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripScriptBase, nullptr, "IsServer", sizeof(VRGripScriptBase_eventIsServer_Parms), Z_Construct_UFunction_UVRGripScriptBase_IsServer_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_IsServer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGripScriptBase_IsServer_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_IsServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGripScriptBase_IsServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGripScriptBase_IsServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGripScriptBase_OnBeginPlay_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CallingOwner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGripScriptBase_OnBeginPlay_Statics::NewProp_CallingOwner = { "CallingOwner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripScriptBase_eventOnBeginPlay_Parms, CallingOwner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripScriptBase_OnBeginPlay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_OnBeginPlay_Statics::NewProp_CallingOwner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripScriptBase_OnBeginPlay_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripScript" },
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
		{ "ToolTip", "Not all scripts will require this function, specific ones that use things like Lever logic however will. Best to call it.\nGrippables will automatically call this, however if you manually spawn a grip script during play or you make your own\nInterfaced grip object and give it grippables, YOU will be required to call this event on them." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripScriptBase_OnBeginPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripScriptBase, nullptr, "OnBeginPlay", sizeof(VRGripScriptBase_eventOnBeginPlay_Parms), Z_Construct_UFunction_UVRGripScriptBase_OnBeginPlay_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_OnBeginPlay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGripScriptBase_OnBeginPlay_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_OnBeginPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGripScriptBase_OnBeginPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGripScriptBase_OnBeginPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGripScriptBase_OnEndPlay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndPlayReason_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EndPlayReason;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripScriptBase_OnEndPlay_Statics::NewProp_EndPlayReason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVRGripScriptBase_OnEndPlay_Statics::NewProp_EndPlayReason = { "EndPlayReason", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripScriptBase_eventOnEndPlay_Parms, EndPlayReason), Z_Construct_UEnum_Engine_EEndPlayReason, METADATA_PARAMS(Z_Construct_UFunction_UVRGripScriptBase_OnEndPlay_Statics::NewProp_EndPlayReason_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_OnEndPlay_Statics::NewProp_EndPlayReason_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripScriptBase_OnEndPlay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_OnEndPlay_Statics::NewProp_EndPlayReason,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripScriptBase_OnEndPlay_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripScript" },
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
		{ "ToolTip", "Not all scripts will require this function, specific ones that use things like Lever logic however will. Best to call it.\nGrippables will automatically call this, however if you manually spawn a grip script during play or you make your own\nInterfaced grip object and give it grippables, YOU will be required to call this event on them." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripScriptBase_OnEndPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripScriptBase, nullptr, "OnEndPlay", sizeof(VRGripScriptBase_eventOnEndPlay_Parms), Z_Construct_UFunction_UVRGripScriptBase_OnEndPlay_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_OnEndPlay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGripScriptBase_OnEndPlay_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_OnEndPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGripScriptBase_OnEndPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGripScriptBase_OnEndPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGripScriptBase_OnGrip_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripScriptBase_OnGrip_Statics::NewProp_GripInformation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGripScriptBase_OnGrip_Statics::NewProp_GripInformation = { "GripInformation", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripScriptBase_eventOnGrip_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_UVRGripScriptBase_OnGrip_Statics::NewProp_GripInformation_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_OnGrip_Statics::NewProp_GripInformation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripScriptBase_OnGrip_Statics::NewProp_GrippingController_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGripScriptBase_OnGrip_Statics::NewProp_GrippingController = { "GrippingController", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripScriptBase_eventOnGrip_Parms, GrippingController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVRGripScriptBase_OnGrip_Statics::NewProp_GrippingController_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_OnGrip_Statics::NewProp_GrippingController_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripScriptBase_OnGrip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_OnGrip_Statics::NewProp_GripInformation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_OnGrip_Statics::NewProp_GrippingController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripScriptBase_OnGrip_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripScript" },
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
		{ "ToolTip", "Event triggered on the interfaced object when gripped" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripScriptBase_OnGrip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripScriptBase, nullptr, "OnGrip", sizeof(VRGripScriptBase_eventOnGrip_Parms), Z_Construct_UFunction_UVRGripScriptBase_OnGrip_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_OnGrip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGripScriptBase_OnGrip_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_OnGrip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGripScriptBase_OnGrip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGripScriptBase_OnGrip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGripScriptBase_OnGripRelease_Statics
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
	void Z_Construct_UFunction_UVRGripScriptBase_OnGripRelease_Statics::NewProp_bWasSocketed_SetBit(void* Obj)
	{
		((VRGripScriptBase_eventOnGripRelease_Parms*)Obj)->bWasSocketed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGripScriptBase_OnGripRelease_Statics::NewProp_bWasSocketed = { "bWasSocketed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRGripScriptBase_eventOnGripRelease_Parms), &Z_Construct_UFunction_UVRGripScriptBase_OnGripRelease_Statics::NewProp_bWasSocketed_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripScriptBase_OnGripRelease_Statics::NewProp_GripInformation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGripScriptBase_OnGripRelease_Statics::NewProp_GripInformation = { "GripInformation", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripScriptBase_eventOnGripRelease_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_UVRGripScriptBase_OnGripRelease_Statics::NewProp_GripInformation_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_OnGripRelease_Statics::NewProp_GripInformation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripScriptBase_OnGripRelease_Statics::NewProp_ReleasingController_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGripScriptBase_OnGripRelease_Statics::NewProp_ReleasingController = { "ReleasingController", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripScriptBase_eventOnGripRelease_Parms, ReleasingController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVRGripScriptBase_OnGripRelease_Statics::NewProp_ReleasingController_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_OnGripRelease_Statics::NewProp_ReleasingController_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripScriptBase_OnGripRelease_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_OnGripRelease_Statics::NewProp_bWasSocketed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_OnGripRelease_Statics::NewProp_GripInformation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_OnGripRelease_Statics::NewProp_ReleasingController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripScriptBase_OnGripRelease_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripScript" },
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
		{ "ToolTip", "Event triggered on the interfaced object when grip is released" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripScriptBase_OnGripRelease_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripScriptBase, nullptr, "OnGripRelease", sizeof(VRGripScriptBase_eventOnGripRelease_Parms), Z_Construct_UFunction_UVRGripScriptBase_OnGripRelease_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_OnGripRelease_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGripScriptBase_OnGripRelease_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_OnGripRelease_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGripScriptBase_OnGripRelease()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGripScriptBase_OnGripRelease_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGrip_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripInformation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GripInformation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondaryGripComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SecondaryGripComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Controller_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGrip_Statics::NewProp_GripInformation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGrip_Statics::NewProp_GripInformation = { "GripInformation", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripScriptBase_eventOnSecondaryGrip_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGrip_Statics::NewProp_GripInformation_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGrip_Statics::NewProp_GripInformation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGrip_Statics::NewProp_SecondaryGripComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGrip_Statics::NewProp_SecondaryGripComponent = { "SecondaryGripComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripScriptBase_eventOnSecondaryGrip_Parms, SecondaryGripComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGrip_Statics::NewProp_SecondaryGripComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGrip_Statics::NewProp_SecondaryGripComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGrip_Statics::NewProp_Controller_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGrip_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripScriptBase_eventOnSecondaryGrip_Parms, Controller), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGrip_Statics::NewProp_Controller_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGrip_Statics::NewProp_Controller_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGrip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGrip_Statics::NewProp_GripInformation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGrip_Statics::NewProp_SecondaryGripComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGrip_Statics::NewProp_Controller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGrip_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
		{ "ToolTip", "Event triggered on the interfaced object when secondary gripped" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGrip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripScriptBase, nullptr, "OnSecondaryGrip", sizeof(VRGripScriptBase_eventOnSecondaryGrip_Parms), Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGrip_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGrip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGrip_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGrip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGrip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGrip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGripRelease_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripInformation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GripInformation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReleasingSecondaryGripComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReleasingSecondaryGripComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Controller_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGripRelease_Statics::NewProp_GripInformation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGripRelease_Statics::NewProp_GripInformation = { "GripInformation", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripScriptBase_eventOnSecondaryGripRelease_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGripRelease_Statics::NewProp_GripInformation_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGripRelease_Statics::NewProp_GripInformation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGripRelease_Statics::NewProp_ReleasingSecondaryGripComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGripRelease_Statics::NewProp_ReleasingSecondaryGripComponent = { "ReleasingSecondaryGripComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripScriptBase_eventOnSecondaryGripRelease_Parms, ReleasingSecondaryGripComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGripRelease_Statics::NewProp_ReleasingSecondaryGripComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGripRelease_Statics::NewProp_ReleasingSecondaryGripComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGripRelease_Statics::NewProp_Controller_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGripRelease_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripScriptBase_eventOnSecondaryGripRelease_Parms, Controller), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGripRelease_Statics::NewProp_Controller_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGripRelease_Statics::NewProp_Controller_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGripRelease_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGripRelease_Statics::NewProp_GripInformation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGripRelease_Statics::NewProp_ReleasingSecondaryGripComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGripRelease_Statics::NewProp_Controller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGripRelease_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
		{ "ToolTip", "Event triggered on the interfaced object when secondary grip is released" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGripRelease_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripScriptBase, nullptr, "OnSecondaryGripRelease", sizeof(VRGripScriptBase_eventOnSecondaryGripRelease_Parms), Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGripRelease_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGripRelease_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGripRelease_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGripRelease_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGripRelease()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGripRelease_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVRGripScriptBase_NoRegister()
	{
		return UVRGripScriptBase::StaticClass();
	}
	struct Z_Construct_UClass_UVRGripScriptBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDenyLateUpdates_MetaData[];
#endif
		static void NewProp_bDenyLateUpdates_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDenyLateUpdates;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceDrop_MetaData[];
#endif
		static void NewProp_bForceDrop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceDrop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDenyAutoDrop_MetaData[];
#endif
		static void NewProp_bDenyAutoDrop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDenyAutoDrop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldTransformOverrideType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WorldTransformOverrideType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WorldTransformOverrideType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsActive_MetaData[];
#endif
		static void NewProp_bIsActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsActive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVRGripScriptBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVRGripScriptBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVRGripScriptBase_ForceGripToDrop, "ForceGripToDrop" }, // 2379662916
		{ &Z_Construct_UFunction_UVRGripScriptBase_GetGripTransform, "GetGripTransform" }, // 201550775
		{ &Z_Construct_UFunction_UVRGripScriptBase_GetOwner, "GetOwner" }, // 4253594720
		{ &Z_Construct_UFunction_UVRGripScriptBase_GetParent, "GetParent" }, // 1863714224
		{ &Z_Construct_UFunction_UVRGripScriptBase_GetParentTransform, "GetParentTransform" }, // 3007431301
		{ &Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform, "GetWorldTransform" }, // 4255199469
		{ &Z_Construct_UFunction_UVRGripScriptBase_HasAuthority, "HasAuthority" }, // 358882207
		{ &Z_Construct_UFunction_UVRGripScriptBase_IsServer, "IsServer" }, // 1923396372
		{ &Z_Construct_UFunction_UVRGripScriptBase_OnBeginPlay, "OnBeginPlay" }, // 2758470930
		{ &Z_Construct_UFunction_UVRGripScriptBase_OnEndPlay, "OnEndPlay" }, // 2736764326
		{ &Z_Construct_UFunction_UVRGripScriptBase_OnGrip, "OnGrip" }, // 2699892250
		{ &Z_Construct_UFunction_UVRGripScriptBase_OnGripRelease, "OnGripRelease" }, // 988109593
		{ &Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGrip, "OnSecondaryGrip" }, // 3404184561
		{ &Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGripRelease, "OnSecondaryGripRelease" }, // 843164896
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRGripScriptBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "VRExpansionPlugin" },
		{ "HideCategories", "DefaultSettings" },
		{ "IncludePath", "GripScripts/VRGripScriptBase.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bDenyLateUpdates_MetaData[] = {
		{ "Category", "DefaultSettings" },
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
		{ "ToolTip", "Returns if we want to deny late updates" },
	};
#endif
	void Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bDenyLateUpdates_SetBit(void* Obj)
	{
		((UVRGripScriptBase*)Obj)->bDenyLateUpdates = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bDenyLateUpdates = { "bDenyLateUpdates", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVRGripScriptBase), &Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bDenyLateUpdates_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bDenyLateUpdates_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bDenyLateUpdates_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bForceDrop_MetaData[] = {
		{ "Category", "DefaultSettings" },
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
		{ "ToolTip", "Returns if we want to force a drop" },
	};
#endif
	void Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bForceDrop_SetBit(void* Obj)
	{
		((UVRGripScriptBase*)Obj)->bForceDrop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bForceDrop = { "bForceDrop", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVRGripScriptBase), &Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bForceDrop_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bForceDrop_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bForceDrop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bDenyAutoDrop_MetaData[] = {
		{ "Category", "DefaultSettings" },
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
		{ "ToolTip", "Returns if we want to deny auto dropping" },
	};
#endif
	void Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bDenyAutoDrop_SetBit(void* Obj)
	{
		((UVRGripScriptBase*)Obj)->bDenyAutoDrop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bDenyAutoDrop = { "bDenyAutoDrop", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVRGripScriptBase), &Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bDenyAutoDrop_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bDenyAutoDrop_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bDenyAutoDrop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_WorldTransformOverrideType_MetaData[] = {
		{ "Category", "DefaultSettings" },
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
		{ "ToolTip", "Whether this script overrides or modifies the world transform" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_WorldTransformOverrideType = { "WorldTransformOverrideType", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRGripScriptBase, WorldTransformOverrideType), Z_Construct_UEnum_VRExpansionPlugin_EGSTransformOverrideType, METADATA_PARAMS(Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_WorldTransformOverrideType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_WorldTransformOverrideType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_WorldTransformOverrideType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bIsActive_MetaData[] = {
		{ "Category", "DefaultSettings" },
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
		{ "ToolTip", "Is currently active helper variable, returned from IsScriptActive()" },
	};
#endif
	void Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bIsActive_SetBit(void* Obj)
	{
		((UVRGripScriptBase*)Obj)->bIsActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bIsActive = { "bIsActive", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVRGripScriptBase), &Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bIsActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bIsActive_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bIsActive_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVRGripScriptBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bDenyLateUpdates,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bForceDrop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bDenyAutoDrop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_WorldTransformOverrideType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_WorldTransformOverrideType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bIsActive,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVRGripScriptBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVRGripScriptBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVRGripScriptBase_Statics::ClassParams = {
		&UVRGripScriptBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVRGripScriptBase_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UVRGripScriptBase_Statics::PropPointers),
		0,
		0x003010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UVRGripScriptBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UVRGripScriptBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVRGripScriptBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVRGripScriptBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVRGripScriptBase, 2026614064);
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UVRGripScriptBase>()
	{
		return UVRGripScriptBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVRGripScriptBase(Z_Construct_UClass_UVRGripScriptBase, &UVRGripScriptBase::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("UVRGripScriptBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVRGripScriptBase);
	void UVRGripScriptBaseBP::StaticRegisterNativesUVRGripScriptBaseBP()
	{
	}
	UClass* Z_Construct_UClass_UVRGripScriptBaseBP_NoRegister()
	{
		return UVRGripScriptBaseBP::StaticClass();
	}
	struct Z_Construct_UClass_UVRGripScriptBaseBP_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVRGripScriptBaseBP_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVRGripScriptBase,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRGripScriptBaseBP_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "VRExpansionPlugin" },
		{ "IncludePath", "GripScripts/VRGripScriptBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVRGripScriptBaseBP_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVRGripScriptBaseBP>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVRGripScriptBaseBP_Statics::ClassParams = {
		&UVRGripScriptBaseBP::StaticClass,
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
		0x003010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UVRGripScriptBaseBP_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UVRGripScriptBaseBP_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVRGripScriptBaseBP()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVRGripScriptBaseBP_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVRGripScriptBaseBP, 1504001338);
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UVRGripScriptBaseBP>()
	{
		return UVRGripScriptBaseBP::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVRGripScriptBaseBP(Z_Construct_UClass_UVRGripScriptBaseBP, &UVRGripScriptBaseBP::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("UVRGripScriptBaseBP"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVRGripScriptBaseBP);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
