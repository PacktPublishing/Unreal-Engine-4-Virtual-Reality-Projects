// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VREXPANSIONPLUGIN_VRBPDatatypes_generated_h
#error "VRBPDatatypes.generated.h already included, missing '#pragma once' in VRBPDatatypes.h"
#endif
#define VREXPANSIONPLUGIN_VRBPDatatypes_generated_h

#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBPDatatypes_h_1511_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBPActorPhysicsHandleInformation_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<struct FBPActorPhysicsHandleInformation>();

#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBPDatatypes_h_1417_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBPInterfaceProperties_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<struct FBPInterfaceProperties>();

#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBPDatatypes_h_1188_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBPActorGripInformation_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<struct FBPActorGripInformation>();

#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBPDatatypes_h_1077_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBPSecondaryGripInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<struct FBPSecondaryGripInfo>();

#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBPDatatypes_h_1043_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBPAdvGripSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<struct FBPAdvGripSettings>();

#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBPDatatypes_h_898_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBPAdvSecondaryGripSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<struct FBPAdvSecondaryGripSettings>();

#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBPDatatypes_h_795_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<struct FBPAdvGripPhysicsSettings>();

#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBPDatatypes_h_477_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBPVRComponentPosRep_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<struct FBPVRComponentPosRep>();

#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBPDatatypes_h_217_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTransform_NetQuantize_Statics; \
	VREXPANSIONPLUGIN_API static class UScriptStruct* StaticStruct(); \
	typedef FTransform Super;


template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<struct FTransform_NetQuantize>();

#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBPDatatypes_h_161_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBPEuroLowPassFilter_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<struct FBPEuroLowPassFilter>();

#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBPDatatypes_h_80_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBPVRWaistTracking_Info_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<struct FBPVRWaistTracking_Info>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBPDatatypes_h


#define FOREACH_ENUM_EPHYSICSGRIPCOMTYPE(op) \
	op(EPhysicsGripCOMType::COM_Default) \
	op(EPhysicsGripCOMType::COM_AtPivot) \
	op(EPhysicsGripCOMType::COM_SetAndGripAt) \
	op(EPhysicsGripCOMType::COM_GripAt) \
	op(EPhysicsGripCOMType::COM_GripAtControllerLoc) 

enum class EPhysicsGripCOMType : uint8;
template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EPhysicsGripCOMType>();

#define FOREACH_ENUM_EPHYSICSGRIPCONSTRAINTTYPE(op) \
	op(EPhysicsGripConstraintType::AccelerationConstraint) \
	op(EPhysicsGripConstraintType::ForceConstraint) 

enum class EPhysicsGripConstraintType : uint8;
template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EPhysicsGripConstraintType>();

#define FOREACH_ENUM_EGRIPINTERFACETELEPORTBEHAVIOR(op) \
	op(EGripInterfaceTeleportBehavior::TeleportAllComponents) \
	op(EGripInterfaceTeleportBehavior::DeltaTeleportation) \
	op(EGripInterfaceTeleportBehavior::OnlyTeleportRootComponent) \
	op(EGripInterfaceTeleportBehavior::DropOnTeleport) \
	op(EGripInterfaceTeleportBehavior::DontTeleport) 

enum class EGripInterfaceTeleportBehavior : uint8;
template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EGripInterfaceTeleportBehavior>();

#define FOREACH_ENUM_EGRIPTARGETTYPE(op) \
	op(EGripTargetType::ActorGrip) \
	op(EGripTargetType::ComponentGrip) 

enum class EGripTargetType : uint8;
template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EGripTargetType>();

#define FOREACH_ENUM_EGRIPMOVEMENTREPLICATIONSETTINGS(op) \
	op(EGripMovementReplicationSettings::KeepOriginalMovement) \
	op(EGripMovementReplicationSettings::ForceServerSideMovement) \
	op(EGripMovementReplicationSettings::ForceClientSideMovement) \
	op(EGripMovementReplicationSettings::ClientSide_Authoritive) \
	op(EGripMovementReplicationSettings::ClientSide_Authoritive_NoRep) 

enum class EGripMovementReplicationSettings : uint8;
template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EGripMovementReplicationSettings>();

#define FOREACH_ENUM_EGRIPLATEUPDATESETTINGS(op) \
	op(EGripLateUpdateSettings::LateUpdatesAlwaysOn) \
	op(EGripLateUpdateSettings::LateUpdatesAlwaysOff) \
	op(EGripLateUpdateSettings::NotWhenColliding) \
	op(EGripLateUpdateSettings::NotWhenDoubleGripping) \
	op(EGripLateUpdateSettings::NotWhenCollidingOrDoubleGripping) 

enum class EGripLateUpdateSettings : uint8;
template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EGripLateUpdateSettings>();

#define FOREACH_ENUM_ESECONDARYGRIPTYPE(op) \
	op(ESecondaryGripType::SG_None) \
	op(ESecondaryGripType::SG_Free) \
	op(ESecondaryGripType::SG_SlotOnly) \
	op(ESecondaryGripType::SG_Free_Retain) \
	op(ESecondaryGripType::SG_SlotOnly_Retain) \
	op(ESecondaryGripType::SG_FreeWithScaling_Retain) \
	op(ESecondaryGripType::SG_SlotOnlyWithScaling_Retain) \
	op(ESecondaryGripType::SG_Custom) \
	op(ESecondaryGripType::SG_ScalingOnly) 

