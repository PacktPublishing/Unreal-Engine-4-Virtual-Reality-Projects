// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/Grippables/GrippablePhysicsReplication.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrippablePhysicsReplication() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVRClientAuthReplicationData();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FRepMovementVR();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRepMovement();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FReplicationBucketContainer();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FReplicationBucket();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRReplicationInterface_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRReplicationInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
// End Cross Module References
class UScriptStruct* FVRClientAuthReplicationData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VREXPANSIONPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FVRClientAuthReplicationData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVRClientAuthReplicationData, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("VRClientAuthReplicationData"), sizeof(FVRClientAuthReplicationData), Get_Z_Construct_UScriptStruct_FVRClientAuthReplicationData_Hash());
	}
	return Singleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FVRClientAuthReplicationData>()
{
	return FVRClientAuthReplicationData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVRClientAuthReplicationData(FVRClientAuthReplicationData::StaticStruct, TEXT("/Script/VRExpansionPlugin"), TEXT("VRClientAuthReplicationData"), false, nullptr, nullptr);
static struct FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFVRClientAuthReplicationData
{
	FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFVRClientAuthReplicationData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VRClientAuthReplicationData")),new UScriptStruct::TCppStructOps<FVRClientAuthReplicationData>);
	}
} ScriptStruct_VRExpansionPlugin_StaticRegisterNativesFVRClientAuthReplicationData;
	struct Z_Construct_UScriptStruct_FVRClientAuthReplicationData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdateRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UpdateRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseClientAuthThrowing_MetaData[];
#endif
		static void NewProp_bUseClientAuthThrowing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseClientAuthThrowing;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRClientAuthReplicationData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Grippables/GrippablePhysicsReplication.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVRClientAuthReplicationData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVRClientAuthReplicationData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRClientAuthReplicationData_Statics::NewProp_UpdateRate_MetaData[] = {
		{ "Category", "VRReplication" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Grippables/GrippablePhysicsReplication.h" },
		{ "ToolTip", "Rate that we will be sending throwing events to the server, not replicated, only serialized" },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVRClientAuthReplicationData_Statics::NewProp_UpdateRate = { "UpdateRate", nullptr, (EPropertyFlags)0x0010000080000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVRClientAuthReplicationData, UpdateRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FVRClientAuthReplicationData_Statics::NewProp_UpdateRate_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVRClientAuthReplicationData_Statics::NewProp_UpdateRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRClientAuthReplicationData_Statics::NewProp_bUseClientAuthThrowing_MetaData[] = {
		{ "Category", "VRReplication" },
		{ "ModuleRelativePath", "Public/Grippables/GrippablePhysicsReplication.h" },
		{ "ToolTip", "If True and we are using a client auth grip type then we will replicate our throws on release" },
	};
#endif
	void Z_Construct_UScriptStruct_FVRClientAuthReplicationData_Statics::NewProp_bUseClientAuthThrowing_SetBit(void* Obj)
	{
		((FVRClientAuthReplicationData*)Obj)->bUseClientAuthThrowing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVRClientAuthReplicationData_Statics::NewProp_bUseClientAuthThrowing = { "bUseClientAuthThrowing", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVRClientAuthReplicationData), &Z_Construct_UScriptStruct_FVRClientAuthReplicationData_Statics::NewProp_bUseClientAuthThrowing_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVRClientAuthReplicationData_Statics::NewProp_bUseClientAuthThrowing_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVRClientAuthReplicationData_Statics::NewProp_bUseClientAuthThrowing_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVRClientAuthReplicationData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRClientAuthReplicationData_Statics::NewProp_UpdateRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRClientAuthReplicationData_Statics::NewProp_bUseClientAuthThrowing,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVRClientAuthReplicationData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		&NewStructOps,
		"VRClientAuthReplicationData",
		sizeof(FVRClientAuthReplicationData),
		alignof(FVRClientAuthReplicationData),
		Z_Construct_UScriptStruct_FVRClientAuthReplicationData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FVRClientAuthReplicationData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVRClientAuthReplicationData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FVRClientAuthReplicationData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVRClientAuthReplicationData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVRClientAuthReplicationData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VRClientAuthReplicationData"), sizeof(FVRClientAuthReplicationData), Get_Z_Construct_UScriptStruct_FVRClientAuthReplicationData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVRClientAuthReplicationData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVRClientAuthReplicationData_Hash() { return 222306581U; }
class UScriptStruct* FRepMovementVR::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VREXPANSIONPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FRepMovementVR_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRepMovementVR, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("RepMovementVR"), sizeof(FRepMovementVR), Get_Z_Construct_UScriptStruct_FRepMovementVR_Hash());
	}
	return Singleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FRepMovementVR>()
{
	return FRepMovementVR::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRepMovementVR(FRepMovementVR::StaticStruct, TEXT("/Script/VRExpansionPlugin"), TEXT("RepMovementVR"), false, nullptr, nullptr);
static struct FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFRepMovementVR
{
	FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFRepMovementVR()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RepMovementVR")),new UScriptStruct::TCppStructOps<FRepMovementVR>);
	}
} ScriptStruct_VRExpansionPlugin_StaticRegisterNativesFRepMovementVR;
	struct Z_Construct_UScriptStruct_FRepMovementVR_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRepMovementVR_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Grippables/GrippablePhysicsReplication.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRepMovementVR_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRepMovementVR>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRepMovementVR_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		Z_Construct_UScriptStruct_FRepMovement,
		&NewStructOps,
		"RepMovementVR",
		sizeof(FRepMovementVR),
		alignof(FRepMovementVR),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRepMovementVR_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FRepMovementVR_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRepMovementVR()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRepMovementVR_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RepMovementVR"), sizeof(FRepMovementVR), Get_Z_Construct_UScriptStruct_FRepMovementVR_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRepMovementVR_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRepMovementVR_Hash() { return 1189063098U; }
class UScriptStruct* FReplicationBucketContainer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VREXPANSIONPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FReplicationBucketContainer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FReplicationBucketContainer, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("ReplicationBucketContainer"), sizeof(FReplicationBucketContainer), Get_Z_Construct_UScriptStruct_FReplicationBucketContainer_Hash());
	}
	return Singleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FReplicationBucketContainer>()
{
	return FReplicationBucketContainer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FReplicationBucketContainer(FReplicationBucketContainer::StaticStruct, TEXT("/Script/VRExpansionPlugin"), TEXT("ReplicationBucketContainer"), false, nullptr, nullptr);
static struct FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFReplicationBucketContainer
{
	FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFReplicationBucketContainer()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ReplicationBucketContainer")),new UScriptStruct::TCppStructOps<FReplicationBucketContainer>);
	}
} ScriptStruct_VRExpansionPlugin_StaticRegisterNativesFReplicationBucketContainer;
	struct Z_Construct_UScriptStruct_FReplicationBucketContainer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReplicationBucketContainer_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Grippables/GrippablePhysicsReplication.h" },
		{ "ToolTip", "Blueprintable, meta = (BlueprintSpawnableComponent), ClassGroup = (VRExpansionPlugin))" },
	};
