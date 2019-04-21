// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/VRBPDatatypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRBPDatatypes() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EPhysicsGripCOMType();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EPhysicsGripConstraintType();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EGripInterfaceTeleportBehavior();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EGripTargetType();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EGripMovementReplicationSettings();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EGripLateUpdateSettings();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_ESecondaryGripType();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EGripLerpState();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EBPHMDDeviceType();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EGripCollisionType();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRRotationQuantization();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRVectorQuantization();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EBPVRWaistTrackingMode();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EBPVRResultSwitch();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRConjoinedMovementModes();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRCustomMovementMode();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPActorPhysicsHandleInformation();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPInterfaceProperties();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGripMotionControllerComponent_NoRegister();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPAdvGripSettings();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPActorGripInformation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPSecondaryGripInfo();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FTransform_NetQuantize();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPAdvSecondaryGripSettings();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize100();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPVRComponentPosRep();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPEuroLowPassFilter();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPVRWaistTracking_Info();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
// End Cross Module References
	static UEnum* EPhysicsGripCOMType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EPhysicsGripCOMType, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EPhysicsGripCOMType"));
		}
		return Singleton;
	}
	template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EPhysicsGripCOMType>()
	{
		return EPhysicsGripCOMType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPhysicsGripCOMType(EPhysicsGripCOMType_StaticEnum, TEXT("/Script/VRExpansionPlugin"), TEXT("EPhysicsGripCOMType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VRExpansionPlugin_EPhysicsGripCOMType_Hash() { return 1454958974U; }
	UEnum* Z_Construct_UEnum_VRExpansionPlugin_EPhysicsGripCOMType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPhysicsGripCOMType"), 0, Get_Z_Construct_UEnum_VRExpansionPlugin_EPhysicsGripCOMType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPhysicsGripCOMType::COM_Default", (int64)EPhysicsGripCOMType::COM_Default },
				{ "EPhysicsGripCOMType::COM_AtPivot", (int64)EPhysicsGripCOMType::COM_AtPivot },
				{ "EPhysicsGripCOMType::COM_SetAndGripAt", (int64)EPhysicsGripCOMType::COM_SetAndGripAt },
				{ "EPhysicsGripCOMType::COM_GripAt", (int64)EPhysicsGripCOMType::COM_GripAt },
				{ "EPhysicsGripCOMType::COM_GripAtControllerLoc", (int64)EPhysicsGripCOMType::COM_GripAtControllerLoc },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "COM_AtPivot.ToolTip", "Don't grip at center of mass (generally unstable as it grips at actor zero)" },
				{ "COM_Default.ToolTip", "Use the default setting for the specified grip type" },
				{ "COM_GripAt.ToolTip", "Grip at center of mass but do not set it" },
				{ "COM_GripAtControllerLoc.ToolTip", "Just grip at the controller location, but don't set COM (default for manipulation grips)" },
				{ "COM_SetAndGripAt.ToolTip", "Set center of mass to grip location and grip there (default for interactible with physics)" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
				nullptr,
				"EPhysicsGripCOMType",
				"EPhysicsGripCOMType",
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
	static UEnum* EPhysicsGripConstraintType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EPhysicsGripConstraintType, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EPhysicsGripConstraintType"));
		}
		return Singleton;
	}
	template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EPhysicsGripConstraintType>()
	{
		return EPhysicsGripConstraintType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPhysicsGripConstraintType(EPhysicsGripConstraintType_StaticEnum, TEXT("/Script/VRExpansionPlugin"), TEXT("EPhysicsGripConstraintType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VRExpansionPlugin_EPhysicsGripConstraintType_Hash() { return 2019958636U; }
	UEnum* Z_Construct_UEnum_VRExpansionPlugin_EPhysicsGripConstraintType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPhysicsGripConstraintType"), 0, Get_Z_Construct_UEnum_VRExpansionPlugin_EPhysicsGripConstraintType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPhysicsGripConstraintType::AccelerationConstraint", (int64)EPhysicsGripConstraintType::AccelerationConstraint },
				{ "EPhysicsGripConstraintType::ForceConstraint", (int64)EPhysicsGripConstraintType::ForceConstraint },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
				{ "ToolTip", "Type of physics constraint to use" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
				nullptr,
				"EPhysicsGripConstraintType",
				"EPhysicsGripConstraintType",
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
	static UEnum* EGripInterfaceTeleportBehavior_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EGripInterfaceTeleportBehavior, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EGripInterfaceTeleportBehavior"));
		}
		return Singleton;
	}
	template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EGripInterfaceTeleportBehavior>()
	{
		return EGripInterfaceTeleportBehavior_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGripInterfaceTeleportBehavior(EGripInterfaceTeleportBehavior_StaticEnum, TEXT("/Script/VRExpansionPlugin"), TEXT("EGripInterfaceTeleportBehavior"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VRExpansionPlugin_EGripInterfaceTeleportBehavior_Hash() { return 3566453572U; }
	UEnum* Z_Construct_UEnum_VRExpansionPlugin_EGripInterfaceTeleportBehavior()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGripInterfaceTeleportBehavior"), 0, Get_Z_Construct_UEnum_VRExpansionPlugin_EGripInterfaceTeleportBehavior_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGripInterfaceTeleportBehavior::TeleportAllComponents", (int64)EGripInterfaceTeleportBehavior::TeleportAllComponents },
				{ "EGripInterfaceTeleportBehavior::DeltaTeleportation", (int64)EGripInterfaceTeleportBehavior::DeltaTeleportation },
				{ "EGripInterfaceTeleportBehavior::OnlyTeleportRootComponent", (int64)EGripInterfaceTeleportBehavior::OnlyTeleportRootComponent },
				{ "EGripInterfaceTeleportBehavior::DropOnTeleport", (int64)EGripInterfaceTeleportBehavior::DropOnTeleport },
				{ "EGripInterfaceTeleportBehavior::DontTeleport", (int64)EGripInterfaceTeleportBehavior::DontTeleport },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DeltaTeleportation.ToolTip", "Teleports by the location delta and not the calculated new position of the grip, useful for rag dolls" },
				{ "DontTeleport.ToolTip", "Teleporting is not allowed" },
				{ "DropOnTeleport.ToolTip", "Just drop the grip on teleport" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
				{ "OnlyTeleportRootComponent.ToolTip", "Only teleports an actor if the root component is held" },
				{ "TeleportAllComponents.ToolTip", "Teleports entire actor" },
				{ "ToolTip", "Lerp states" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
				nullptr,
				"EGripInterfaceTeleportBehavior",
				"EGripInterfaceTeleportBehavior",
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
	static UEnum* EGripTargetType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EGripTargetType, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EGripTargetType"));
		}
		return Singleton;
	}
	template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EGripTargetType>()
	{
		return EGripTargetType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGripTargetType(EGripTargetType_StaticEnum, TEXT("/Script/VRExpansionPlugin"), TEXT("EGripTargetType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VRExpansionPlugin_EGripTargetType_Hash() { return 3011400882U; }
	UEnum* Z_Construct_UEnum_VRExpansionPlugin_EGripTargetType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGripTargetType"), 0, Get_Z_Construct_UEnum_VRExpansionPlugin_EGripTargetType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGripTargetType::ActorGrip", (int64)EGripTargetType::ActorGrip },
				{ "EGripTargetType::ComponentGrip", (int64)EGripTargetType::ComponentGrip },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
				{ "ToolTip", "Grip Target Type" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
				nullptr,
				"EGripTargetType",
				"EGripTargetType",
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
	static UEnum* EGripMovementReplicationSettings_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EGripMovementReplicationSettings, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EGripMovementReplicationSettings"));
		}
		return Singleton;
	}
	template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EGripMovementReplicationSettings>()
	{
		return EGripMovementReplicationSettings_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGripMovementReplicationSettings(EGripMovementReplicationSettings_StaticEnum, TEXT("/Script/VRExpansionPlugin"), TEXT("EGripMovementReplicationSettings"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VRExpansionPlugin_EGripMovementReplicationSettings_Hash() { return 381717851U; }
	UEnum* Z_Construct_UEnum_VRExpansionPlugin_EGripMovementReplicationSettings()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGripMovementReplicationSettings"), 0, Get_Z_Construct_UEnum_VRExpansionPlugin_EGripMovementReplicationSettings_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGripMovementReplicationSettings::KeepOriginalMovement", (int64)EGripMovementReplicationSettings::KeepOriginalMovement },
				{ "EGripMovementReplicationSettings::ForceServerSideMovement", (int64)EGripMovementReplicationSettings::ForceServerSideMovement },
				{ "EGripMovementReplicationSettings::ForceClientSideMovement", (int64)EGripMovementReplicationSettings::ForceClientSideMovement },
				{ "EGripMovementReplicationSettings::ClientSide_Authoritive", (int64)EGripMovementReplicationSettings::ClientSide_Authoritive },
				{ "EGripMovementReplicationSettings::ClientSide_Authoritive_NoRep", (int64)EGripMovementReplicationSettings::ClientSide_Authoritive_NoRep },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
				{ "ToolTip", "Grip movement replication settings\nLocalOnly_Not_Replicated is useful for instant client grips\nthat can be sent to the server and everyone locally grips it (IE: inventories that don't ever leave a player)\nObjects that need to be handled possibly by multiple players should be ran\nnon locally gripped instead so that the server can validate grips instead.\nClientSide_Authoritive will grip on the client instantly without server intervention and then send a notice to the server\nClientSide_Authoritive_NoRep will grip on the client instantly without server intervention but will not rep the grip to the server\nthat the grip was made" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
				nullptr,
				"EGripMovementReplicationSettings",
				"EGripMovementReplicationSettings",
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
	static UEnum* EGripLateUpdateSettings_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EGripLateUpdateSettings, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EGripLateUpdateSettings"));
		}
		return Singleton;
	}
	template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EGripLateUpdateSettings>()
	{
		return EGripLateUpdateSettings_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGripLateUpdateSettings(EGripLateUpdateSettings_StaticEnum, TEXT("/Script/VRExpansionPlugin"), TEXT("EGripLateUpdateSettings"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VRExpansionPlugin_EGripLateUpdateSettings_Hash() { return 4084496824U; }
	UEnum* Z_Construct_UEnum_VRExpansionPlugin_EGripLateUpdateSettings()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGripLateUpdateSettings"), 0, Get_Z_Construct_UEnum_VRExpansionPlugin_EGripLateUpdateSettings_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGripLateUpdateSettings::LateUpdatesAlwaysOn", (int64)EGripLateUpdateSettings::LateUpdatesAlwaysOn },
				{ "EGripLateUpdateSettings::LateUpdatesAlwaysOff", (int64)EGripLateUpdateSettings::LateUpdatesAlwaysOff },
				{ "EGripLateUpdateSettings::NotWhenColliding", (int64)EGripLateUpdateSettings::NotWhenColliding },
				{ "EGripLateUpdateSettings::NotWhenDoubleGripping", (int64)EGripLateUpdateSettings::NotWhenDoubleGripping },
				{ "EGripLateUpdateSettings::NotWhenCollidingOrDoubleGripping", (int64)EGripLateUpdateSettings::NotWhenCollidingOrDoubleGripping },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
				{ "ToolTip", "Grip Late Update information" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
				nullptr,
				"EGripLateUpdateSettings",
				"EGripLateUpdateSettings",
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
	static UEnum* ESecondaryGripType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_ESecondaryGripType, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("ESecondaryGripType"));
		}
		return Singleton;
	}
	template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<ESecondaryGripType>()
	{
		return ESecondaryGripType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESecondaryGripType(ESecondaryGripType_StaticEnum, TEXT("/Script/VRExpansionPlugin"), TEXT("ESecondaryGripType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VRExpansionPlugin_ESecondaryGripType_Hash() { return 2232811522U; }
	UEnum* Z_Construct_UEnum_VRExpansionPlugin_ESecondaryGripType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESecondaryGripType"), 0, Get_Z_Construct_UEnum_VRExpansionPlugin_ESecondaryGripType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESecondaryGripType::SG_None", (int64)ESecondaryGripType::SG_None },
				{ "ESecondaryGripType::SG_Free", (int64)ESecondaryGripType::SG_Free },
				{ "ESecondaryGripType::SG_SlotOnly", (int64)ESecondaryGripType::SG_SlotOnly },
				{ "ESecondaryGripType::SG_Free_Retain", (int64)ESecondaryGripType::SG_Free_Retain },
				{ "ESecondaryGripType::SG_SlotOnly_Retain", (int64)ESecondaryGripType::SG_SlotOnly_Retain },
				{ "ESecondaryGripType::SG_FreeWithScaling_Retain", (int64)ESecondaryGripType::SG_FreeWithScaling_Retain },
				{ "ESecondaryGripType::SG_SlotOnlyWithScaling_Retain", (int64)ESecondaryGripType::SG_SlotOnlyWithScaling_Retain },
				{ "ESecondaryGripType::SG_Custom", (int64)ESecondaryGripType::SG_Custom },
				{ "ESecondaryGripType::SG_ScalingOnly", (int64)ESecondaryGripType::SG_ScalingOnly },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
				{ "SG_Custom.ToolTip", "Does nothing, just provides the events for personal use" },
				{ "SG_Free.ToolTip", "Free secondary grip" },
				{ "SG_Free_Retain.ToolTip", "Retain pos on drop" },
				{ "SG_FreeWithScaling_Retain.ToolTip", "Scaling with retain pos on drop" },
				{ "SG_None.ToolTip", "No secondary grip" },
				{ "SG_ScalingOnly.ToolTip", "Does not track the hand, only scales the mesh with it" },
				{ "SG_SlotOnly.ToolTip", "Only secondary grip at a slot" },
				{ "SG_SlotOnly_Retain.ToolTip", "Retain pos on drop, slot only" },
				{ "SG_SlotOnlyWithScaling_Retain.ToolTip", "Scaling with retain pos on drop, slot only" },
				{ "ToolTip", "Secondary Grip Type" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
				nullptr,
				"ESecondaryGripType",
				"ESecondaryGripType",
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
	static UEnum* EGripLerpState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EGripLerpState, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EGripLerpState"));
		}
		return Singleton;
	}
	template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EGripLerpState>()
	{
		return EGripLerpState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGripLerpState(EGripLerpState_StaticEnum, TEXT("/Script/VRExpansionPlugin"), TEXT("EGripLerpState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VRExpansionPlugin_EGripLerpState_Hash() { return 1019994940U; }
	UEnum* Z_Construct_UEnum_VRExpansionPlugin_EGripLerpState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGripLerpState"), 0, Get_Z_Construct_UEnum_VRExpansionPlugin_EGripLerpState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGripLerpState::StartLerp", (int64)EGripLerpState::StartLerp },
				{ "EGripLerpState::EndLerp", (int64)EGripLerpState::EndLerp },
				{ "EGripLerpState::NotLerping", (int64)EGripLerpState::NotLerping },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
				{ "NotLerping.ToolTip", "ConstantLerp_DEPRECATED," },
				{ "ToolTip", "Lerp states" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
				nullptr,
				"EGripLerpState",
				"EGripLerpState",
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
	static UEnum* EBPHMDDeviceType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EBPHMDDeviceType, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EBPHMDDeviceType"));
		}
		return Singleton;
	}
	template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EBPHMDDeviceType>()
	{
		return EBPHMDDeviceType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBPHMDDeviceType(EBPHMDDeviceType_StaticEnum, TEXT("/Script/VRExpansionPlugin"), TEXT("EBPHMDDeviceType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VRExpansionPlugin_EBPHMDDeviceType_Hash() { return 4125896754U; }
	UEnum* Z_Construct_UEnum_VRExpansionPlugin_EBPHMDDeviceType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBPHMDDeviceType"), 0, Get_Z_Construct_UEnum_VRExpansionPlugin_EBPHMDDeviceType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBPHMDDeviceType::DT_OculusHMD", (int64)EBPHMDDeviceType::DT_OculusHMD },
				{ "EBPHMDDeviceType::DT_PSVR", (int64)EBPHMDDeviceType::DT_PSVR },
				{ "EBPHMDDeviceType::DT_ES2GenericStereoMesh", (int64)EBPHMDDeviceType::DT_ES2GenericStereoMesh },
				{ "EBPHMDDeviceType::DT_SteamVR", (int64)EBPHMDDeviceType::DT_SteamVR },
				{ "EBPHMDDeviceType::DT_GearVR", (int64)EBPHMDDeviceType::DT_GearVR },
				{ "EBPHMDDeviceType::DT_GoogleVR", (int64)EBPHMDDeviceType::DT_GoogleVR },
				{ "EBPHMDDeviceType::DT_OSVR", (int64)EBPHMDDeviceType::DT_OSVR },
				{ "EBPHMDDeviceType::DT_AppleARKit", (int64)EBPHMDDeviceType::DT_AppleARKit },
				{ "EBPHMDDeviceType::DT_GoogleARCore", (int64)EBPHMDDeviceType::DT_GoogleARCore },
				{ "EBPHMDDeviceType::DT_Unknown", (int64)EBPHMDDeviceType::DT_Unknown },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DT_ES2GenericStereoMesh.ToolTip", "DT_Morpheus," },
				{ "DT_PSVR.ToolTip", "Rift," },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
				{ "ToolTip", "This needs to be updated as the original gets changed, that or hope they make the original blueprint accessible." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
				nullptr,
				"EBPHMDDeviceType",
				"EBPHMDDeviceType",
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
	static UEnum* EGripCollisionType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EGripCollisionType, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EGripCollisionType"));
		}
		return Singleton;
	}
	template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EGripCollisionType>()
	{
		return EGripCollisionType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGripCollisionType(EGripCollisionType_StaticEnum, TEXT("/Script/VRExpansionPlugin"), TEXT("EGripCollisionType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VRExpansionPlugin_EGripCollisionType_Hash() { return 2293376508U; }
	UEnum* Z_Construct_UEnum_VRExpansionPlugin_EGripCollisionType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGripCollisionType"), 0, Get_Z_Construct_UEnum_VRExpansionPlugin_EGripCollisionType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGripCollisionType::InteractiveCollisionWithPhysics", (int64)EGripCollisionType::InteractiveCollisionWithPhysics },
				{ "EGripCollisionType::InteractiveCollisionWithSweep", (int64)EGripCollisionType::InteractiveCollisionWithSweep },
				{ "EGripCollisionType::InteractiveHybridCollisionWithPhysics", (int64)EGripCollisionType::InteractiveHybridCollisionWithPhysics },
				{ "EGripCollisionType::InteractiveHybridCollisionWithSweep", (int64)EGripCollisionType::InteractiveHybridCollisionWithSweep },
				{ "EGripCollisionType::SweepWithPhysics", (int64)EGripCollisionType::SweepWithPhysics },
				{ "EGripCollisionType::PhysicsOnly", (int64)EGripCollisionType::PhysicsOnly },
				{ "EGripCollisionType::ManipulationGrip", (int64)EGripCollisionType::ManipulationGrip },
				{ "EGripCollisionType::ManipulationGripWithWristTwist", (int64)EGripCollisionType::ManipulationGripWithWristTwist },
				{ "EGripCollisionType::AttachmentGrip", (int64)EGripCollisionType::AttachmentGrip },
				{ "EGripCollisionType::CustomGrip", (int64)EGripCollisionType::CustomGrip },
				{ "EGripCollisionType::EventsOnly", (int64)EGripCollisionType::EventsOnly },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AttachmentGrip.ToolTip", "Attachment grips use native attachment and only sets location / rotation if they differ, this grip always late updates" },
				{ "BlueprintType", "true" },
				{ "CustomGrip.ToolTip", "Custom grip is to be handled by the object itself, it just sends the TickGrip event every frame but doesn't move the object." },
				{ "EventsOnly.ToolTip", "A grip that does not tick or move, used for drop / grip events only and uses least amount of processing." },
				{ "InteractiveCollisionWithPhysics.ToolTip", "Held items can be offset by geometry, uses physics for the offset, pushes physics simulating objects with weight taken into account." },
				{ "InteractiveCollisionWithSweep.ToolTip", "Held items can be offset by geometry, uses sweep for the offset, pushes physics simulating objects, no weight." },
				{ "InteractiveHybridCollisionWithPhysics.ToolTip", "Uses Stiffness and damping settings on collision, on no collision uses stiffness values 10x stronger so it has less play." },
				{ "InteractiveHybridCollisionWithSweep.ToolTip", "Swaps back and forth between physx grip and a sweep type grip depending on if the held object will be colliding this frame or not." },
				{ "IsBlueprintBase", "true" },
				{ "ManipulationGrip.ToolTip", "Free constraint to controller base, no rotational drives." },
				{ "ManipulationGripWithWristTwist.ToolTip", "Free constraint to controller base with a twist drive." },
				{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
				{ "PhysicsOnly.ToolTip", "Does not sweep at all (does not trigger OnHitEvents), still pushes physics simulating objects, no weight." },
				{ "SweepWithPhysics.ToolTip", "Only sweeps movement, will not be offset by geomtry, still pushes physics simulating objects, no weight." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
				nullptr,
				"EGripCollisionType",
				"EGripCollisionType",
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
	static UEnum* EVRRotationQuantization_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EVRRotationQuantization, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EVRRotationQuantization"));
		}
		return Singleton;
	}
	template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRRotationQuantization>()
	{
		return EVRRotationQuantization_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVRRotationQuantization(EVRRotationQuantization_StaticEnum, TEXT("/Script/VRExpansionPlugin"), TEXT("EVRRotationQuantization"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VRExpansionPlugin_EVRRotationQuantization_Hash() { return 4144931615U; }
	UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRRotationQuantization()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVRRotationQuantization"), 0, Get_Z_Construct_UEnum_VRExpansionPlugin_EVRRotationQuantization_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVRRotationQuantization::RoundTo10Bits", (int64)EVRRotationQuantization::RoundTo10Bits },
				{ "EVRRotationQuantization::RoundToShort", (int64)EVRRotationQuantization::RoundToShort },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
				{ "RoundTo10Bits.ToolTip", "Each rotation component will be rounded to 10 bits (1024 values)." },
				{ "RoundToShort.ToolTip", "Each rotation component will be rounded to a short." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
				nullptr,
				"EVRRotationQuantization",
				"EVRRotationQuantization",
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
	static UEnum* EVRVectorQuantization_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EVRVectorQuantization, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EVRVectorQuantization"));
		}
		return Singleton;
	}
	template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRVectorQuantization>()
	{
		return EVRVectorQuantization_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVRVectorQuantization(EVRVectorQuantization_StaticEnum, TEXT("/Script/VRExpansionPlugin"), TEXT("EVRVectorQuantization"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VRExpansionPlugin_EVRVectorQuantization_Hash() { return 1343785962U; }
	UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRVectorQuantization()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVRVectorQuantization"), 0, Get_Z_Construct_UEnum_VRExpansionPlugin_EVRVectorQuantization_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVRVectorQuantization::RoundOneDecimal", (int64)EVRVectorQuantization::RoundOneDecimal },
				{ "EVRVectorQuantization::RoundTwoDecimals", (int64)EVRVectorQuantization::RoundTwoDecimals },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
				{ "RoundOneDecimal.ToolTip", "Each vector component will be rounded, preserving one decimal place." },
				{ "RoundTwoDecimals.ToolTip", "Each vector component will be rounded, preserving two decimal places." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
				nullptr,
				"EVRVectorQuantization",
				"EVRVectorQuantization",
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
	static UEnum* EBPVRWaistTrackingMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EBPVRWaistTrackingMode, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EBPVRWaistTrackingMode"));
		}
		return Singleton;
	}
	template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EBPVRWaistTrackingMode>()
	{
		return EBPVRWaistTrackingMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBPVRWaistTrackingMode(EBPVRWaistTrackingMode_StaticEnum, TEXT("/Script/VRExpansionPlugin"), TEXT("EBPVRWaistTrackingMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VRExpansionPlugin_EBPVRWaistTrackingMode_Hash() { return 410779465U; }
	UEnum* Z_Construct_UEnum_VRExpansionPlugin_EBPVRWaistTrackingMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBPVRWaistTrackingMode"), 0, Get_Z_Construct_UEnum_VRExpansionPlugin_EBPVRWaistTrackingMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBPVRWaistTrackingMode::VRWaist_Tracked_Front", (int64)EBPVRWaistTrackingMode::VRWaist_Tracked_Front },
				{ "EBPVRWaistTrackingMode::VRWaist_Tracked_Rear", (int64)EBPVRWaistTrackingMode::VRWaist_Tracked_Rear },
				{ "EBPVRWaistTrackingMode::VRWaist_Tracked_Left", (int64)EBPVRWaistTrackingMode::VRWaist_Tracked_Left },
				{ "EBPVRWaistTrackingMode::VRWaist_Tracked_Right", (int64)EBPVRWaistTrackingMode::VRWaist_Tracked_Right },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
				{ "ToolTip", "Wasn't needed when final setup was realized\nTracked device waist location" },
				{ "VRWaist_Tracked_Front.ToolTip", "Waist is tracked from the front" },
				{ "VRWaist_Tracked_Left.ToolTip", "Waist is tracked from the left (self perspective)" },
				{ "VRWaist_Tracked_Rear.ToolTip", "Waist is tracked from the rear" },
				{ "VRWaist_Tracked_Right.ToolTip", "Waist is tracked from the right (self perspective)" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
				nullptr,
				"EBPVRWaistTrackingMode",
				"EBPVRWaistTrackingMode",
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
	static UEnum* EBPVRResultSwitch_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EBPVRResultSwitch, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EBPVRResultSwitch"));
		}
		return Singleton;
	}
	template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EBPVRResultSwitch>()
	{
		return EBPVRResultSwitch_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBPVRResultSwitch(EBPVRResultSwitch_StaticEnum, TEXT("/Script/VRExpansionPlugin"), TEXT("EBPVRResultSwitch"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VRExpansionPlugin_EBPVRResultSwitch_Hash() { return 3846978481U; }
	UEnum* Z_Construct_UEnum_VRExpansionPlugin_EBPVRResultSwitch()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBPVRResultSwitch"), 0, Get_Z_Construct_UEnum_VRExpansionPlugin_EBPVRResultSwitch_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBPVRResultSwitch::OnSucceeded", (int64)EBPVRResultSwitch::OnSucceeded },
				{ "EBPVRResultSwitch::OnFailed", (int64)EBPVRResultSwitch::OnFailed },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
				{ "OnFailed.ToolTip", "On Failure" },
				{ "OnSucceeded.ToolTip", "On Success" },
				{ "ToolTip", "This makes a lot of the blueprint functions cleaner" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
				nullptr,
				"EBPVRResultSwitch",
				"EBPVRResultSwitch",
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
	static UEnum* EVRConjoinedMovementModes_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EVRConjoinedMovementModes, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EVRConjoinedMovementModes"));
		}
		return Singleton;
	}
	template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRConjoinedMovementModes>()
	{
		return EVRConjoinedMovementModes_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVRConjoinedMovementModes(EVRConjoinedMovementModes_StaticEnum, TEXT("/Script/VRExpansionPlugin"), TEXT("EVRConjoinedMovementModes"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VRExpansionPlugin_EVRConjoinedMovementModes_Hash() { return 783244659U; }
	UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRConjoinedMovementModes()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVRConjoinedMovementModes"), 0, Get_Z_Construct_UEnum_VRExpansionPlugin_EVRConjoinedMovementModes_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVRConjoinedMovementModes::C_MOVE_None", (int64)EVRConjoinedMovementModes::C_MOVE_None },
				{ "EVRConjoinedMovementModes::C_MOVE_Walking", (int64)EVRConjoinedMovementModes::C_MOVE_Walking },
				{ "EVRConjoinedMovementModes::C_MOVE_NavWalking", (int64)EVRConjoinedMovementModes::C_MOVE_NavWalking },
				{ "EVRConjoinedMovementModes::C_MOVE_Falling", (int64)EVRConjoinedMovementModes::C_MOVE_Falling },
				{ "EVRConjoinedMovementModes::C_MOVE_Swimming", (int64)EVRConjoinedMovementModes::C_MOVE_Swimming },
				{ "EVRConjoinedMovementModes::C_MOVE_Flying", (int64)EVRConjoinedMovementModes::C_MOVE_Flying },
				{ "EVRConjoinedMovementModes::C_MOVE_MAX", (int64)EVRConjoinedMovementModes::C_MOVE_MAX },
				{ "EVRConjoinedMovementModes::C_VRMOVE_Climbing", (int64)EVRConjoinedMovementModes::C_VRMOVE_Climbing },
				{ "EVRConjoinedMovementModes::C_VRMOVE_LowGrav", (int64)EVRConjoinedMovementModes::C_VRMOVE_LowGrav },
				{ "EVRConjoinedMovementModes::C_VRMOVE_Seated", (int64)EVRConjoinedMovementModes::C_VRMOVE_Seated },
				{ "EVRConjoinedMovementModes::C_VRMOVE_Custom1", (int64)EVRConjoinedMovementModes::C_VRMOVE_Custom1 },
				{ "EVRConjoinedMovementModes::C_VRMOVE_Custom2", (int64)EVRConjoinedMovementModes::C_VRMOVE_Custom2 },
				{ "EVRConjoinedMovementModes::C_VRMOVE_Custom3", (int64)EVRConjoinedMovementModes::C_VRMOVE_Custom3 },
				{ "EVRConjoinedMovementModes::C_VRMOVE_Custom4", (int64)EVRConjoinedMovementModes::C_VRMOVE_Custom4 },
				{ "EVRConjoinedMovementModes::C_VRMOVE_Custom5", (int64)EVRConjoinedMovementModes::C_VRMOVE_Custom5 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "C_MOVE_Falling.DisplayName", "Falling" },
				{ "C_MOVE_Flying.DisplayName", "Flying" },
				{ "C_MOVE_MAX.Hidden", "" },
				{ "C_MOVE_MAX.ToolTip", "C_MOVE_Custom = 0x06    UMETA(DisplayName = \"Custom\"),  Skip this, could technically get a Custom7 out of using this slot but who needs 7?" },
				{ "C_MOVE_NavWalking.DisplayName", "Navmesh Walking" },
				{ "C_MOVE_None.DisplayName", "None" },
				{ "C_MOVE_Swimming.DisplayName", "Swimming" },
				{ "C_MOVE_Walking.DisplayName", "Walking" },
				{ "C_VRMOVE_Climbing.DisplayName", "Climbing" },
				{ "C_VRMOVE_Custom1.DisplayName", "Custom1" },
				{ "C_VRMOVE_Custom2.DisplayName", "Custom2" },
				{ "C_VRMOVE_Custom3.DisplayName", "Custom3" },
				{ "C_VRMOVE_Custom4.DisplayName", "Custom4" },
				{ "C_VRMOVE_Custom5.DisplayName", "Custom5" },
				{ "C_VRMOVE_LowGrav.DisplayName", "LowGrav" },
				{ "C_VRMOVE_Seated.DisplayName", "Seated" },
				{ "C_VRMOVE_Seated.ToolTip", "C_VRMOVE_Spider = 0x0A UMETA(DisplayName = \"Spider\")," },
				{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
				{ "ToolTip", "We use 4 bits for this so a maximum of 16 elements" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
				nullptr,
				"EVRConjoinedMovementModes",
				"EVRConjoinedMovementModes",
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
	static UEnum* EVRCustomMovementMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EVRCustomMovementMode, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EVRCustomMovementMode"));
		}
		return Singleton;
	}
	template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRCustomMovementMode>()
	{
		return EVRCustomMovementMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVRCustomMovementMode(EVRCustomMovementMode_StaticEnum, TEXT("/Script/VRExpansionPlugin"), TEXT("EVRCustomMovementMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VRExpansionPlugin_EVRCustomMovementMode_Hash() { return 2138310031U; }
	UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRCustomMovementMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVRCustomMovementMode"), 0, Get_Z_Construct_UEnum_VRExpansionPlugin_EVRCustomMovementMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVRCustomMovementMode::VRMOVE_Climbing", (int64)EVRCustomMovementMode::VRMOVE_Climbing },
				{ "EVRCustomMovementMode::VRMOVE_LowGrav", (int64)EVRCustomMovementMode::VRMOVE_LowGrav },
				{ "EVRCustomMovementMode::VRMOVE_Seated", (int64)EVRCustomMovementMode::VRMOVE_Seated },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
				{ "ToolTip", "Custom movement modes for the characters" },
				{ "VRMOVE_Climbing.DisplayName", "Climbing" },
				{ "VRMOVE_LowGrav.DisplayName", "LowGrav" },
				{ "VRMOVE_Seated.DisplayName", "Seated" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
				nullptr,
				"EVRCustomMovementMode",
				"EVRCustomMovementMode",
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
class UScriptStruct* FBPActorPhysicsHandleInformation::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VREXPANSIONPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FBPActorPhysicsHandleInformation_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPActorPhysicsHandleInformation, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("BPActorPhysicsHandleInformation"), sizeof(FBPActorPhysicsHandleInformation), Get_Z_Construct_UScriptStruct_FBPActorPhysicsHandleInformation_Hash());
	}
	return Singleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FBPActorPhysicsHandleInformation>()
{
	return FBPActorPhysicsHandleInformation::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBPActorPhysicsHandleInformation(FBPActorPhysicsHandleInformation::StaticStruct, TEXT("/Script/VRExpansionPlugin"), TEXT("BPActorPhysicsHandleInformation"), false, nullptr, nullptr);
static struct FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFBPActorPhysicsHandleInformation
{
	FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFBPActorPhysicsHandleInformation()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BPActorPhysicsHandleInformation")),new UScriptStruct::TCppStructOps<FBPActorPhysicsHandleInformation>);
	}
} ScriptStruct_VRExpansionPlugin_StaticRegisterNativesFBPActorPhysicsHandleInformation;
	struct Z_Construct_UScriptStruct_FBPActorPhysicsHandleInformation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandledObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HandledObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPActorPhysicsHandleInformation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "VRExpansionLibrary" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBPActorPhysicsHandleInformation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPActorPhysicsHandleInformation>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPActorPhysicsHandleInformation_Statics::NewProp_HandledObject_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBPActorPhysicsHandleInformation_Statics::NewProp_HandledObject = { "HandledObject", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPActorPhysicsHandleInformation, HandledObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPActorPhysicsHandleInformation_Statics::NewProp_HandledObject_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPActorPhysicsHandleInformation_Statics::NewProp_HandledObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBPActorPhysicsHandleInformation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPActorPhysicsHandleInformation_Statics::NewProp_HandledObject,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBPActorPhysicsHandleInformation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		&NewStructOps,
		"BPActorPhysicsHandleInformation",
		sizeof(FBPActorPhysicsHandleInformation),
		alignof(FBPActorPhysicsHandleInformation),
		Z_Construct_UScriptStruct_FBPActorPhysicsHandleInformation_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FBPActorPhysicsHandleInformation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBPActorPhysicsHandleInformation_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPActorPhysicsHandleInformation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBPActorPhysicsHandleInformation()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBPActorPhysicsHandleInformation_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BPActorPhysicsHandleInformation"), sizeof(FBPActorPhysicsHandleInformation), Get_Z_Construct_UScriptStruct_FBPActorPhysicsHandleInformation_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBPActorPhysicsHandleInformation_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBPActorPhysicsHandleInformation_Hash() { return 2736218018U; }
class UScriptStruct* FBPInterfaceProperties::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VREXPANSIONPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FBPInterfaceProperties_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPInterfaceProperties, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("BPInterfaceProperties"), sizeof(FBPInterfaceProperties), Get_Z_Construct_UScriptStruct_FBPInterfaceProperties_Hash());
	}
	return Singleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FBPInterfaceProperties>()
{
	return FBPInterfaceProperties::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBPInterfaceProperties(FBPInterfaceProperties::StaticStruct, TEXT("/Script/VRExpansionPlugin"), TEXT("BPInterfaceProperties"), false, nullptr, nullptr);
static struct FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFBPInterfaceProperties
{
	FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFBPInterfaceProperties()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BPInterfaceProperties")),new UScriptStruct::TCppStructOps<FBPInterfaceProperties>);
	}
} ScriptStruct_VRExpansionPlugin_StaticRegisterNativesFBPInterfaceProperties;
	struct Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoldingController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HoldingController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsHeld_MetaData[];
#endif
		static void NewProp_bIsHeld_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsHeld;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdvancedGripSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AdvancedGripSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimarySlotRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PrimarySlotRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondarySlotRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SecondarySlotRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstraintBreakDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ConstraintBreakDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstraintDamping_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ConstraintDamping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstraintStiffness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ConstraintStiffness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LateUpdateSetting_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LateUpdateSetting;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LateUpdateSetting_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementReplicationType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MovementReplicationType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MovementReplicationType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondaryGripType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SecondaryGripType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SecondaryGripType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FreeDefaultGripType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FreeDefaultGripType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FreeDefaultGripType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotDefaultGripType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SlotDefaultGripType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SlotDefaultGripType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSimulateOnDrop_MetaData[];
#endif
		static void NewProp_bSimulateOnDrop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSimulateOnDrop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTeleportBehavior_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OnTeleportBehavior;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OnTeleportBehavior_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDenyGripping_MetaData[];
#endif
		static void NewProp_bDenyGripping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDenyGripping;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "VRExpansionLibrary" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPInterfaceProperties>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_HoldingController_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "ToolTip", "Set on grip notify, not net serializing" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_HoldingController = { "HoldingController", nullptr, (EPropertyFlags)0x001000008008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPInterfaceProperties, HoldingController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_HoldingController_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_HoldingController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_bIsHeld_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"VRGripInterface\")\nbool bIsInteractible;" },
	};
#endif
	void Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_bIsHeld_SetBit(void* Obj)
	{
		((FBPInterfaceProperties*)Obj)->bIsHeld = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_bIsHeld = { "bIsHeld", nullptr, (EPropertyFlags)0x0010000080000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBPInterfaceProperties), &Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_bIsHeld_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_bIsHeld_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_bIsHeld_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_AdvancedGripSettings_MetaData[] = {
		{ "Category", "VRGripInterface|AdvancedGripSettings" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_AdvancedGripSettings = { "AdvancedGripSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPInterfaceProperties, AdvancedGripSettings), Z_Construct_UScriptStruct_FBPAdvGripSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_AdvancedGripSettings_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_AdvancedGripSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_PrimarySlotRange_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_PrimarySlotRange = { "PrimarySlotRange", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPInterfaceProperties, PrimarySlotRange), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_PrimarySlotRange_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_PrimarySlotRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_SecondarySlotRange_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_SecondarySlotRange = { "SecondarySlotRange", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPInterfaceProperties, SecondarySlotRange), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_SecondarySlotRange_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_SecondarySlotRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_ConstraintBreakDistance_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"VRGripInterface\")\n               FBPAdvGripPhysicsSettings PhysicsSettings;" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_ConstraintBreakDistance = { "ConstraintBreakDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPInterfaceProperties, ConstraintBreakDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_ConstraintBreakDistance_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_ConstraintBreakDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_ConstraintDamping_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_ConstraintDamping = { "ConstraintDamping", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPInterfaceProperties, ConstraintDamping), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_ConstraintDamping_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_ConstraintDamping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_ConstraintStiffness_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_ConstraintStiffness = { "ConstraintStiffness", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPInterfaceProperties, ConstraintStiffness), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_ConstraintStiffness_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_ConstraintStiffness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_LateUpdateSetting_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_LateUpdateSetting = { "LateUpdateSetting", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPInterfaceProperties, LateUpdateSetting), Z_Construct_UEnum_VRExpansionPlugin_EGripLateUpdateSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_LateUpdateSetting_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_LateUpdateSetting_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_LateUpdateSetting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_MovementReplicationType_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_MovementReplicationType = { "MovementReplicationType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPInterfaceProperties, MovementReplicationType), Z_Construct_UEnum_VRExpansionPlugin_EGripMovementReplicationSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_MovementReplicationType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_MovementReplicationType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_MovementReplicationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_SecondaryGripType_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"VRGripInterface\")\n       bool bCanHaveDoubleGrip;" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_SecondaryGripType = { "SecondaryGripType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPInterfaceProperties, SecondaryGripType), Z_Construct_UEnum_VRExpansionPlugin_ESecondaryGripType, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_SecondaryGripType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_SecondaryGripType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_SecondaryGripType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_FreeDefaultGripType_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_FreeDefaultGripType = { "FreeDefaultGripType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPInterfaceProperties, FreeDefaultGripType), Z_Construct_UEnum_VRExpansionPlugin_EGripCollisionType, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_FreeDefaultGripType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_FreeDefaultGripType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_FreeDefaultGripType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_SlotDefaultGripType_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"VRGripInterface\")\n       uint8 EnumObjectType;" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_SlotDefaultGripType = { "SlotDefaultGripType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPInterfaceProperties, SlotDefaultGripType), Z_Construct_UEnum_VRExpansionPlugin_EGripCollisionType, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_SlotDefaultGripType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_SlotDefaultGripType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_SlotDefaultGripType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_bSimulateOnDrop_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_bSimulateOnDrop_SetBit(void* Obj)
	{
		((FBPInterfaceProperties*)Obj)->bSimulateOnDrop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_bSimulateOnDrop = { "bSimulateOnDrop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBPInterfaceProperties), &Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_bSimulateOnDrop_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_bSimulateOnDrop_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_bSimulateOnDrop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_OnTeleportBehavior_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_OnTeleportBehavior = { "OnTeleportBehavior", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPInterfaceProperties, OnTeleportBehavior), Z_Construct_UEnum_VRExpansionPlugin_EGripInterfaceTeleportBehavior, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_OnTeleportBehavior_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_OnTeleportBehavior_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_OnTeleportBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_bDenyGripping_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, NotReplicated, BlueprintReadWrite, Instanced, Category = \"VRGripInterface\")\nTArray<class UVRGripScriptBase *> GripLogicScripts;" },
	};
#endif
	void Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_bDenyGripping_SetBit(void* Obj)
	{
		((FBPInterfaceProperties*)Obj)->bDenyGripping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_bDenyGripping = { "bDenyGripping", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBPInterfaceProperties), &Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_bDenyGripping_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_bDenyGripping_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_bDenyGripping_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_HoldingController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_bIsHeld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_AdvancedGripSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_PrimarySlotRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_SecondarySlotRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_ConstraintBreakDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_ConstraintDamping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_ConstraintStiffness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_LateUpdateSetting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_LateUpdateSetting_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_MovementReplicationType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_MovementReplicationType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_SecondaryGripType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_SecondaryGripType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_FreeDefaultGripType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_FreeDefaultGripType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_SlotDefaultGripType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_SlotDefaultGripType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_bSimulateOnDrop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_OnTeleportBehavior,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_OnTeleportBehavior_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::NewProp_bDenyGripping,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		&NewStructOps,
		"BPInterfaceProperties",
		sizeof(FBPInterfaceProperties),
		alignof(FBPInterfaceProperties),
		Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBPInterfaceProperties()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBPInterfaceProperties_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BPInterfaceProperties"), sizeof(FBPInterfaceProperties), Get_Z_Construct_UScriptStruct_FBPInterfaceProperties_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBPInterfaceProperties_Hash() { return 2588059080U; }
class UScriptStruct* FBPActorGripInformation::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VREXPANSIONPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FBPActorGripInformation_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPActorGripInformation, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("BPActorGripInformation"), sizeof(FBPActorGripInformation), Get_Z_Construct_UScriptStruct_FBPActorGripInformation_Hash());
	}
	return Singleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FBPActorGripInformation>()
{
	return FBPActorGripInformation::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBPActorGripInformation(FBPActorGripInformation::StaticStruct, TEXT("/Script/VRExpansionPlugin"), TEXT("BPActorGripInformation"), false, nullptr, nullptr);
static struct FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFBPActorGripInformation
{
	FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFBPActorGripInformation()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BPActorGripInformation")),new UScriptStruct::TCppStructOps<FBPActorGripInformation>);
	}
} ScriptStruct_VRExpansionPlugin_StaticRegisterNativesFBPActorGripInformation;
	struct Z_Construct_UScriptStruct_FBPActorGripInformation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GripDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditionTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AdditionTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondaryGripInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SecondaryGripInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdvancedGripSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AdvancedGripSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stiffness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Stiffness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Damping_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOriginalGravity_MetaData[];
#endif
		static void NewProp_bOriginalGravity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOriginalGravity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOriginalReplicatesMovement_MetaData[];
#endif
		static void NewProp_bOriginalReplicatesMovement_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOriginalReplicatesMovement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsPaused_MetaData[];
#endif
		static void NewProp_bIsPaused_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPaused;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripMovementReplicationSetting_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_GripMovementReplicationSetting;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GripMovementReplicationSetting_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrippedBoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_GrippedBoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsSlotGrip_MetaData[];
#endif
		static void NewProp_bIsSlotGrip_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSlotGrip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RelativeTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RelativeTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bColliding_MetaData[];
#endif
		static void NewProp_bColliding_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bColliding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripLateUpdateSetting_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_GripLateUpdateSetting;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GripLateUpdateSetting_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripCollisionType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_GripCollisionType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GripCollisionType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrippedObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GrippedObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripTargetType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_GripTargetType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GripTargetType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripID_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GripID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "VRExpansionLibrary" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPActorGripInformation>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_GripDistance_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "ToolTip", "Distance from the target point for the grip" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_GripDistance = { "GripDistance", nullptr, (EPropertyFlags)0x0010000080000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPActorGripInformation, GripDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_GripDistance_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_GripDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_AdditionTransform_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "ToolTip", "Optional Additive Transform for programmatic animation" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_AdditionTransform = { "AdditionTransform", nullptr, (EPropertyFlags)0x0010000080000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPActorGripInformation, AdditionTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_AdditionTransform_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_AdditionTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_SecondaryGripInfo_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "ToolTip", "For multi grip situations" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_SecondaryGripInfo = { "SecondaryGripInfo", nullptr, (EPropertyFlags)0x0010008000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPActorGripInformation, SecondaryGripInfo), Z_Construct_UScriptStruct_FBPSecondaryGripInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_SecondaryGripInfo_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_SecondaryGripInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_AdvancedGripSettings_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_AdvancedGripSettings = { "AdvancedGripSettings", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPActorGripInformation, AdvancedGripSettings), Z_Construct_UScriptStruct_FBPAdvGripSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_AdvancedGripSettings_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_AdvancedGripSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_Stiffness_MetaData[] = {
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_Stiffness = { "Stiffness", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPActorGripInformation, Stiffness), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_Stiffness_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_Stiffness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_Damping_MetaData[] = {
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_Damping = { "Damping", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPActorGripInformation, Damping), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_Damping_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_Damping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_bOriginalGravity_MetaData[] = {
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_bOriginalGravity_SetBit(void* Obj)
	{
		((FBPActorGripInformation*)Obj)->bOriginalGravity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_bOriginalGravity = { "bOriginalGravity", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBPActorGripInformation), &Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_bOriginalGravity_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_bOriginalGravity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_bOriginalGravity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_bOriginalReplicatesMovement_MetaData[] = {
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "ToolTip", "I would have loved to have both of these not be replicated (and in normal grips they wouldn't have to be)\nHowever for serialization purposes and Client_Authority grips they need to be...." },
	};
#endif
	void Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_bOriginalReplicatesMovement_SetBit(void* Obj)
	{
		((FBPActorGripInformation*)Obj)->bOriginalReplicatesMovement = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_bOriginalReplicatesMovement = { "bOriginalReplicatesMovement", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBPActorGripInformation), &Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_bOriginalReplicatesMovement_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_bOriginalReplicatesMovement_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_bOriginalReplicatesMovement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_bIsPaused_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "ToolTip", "Whether the grip is currently paused" },
	};
#endif
	void Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_bIsPaused_SetBit(void* Obj)
	{
		((FBPActorGripInformation*)Obj)->bIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_bIsPaused = { "bIsPaused", nullptr, (EPropertyFlags)0x0010000080000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBPActorGripInformation), &Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_bIsPaused_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_bIsPaused_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_bIsPaused_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_GripMovementReplicationSetting_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_GripMovementReplicationSetting = { "GripMovementReplicationSetting", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPActorGripInformation, GripMovementReplicationSetting), Z_Construct_UEnum_VRExpansionPlugin_EGripMovementReplicationSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_GripMovementReplicationSetting_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_GripMovementReplicationSetting_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_GripMovementReplicationSetting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_GrippedBoneName_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_GrippedBoneName = { "GrippedBoneName", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPActorGripInformation, GrippedBoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_GrippedBoneName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_GrippedBoneName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_bIsSlotGrip_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_bIsSlotGrip_SetBit(void* Obj)
	{
		((FBPActorGripInformation*)Obj)->bIsSlotGrip = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_bIsSlotGrip = { "bIsSlotGrip", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBPActorGripInformation), &Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_bIsSlotGrip_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_bIsSlotGrip_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_bIsSlotGrip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_RelativeTransform_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_RelativeTransform = { "RelativeTransform", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPActorGripInformation, RelativeTransform), Z_Construct_UScriptStruct_FTransform_NetQuantize, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_RelativeTransform_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_RelativeTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_bColliding_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_bColliding_SetBit(void* Obj)
	{
		((FBPActorGripInformation*)Obj)->bColliding = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_bColliding = { "bColliding", nullptr, (EPropertyFlags)0x0010000080000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBPActorGripInformation), &Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_bColliding_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_bColliding_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_bColliding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_GripLateUpdateSetting_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_GripLateUpdateSetting = { "GripLateUpdateSetting", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPActorGripInformation, GripLateUpdateSetting), Z_Construct_UEnum_VRExpansionPlugin_EGripLateUpdateSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_GripLateUpdateSetting_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_GripLateUpdateSetting_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_GripLateUpdateSetting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_GripCollisionType_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_GripCollisionType = { "GripCollisionType", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPActorGripInformation, GripCollisionType), Z_Construct_UEnum_VRExpansionPlugin_EGripCollisionType, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_GripCollisionType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_GripCollisionType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_GripCollisionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_GrippedObject_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_GrippedObject = { "GrippedObject", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPActorGripInformation, GrippedObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_GrippedObject_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_GrippedObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_GripTargetType_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_GripTargetType = { "GripTargetType", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPActorGripInformation, GripTargetType), Z_Construct_UEnum_VRExpansionPlugin_EGripTargetType, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_GripTargetType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_GripTargetType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_GripTargetType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_GripID_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "ToolTip", "Hashed unique ID to identify this grip instance" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_GripID = { "GripID", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPActorGripInformation, GripID), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_GripID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_GripID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_GripDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_AdditionTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_SecondaryGripInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_AdvancedGripSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_Stiffness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_Damping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_bOriginalGravity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_bOriginalReplicatesMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_bIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_GripMovementReplicationSetting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_GripMovementReplicationSetting_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_GrippedBoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_bIsSlotGrip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_RelativeTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_bColliding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_GripLateUpdateSetting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_GripLateUpdateSetting_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_GripCollisionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_GripCollisionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_GrippedObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_GripTargetType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_GripTargetType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::NewProp_GripID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		&NewStructOps,
		"BPActorGripInformation",
		sizeof(FBPActorGripInformation),
		alignof(FBPActorGripInformation),
		Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBPActorGripInformation()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBPActorGripInformation_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BPActorGripInformation"), sizeof(FBPActorGripInformation), Get_Z_Construct_UScriptStruct_FBPActorGripInformation_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBPActorGripInformation_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBPActorGripInformation_Hash() { return 776202118U; }
class UScriptStruct* FBPSecondaryGripInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VREXPANSIONPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FBPSecondaryGripInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPSecondaryGripInfo, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("BPSecondaryGripInfo"), sizeof(FBPSecondaryGripInfo), Get_Z_Construct_UScriptStruct_FBPSecondaryGripInfo_Hash());
	}
	return Singleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FBPSecondaryGripInfo>()
{
	return FBPSecondaryGripInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBPSecondaryGripInfo(FBPSecondaryGripInfo::StaticStruct, TEXT("/Script/VRExpansionPlugin"), TEXT("BPSecondaryGripInfo"), false, nullptr, nullptr);
static struct FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFBPSecondaryGripInfo
{
	FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFBPSecondaryGripInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BPSecondaryGripInfo")),new UScriptStruct::TCppStructOps<FBPSecondaryGripInfo>);
	}
} ScriptStruct_VRExpansionPlugin_StaticRegisterNativesFBPSecondaryGripInfo;
	struct Z_Construct_UScriptStruct_FBPSecondaryGripInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondaryGripDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SecondaryGripDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LerpToRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LerpToRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsSlotGrip_MetaData[];
#endif
		static void NewProp_bIsSlotGrip_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSlotGrip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondaryRelativeTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SecondaryRelativeTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondaryAttachment_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SecondaryAttachment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasSecondaryAttachment_MetaData[];
#endif
		static void NewProp_bHasSecondaryAttachment_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasSecondaryAttachment;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPSecondaryGripInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "VRExpansionLibrary" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBPSecondaryGripInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPSecondaryGripInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPSecondaryGripInfo_Statics::NewProp_SecondaryGripDistance_MetaData[] = {
		{ "Category", "SecondaryGripInfo" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "ToolTip", "Filled in from the tick code so users can activate and deactivate grips based on this" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBPSecondaryGripInfo_Statics::NewProp_SecondaryGripDistance = { "SecondaryGripDistance", nullptr, (EPropertyFlags)0x0010000080000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPSecondaryGripInfo, SecondaryGripDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPSecondaryGripInfo_Statics::NewProp_SecondaryGripDistance_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPSecondaryGripInfo_Statics::NewProp_SecondaryGripDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPSecondaryGripInfo_Statics::NewProp_LerpToRate_MetaData[] = {
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "ToolTip", "Lerp transitions\nMax value is 16 seconds with two decimal precision, this is to reduce replication overhead" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBPSecondaryGripInfo_Statics::NewProp_LerpToRate = { "LerpToRate", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPSecondaryGripInfo, LerpToRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPSecondaryGripInfo_Statics::NewProp_LerpToRate_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPSecondaryGripInfo_Statics::NewProp_LerpToRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPSecondaryGripInfo_Statics::NewProp_bIsSlotGrip_MetaData[] = {
		{ "Category", "SecondaryGripInfo" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBPSecondaryGripInfo_Statics::NewProp_bIsSlotGrip_SetBit(void* Obj)
	{
		((FBPSecondaryGripInfo*)Obj)->bIsSlotGrip = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPSecondaryGripInfo_Statics::NewProp_bIsSlotGrip = { "bIsSlotGrip", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBPSecondaryGripInfo), &Z_Construct_UScriptStruct_FBPSecondaryGripInfo_Statics::NewProp_bIsSlotGrip_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPSecondaryGripInfo_Statics::NewProp_bIsSlotGrip_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPSecondaryGripInfo_Statics::NewProp_bIsSlotGrip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPSecondaryGripInfo_Statics::NewProp_SecondaryRelativeTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPSecondaryGripInfo_Statics::NewProp_SecondaryRelativeTransform = { "SecondaryRelativeTransform", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPSecondaryGripInfo, SecondaryRelativeTransform), Z_Construct_UScriptStruct_FTransform_NetQuantize, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPSecondaryGripInfo_Statics::NewProp_SecondaryRelativeTransform_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPSecondaryGripInfo_Statics::NewProp_SecondaryRelativeTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPSecondaryGripInfo_Statics::NewProp_SecondaryAttachment_MetaData[] = {
		{ "Category", "SecondaryGripInfo" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBPSecondaryGripInfo_Statics::NewProp_SecondaryAttachment = { "SecondaryAttachment", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPSecondaryGripInfo, SecondaryAttachment), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPSecondaryGripInfo_Statics::NewProp_SecondaryAttachment_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPSecondaryGripInfo_Statics::NewProp_SecondaryAttachment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPSecondaryGripInfo_Statics::NewProp_bHasSecondaryAttachment_MetaData[] = {
		{ "Category", "SecondaryGripInfo" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "ToolTip", "For multi grip situations" },
	};
#endif
	void Z_Construct_UScriptStruct_FBPSecondaryGripInfo_Statics::NewProp_bHasSecondaryAttachment_SetBit(void* Obj)
	{
		((FBPSecondaryGripInfo*)Obj)->bHasSecondaryAttachment = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPSecondaryGripInfo_Statics::NewProp_bHasSecondaryAttachment = { "bHasSecondaryAttachment", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBPSecondaryGripInfo), &Z_Construct_UScriptStruct_FBPSecondaryGripInfo_Statics::NewProp_bHasSecondaryAttachment_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPSecondaryGripInfo_Statics::NewProp_bHasSecondaryAttachment_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPSecondaryGripInfo_Statics::NewProp_bHasSecondaryAttachment_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBPSecondaryGripInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPSecondaryGripInfo_Statics::NewProp_SecondaryGripDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPSecondaryGripInfo_Statics::NewProp_LerpToRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPSecondaryGripInfo_Statics::NewProp_bIsSlotGrip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPSecondaryGripInfo_Statics::NewProp_SecondaryRelativeTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPSecondaryGripInfo_Statics::NewProp_SecondaryAttachment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPSecondaryGripInfo_Statics::NewProp_bHasSecondaryAttachment,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBPSecondaryGripInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		&NewStructOps,
		"BPSecondaryGripInfo",
		sizeof(FBPSecondaryGripInfo),
		alignof(FBPSecondaryGripInfo),
		Z_Construct_UScriptStruct_FBPSecondaryGripInfo_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FBPSecondaryGripInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBPSecondaryGripInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPSecondaryGripInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBPSecondaryGripInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBPSecondaryGripInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BPSecondaryGripInfo"), sizeof(FBPSecondaryGripInfo), Get_Z_Construct_UScriptStruct_FBPSecondaryGripInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBPSecondaryGripInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBPSecondaryGripInfo_Hash() { return 950415148U; }
class UScriptStruct* FBPAdvGripSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VREXPANSIONPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FBPAdvGripSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPAdvGripSettings, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("BPAdvGripSettings"), sizeof(FBPAdvGripSettings), Get_Z_Construct_UScriptStruct_FBPAdvGripSettings_Hash());
	}
	return Singleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FBPAdvGripSettings>()
{
	return FBPAdvGripSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBPAdvGripSettings(FBPAdvGripSettings::StaticStruct, TEXT("/Script/VRExpansionPlugin"), TEXT("BPAdvGripSettings"), false, nullptr, nullptr);
static struct FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFBPAdvGripSettings
{
	FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFBPAdvGripSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BPAdvGripSettings")),new UScriptStruct::TCppStructOps<FBPAdvGripSettings>);
	}
} ScriptStruct_VRExpansionPlugin_StaticRegisterNativesFBPAdvGripSettings;
	struct Z_Construct_UScriptStruct_FBPAdvGripSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondaryGripSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SecondaryGripSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicsSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PhysicsSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSetOwnerOnGrip_MetaData[];
#endif
		static void NewProp_bSetOwnerOnGrip_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSetOwnerOnGrip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripPriority_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GripPriority;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPAdvGripSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "VRExpansionLibrary" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBPAdvGripSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPAdvGripSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPAdvGripSettings_Statics::NewProp_SecondaryGripSettings_MetaData[] = {
		{ "Category", "AdvancedGripSettings" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPAdvGripSettings_Statics::NewProp_SecondaryGripSettings = { "SecondaryGripSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPAdvGripSettings, SecondaryGripSettings), Z_Construct_UScriptStruct_FBPAdvSecondaryGripSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPAdvGripSettings_Statics::NewProp_SecondaryGripSettings_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPAdvGripSettings_Statics::NewProp_SecondaryGripSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPAdvGripSettings_Statics::NewProp_PhysicsSettings_MetaData[] = {
		{ "Category", "AdvancedGripSettings" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPAdvGripSettings_Statics::NewProp_PhysicsSettings = { "PhysicsSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPAdvGripSettings, PhysicsSettings), Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPAdvGripSettings_Statics::NewProp_PhysicsSettings_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPAdvGripSettings_Statics::NewProp_PhysicsSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPAdvGripSettings_Statics::NewProp_bSetOwnerOnGrip_MetaData[] = {
		{ "Category", "AdvancedGripSettings" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "ToolTip", "If true, will set the owner of actor grips on grip" },
	};
#endif
	void Z_Construct_UScriptStruct_FBPAdvGripSettings_Statics::NewProp_bSetOwnerOnGrip_SetBit(void* Obj)
	{
		((FBPAdvGripSettings*)Obj)->bSetOwnerOnGrip = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPAdvGripSettings_Statics::NewProp_bSetOwnerOnGrip = { "bSetOwnerOnGrip", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBPAdvGripSettings), &Z_Construct_UScriptStruct_FBPAdvGripSettings_Statics::NewProp_bSetOwnerOnGrip_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPAdvGripSettings_Statics::NewProp_bSetOwnerOnGrip_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPAdvGripSettings_Statics::NewProp_bSetOwnerOnGrip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPAdvGripSettings_Statics::NewProp_GripPriority_MetaData[] = {
		{ "Category", "AdvancedGripSettings" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "ToolTip", "Priority of this item when being gripped, (Higher is more priority)\nThis lets you prioritize whether an object should be gripped over another one when both\ncollide with traces or overlaps. #Note: Currently not implemented in the plugin, here for your use." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBPAdvGripSettings_Statics::NewProp_GripPriority = { "GripPriority", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPAdvGripSettings, GripPriority), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPAdvGripSettings_Statics::NewProp_GripPriority_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPAdvGripSettings_Statics::NewProp_GripPriority_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBPAdvGripSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPAdvGripSettings_Statics::NewProp_SecondaryGripSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPAdvGripSettings_Statics::NewProp_PhysicsSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPAdvGripSettings_Statics::NewProp_bSetOwnerOnGrip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPAdvGripSettings_Statics::NewProp_GripPriority,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBPAdvGripSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		&NewStructOps,
		"BPAdvGripSettings",
		sizeof(FBPAdvGripSettings),
		alignof(FBPAdvGripSettings),
		Z_Construct_UScriptStruct_FBPAdvGripSettings_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FBPAdvGripSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBPAdvGripSettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPAdvGripSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBPAdvGripSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBPAdvGripSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BPAdvGripSettings"), sizeof(FBPAdvGripSettings), Get_Z_Construct_UScriptStruct_FBPAdvGripSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBPAdvGripSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBPAdvGripSettings_Hash() { return 2771117360U; }
class UScriptStruct* FBPAdvSecondaryGripSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VREXPANSIONPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FBPAdvSecondaryGripSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPAdvSecondaryGripSettings, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("BPAdvSecondaryGripSettings"), sizeof(FBPAdvSecondaryGripSettings), Get_Z_Construct_UScriptStruct_FBPAdvSecondaryGripSettings_Hash());
	}
	return Singleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FBPAdvSecondaryGripSettings>()
{
	return FBPAdvSecondaryGripSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBPAdvSecondaryGripSettings(FBPAdvSecondaryGripSettings::StaticStruct, TEXT("/Script/VRExpansionPlugin"), TEXT("BPAdvSecondaryGripSettings"), false, nullptr, nullptr);
static struct FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFBPAdvSecondaryGripSettings
{
	FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFBPAdvSecondaryGripSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BPAdvSecondaryGripSettings")),new UScriptStruct::TCppStructOps<FBPAdvSecondaryGripSettings>);
	}
} ScriptStruct_VRExpansionPlugin_StaticRegisterNativesFBPAdvSecondaryGripSettings;
	struct Z_Construct_UScriptStruct_FBPAdvSecondaryGripSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaximumGripScaling_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaximumGripScaling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimumGripScaling_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MinimumGripScaling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLimitGripScaling_MetaData[];
#endif
		static void NewProp_bLimitGripScaling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLimitGripScaling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseSecondaryGripSettings_MetaData[];
#endif
		static void NewProp_bUseSecondaryGripSettings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseSecondaryGripSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPAdvSecondaryGripSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "VRExpansionLibrary" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBPAdvSecondaryGripSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPAdvSecondaryGripSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPAdvSecondaryGripSettings_Statics::NewProp_MaximumGripScaling_MetaData[] = {
		{ "Category", "SecondaryGripSettings" },
		{ "editcondition", "bLimitGripScaling" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "ToolTip", "Maximum size to allow scaling in double grip to reach" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPAdvSecondaryGripSettings_Statics::NewProp_MaximumGripScaling = { "MaximumGripScaling", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPAdvSecondaryGripSettings, MaximumGripScaling), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPAdvSecondaryGripSettings_Statics::NewProp_MaximumGripScaling_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPAdvSecondaryGripSettings_Statics::NewProp_MaximumGripScaling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPAdvSecondaryGripSettings_Statics::NewProp_MinimumGripScaling_MetaData[] = {
		{ "Category", "SecondaryGripSettings" },
		{ "editcondition", "bLimitGripScaling" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "ToolTip", "Minimum size to allow scaling in double grip to reach" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPAdvSecondaryGripSettings_Statics::NewProp_MinimumGripScaling = { "MinimumGripScaling", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPAdvSecondaryGripSettings, MinimumGripScaling), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPAdvSecondaryGripSettings_Statics::NewProp_MinimumGripScaling_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPAdvSecondaryGripSettings_Statics::NewProp_MinimumGripScaling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPAdvSecondaryGripSettings_Statics::NewProp_bLimitGripScaling_MetaData[] = {
		{ "Category", "SecondaryGripSettings" },
		{ "editcondition", "bUseSecondaryGripSettings" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "ToolTip", "// Scaler used for handling the smoothing amount, 0.0f is full smoothing, 1.0f is smoothing off\nUPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"SecondaryGripSettings\", meta = (editcondition = \"bUseSecondaryGripSettings\", ClampMin = \"0.00\", UIMin = \"0.00\", ClampMax = \"1.00\", UIMax = \"1.00\"))\n        float SecondaryGripScaler;\n\n// Whether to scale the secondary hand influence off of distance from grip point\nUPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"SecondaryGripSettings\", meta = (editcondition = \"bUseSecondaryGripSettings\"))\n        bool bUseSecondaryGripDistanceInfluence;\n\n// If true, will use the GripInfluenceDeadZone as a constant value instead of calculating the distance and lerping, lets you define a static influence amount.\n//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"SecondaryGripSettings\", meta = (editcondition = \"bUseSecondaryGripDistanceInfluence\"))\n//      bool bUseGripInfluenceDeadZoneAsConstant;\n\n// Distance from grip point in local space where there is 100% influence\nUPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"SecondaryGripSettings\", meta = (editcondition = \"bUseSecondaryGripDistanceInfluence\", ClampMin = \"0.00\", UIMin = \"0.00\", ClampMax = \"256.00\", UIMax = \"256.00\"))\n        float GripInfluenceDeadZone;\n\n// Distance from grip point in local space before all influence is lost on the secondary grip (1.0f - 0.0f influence over this range)\n// this comes into effect outside of the deadzone\nUPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"SecondaryGripSettings\", meta = (editcondition = \"bUseSecondaryGripDistanceInfluence\", ClampMin = \"1.00\", UIMin = \"1.00\", ClampMax = \"256.00\", UIMax = \"256.00\"))\n        float GripInfluenceDistanceToZero;// Whether clamp the grip scaling in scaling grips" },
	};
#endif
	void Z_Construct_UScriptStruct_FBPAdvSecondaryGripSettings_Statics::NewProp_bLimitGripScaling_SetBit(void* Obj)
	{
		((FBPAdvSecondaryGripSettings*)Obj)->bLimitGripScaling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPAdvSecondaryGripSettings_Statics::NewProp_bLimitGripScaling = { "bLimitGripScaling", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBPAdvSecondaryGripSettings), &Z_Construct_UScriptStruct_FBPAdvSecondaryGripSettings_Statics::NewProp_bLimitGripScaling_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPAdvSecondaryGripSettings_Statics::NewProp_bLimitGripScaling_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPAdvSecondaryGripSettings_Statics::NewProp_bLimitGripScaling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPAdvSecondaryGripSettings_Statics::NewProp_bUseSecondaryGripSettings_MetaData[] = {
		{ "Category", "SecondaryGripSettings" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBPAdvSecondaryGripSettings_Statics::NewProp_bUseSecondaryGripSettings_SetBit(void* Obj)
	{
		((FBPAdvSecondaryGripSettings*)Obj)->bUseSecondaryGripSettings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPAdvSecondaryGripSettings_Statics::NewProp_bUseSecondaryGripSettings = { "bUseSecondaryGripSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBPAdvSecondaryGripSettings), &Z_Construct_UScriptStruct_FBPAdvSecondaryGripSettings_Statics::NewProp_bUseSecondaryGripSettings_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPAdvSecondaryGripSettings_Statics::NewProp_bUseSecondaryGripSettings_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPAdvSecondaryGripSettings_Statics::NewProp_bUseSecondaryGripSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBPAdvSecondaryGripSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPAdvSecondaryGripSettings_Statics::NewProp_MaximumGripScaling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPAdvSecondaryGripSettings_Statics::NewProp_MinimumGripScaling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPAdvSecondaryGripSettings_Statics::NewProp_bLimitGripScaling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPAdvSecondaryGripSettings_Statics::NewProp_bUseSecondaryGripSettings,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBPAdvSecondaryGripSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		&NewStructOps,
		"BPAdvSecondaryGripSettings",
		sizeof(FBPAdvSecondaryGripSettings),
		alignof(FBPAdvSecondaryGripSettings),
		Z_Construct_UScriptStruct_FBPAdvSecondaryGripSettings_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FBPAdvSecondaryGripSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBPAdvSecondaryGripSettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPAdvSecondaryGripSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBPAdvSecondaryGripSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBPAdvSecondaryGripSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BPAdvSecondaryGripSettings"), sizeof(FBPAdvSecondaryGripSettings), Get_Z_Construct_UScriptStruct_FBPAdvSecondaryGripSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBPAdvSecondaryGripSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBPAdvSecondaryGripSettings_Hash() { return 1085874860U; }
class UScriptStruct* FBPAdvGripPhysicsSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VREXPANSIONPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("BPAdvGripPhysicsSettings"), sizeof(FBPAdvGripPhysicsSettings), Get_Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Hash());
	}
	return Singleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FBPAdvGripPhysicsSettings>()
{
	return FBPAdvGripPhysicsSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBPAdvGripPhysicsSettings(FBPAdvGripPhysicsSettings::StaticStruct, TEXT("/Script/VRExpansionPlugin"), TEXT("BPAdvGripPhysicsSettings"), false, nullptr, nullptr);
static struct FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFBPAdvGripPhysicsSettings
{
	FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFBPAdvGripPhysicsSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BPAdvGripPhysicsSettings")),new UScriptStruct::TCppStructOps<FBPAdvGripPhysicsSettings>);
	}
} ScriptStruct_VRExpansionPlugin_StaticRegisterNativesFBPAdvGripPhysicsSettings;
	struct Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularDamping_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AngularDamping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularStiffness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AngularStiffness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseCustomAngularValues_MetaData[];
#endif
		static void NewProp_bUseCustomAngularValues_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseCustomAngularValues;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTurnOffGravityDuringGrip_MetaData[];
#endif
		static void NewProp_bTurnOffGravityDuringGrip_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTurnOffGravityDuringGrip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicsGripLocationSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PhysicsGripLocationSettings;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PhysicsGripLocationSettings_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicsConstraintType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PhysicsConstraintType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PhysicsConstraintType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsePhysicsSettings_MetaData[];
#endif
		static void NewProp_bUsePhysicsSettings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsePhysicsSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "VRExpansionLibrary" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPAdvGripPhysicsSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_AngularDamping_MetaData[] = {
		{ "Category", "PhysicsSettings" },
		{ "ClampMin", "0.000" },
		{ "editcondition", "bUseCustomAngularValues" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "UIMin", "0.000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_AngularDamping = { "AngularDamping", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPAdvGripPhysicsSettings, AngularDamping), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_AngularDamping_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_AngularDamping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_AngularStiffness_MetaData[] = {
		{ "Category", "PhysicsSettings" },
		{ "ClampMin", "0.000" },
		{ "editcondition", "bUseCustomAngularValues" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "UIMin", "0.000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_AngularStiffness = { "AngularStiffness", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPAdvGripPhysicsSettings, AngularStiffness), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_AngularStiffness_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_AngularStiffness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_bUseCustomAngularValues_MetaData[] = {
		{ "Category", "PhysicsSettings" },
		{ "editcondition", "bUsePhysicsSettings" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "ToolTip", "Use the custom angular values on this grip" },
	};
#endif
	void Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_bUseCustomAngularValues_SetBit(void* Obj)
	{
		((FBPAdvGripPhysicsSettings*)Obj)->bUseCustomAngularValues = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_bUseCustomAngularValues = { "bUseCustomAngularValues", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBPAdvGripPhysicsSettings), &Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_bUseCustomAngularValues_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_bUseCustomAngularValues_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_bUseCustomAngularValues_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_bTurnOffGravityDuringGrip_MetaData[] = {
		{ "Category", "PhysicsSettings" },
		{ "editcondition", "bUsePhysicsSettings" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "ToolTip", "Turn off gravity during the grip, resolves the slight downward offset of the object with normal constraint strengths." },
	};
#endif
	void Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_bTurnOffGravityDuringGrip_SetBit(void* Obj)
	{
		((FBPAdvGripPhysicsSettings*)Obj)->bTurnOffGravityDuringGrip = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_bTurnOffGravityDuringGrip = { "bTurnOffGravityDuringGrip", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBPAdvGripPhysicsSettings), &Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_bTurnOffGravityDuringGrip_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_bTurnOffGravityDuringGrip_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_bTurnOffGravityDuringGrip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_PhysicsGripLocationSettings_MetaData[] = {
		{ "Category", "PhysicsSettings" },
		{ "editcondition", "bUsePhysicsSettings" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "ToolTip", "Set how the grips handle center of mass" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_PhysicsGripLocationSettings = { "PhysicsGripLocationSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPAdvGripPhysicsSettings, PhysicsGripLocationSettings), Z_Construct_UEnum_VRExpansionPlugin_EPhysicsGripCOMType, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_PhysicsGripLocationSettings_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_PhysicsGripLocationSettings_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_PhysicsGripLocationSettings_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_PhysicsConstraintType_MetaData[] = {
		{ "Category", "PhysicsSettings" },
		{ "editcondition", "bUsePhysicsSettings" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_PhysicsConstraintType = { "PhysicsConstraintType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPAdvGripPhysicsSettings, PhysicsConstraintType), Z_Construct_UEnum_VRExpansionPlugin_EPhysicsGripConstraintType, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_PhysicsConstraintType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_PhysicsConstraintType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_PhysicsConstraintType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_bUsePhysicsSettings_MetaData[] = {
		{ "Category", "PhysicsSettings" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_bUsePhysicsSettings_SetBit(void* Obj)
	{
		((FBPAdvGripPhysicsSettings*)Obj)->bUsePhysicsSettings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_bUsePhysicsSettings = { "bUsePhysicsSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBPAdvGripPhysicsSettings), &Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_bUsePhysicsSettings_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_bUsePhysicsSettings_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_bUsePhysicsSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_AngularDamping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_AngularStiffness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_bUseCustomAngularValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_bTurnOffGravityDuringGrip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_PhysicsGripLocationSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_PhysicsGripLocationSettings_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_PhysicsConstraintType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_PhysicsConstraintType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::NewProp_bUsePhysicsSettings,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		&NewStructOps,
		"BPAdvGripPhysicsSettings",
		sizeof(FBPAdvGripPhysicsSettings),
		alignof(FBPAdvGripPhysicsSettings),
		Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BPAdvGripPhysicsSettings"), sizeof(FBPAdvGripPhysicsSettings), Get_Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Hash() { return 1237634474U; }
class UScriptStruct* FBPVRComponentPosRep::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VREXPANSIONPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FBPVRComponentPosRep_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPVRComponentPosRep, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("BPVRComponentPosRep"), sizeof(FBPVRComponentPosRep), Get_Z_Construct_UScriptStruct_FBPVRComponentPosRep_Hash());
	}
	return Singleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FBPVRComponentPosRep>()
{
	return FBPVRComponentPosRep::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBPVRComponentPosRep(FBPVRComponentPosRep::StaticStruct, TEXT("/Script/VRExpansionPlugin"), TEXT("BPVRComponentPosRep"), false, nullptr, nullptr);
static struct FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFBPVRComponentPosRep
{
	FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFBPVRComponentPosRep()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BPVRComponentPosRep")),new UScriptStruct::TCppStructOps<FBPVRComponentPosRep>);
	}
} ScriptStruct_VRExpansionPlugin_StaticRegisterNativesFBPVRComponentPosRep;
	struct Z_Construct_UScriptStruct_FBPVRComponentPosRep_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationQuantizationLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RotationQuantizationLevel;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RotationQuantizationLevel_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuantizationLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_QuantizationLevel;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_QuantizationLevel_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPVRComponentPosRep_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBPVRComponentPosRep_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPVRComponentPosRep>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPVRComponentPosRep_Statics::NewProp_RotationQuantizationLevel_MetaData[] = {
		{ "Category", "Replication" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "ToolTip", "The quantization level to use for the rotation components\nUsing 10 bits mode saves approx 2.25 bytes per replication." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBPVRComponentPosRep_Statics::NewProp_RotationQuantizationLevel = { "RotationQuantizationLevel", nullptr, (EPropertyFlags)0x0010040000010001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPVRComponentPosRep, RotationQuantizationLevel), Z_Construct_UEnum_VRExpansionPlugin_EVRRotationQuantization, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPVRComponentPosRep_Statics::NewProp_RotationQuantizationLevel_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVRComponentPosRep_Statics::NewProp_RotationQuantizationLevel_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBPVRComponentPosRep_Statics::NewProp_RotationQuantizationLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPVRComponentPosRep_Statics::NewProp_QuantizationLevel_MetaData[] = {
		{ "Category", "Replication" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "ToolTip", "The quantization level to use for the vector components" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBPVRComponentPosRep_Statics::NewProp_QuantizationLevel = { "QuantizationLevel", nullptr, (EPropertyFlags)0x0010040000010001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPVRComponentPosRep, QuantizationLevel), Z_Construct_UEnum_VRExpansionPlugin_EVRVectorQuantization, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPVRComponentPosRep_Statics::NewProp_QuantizationLevel_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVRComponentPosRep_Statics::NewProp_QuantizationLevel_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBPVRComponentPosRep_Statics::NewProp_QuantizationLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPVRComponentPosRep_Statics::NewProp_Rotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPVRComponentPosRep_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPVRComponentPosRep, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPVRComponentPosRep_Statics::NewProp_Rotation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVRComponentPosRep_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPVRComponentPosRep_Statics::NewProp_Position_MetaData[] = {
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPVRComponentPosRep_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPVRComponentPosRep, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPVRComponentPosRep_Statics::NewProp_Position_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVRComponentPosRep_Statics::NewProp_Position_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBPVRComponentPosRep_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVRComponentPosRep_Statics::NewProp_RotationQuantizationLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVRComponentPosRep_Statics::NewProp_RotationQuantizationLevel_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVRComponentPosRep_Statics::NewProp_QuantizationLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVRComponentPosRep_Statics::NewProp_QuantizationLevel_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVRComponentPosRep_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVRComponentPosRep_Statics::NewProp_Position,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBPVRComponentPosRep_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		&NewStructOps,
		"BPVRComponentPosRep",
		sizeof(FBPVRComponentPosRep),
		alignof(FBPVRComponentPosRep),
		Z_Construct_UScriptStruct_FBPVRComponentPosRep_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVRComponentPosRep_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBPVRComponentPosRep_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVRComponentPosRep_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBPVRComponentPosRep()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBPVRComponentPosRep_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BPVRComponentPosRep"), sizeof(FBPVRComponentPosRep), Get_Z_Construct_UScriptStruct_FBPVRComponentPosRep_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBPVRComponentPosRep_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBPVRComponentPosRep_Hash() { return 1093910924U; }
class UScriptStruct* FTransform_NetQuantize::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VREXPANSIONPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FTransform_NetQuantize_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTransform_NetQuantize, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("Transform_NetQuantize"), sizeof(FTransform_NetQuantize), Get_Z_Construct_UScriptStruct_FTransform_NetQuantize_Hash());
	}
	return Singleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FTransform_NetQuantize>()
{
	return FTransform_NetQuantize::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTransform_NetQuantize(FTransform_NetQuantize::StaticStruct, TEXT("/Script/VRExpansionPlugin"), TEXT("Transform_NetQuantize"), false, nullptr, nullptr);
static struct FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFTransform_NetQuantize
{
	FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFTransform_NetQuantize()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Transform_NetQuantize")),new UScriptStruct::TCppStructOps<FTransform_NetQuantize>);
	}
} ScriptStruct_VRExpansionPlugin_StaticRegisterNativesFTransform_NetQuantize;
	struct Z_Construct_UScriptStruct_FTransform_NetQuantize_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransform_NetQuantize_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "VRExpansionLibrary|Transform" },
		{ "HasNativeBreak", "VRExpansionPlugin.VRExpansionPluginFunctionLibrary.BreakTransform_NetQuantize" },
		{ "HasNativeMake", "VRExpansionPlugin.VRExpansionPluginFunctionLibrary.MakeTransform_NetQuantize" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "ToolTip", "noexport," },
	};
#endif
	void* Z_Construct_UScriptStruct_FTransform_NetQuantize_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTransform_NetQuantize>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTransform_NetQuantize_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		Z_Construct_UScriptStruct_FTransform,
		&NewStructOps,
		"Transform_NetQuantize",
		sizeof(FTransform_NetQuantize),
		alignof(FTransform_NetQuantize),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTransform_NetQuantize_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTransform_NetQuantize_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTransform_NetQuantize()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTransform_NetQuantize_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Transform_NetQuantize"), sizeof(FTransform_NetQuantize), Get_Z_Construct_UScriptStruct_FTransform_NetQuantize_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTransform_NetQuantize_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTransform_NetQuantize_Hash() { return 2331257986U; }
class UScriptStruct* FBPEuroLowPassFilter::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VREXPANSIONPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FBPEuroLowPassFilter_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPEuroLowPassFilter, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("BPEuroLowPassFilter"), sizeof(FBPEuroLowPassFilter), Get_Z_Construct_UScriptStruct_FBPEuroLowPassFilter_Hash());
	}
	return Singleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FBPEuroLowPassFilter>()
{
	return FBPEuroLowPassFilter::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBPEuroLowPassFilter(FBPEuroLowPassFilter::StaticStruct, TEXT("/Script/VRExpansionPlugin"), TEXT("BPEuroLowPassFilter"), false, nullptr, nullptr);
static struct FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFBPEuroLowPassFilter
{
	FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFBPEuroLowPassFilter()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BPEuroLowPassFilter")),new UScriptStruct::TCppStructOps<FBPEuroLowPassFilter>);
	}
} ScriptStruct_VRExpansionPlugin_StaticRegisterNativesFBPEuroLowPassFilter;
	struct Z_Construct_UScriptStruct_FBPEuroLowPassFilter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CutoffSlope_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CutoffSlope;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeltaCutoff_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaCutoff;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinCutoff_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinCutoff;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPEuroLowPassFilter_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "VRExpansionLibrary" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "ToolTip", "********************************************************************// A re-implementation of the Euro Low Pass Filter that epic uses for the VR Editor, but for blueprints" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBPEuroLowPassFilter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPEuroLowPassFilter>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPEuroLowPassFilter_Statics::NewProp_CutoffSlope_MetaData[] = {
		{ "Category", "FilterSettings" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "ToolTip", "This is the magnitude of adjustment" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBPEuroLowPassFilter_Statics::NewProp_CutoffSlope = { "CutoffSlope", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPEuroLowPassFilter, CutoffSlope), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPEuroLowPassFilter_Statics::NewProp_CutoffSlope_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPEuroLowPassFilter_Statics::NewProp_CutoffSlope_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPEuroLowPassFilter_Statics::NewProp_DeltaCutoff_MetaData[] = {
		{ "Category", "FilterSettings" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "ToolTip", "If latency is too high with fast movements increase this value" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBPEuroLowPassFilter_Statics::NewProp_DeltaCutoff = { "DeltaCutoff", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPEuroLowPassFilter, DeltaCutoff), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPEuroLowPassFilter_Statics::NewProp_DeltaCutoff_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPEuroLowPassFilter_Statics::NewProp_DeltaCutoff_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPEuroLowPassFilter_Statics::NewProp_MinCutoff_MetaData[] = {
		{ "Category", "FilterSettings" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "ToolTip", "The smaller the value the less jitter and the more lag with micro movements" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBPEuroLowPassFilter_Statics::NewProp_MinCutoff = { "MinCutoff", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPEuroLowPassFilter, MinCutoff), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPEuroLowPassFilter_Statics::NewProp_MinCutoff_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPEuroLowPassFilter_Statics::NewProp_MinCutoff_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBPEuroLowPassFilter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPEuroLowPassFilter_Statics::NewProp_CutoffSlope,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPEuroLowPassFilter_Statics::NewProp_DeltaCutoff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPEuroLowPassFilter_Statics::NewProp_MinCutoff,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBPEuroLowPassFilter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		&NewStructOps,
		"BPEuroLowPassFilter",
		sizeof(FBPEuroLowPassFilter),
		alignof(FBPEuroLowPassFilter),
		Z_Construct_UScriptStruct_FBPEuroLowPassFilter_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FBPEuroLowPassFilter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBPEuroLowPassFilter_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPEuroLowPassFilter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBPEuroLowPassFilter()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBPEuroLowPassFilter_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BPEuroLowPassFilter"), sizeof(FBPEuroLowPassFilter), Get_Z_Construct_UScriptStruct_FBPEuroLowPassFilter_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBPEuroLowPassFilter_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBPEuroLowPassFilter_Hash() { return 3219507224U; }
class UScriptStruct* FBPVRWaistTracking_Info::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VREXPANSIONPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FBPVRWaistTracking_Info_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPVRWaistTracking_Info, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("BPVRWaistTracking_Info"), sizeof(FBPVRWaistTracking_Info), Get_Z_Construct_UScriptStruct_FBPVRWaistTracking_Info_Hash());
	}
	return Singleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FBPVRWaistTracking_Info>()
{
	return FBPVRWaistTracking_Info::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBPVRWaistTracking_Info(FBPVRWaistTracking_Info::StaticStruct, TEXT("/Script/VRExpansionPlugin"), TEXT("BPVRWaistTracking_Info"), false, nullptr, nullptr);
static struct FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFBPVRWaistTracking_Info
{
	FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFBPVRWaistTracking_Info()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BPVRWaistTracking_Info")),new UScriptStruct::TCppStructOps<FBPVRWaistTracking_Info>);
	}
} ScriptStruct_VRExpansionPlugin_StaticRegisterNativesFBPVRWaistTracking_Info;
	struct Z_Construct_UScriptStruct_FBPVRWaistTracking_Info_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackedDevice_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TrackedDevice;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackingMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TrackingMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TrackingMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaistRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WaistRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RestingRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RestingRotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPVRWaistTracking_Info_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "VRExpansionLibrary" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBPVRWaistTracking_Info_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPVRWaistTracking_Info>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPVRWaistTracking_Info_Statics::NewProp_TrackedDevice_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "ToolTip", "Tracked parent reference" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBPVRWaistTracking_Info_Statics::NewProp_TrackedDevice = { "TrackedDevice", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPVRWaistTracking_Info, TrackedDevice), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPVRWaistTracking_Info_Statics::NewProp_TrackedDevice_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVRWaistTracking_Info_Statics::NewProp_TrackedDevice_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPVRWaistTracking_Info_Statics::NewProp_TrackingMode_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "ToolTip", "Controls forward vector" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBPVRWaistTracking_Info_Statics::NewProp_TrackingMode = { "TrackingMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPVRWaistTracking_Info, TrackingMode), Z_Construct_UEnum_VRExpansionPlugin_EBPVRWaistTrackingMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPVRWaistTracking_Info_Statics::NewProp_TrackingMode_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVRWaistTracking_Info_Statics::NewProp_TrackingMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBPVRWaistTracking_Info_Statics::NewProp_TrackingMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPVRWaistTracking_Info_Statics::NewProp_WaistRadius_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "ToolTip", "Distance to offset to get center of waist from tracked parent location" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBPVRWaistTracking_Info_Statics::NewProp_WaistRadius = { "WaistRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPVRWaistTracking_Info, WaistRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPVRWaistTracking_Info_Statics::NewProp_WaistRadius_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVRWaistTracking_Info_Statics::NewProp_WaistRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPVRWaistTracking_Info_Statics::NewProp_RestingRotation_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/VRBPDatatypes.h" },
		{ "ToolTip", "Initial \"Resting\" location of the tracker parent, assumed to be the calibration zero" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPVRWaistTracking_Info_Statics::NewProp_RestingRotation = { "RestingRotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPVRWaistTracking_Info, RestingRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPVRWaistTracking_Info_Statics::NewProp_RestingRotation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVRWaistTracking_Info_Statics::NewProp_RestingRotation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBPVRWaistTracking_Info_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVRWaistTracking_Info_Statics::NewProp_TrackedDevice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVRWaistTracking_Info_Statics::NewProp_TrackingMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVRWaistTracking_Info_Statics::NewProp_TrackingMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVRWaistTracking_Info_Statics::NewProp_WaistRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVRWaistTracking_Info_Statics::NewProp_RestingRotation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBPVRWaistTracking_Info_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		&NewStructOps,
		"BPVRWaistTracking_Info",
		sizeof(FBPVRWaistTracking_Info),
		alignof(FBPVRWaistTracking_Info),
		Z_Construct_UScriptStruct_FBPVRWaistTracking_Info_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVRWaistTracking_Info_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBPVRWaistTracking_Info_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVRWaistTracking_Info_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBPVRWaistTracking_Info()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBPVRWaistTracking_Info_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BPVRWaistTracking_Info"), sizeof(FBPVRWaistTracking_Info), Get_Z_Construct_UScriptStruct_FBPVRWaistTracking_Info_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBPVRWaistTracking_Info_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBPVRWaistTracking_Info_Hash() { return 1291459225U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