enum class ESecondaryGripType : uint8;
template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<ESecondaryGripType>();

#define FOREACH_ENUM_EGRIPLERPSTATE(op) \
	op(EGripLerpState::StartLerp) \
	op(EGripLerpState::EndLerp) \
	op(EGripLerpState::NotLerping) 

enum class EGripLerpState : uint8;
template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EGripLerpState>();

#define FOREACH_ENUM_EBPHMDDEVICETYPE(op) \
	op(EBPHMDDeviceType::DT_OculusHMD) \
	op(EBPHMDDeviceType::DT_PSVR) \
	op(EBPHMDDeviceType::DT_ES2GenericStereoMesh) \
	op(EBPHMDDeviceType::DT_SteamVR) \
	op(EBPHMDDeviceType::DT_GearVR) \
	op(EBPHMDDeviceType::DT_GoogleVR) \
	op(EBPHMDDeviceType::DT_OSVR) \
	op(EBPHMDDeviceType::DT_AppleARKit) \
	op(EBPHMDDeviceType::DT_GoogleARCore) \
	op(EBPHMDDeviceType::DT_Unknown) 

enum class EBPHMDDeviceType : uint8;
template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EBPHMDDeviceType>();

#define FOREACH_ENUM_EGRIPCOLLISIONTYPE(op) \
	op(EGripCollisionType::InteractiveCollisionWithPhysics) \
	op(EGripCollisionType::InteractiveCollisionWithSweep) \
	op(EGripCollisionType::InteractiveHybridCollisionWithPhysics) \
	op(EGripCollisionType::InteractiveHybridCollisionWithSweep) \
	op(EGripCollisionType::SweepWithPhysics) \
	op(EGripCollisionType::PhysicsOnly) \
	op(EGripCollisionType::ManipulationGrip) \
	op(EGripCollisionType::ManipulationGripWithWristTwist) \
	op(EGripCollisionType::AttachmentGrip) \
	op(EGripCollisionType::CustomGrip) \
	op(EGripCollisionType::EventsOnly) 

enum class EGripCollisionType : uint8;
template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EGripCollisionType>();

#define FOREACH_ENUM_EVRROTATIONQUANTIZATION(op) \
	op(EVRRotationQuantization::RoundTo10Bits) \
	op(EVRRotationQuantization::RoundToShort) 

enum class EVRRotationQuantization : uint8;
template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRRotationQuantization>();

#define FOREACH_ENUM_EVRVECTORQUANTIZATION(op) \
	op(EVRVectorQuantization::RoundOneDecimal) \
	op(EVRVectorQuantization::RoundTwoDecimals) 

enum class EVRVectorQuantization : uint8;
template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRVectorQuantization>();

#define FOREACH_ENUM_EBPVRWAISTTRACKINGMODE(op) \
	op(EBPVRWaistTrackingMode::VRWaist_Tracked_Front) \
	op(EBPVRWaistTrackingMode::VRWaist_Tracked_Rear) \
	op(EBPVRWaistTrackingMode::VRWaist_Tracked_Left) \
	op(EBPVRWaistTrackingMode::VRWaist_Tracked_Right) 

enum class EBPVRWaistTrackingMode : uint8;
template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EBPVRWaistTrackingMode>();

#define FOREACH_ENUM_EBPVRRESULTSWITCH(op) \
	op(EBPVRResultSwitch::OnSucceeded) \
	op(EBPVRResultSwitch::OnFailed) 

enum class EBPVRResultSwitch : uint8;
template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EBPVRResultSwitch>();

#define FOREACH_ENUM_EVRCONJOINEDMOVEMENTMODES(op) \
	op(EVRConjoinedMovementModes::C_MOVE_None) \
	op(EVRConjoinedMovementModes::C_MOVE_Walking) \
	op(EVRConjoinedMovementModes::C_MOVE_NavWalking) \
	op(EVRConjoinedMovementModes::C_MOVE_Falling) \
	op(EVRConjoinedMovementModes::C_MOVE_Swimming) \
	op(EVRConjoinedMovementModes::C_MOVE_Flying) \
	op(EVRConjoinedMovementModes::C_MOVE_MAX) \
	op(EVRConjoinedMovementModes::C_VRMOVE_Climbing) \
	op(EVRConjoinedMovementModes::C_VRMOVE_LowGrav) \
	op(EVRConjoinedMovementModes::C_VRMOVE_Seated) \
	op(EVRConjoinedMovementModes::C_VRMOVE_Custom1) \
	op(EVRConjoinedMovementModes::C_VRMOVE_Custom2) \
	op(EVRConjoinedMovementModes::C_VRMOVE_Custom3) \
	op(EVRConjoinedMovementModes::C_VRMOVE_Custom4) \
	op(EVRConjoinedMovementModes::C_VRMOVE_Custom5) 

enum class EVRConjoinedMovementModes : uint8;
template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRConjoinedMovementModes>();

#define FOREACH_ENUM_EVRCUSTOMMOVEMENTMODE(op) \
	op(EVRCustomMovementMode::VRMOVE_Climbing) \
	op(EVRCustomMovementMode::VRMOVE_LowGrav) \
	op(EVRCustomMovementMode::VRMOVE_Seated) 

enum class EVRCustomMovementMode : uint8;
template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRCustomMovementMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