#endif
	void* Z_Construct_UScriptStruct_FReplicationBucketContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FReplicationBucketContainer>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FReplicationBucketContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		&NewStructOps,
		"ReplicationBucketContainer",
		sizeof(FReplicationBucketContainer),
		alignof(FReplicationBucketContainer),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FReplicationBucketContainer_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicationBucketContainer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FReplicationBucketContainer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FReplicationBucketContainer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ReplicationBucketContainer"), sizeof(FReplicationBucketContainer), Get_Z_Construct_UScriptStruct_FReplicationBucketContainer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FReplicationBucketContainer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FReplicationBucketContainer_Hash() { return 3855756302U; }
class UScriptStruct* FReplicationBucket::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VREXPANSIONPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FReplicationBucket_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FReplicationBucket, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("ReplicationBucket"), sizeof(FReplicationBucket), Get_Z_Construct_UScriptStruct_FReplicationBucket_Hash());
	}
	return Singleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FReplicationBucket>()
{
	return FReplicationBucket::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FReplicationBucket(FReplicationBucket::StaticStruct, TEXT("/Script/VRExpansionPlugin"), TEXT("ReplicationBucket"), false, nullptr, nullptr);
static struct FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFReplicationBucket
{
	FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFReplicationBucket()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ReplicationBucket")),new UScriptStruct::TCppStructOps<FReplicationBucket>);
	}
} ScriptStruct_VRExpansionPlugin_StaticRegisterNativesFReplicationBucket;
	struct Z_Construct_UScriptStruct_FReplicationBucket_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReplicationBucket_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Grippables/GrippablePhysicsReplication.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FReplicationBucket_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FReplicationBucket>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FReplicationBucket_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		&NewStructOps,
		"ReplicationBucket",
		sizeof(FReplicationBucket),
		alignof(FReplicationBucket),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FReplicationBucket_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicationBucket_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FReplicationBucket()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FReplicationBucket_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ReplicationBucket"), sizeof(FReplicationBucket), Get_Z_Construct_UScriptStruct_FReplicationBucket_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FReplicationBucket_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FReplicationBucket_Hash() { return 451382029U; }
	void UVRReplicationInterface::StaticRegisterNativesUVRReplicationInterface()
	{
	}
	UClass* Z_Construct_UClass_UVRReplicationInterface_NoRegister()
	{
		return UVRReplicationInterface::StaticClass();
	}
	struct Z_Construct_UClass_UVRReplicationInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVRReplicationInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRReplicationInterface_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/Grippables/GrippablePhysicsReplication.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVRReplicationInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IVRReplicationInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVRReplicationInterface_Statics::ClassParams = {
		&UVRReplicationInterface::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UVRReplicationInterface_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UVRReplicationInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVRReplicationInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVRReplicationInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVRReplicationInterface, 3667227867);
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UVRReplicationInterface>()
	{
		return UVRReplicationInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVRReplicationInterface(Z_Construct_UClass_UVRReplicationInterface, &UVRReplicationInterface::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("UVRReplicationInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVRReplicationInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
