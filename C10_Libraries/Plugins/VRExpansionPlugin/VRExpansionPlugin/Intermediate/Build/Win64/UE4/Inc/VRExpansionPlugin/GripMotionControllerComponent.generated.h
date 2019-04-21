// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTransform;
struct FBPActorGripInformation;
struct FXRDeviceId;
enum class EBPVRResultSwitch : uint8;
struct FVector;
class UObject;
class USceneComponent;
class UPrimitiveComponent;
class AActor;
enum class EGripLateUpdateSettings : uint8;
enum class EGripCollisionType : uint8;
enum class EGripMovementReplicationSettings : uint8;
struct FTransform_NetQuantize;
struct FBPVRComponentPosRep;
struct FVector_NetQuantize100;
struct FBPSecondaryGripInfo;
enum class EControllerHand : uint8;
#ifdef VREXPANSIONPLUGIN_GripMotionControllerComponent_generated_h
#error "GripMotionControllerComponent.generated.h already included, missing '#pragma once' in GripMotionControllerComponent.h"
#endif
#define VREXPANSIONPLUGIN_GripMotionControllerComponent_generated_h

#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h_43_DELEGATE \
struct _Script_VRExpansionPlugin_eventVRGripControllerOnProfileTransformChanged_Parms \
{ \
	FTransform NewRelTransForProcComps; \
	FTransform NewProfileTransform; \
}; \
static inline void FVRGripControllerOnProfileTransformChanged_DelegateWrapper(const FMulticastScriptDelegate& VRGripControllerOnProfileTransformChanged, FTransform const& NewRelTransForProcComps, FTransform const& NewProfileTransform) \
{ \
	_Script_VRExpansionPlugin_eventVRGripControllerOnProfileTransformChanged_Parms Parms; \
	Parms.NewRelTransForProcComps=NewRelTransForProcComps; \
	Parms.NewProfileTransform=NewProfileTransform; \
	VRGripControllerOnProfileTransformChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h_40_DELEGATE \
struct _Script_VRExpansionPlugin_eventVRGripControllerOnGripOutOfRange_Parms \
{ \
	FBPActorGripInformation GripInformation; \
	float Distance; \
}; \
static inline void FVRGripControllerOnGripOutOfRange_DelegateWrapper(const FMulticastScriptDelegate& VRGripControllerOnGripOutOfRange, FBPActorGripInformation const& GripInformation, float Distance) \
{ \
	_Script_VRExpansionPlugin_eventVRGripControllerOnGripOutOfRange_Parms Parms; \
	Parms.GripInformation=GripInformation; \
	Parms.Distance=Distance; \
	VRGripControllerOnGripOutOfRange.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h_37_DELEGATE \
struct _Script_VRExpansionPlugin_eventVRGripControllerOnDropSignature_Parms \
{ \
	FBPActorGripInformation GripInformation; \
}; \
static inline void FVRGripControllerOnDropSignature_DelegateWrapper(const FMulticastScriptDelegate& VRGripControllerOnDropSignature, FBPActorGripInformation const& GripInformation) \
{ \
	_Script_VRExpansionPlugin_eventVRGripControllerOnDropSignature_Parms Parms; \
	Parms.GripInformation=GripInformation; \
	VRGripControllerOnDropSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h_34_DELEGATE \
struct _Script_VRExpansionPlugin_eventVRGripControllerOnGripSignature_Parms \
{ \
	FBPActorGripInformation GripInformation; \
}; \
static inline void FVRGripControllerOnGripSignature_DelegateWrapper(const FMulticastScriptDelegate& VRGripControllerOnGripSignature, FBPActorGripInformation const& GripInformation) \
{ \
	_Script_VRExpansionPlugin_eventVRGripControllerOnGripSignature_Parms Parms; \
	Parms.GripInformation=GripInformation; \
	VRGripControllerOnGripSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h_31_DELEGATE \
static inline void FVRGripControllerOnTrackingEventSignature_DelegateWrapper(const FMulticastScriptDelegate& VRGripControllerOnTrackingEventSignature) \
{ \
	VRGripControllerOnTrackingEventSignature.ProcessMulticastDelegate<UObject>(NULL); \
}


#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h_134_RPC_WRAPPERS \
	virtual void NotifyDrop_Implementation(FBPActorGripInformation const& NewDrop, bool bSimulate); \
	virtual void NotifyDropAndSocket_Implementation(FBPActorGripInformation const& NewDrop); \
	virtual bool Server_NotifyDropAndSocketGrip_Validate(uint8 , USceneComponent* , FName , FTransform_NetQuantize const& , bool ); \
	virtual void Server_NotifyDropAndSocketGrip_Implementation(uint8 GripID, USceneComponent* SocketingParent, FName OptionalSocketName, FTransform_NetQuantize const& RelativeTransformToParent, bool bWeldBodies); \
	virtual bool Server_SendControllerTransform_Validate(FBPVRComponentPosRep ); \
	virtual void Server_SendControllerTransform_Implementation(FBPVRComponentPosRep NewTransform); \
	virtual bool Server_NotifyLocalGripRemoved_Validate(uint8 , FTransform_NetQuantize const& , FVector_NetQuantize100 , FVector_NetQuantize100 ); \
	virtual void Server_NotifyLocalGripRemoved_Implementation(uint8 GripID, FTransform_NetQuantize const& TransformAtDrop, FVector_NetQuantize100 AngularVelocity, FVector_NetQuantize100 LinearVelocity); \
	virtual bool Server_NotifySecondaryAttachmentChanged_Retain_Validate(uint8 , FBPSecondaryGripInfo const& , FTransform_NetQuantize const& ); \
	virtual void Server_NotifySecondaryAttachmentChanged_Retain_Implementation(uint8 GripID, FBPSecondaryGripInfo const& SecondaryGripInfo, FTransform_NetQuantize const& NewRelativeTransform); \
	virtual bool Server_NotifySecondaryAttachmentChanged_Validate(uint8 , FBPSecondaryGripInfo const& ); \
	virtual void Server_NotifySecondaryAttachmentChanged_Implementation(uint8 GripID, FBPSecondaryGripInfo const& SecondaryGripInfo); \
	virtual bool Server_NotifyLocalGripAddedOrChanged_Validate(FBPActorGripInformation const& ); \
	virtual void Server_NotifyLocalGripAddedOrChanged_Implementation(FBPActorGripInformation const& newGrip); \
	virtual bool Client_NotifyInvalidLocalGrip_Validate(UObject* ); \
	virtual void Client_NotifyInvalidLocalGrip_Implementation(UObject* LocallyGrippedObject); \
 \
	DECLARE_FUNCTION(execGetControllerDeviceID) \
	{ \
		P_GET_STRUCT_REF(FXRDeviceId,Z_Param_Out_DeviceID); \
		P_GET_ENUM_REF(EBPVRResultSwitch,Z_Param_Out_Result); \
		P_GET_UBOOL(Z_Param_bCheckOpenVROnly); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetControllerDeviceID(Z_Param_Out_DeviceID,(EBPVRResultSwitch&)(Z_Param_Out_Result),Z_Param_bCheckOpenVROnly); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGripControllerIsTracked) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GripControllerIsTracked(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGripDistance_BP) \
	{ \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip); \
		P_GET_STRUCT(FVector,Z_Param_ExpectedLocation); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_CurrentDistance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetGripDistance_BP(Z_Param_Out_Grip,Z_Param_ExpectedLocation,Z_Param_Out_CurrentDistance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdatePhysicsHandleTransform_BP) \
	{ \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GrippedActor); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_NewTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdatePhysicsHandleTransform_BP(Z_Param_Out_GrippedActor,Z_Param_Out_NewTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDestroyPhysicsHandle_BP) \
	{ \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->DestroyPhysicsHandle_BP(Z_Param_Out_Grip); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetUpPhysicsHandle_BP) \
	{ \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_NewGrip); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SetUpPhysicsHandle_BP(Z_Param_Out_NewGrip); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveSecondaryAttachmentFromGrip) \
	{ \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripToRemoveAttachment); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_LerpToTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->RemoveSecondaryAttachmentFromGrip(Z_Param_Out_GripToRemoveAttachment,Z_Param_LerpToTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveSecondaryAttachmentPoint) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_GrippedObjectToRemoveAttachment); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_LerpToTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->RemoveSecondaryAttachmentPoint(Z_Param_GrippedObjectToRemoveAttachment,Z_Param_LerpToTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddSecondaryAttachmentToGrip) \
	{ \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripToAddAttachment); \
		P_GET_OBJECT(USceneComponent,Z_Param_SecondaryPointComponent); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_OriginalTransform); \
		P_GET_UBOOL(Z_Param_bTransformIsAlreadyRelative); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_LerpToTime); \
		P_GET_UBOOL(Z_Param_bIsSlotGrip); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->AddSecondaryAttachmentToGrip(Z_Param_Out_GripToAddAttachment,Z_Param_SecondaryPointComponent,Z_Param_Out_OriginalTransform,Z_Param_bTransformIsAlreadyRelative,Z_Param_LerpToTime,Z_Param_bIsSlotGrip); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddSecondaryAttachmentPoint) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_GrippedObjectToAddAttachment); \
		P_GET_OBJECT(USceneComponent,Z_Param_SecondaryPointComponent); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_OriginalTransform); \
		P_GET_UBOOL(Z_Param_bTransformIsAlreadyRelative); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_LerpToTime); \
		P_GET_UBOOL(Z_Param_bIsSlotGrip); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->AddSecondaryAttachmentPoint(Z_Param_GrippedObjectToAddAttachment,Z_Param_SecondaryPointComponent,Z_Param_Out_OriginalTransform,Z_Param_bTransformIsAlreadyRelative,Z_Param_LerpToTime,Z_Param_bIsSlotGrip); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTeleportMoveGrip) \
	{ \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip); \
		P_GET_UBOOL(Z_Param_bTeleportPhysicsGrips); \
		P_GET_UBOOL(Z_Param_bIsForPostTeleport); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->TeleportMoveGrip(Z_Param_Out_Grip,Z_Param_bTeleportPhysicsGrips,Z_Param_bIsForPostTeleport); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTeleportMoveGrippedComponent) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ComponentToMove); \
		P_GET_UBOOL(Z_Param_bTeleportPhysicsGrips); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->TeleportMoveGrippedComponent(Z_Param_ComponentToMove,Z_Param_bTeleportPhysicsGrips); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTeleportMoveGrippedActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_GrippedActorToMove); \
		P_GET_UBOOL(Z_Param_bTeleportPhysicsGrips); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->TeleportMoveGrippedActor(Z_Param_GrippedActorToMove,Z_Param_bTeleportPhysicsGrips); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPostTeleportMoveGrippedObjects) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PostTeleportMoveGrippedObjects(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGrippedComponents) \
	{ \
		P_GET_TARRAY_REF(UPrimitiveComponent*,Z_Param_Out_GrippedComponentsArray); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetGrippedComponents(Z_Param_Out_GrippedComponentsArray); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGrippedObjects) \
	{ \
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_GrippedObjectsArray); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetGrippedObjects(Z_Param_Out_GrippedObjectsArray); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGrippedActors) \
	{ \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_GrippedActorArray); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetGrippedActors(Z_Param_Out_GrippedActorArray); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllGrips) \
	{ \
		P_GET_TARRAY_REF(FBPActorGripInformation,Z_Param_Out_GripArray); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetAllGrips(Z_Param_Out_GripArray); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasGrippedObjects) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasGrippedObjects(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsSecondaryAttachment) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_ComponentToCheck); \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetIsSecondaryAttachment(Z_Param_ComponentToCheck,Z_Param_Out_Grip); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsComponentHeld) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ComponentToCheck); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetIsComponentHeld(Z_Param_ComponentToCheck); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsHeld) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_ActorToCheck); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetIsHeld(Z_Param_ActorToCheck); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsObjectHeld) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_ObjectToCheck); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetIsObjectHeld(Z_Param_ObjectToCheck); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConvertToGripRelativeTransform) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_GrippedActorTransform); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_InTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=UGripMotionControllerComponent::ConvertToGripRelativeTransform(Z_Param_Out_GrippedActorTransform,Z_Param_Out_InTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConvertToControllerRelativeTransform) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_InTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=P_THIS->ConvertToControllerRelativeTransform(Z_Param_Out_InTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_HasGripMovementAuthority) \
	{ \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->BP_HasGripMovementAuthority(Z_Param_Out_Grip); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_HasGripAuthority) \
	{ \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->BP_HasGripAuthority(Z_Param_Out_Grip); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateGripRelativeAdditionTransform_BP) \
	{ \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripToSample); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_AdditionTransform); \
		P_GET_UBOOL(Z_Param_bGripRelative); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=P_THIS->CreateGripRelativeAdditionTransform_BP(Z_Param_Out_GripToSample,Z_Param_Out_AdditionTransform,Z_Param_bGripRelative); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGripStiffnessAndDamping) \
	{ \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip); \
		P_GET_ENUM_REF(EBPVRResultSwitch,Z_Param_Out_Result); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewStiffness); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewDamping); \
		P_GET_UBOOL(Z_Param_bAlsoSetAngularValues); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_OptionalAngularStiffness); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_OptionalAngularDamping); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGripStiffnessAndDamping(Z_Param_Out_Grip,(EBPVRResultSwitch&)(Z_Param_Out_Result),Z_Param_NewStiffness,Z_Param_NewDamping,Z_Param_bAlsoSetAngularValues,Z_Param_OptionalAngularStiffness,Z_Param_OptionalAngularDamping); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGripAdditionTransform) \
	{ \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip); \
		P_GET_ENUM_REF(EBPVRResultSwitch,Z_Param_Out_Result); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_NewAdditionTransform); \
		P_GET_UBOOL(Z_Param_bMakeGripRelative); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGripAdditionTransform(Z_Param_Out_Grip,(EBPVRResultSwitch&)(Z_Param_Out_Result),Z_Param_Out_NewAdditionTransform,Z_Param_bMakeGripRelative); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGripRelativeTransform) \
	{ \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip); \
		P_GET_ENUM_REF(EBPVRResultSwitch,Z_Param_Out_Result); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_NewRelativeTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGripRelativeTransform(Z_Param_Out_Grip,(EBPVRResultSwitch&)(Z_Param_Out_Result),Z_Param_Out_NewRelativeTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGripLateUpdateSetting) \
	{ \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip); \
		P_GET_ENUM_REF(EBPVRResultSwitch,Z_Param_Out_Result); \
		P_GET_ENUM(EGripLateUpdateSettings,Z_Param_NewGripLateUpdateSetting); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGripLateUpdateSetting(Z_Param_Out_Grip,(EBPVRResultSwitch&)(Z_Param_Out_Result),EGripLateUpdateSettings(Z_Param_NewGripLateUpdateSetting)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGripCollisionType) \
	{ \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip); \
		P_GET_ENUM_REF(EBPVRResultSwitch,Z_Param_Out_Result); \
		P_GET_ENUM(EGripCollisionType,Z_Param_NewGripCollisionType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGripCollisionType(Z_Param_Out_Grip,(EBPVRResultSwitch&)(Z_Param_Out_Result),EGripCollisionType(Z_Param_NewGripCollisionType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPausedTransform) \
	{ \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_PausedTransform); \
		P_GET_UBOOL(Z_Param_bTeleport); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPausedTransform(Z_Param_Out_Grip,Z_Param_Out_PausedTransform,Z_Param_bTeleport); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGripPaused) \
	{ \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip); \
		P_GET_ENUM_REF(EBPVRResultSwitch,Z_Param_Out_Result); \
		P_GET_UBOOL(Z_Param_bIsPaused); \
		P_GET_UBOOL(Z_Param_bNoConstraintWhenPaused); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGripPaused(Z_Param_Out_Grip,(EBPVRResultSwitch&)(Z_Param_Out_Result),Z_Param_bIsPaused,Z_Param_bNoConstraintWhenPaused); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPhysicsVelocities) \
	{ \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_AngularVelocity); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LinearVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetPhysicsVelocities(Z_Param_Out_Grip,Z_Param_Out_AngularVelocity,Z_Param_Out_LinearVelocity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGripByID) \
	{ \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip); \
		P_GET_PROPERTY(UByteProperty,Z_Param_IDToLookForGrip); \
		P_GET_ENUM_REF(EBPVRResultSwitch,Z_Param_Out_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetGripByID(Z_Param_Out_Grip,Z_Param_IDToLookForGrip,(EBPVRResultSwitch&)(Z_Param_Out_Result)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGripByObject) \
	{ \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip); \
		P_GET_OBJECT(UObject,Z_Param_ObjectToLookForGrip); \
		P_GET_ENUM_REF(EBPVRResultSwitch,Z_Param_Out_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetGripByObject(Z_Param_Out_Grip,Z_Param_ObjectToLookForGrip,(EBPVRResultSwitch&)(Z_Param_Out_Result)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGripByComponent) \
	{ \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ComponentToLookForGrip); \
		P_GET_ENUM_REF(EBPVRResultSwitch,Z_Param_Out_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetGripByComponent(Z_Param_Out_Grip,Z_Param_ComponentToLookForGrip,(EBPVRResultSwitch&)(Z_Param_Out_Result)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGripByActor) \
	{ \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip); \
		P_GET_OBJECT(AActor,Z_Param_ActorToLookForGrip); \
		P_GET_ENUM_REF(EBPVRResultSwitch,Z_Param_Out_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetGripByActor(Z_Param_Out_Grip,Z_Param_ActorToLookForGrip,(EBPVRResultSwitch&)(Z_Param_Out_Result)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotifyDrop) \
	{ \
		P_GET_STRUCT(FBPActorGripInformation,Z_Param_NewDrop); \
		P_GET_UBOOL(Z_Param_bSimulate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NotifyDrop_Implementation(Z_Param_NewDrop,Z_Param_bSimulate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDropGrip) \
	{ \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip); \
		P_GET_UBOOL(Z_Param_bSimulate); \
		P_GET_STRUCT(FVector,Z_Param_OptionalAngularVelocity); \
		P_GET_STRUCT(FVector,Z_Param_OptionalLinearVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->DropGrip(Z_Param_Out_Grip,Z_Param_bSimulate,Z_Param_OptionalAngularVelocity,Z_Param_OptionalLinearVelocity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDropComponent) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ComponentToDrop); \
		P_GET_UBOOL(Z_Param_bSimulate); \
		P_GET_STRUCT(FVector,Z_Param_OptionalAngularVelocity); \
		P_GET_STRUCT(FVector,Z_Param_OptionalLinearVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->DropComponent(Z_Param_ComponentToDrop,Z_Param_bSimulate,Z_Param_OptionalAngularVelocity,Z_Param_OptionalLinearVelocity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGripComponent) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ComponentToGrip); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_WorldOffset); \
		P_GET_UBOOL(Z_Param_bWorldOffsetIsRelative); \
		P_GET_PROPERTY(UNameProperty,Z_Param_OptionalBoneToGrip_Name); \
		P_GET_PROPERTY(UNameProperty,Z_Param_OptionalBoneToGripName); \
		P_GET_ENUM(EGripCollisionType,Z_Param_GripCollisionType); \
		P_GET_ENUM(EGripLateUpdateSettings,Z_Param_GripLateUpdateSetting); \
		P_GET_ENUM(EGripMovementReplicationSettings,Z_Param_GripMovementReplicationSetting); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_GripStiffness); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_GripDamping); \
		P_GET_UBOOL(Z_Param_bIsSlotGrip); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GripComponent(Z_Param_ComponentToGrip,Z_Param_Out_WorldOffset,Z_Param_bWorldOffsetIsRelative,Z_Param_OptionalBoneToGrip_Name,Z_Param_OptionalBoneToGripName,EGripCollisionType(Z_Param_GripCollisionType),EGripLateUpdateSettings(Z_Param_GripLateUpdateSetting),EGripMovementReplicationSettings(Z_Param_GripMovementReplicationSetting),Z_Param_GripStiffness,Z_Param_GripDamping,Z_Param_bIsSlotGrip); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDropActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_ActorToDrop); \
		P_GET_UBOOL(Z_Param_bSimulate); \
		P_GET_STRUCT(FVector,Z_Param_OptionalAngularVelocity); \
		P_GET_STRUCT(FVector,Z_Param_OptionalLinearVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->DropActor(Z_Param_ActorToDrop,Z_Param_bSimulate,Z_Param_OptionalAngularVelocity,Z_Param_OptionalLinearVelocity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGripActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_ActorToGrip); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_WorldOffset); \
		P_GET_UBOOL(Z_Param_bWorldOffsetIsRelative); \
		P_GET_PROPERTY(UNameProperty,Z_Param_OptionalSnapToSocketName); \
		P_GET_PROPERTY(UNameProperty,Z_Param_OptionalBoneToGripName); \
		P_GET_ENUM(EGripCollisionType,Z_Param_GripCollisionType); \
		P_GET_ENUM(EGripLateUpdateSettings,Z_Param_GripLateUpdateSetting); \
		P_GET_ENUM(EGripMovementReplicationSettings,Z_Param_GripMovementReplicationSetting); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_GripStiffness); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_GripDamping); \
		P_GET_UBOOL(Z_Param_bIsSlotGrip); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GripActor(Z_Param_ActorToGrip,Z_Param_Out_WorldOffset,Z_Param_bWorldOffsetIsRelative,Z_Param_OptionalSnapToSocketName,Z_Param_OptionalBoneToGripName,EGripCollisionType(Z_Param_GripCollisionType),EGripLateUpdateSettings(Z_Param_GripLateUpdateSetting),EGripMovementReplicationSettings(Z_Param_GripMovementReplicationSetting),Z_Param_GripStiffness,Z_Param_GripDamping,Z_Param_bIsSlotGrip); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDropObjectByInterface) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_ObjectToDrop); \
		P_GET_PROPERTY(UByteProperty,Z_Param_GripIDToDrop); \
		P_GET_STRUCT(FVector,Z_Param_OptionalAngularVelocity); \
		P_GET_STRUCT(FVector,Z_Param_OptionalLinearVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->DropObjectByInterface(Z_Param_ObjectToDrop,Z_Param_GripIDToDrop,Z_Param_OptionalAngularVelocity,Z_Param_OptionalLinearVelocity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGripObjectByInterface) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_ObjectToGrip); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_WorldOffset); \
		P_GET_UBOOL(Z_Param_bWorldOffsetIsRelative); \
		P_GET_PROPERTY(UNameProperty,Z_Param_OptionalBoneToGripName); \
		P_GET_UBOOL(Z_Param_bIsSlotGrip); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GripObjectByInterface(Z_Param_ObjectToGrip,Z_Param_Out_WorldOffset,Z_Param_bWorldOffsetIsRelative,Z_Param_OptionalBoneToGripName,Z_Param_bIsSlotGrip); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDropObject) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_ObjectToDrop); \
		P_GET_PROPERTY(UByteProperty,Z_Param_GripIdToDrop); \
		P_GET_UBOOL(Z_Param_bSimulate); \
		P_GET_STRUCT(FVector,Z_Param_OptionalAngularVelocity); \
		P_GET_STRUCT(FVector,Z_Param_OptionalLinearVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->DropObject(Z_Param_ObjectToDrop,Z_Param_GripIdToDrop,Z_Param_bSimulate,Z_Param_OptionalAngularVelocity,Z_Param_OptionalLinearVelocity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGripObject) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_ObjectToGrip); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_WorldOffset); \
		P_GET_UBOOL(Z_Param_bWorldOffsetIsRelative); \
		P_GET_PROPERTY(UNameProperty,Z_Param_OptionalSnapToSocketName); \
		P_GET_PROPERTY(UNameProperty,Z_Param_OptionalBoneToGripName); \
		P_GET_ENUM(EGripCollisionType,Z_Param_GripCollisionType); \
		P_GET_ENUM(EGripLateUpdateSettings,Z_Param_GripLateUpdateSetting); \
		P_GET_ENUM(EGripMovementReplicationSettings,Z_Param_GripMovementReplicationSetting); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_GripStiffness); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_GripDamping); \
		P_GET_UBOOL(Z_Param_bIsSlotGrip); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GripObject(Z_Param_ObjectToGrip,Z_Param_Out_WorldOffset,Z_Param_bWorldOffsetIsRelative,Z_Param_OptionalSnapToSocketName,Z_Param_OptionalBoneToGripName,EGripCollisionType(Z_Param_GripCollisionType),EGripLateUpdateSettings(Z_Param_GripLateUpdateSetting),EGripMovementReplicationSettings(Z_Param_GripMovementReplicationSetting),Z_Param_GripStiffness,Z_Param_GripDamping,Z_Param_bIsSlotGrip); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSocketTransform) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_ObjectToSocket); \
		P_GET_STRUCT(FTransform_NetQuantize,Z_Param_RelativeTransformToParent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSocketTransform(Z_Param_ObjectToSocket,Z_Param_RelativeTransformToParent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotifyDropAndSocket) \
	{ \
		P_GET_STRUCT(FBPActorGripInformation,Z_Param_NewDrop); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NotifyDropAndSocket_Implementation(Z_Param_NewDrop); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_NotifyDropAndSocketGrip) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_GripID); \
		P_GET_OBJECT(USceneComponent,Z_Param_SocketingParent); \
		P_GET_PROPERTY(UNameProperty,Z_Param_OptionalSocketName); \
		P_GET_STRUCT(FTransform_NetQuantize,Z_Param_RelativeTransformToParent); \
		P_GET_UBOOL(Z_Param_bWeldBodies); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_NotifyDropAndSocketGrip_Validate(Z_Param_GripID,Z_Param_SocketingParent,Z_Param_OptionalSocketName,Z_Param_RelativeTransformToParent,Z_Param_bWeldBodies)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_NotifyDropAndSocketGrip_Validate")); \
			return; \
		} \
		P_THIS->Server_NotifyDropAndSocketGrip_Implementation(Z_Param_GripID,Z_Param_SocketingParent,Z_Param_OptionalSocketName,Z_Param_RelativeTransformToParent,Z_Param_bWeldBodies); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDropAndSocketGrip) \
	{ \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripToDrop); \
		P_GET_OBJECT(USceneComponent,Z_Param_SocketingParent); \
		P_GET_PROPERTY(UNameProperty,Z_Param_OptionalSocketName); \
		P_GET_STRUCT_REF(FTransform_NetQuantize,Z_Param_Out_RelativeTransformToParent); \
		P_GET_UBOOL(Z_Param_bWeldBodies); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->DropAndSocketGrip(Z_Param_Out_GripToDrop,Z_Param_SocketingParent,Z_Param_OptionalSocketName,Z_Param_Out_RelativeTransformToParent,Z_Param_bWeldBodies); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDropAndSocketObject) \
	{ \
		P_GET_STRUCT_REF(FTransform_NetQuantize,Z_Param_Out_RelativeTransformToParent); \
		P_GET_OBJECT(UObject,Z_Param_ObjectToDrop); \
		P_GET_PROPERTY(UByteProperty,Z_Param_GripIDToDrop); \
		P_GET_OBJECT(USceneComponent,Z_Param_SocketingParent); \
		P_GET_PROPERTY(UNameProperty,Z_Param_OptionalSocketName); \
		P_GET_UBOOL(Z_Param_bWeldBodies); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->DropAndSocketObject(Z_Param_Out_RelativeTransformToParent,Z_Param_ObjectToDrop,Z_Param_GripIDToDrop,Z_Param_SocketingParent,Z_Param_OptionalSocketName,Z_Param_bWeldBodies); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_IsLocallyControlled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->BP_IsLocallyControlled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_SendControllerTransform) \
	{ \
		P_GET_STRUCT(FBPVRComponentPosRep,Z_Param_NewTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_SendControllerTransform_Validate(Z_Param_NewTransform)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_SendControllerTransform_Validate")); \
			return; \
		} \
		P_THIS->Server_SendControllerTransform_Implementation(Z_Param_NewTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_ReplicatedControllerTransform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_ReplicatedControllerTransform(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_LocallyGrippedObjects) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_LocallyGrippedObjects(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_GrippedObjects) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_GrippedObjects(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_NotifyLocalGripRemoved) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_GripID); \
		P_GET_STRUCT(FTransform_NetQuantize,Z_Param_TransformAtDrop); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_AngularVelocity); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_LinearVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_NotifyLocalGripRemoved_Validate(Z_Param_GripID,Z_Param_TransformAtDrop,Z_Param_AngularVelocity,Z_Param_LinearVelocity)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_NotifyLocalGripRemoved_Validate")); \
			return; \
		} \
		P_THIS->Server_NotifyLocalGripRemoved_Implementation(Z_Param_GripID,Z_Param_TransformAtDrop,Z_Param_AngularVelocity,Z_Param_LinearVelocity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_NotifySecondaryAttachmentChanged_Retain) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_GripID); \
		P_GET_STRUCT(FBPSecondaryGripInfo,Z_Param_SecondaryGripInfo); \
		P_GET_STRUCT(FTransform_NetQuantize,Z_Param_NewRelativeTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_NotifySecondaryAttachmentChanged_Retain_Validate(Z_Param_GripID,Z_Param_SecondaryGripInfo,Z_Param_NewRelativeTransform)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_NotifySecondaryAttachmentChanged_Retain_Validate")); \
			return; \
		} \
		P_THIS->Server_NotifySecondaryAttachmentChanged_Retain_Implementation(Z_Param_GripID,Z_Param_SecondaryGripInfo,Z_Param_NewRelativeTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_NotifySecondaryAttachmentChanged) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_GripID); \
		P_GET_STRUCT(FBPSecondaryGripInfo,Z_Param_SecondaryGripInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_NotifySecondaryAttachmentChanged_Validate(Z_Param_GripID,Z_Param_SecondaryGripInfo)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_NotifySecondaryAttachmentChanged_Validate")); \
			return; \
		} \
		P_THIS->Server_NotifySecondaryAttachmentChanged_Implementation(Z_Param_GripID,Z_Param_SecondaryGripInfo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_NotifyLocalGripAddedOrChanged) \
	{ \
		P_GET_STRUCT(FBPActorGripInformation,Z_Param_newGrip); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_NotifyLocalGripAddedOrChanged_Validate(Z_Param_newGrip)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_NotifyLocalGripAddedOrChanged_Validate")); \
			return; \
		} \
		P_THIS->Server_NotifyLocalGripAddedOrChanged_Implementation(Z_Param_newGrip); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClient_NotifyInvalidLocalGrip) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_LocallyGrippedObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Client_NotifyInvalidLocalGrip_Validate(Z_Param_LocallyGrippedObject)) \
		{ \
			RPC_ValidateFailed(TEXT("Client_NotifyInvalidLocalGrip_Validate")); \
			return; \
		} \
		P_THIS->Client_NotifyInvalidLocalGrip_Implementation(Z_Param_LocallyGrippedObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCustomPivotComponent) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_NewCustomPivotComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCustomPivotComponent(Z_Param_NewCustomPivotComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHandType) \
	{ \
		P_GET_ENUM_REF(EControllerHand,Z_Param_Out_Hand); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetHandType((EControllerHand&)(Z_Param_Out_Hand)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNewControllerProfileLoaded) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NewControllerProfileLoaded(); \
		P_NATIVE_END; \
	}


#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h_134_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void NotifyDrop_Implementation(FBPActorGripInformation const& NewDrop, bool bSimulate); \
	virtual void NotifyDropAndSocket_Implementation(FBPActorGripInformation const& NewDrop); \
	virtual bool Server_NotifyDropAndSocketGrip_Validate(uint8 , USceneComponent* , FName , FTransform_NetQuantize const& , bool ); \
	virtual void Server_NotifyDropAndSocketGrip_Implementation(uint8 GripID, USceneComponent* SocketingParent, FName OptionalSocketName, FTransform_NetQuantize const& RelativeTransformToParent, bool bWeldBodies); \
	virtual bool Server_SendControllerTransform_Validate(FBPVRComponentPosRep ); \
	virtual void Server_SendControllerTransform_Implementation(FBPVRComponentPosRep NewTransform); \
	virtual bool Server_NotifyLocalGripRemoved_Validate(uint8 , FTransform_NetQuantize const& , FVector_NetQuantize100 , FVector_NetQuantize100 ); \
	virtual void Server_NotifyLocalGripRemoved_Implementation(uint8 GripID, FTransform_NetQuantize const& TransformAtDrop, FVector_NetQuantize100 AngularVelocity, FVector_NetQuantize100 LinearVelocity); \
	virtual bool Server_NotifySecondaryAttachmentChanged_Retain_Validate(uint8 , FBPSecondaryGripInfo const& , FTransform_NetQuantize const& ); \
	virtual void Server_NotifySecondaryAttachmentChanged_Retain_Implementation(uint8 GripID, FBPSecondaryGripInfo const& SecondaryGripInfo, FTransform_NetQuantize const& NewRelativeTransform); \
	virtual bool Server_NotifySecondaryAttachmentChanged_Validate(uint8 , FBPSecondaryGripInfo const& ); \
	virtual void Server_NotifySecondaryAttachmentChanged_Implementation(uint8 GripID, FBPSecondaryGripInfo const& SecondaryGripInfo); \
	virtual bool Server_NotifyLocalGripAddedOrChanged_Validate(FBPActorGripInformation const& ); \
	virtual void Server_NotifyLocalGripAddedOrChanged_Implementation(FBPActorGripInformation const& newGrip); \
	virtual bool Client_NotifyInvalidLocalGrip_Validate(UObject* ); \
	virtual void Client_NotifyInvalidLocalGrip_Implementation(UObject* LocallyGrippedObject); \
 \
	DECLARE_FUNCTION(execGetControllerDeviceID) \
	{ \
		P_GET_STRUCT_REF(FXRDeviceId,Z_Param_Out_DeviceID); \
		P_GET_ENUM_REF(EBPVRResultSwitch,Z_Param_Out_Result); \
		P_GET_UBOOL(Z_Param_bCheckOpenVROnly); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetControllerDeviceID(Z_Param_Out_DeviceID,(EBPVRResultSwitch&)(Z_Param_Out_Result),Z_Param_bCheckOpenVROnly); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGripControllerIsTracked) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GripControllerIsTracked(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGripDistance_BP) \
	{ \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip); \
		P_GET_STRUCT(FVector,Z_Param_ExpectedLocation); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_CurrentDistance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetGripDistance_BP(Z_Param_Out_Grip,Z_Param_ExpectedLocation,Z_Param_Out_CurrentDistance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdatePhysicsHandleTransform_BP) \
	{ \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GrippedActor); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_NewTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdatePhysicsHandleTransform_BP(Z_Param_Out_GrippedActor,Z_Param_Out_NewTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDestroyPhysicsHandle_BP) \
	{ \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->DestroyPhysicsHandle_BP(Z_Param_Out_Grip); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetUpPhysicsHandle_BP) \
	{ \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_NewGrip); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SetUpPhysicsHandle_BP(Z_Param_Out_NewGrip); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveSecondaryAttachmentFromGrip) \
	{ \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripToRemoveAttachment); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_LerpToTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->RemoveSecondaryAttachmentFromGrip(Z_Param_Out_GripToRemoveAttachment,Z_Param_LerpToTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveSecondaryAttachmentPoint) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_GrippedObjectToRemoveAttachment); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_LerpToTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->RemoveSecondaryAttachmentPoint(Z_Param_GrippedObjectToRemoveAttachment,Z_Param_LerpToTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddSecondaryAttachmentToGrip) \
	{ \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripToAddAttachment); \
		P_GET_OBJECT(USceneComponent,Z_Param_SecondaryPointComponent); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_OriginalTransform); \
		P_GET_UBOOL(Z_Param_bTransformIsAlreadyRelative); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_LerpToTime); \
		P_GET_UBOOL(Z_Param_bIsSlotGrip); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->AddSecondaryAttachmentToGrip(Z_Param_Out_GripToAddAttachment,Z_Param_SecondaryPointComponent,Z_Param_Out_OriginalTransform,Z_Param_bTransformIsAlreadyRelative,Z_Param_LerpToTime,Z_Param_bIsSlotGrip); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddSecondaryAttachmentPoint) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_GrippedObjectToAddAttachment); \
		P_GET_OBJECT(USceneComponent,Z_Param_SecondaryPointComponent); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_OriginalTransform); \
		P_GET_UBOOL(Z_Param_bTransformIsAlreadyRelative); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_LerpToTime); \
		P_GET_UBOOL(Z_Param_bIsSlotGrip); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->AddSecondaryAttachmentPoint(Z_Param_GrippedObjectToAddAttachment,Z_Param_SecondaryPointComponent,Z_Param_Out_OriginalTransform,Z_Param_bTransformIsAlreadyRelative,Z_Param_LerpToTime,Z_Param_bIsSlotGrip); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTeleportMoveGrip) \
	{ \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip); \
		P_GET_UBOOL(Z_Param_bTeleportPhysicsGrips); \
		P_GET_UBOOL(Z_Param_bIsForPostTeleport); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->TeleportMoveGrip(Z_Param_Out_Grip,Z_Param_bTeleportPhysicsGrips,Z_Param_bIsForPostTeleport); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTeleportMoveGrippedComponent) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ComponentToMove); \
		P_GET_UBOOL(Z_Param_bTeleportPhysicsGrips); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->TeleportMoveGrippedComponent(Z_Param_ComponentToMove,Z_Param_bTeleportPhysicsGrips); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTeleportMoveGrippedActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_GrippedActorToMove); \
		P_GET_UBOOL(Z_Param_bTeleportPhysicsGrips); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->TeleportMoveGrippedActor(Z_Param_GrippedActorToMove,Z_Param_bTeleportPhysicsGrips); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPostTeleportMoveGrippedObjects) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PostTeleportMoveGrippedObjects(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGrippedComponents) \
	{ \
		P_GET_TARRAY_REF(UPrimitiveComponent*,Z_Param_Out_GrippedComponentsArray); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetGrippedComponents(Z_Param_Out_GrippedComponentsArray); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGrippedObjects) \
	{ \
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_GrippedObjectsArray); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetGrippedObjects(Z_Param_Out_GrippedObjectsArray); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGrippedActors) \
	{ \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_GrippedActorArray); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetGrippedActors(Z_Param_Out_GrippedActorArray); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllGrips) \
	{ \
		P_GET_TARRAY_REF(FBPActorGripInformation,Z_Param_Out_GripArray); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetAllGrips(Z_Param_Out_GripArray); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasGrippedObjects) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasGrippedObjects(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsSecondaryAttachment) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_ComponentToCheck); \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetIsSecondaryAttachment(Z_Param_ComponentToCheck,Z_Param_Out_Grip); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsComponentHeld) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ComponentToCheck); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetIsComponentHeld(Z_Param_ComponentToCheck); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsHeld) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_ActorToCheck); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetIsHeld(Z_Param_ActorToCheck); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsObjectHeld) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_ObjectToCheck); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetIsObjectHeld(Z_Param_ObjectToCheck); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConvertToGripRelativeTransform) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_GrippedActorTransform); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_InTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=UGripMotionControllerComponent::ConvertToGripRelativeTransform(Z_Param_Out_GrippedActorTransform,Z_Param_Out_InTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConvertToControllerRelativeTransform) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_InTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=P_THIS->ConvertToControllerRelativeTransform(Z_Param_Out_InTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_HasGripMovementAuthority) \
	{ \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->BP_HasGripMovementAuthority(Z_Param_Out_Grip); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_HasGripAuthority) \
	{ \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->BP_HasGripAuthority(Z_Param_Out_Grip); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateGripRelativeAdditionTransform_BP) \
	{ \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripToSample); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_AdditionTransform); \
		P_GET_UBOOL(Z_Param_bGripRelative); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=P_THIS->CreateGripRelativeAdditionTransform_BP(Z_Param_Out_GripToSample,Z_Param_Out_AdditionTransform,Z_Param_bGripRelative); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGripStiffnessAndDamping) \
	{ \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip); \
		P_GET_ENUM_REF(EBPVRResultSwitch,Z_Param_Out_Result); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewStiffness); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewDamping); \
		P_GET_UBOOL(Z_Param_bAlsoSetAngularValues); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_OptionalAngularStiffness); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_OptionalAngularDamping); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGripStiffnessAndDamping(Z_Param_Out_Grip,(EBPVRResultSwitch&)(Z_Param_Out_Result),Z_Param_NewStiffness,Z_Param_NewDamping,Z_Param_bAlsoSetAngularValues,Z_Param_OptionalAngularStiffness,Z_Param_OptionalAngularDamping); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGripAdditionTransform) \
	{ \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip); \
		P_GET_ENUM_REF(EBPVRResultSwitch,Z_Param_Out_Result); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_NewAdditionTransform); \
		P_GET_UBOOL(Z_Param_bMakeGripRelative); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGripAdditionTransform(Z_Param_Out_Grip,(EBPVRResultSwitch&)(Z_Param_Out_Result),Z_Param_Out_NewAdditionTransform,Z_Param_bMakeGripRelative); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGripRelativeTransform) \
	{ \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip); \
		P_GET_ENUM_REF(EBPVRResultSwitch,Z_Param_Out_Result); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_NewRelativeTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGripRelativeTransform(Z_Param_Out_Grip,(EBPVRResultSwitch&)(Z_Param_Out_Result),Z_Param_Out_NewRelativeTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGripLateUpdateSetting) \
	{ \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip); \
		P_GET_ENUM_REF(EBPVRResultSwitch,Z_Param_Out_Result); \
		P_GET_ENUM(EGripLateUpdateSettings,Z_Param_NewGripLateUpdateSetting); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGripLateUpdateSetting(Z_Param_Out_Grip,(EBPVRResultSwitch&)(Z_Param_Out_Result),EGripLateUpdateSettings(Z_Param_NewGripLateUpdateSetting)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGripCollisionType) \
	{ \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip); \
		P_GET_ENUM_REF(EBPVRResultSwitch,Z_Param_Out_Result); \
		P_GET_ENUM(EGripCollisionType,Z_Param_NewGripCollisionType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGripCollisionType(Z_Param_Out_Grip,(EBPVRResultSwitch&)(Z_Param_Out_Result),EGripCollisionType(Z_Param_NewGripCollisionType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPausedTransform) \
	{ \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_PausedTransform); \
		P_GET_UBOOL(Z_Param_bTeleport); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPausedTransform(Z_Param_Out_Grip,Z_Param_Out_PausedTransform,Z_Param_bTeleport); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGripPaused) \
	{ \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip); \
		P_GET_ENUM_REF(EBPVRResultSwitch,Z_Param_Out_Result); \
		P_GET_UBOOL(Z_Param_bIsPaused); \
		P_GET_UBOOL(Z_Param_bNoConstraintWhenPaused); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGripPaused(Z_Param_Out_Grip,(EBPVRResultSwitch&)(Z_Param_Out_Result),Z_Param_bIsPaused,Z_Param_bNoConstraintWhenPaused); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPhysicsVelocities) \
	{ \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_AngularVelocity); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LinearVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetPhysicsVelocities(Z_Param_Out_Grip,Z_Param_Out_AngularVelocity,Z_Param_Out_LinearVelocity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGripByID) \
	{ \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip); \
		P_GET_PROPERTY(UByteProperty,Z_Param_IDToLookForGrip); \
		P_GET_ENUM_REF(EBPVRResultSwitch,Z_Param_Out_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetGripByID(Z_Param_Out_Grip,Z_Param_IDToLookForGrip,(EBPVRResultSwitch&)(Z_Param_Out_Result)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGripByObject) \
	{ \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip); \
		P_GET_OBJECT(UObject,Z_Param_ObjectToLookForGrip); \
		P_GET_ENUM_REF(EBPVRResultSwitch,Z_Param_Out_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetGripByObject(Z_Param_Out_Grip,Z_Param_ObjectToLookForGrip,(EBPVRResultSwitch&)(Z_Param_Out_Result)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGripByComponent) \
	{ \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ComponentToLookForGrip); \
		P_GET_ENUM_REF(EBPVRResultSwitch,Z_Param_Out_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetGripByComponent(Z_Param_Out_Grip,Z_Param_ComponentToLookForGrip,(EBPVRResultSwitch&)(Z_Param_Out_Result)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGripByActor) \
	{ \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip); \
		P_GET_OBJECT(AActor,Z_Param_ActorToLookForGrip); \
		P_GET_ENUM_REF(EBPVRResultSwitch,Z_Param_Out_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetGripByActor(Z_Param_Out_Grip,Z_Param_ActorToLookForGrip,(EBPVRResultSwitch&)(Z_Param_Out_Result)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotifyDrop) \
	{ \
		P_GET_STRUCT(FBPActorGripInformation,Z_Param_NewDrop); \
		P_GET_UBOOL(Z_Param_bSimulate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NotifyDrop_Implementation(Z_Param_NewDrop,Z_Param_bSimulate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDropGrip) \
	{ \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip); \
		P_GET_UBOOL(Z_Param_bSimulate); \
		P_GET_STRUCT(FVector,Z_Param_OptionalAngularVelocity); \
		P_GET_STRUCT(FVector,Z_Param_OptionalLinearVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->DropGrip(Z_Param_Out_Grip,Z_Param_bSimulate,Z_Param_OptionalAngularVelocity,Z_Param_OptionalLinearVelocity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDropComponent) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ComponentToDrop); \
		P_GET_UBOOL(Z_Param_bSimulate); \
		P_GET_STRUCT(FVector,Z_Param_OptionalAngularVelocity); \
		P_GET_STRUCT(FVector,Z_Param_OptionalLinearVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->DropComponent(Z_Param_ComponentToDrop,Z_Param_bSimulate,Z_Param_OptionalAngularVelocity,Z_Param_OptionalLinearVelocity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGripComponent) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ComponentToGrip); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_WorldOffset); \
		P_GET_UBOOL(Z_Param_bWorldOffsetIsRelative); \
		P_GET_PROPERTY(UNameProperty,Z_Param_OptionalBoneToGrip_Name); \
		P_GET_PROPERTY(UNameProperty,Z_Param_OptionalBoneToGripName); \
		P_GET_ENUM(EGripCollisionType,Z_Param_GripCollisionType); \
		P_GET_ENUM(EGripLateUpdateSettings,Z_Param_GripLateUpdateSetting); \
		P_GET_ENUM(EGripMovementReplicationSettings,Z_Param_GripMovementReplicationSetting); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_GripStiffness); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_GripDamping); \
		P_GET_UBOOL(Z_Param_bIsSlotGrip); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GripComponent(Z_Param_ComponentToGrip,Z_Param_Out_WorldOffset,Z_Param_bWorldOffsetIsRelative,Z_Param_OptionalBoneToGrip_Name,Z_Param_OptionalBoneToGripName,EGripCollisionType(Z_Param_GripCollisionType),EGripLateUpdateSettings(Z_Param_GripLateUpdateSetting),EGripMovementReplicationSettings(Z_Param_GripMovementReplicationSetting),Z_Param_GripStiffness,Z_Param_GripDamping,Z_Param_bIsSlotGrip); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDropActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_ActorToDrop); \
		P_GET_UBOOL(Z_Param_bSimulate); \
		P_GET_STRUCT(FVector,Z_Param_OptionalAngularVelocity); \
		P_GET_STRUCT(FVector,Z_Param_OptionalLinearVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->DropActor(Z_Param_ActorToDrop,Z_Param_bSimulate,Z_Param_OptionalAngularVelocity,Z_Param_OptionalLinearVelocity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGripActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_ActorToGrip); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_WorldOffset); \
		P_GET_UBOOL(Z_Param_bWorldOffsetIsRelative); \
		P_GET_PROPERTY(UNameProperty,Z_Param_OptionalSnapToSocketName); \
		P_GET_PROPERTY(UNameProperty,Z_Param_OptionalBoneToGripName); \
		P_GET_ENUM(EGripCollisionType,Z_Param_GripCollisionType); \
		P_GET_ENUM(EGripLateUpdateSettings,Z_Param_GripLateUpdateSetting); \
		P_GET_ENUM(EGripMovementReplicationSettings,Z_Param_GripMovementReplicationSetting); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_GripStiffness); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_GripDamping); \
		P_GET_UBOOL(Z_Param_bIsSlotGrip); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GripActor(Z_Param_ActorToGrip,Z_Param_Out_WorldOffset,Z_Param_bWorldOffsetIsRelative,Z_Param_OptionalSnapToSocketName,Z_Param_OptionalBoneToGripName,EGripCollisionType(Z_Param_GripCollisionType),EGripLateUpdateSettings(Z_Param_GripLateUpdateSetting),EGripMovementReplicationSettings(Z_Param_GripMovementReplicationSetting),Z_Param_GripStiffness,Z_Param_GripDamping,Z_Param_bIsSlotGrip); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDropObjectByInterface) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_ObjectToDrop); \
		P_GET_PROPERTY(UByteProperty,Z_Param_GripIDToDrop); \
		P_GET_STRUCT(FVector,Z_Param_OptionalAngularVelocity); \
		P_GET_STRUCT(FVector,Z_Param_OptionalLinearVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->DropObjectByInterface(Z_Param_ObjectToDrop,Z_Param_GripIDToDrop,Z_Param_OptionalAngularVelocity,Z_Param_OptionalLinearVelocity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGripObjectByInterface) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_ObjectToGrip); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_WorldOffset); \
		P_GET_UBOOL(Z_Param_bWorldOffsetIsRelative); \
		P_GET_PROPERTY(UNameProperty,Z_Param_OptionalBoneToGripName); \
		P_GET_UBOOL(Z_Param_bIsSlotGrip); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GripObjectByInterface(Z_Param_ObjectToGrip,Z_Param_Out_WorldOffset,Z_Param_bWorldOffsetIsRelative,Z_Param_OptionalBoneToGripName,Z_Param_bIsSlotGrip); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDropObject) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_ObjectToDrop); \
		P_GET_PROPERTY(UByteProperty,Z_Param_GripIdToDrop); \
		P_GET_UBOOL(Z_Param_bSimulate); \
		P_GET_STRUCT(FVector,Z_Param_OptionalAngularVelocity); \
		P_GET_STRUCT(FVector,Z_Param_OptionalLinearVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->DropObject(Z_Param_ObjectToDrop,Z_Param_GripIdToDrop,Z_Param_bSimulate,Z_Param_OptionalAngularVelocity,Z_Param_OptionalLinearVelocity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGripObject) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_ObjectToGrip); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_WorldOffset); \
		P_GET_UBOOL(Z_Param_bWorldOffsetIsRelative); \
		P_GET_PROPERTY(UNameProperty,Z_Param_OptionalSnapToSocketName); \
		P_GET_PROPERTY(UNameProperty,Z_Param_OptionalBoneToGripName); \
		P_GET_ENUM(EGripCollisionType,Z_Param_GripCollisionType); \
		P_GET_ENUM(EGripLateUpdateSettings,Z_Param_GripLateUpdateSetting); \
		P_GET_ENUM(EGripMovementReplicationSettings,Z_Param_GripMovementReplicationSetting); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_GripStiffness); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_GripDamping); \
		P_GET_UBOOL(Z_Param_bIsSlotGrip); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GripObject(Z_Param_ObjectToGrip,Z_Param_Out_WorldOffset,Z_Param_bWorldOffsetIsRelative,Z_Param_OptionalSnapToSocketName,Z_Param_OptionalBoneToGripName,EGripCollisionType(Z_Param_GripCollisionType),EGripLateUpdateSettings(Z_Param_GripLateUpdateSetting),EGripMovementReplicationSettings(Z_Param_GripMovementReplicationSetting),Z_Param_GripStiffness,Z_Param_GripDamping,Z_Param_bIsSlotGrip); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSocketTransform) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_ObjectToSocket); \
		P_GET_STRUCT(FTransform_NetQuantize,Z_Param_RelativeTransformToParent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSocketTransform(Z_Param_ObjectToSocket,Z_Param_RelativeTransformToParent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotifyDropAndSocket) \
	{ \
		P_GET_STRUCT(FBPActorGripInformation,Z_Param_NewDrop); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NotifyDropAndSocket_Implementation(Z_Param_NewDrop); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_NotifyDropAndSocketGrip) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_GripID); \
		P_GET_OBJECT(USceneComponent,Z_Param_SocketingParent); \
		P_GET_PROPERTY(UNameProperty,Z_Param_OptionalSocketName); \
		P_GET_STRUCT(FTransform_NetQuantize,Z_Param_RelativeTransformToParent); \
		P_GET_UBOOL(Z_Param_bWeldBodies); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_NotifyDropAndSocketGrip_Validate(Z_Param_GripID,Z_Param_SocketingParent,Z_Param_OptionalSocketName,Z_Param_RelativeTransformToParent,Z_Param_bWeldBodies)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_NotifyDropAndSocketGrip_Validate")); \
			return; \
		} \
		P_THIS->Server_NotifyDropAndSocketGrip_Implementation(Z_Param_GripID,Z_Param_SocketingParent,Z_Param_OptionalSocketName,Z_Param_RelativeTransformToParent,Z_Param_bWeldBodies); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDropAndSocketGrip) \
	{ \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripToDrop); \
		P_GET_OBJECT(USceneComponent,Z_Param_SocketingParent); \
		P_GET_PROPERTY(UNameProperty,Z_Param_OptionalSocketName); \
		P_GET_STRUCT_REF(FTransform_NetQuantize,Z_Param_Out_RelativeTransformToParent); \
		P_GET_UBOOL(Z_Param_bWeldBodies); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->DropAndSocketGrip(Z_Param_Out_GripToDrop,Z_Param_SocketingParent,Z_Param_OptionalSocketName,Z_Param_Out_RelativeTransformToParent,Z_Param_bWeldBodies); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDropAndSocketObject) \
	{ \
		P_GET_STRUCT_REF(FTransform_NetQuantize,Z_Param_Out_RelativeTransformToParent); \
		P_GET_OBJECT(UObject,Z_Param_ObjectToDrop); \
		P_GET_PROPERTY(UByteProperty,Z_Param_GripIDToDrop); \
		P_GET_OBJECT(USceneComponent,Z_Param_SocketingParent); \
		P_GET_PROPERTY(UNameProperty,Z_Param_OptionalSocketName); \
		P_GET_UBOOL(Z_Param_bWeldBodies); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->DropAndSocketObject(Z_Param_Out_RelativeTransformToParent,Z_Param_ObjectToDrop,Z_Param_GripIDToDrop,Z_Param_SocketingParent,Z_Param_OptionalSocketName,Z_Param_bWeldBodies); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_IsLocallyControlled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->BP_IsLocallyControlled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_SendControllerTransform) \
	{ \
		P_GET_STRUCT(FBPVRComponentPosRep,Z_Param_NewTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_SendControllerTransform_Validate(Z_Param_NewTransform)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_SendControllerTransform_Validate")); \
			return; \
		} \
		P_THIS->Server_SendControllerTransform_Implementation(Z_Param_NewTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_ReplicatedControllerTransform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_ReplicatedControllerTransform(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_LocallyGrippedObjects) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_LocallyGrippedObjects(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_GrippedObjects) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_GrippedObjects(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_NotifyLocalGripRemoved) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_GripID); \
		P_GET_STRUCT(FTransform_NetQuantize,Z_Param_TransformAtDrop); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_AngularVelocity); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_LinearVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_NotifyLocalGripRemoved_Validate(Z_Param_GripID,Z_Param_TransformAtDrop,Z_Param_AngularVelocity,Z_Param_LinearVelocity)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_NotifyLocalGripRemoved_Validate")); \
			return; \
		} \
		P_THIS->Server_NotifyLocalGripRemoved_Implementation(Z_Param_GripID,Z_Param_TransformAtDrop,Z_Param_AngularVelocity,Z_Param_LinearVelocity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_NotifySecondaryAttachmentChanged_Retain) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_GripID); \
		P_GET_STRUCT(FBPSecondaryGripInfo,Z_Param_SecondaryGripInfo); \
		P_GET_STRUCT(FTransform_NetQuantize,Z_Param_NewRelativeTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_NotifySecondaryAttachmentChanged_Retain_Validate(Z_Param_GripID,Z_Param_SecondaryGripInfo,Z_Param_NewRelativeTransform)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_NotifySecondaryAttachmentChanged_Retain_Validate")); \
			return; \
		} \
		P_THIS->Server_NotifySecondaryAttachmentChanged_Retain_Implementation(Z_Param_GripID,Z_Param_SecondaryGripInfo,Z_Param_NewRelativeTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_NotifySecondaryAttachmentChanged) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_GripID); \
		P_GET_STRUCT(FBPSecondaryGripInfo,Z_Param_SecondaryGripInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_NotifySecondaryAttachmentChanged_Validate(Z_Param_GripID,Z_Param_SecondaryGripInfo)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_NotifySecondaryAttachmentChanged_Validate")); \
			return; \
		} \
		P_THIS->Server_NotifySecondaryAttachmentChanged_Implementation(Z_Param_GripID,Z_Param_SecondaryGripInfo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_NotifyLocalGripAddedOrChanged) \
	{ \
		P_GET_STRUCT(FBPActorGripInformation,Z_Param_newGrip); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_NotifyLocalGripAddedOrChanged_Validate(Z_Param_newGrip)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_NotifyLocalGripAddedOrChanged_Validate")); \
			return; \
		} \
		P_THIS->Server_NotifyLocalGripAddedOrChanged_Implementation(Z_Param_newGrip); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClient_NotifyInvalidLocalGrip) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_LocallyGrippedObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Client_NotifyInvalidLocalGrip_Validate(Z_Param_LocallyGrippedObject)) \
		{ \
			RPC_ValidateFailed(TEXT("Client_NotifyInvalidLocalGrip_Validate")); \
			return; \
		} \
		P_THIS->Client_NotifyInvalidLocalGrip_Implementation(Z_Param_LocallyGrippedObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCustomPivotComponent) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_NewCustomPivotComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCustomPivotComponent(Z_Param_NewCustomPivotComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHandType) \
	{ \
		P_GET_ENUM_REF(EControllerHand,Z_Param_Out_Hand); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetHandType((EControllerHand&)(Z_Param_Out_Hand)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNewControllerProfileLoaded) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NewControllerProfileLoaded(); \
		P_NATIVE_END; \
	}


#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h_134_EVENT_PARMS \
	struct GripMotionControllerComponent_eventClient_NotifyInvalidLocalGrip_Parms \
	{ \
		UObject* LocallyGrippedObject; \
	}; \
	struct GripMotionControllerComponent_eventNotifyDrop_Parms \
	{ \
		FBPActorGripInformation NewDrop; \
		bool bSimulate; \
	}; \
	struct GripMotionControllerComponent_eventNotifyDropAndSocket_Parms \
	{ \
		FBPActorGripInformation NewDrop; \
	}; \
	struct GripMotionControllerComponent_eventServer_NotifyDropAndSocketGrip_Parms \
	{ \
		uint8 GripID; \
		USceneComponent* SocketingParent; \
		FName OptionalSocketName; \
		FTransform_NetQuantize RelativeTransformToParent; \
		bool bWeldBodies; \
	}; \
	struct GripMotionControllerComponent_eventServer_NotifyLocalGripAddedOrChanged_Parms \
	{ \
		FBPActorGripInformation newGrip; \
	}; \
	struct GripMotionControllerComponent_eventServer_NotifyLocalGripRemoved_Parms \
	{ \
		uint8 GripID; \
		FTransform_NetQuantize TransformAtDrop; \
		FVector_NetQuantize100 AngularVelocity; \
		FVector_NetQuantize100 LinearVelocity; \
	}; \
	struct GripMotionControllerComponent_eventServer_NotifySecondaryAttachmentChanged_Parms \
	{ \
		uint8 GripID; \
		FBPSecondaryGripInfo SecondaryGripInfo; \
	}; \
	struct GripMotionControllerComponent_eventServer_NotifySecondaryAttachmentChanged_Retain_Parms \
	{ \
		uint8 GripID; \
		FBPSecondaryGripInfo SecondaryGripInfo; \
		FTransform_NetQuantize NewRelativeTransform; \
	}; \
	struct GripMotionControllerComponent_eventServer_SendControllerTransform_Parms \
	{ \
		FBPVRComponentPosRep NewTransform; \
	};


#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h_134_CALLBACK_WRAPPERS
#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h_134_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGripMotionControllerComponent(); \
	friend struct Z_Construct_UClass_UGripMotionControllerComponent_Statics; \
public: \
	DECLARE_CLASS(UGripMotionControllerComponent, UMotionControllerComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UGripMotionControllerComponent) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h_134_INCLASS \
private: \
	static void StaticRegisterNativesUGripMotionControllerComponent(); \
	friend struct Z_Construct_UClass_UGripMotionControllerComponent_Statics; \
public: \
	DECLARE_CLASS(UGripMotionControllerComponent, UMotionControllerComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UGripMotionControllerComponent) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h_134_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGripMotionControllerComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGripMotionControllerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGripMotionControllerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGripMotionControllerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGripMotionControllerComponent(UGripMotionControllerComponent&&); \
	NO_API UGripMotionControllerComponent(const UGripMotionControllerComponent&); \
public:


#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h_134_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGripMotionControllerComponent(UGripMotionControllerComponent&&); \
	NO_API UGripMotionControllerComponent(const UGripMotionControllerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGripMotionControllerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGripMotionControllerComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGripMotionControllerComponent)


#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h_134_PRIVATE_PROPERTY_OFFSET
#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h_90_PROLOG \
	VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h_134_EVENT_PARMS


#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h_134_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h_134_PRIVATE_PROPERTY_OFFSET \
	VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h_134_RPC_WRAPPERS \
	VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h_134_CALLBACK_WRAPPERS \
	VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h_134_INCLASS \
	VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h_134_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h_134_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h_134_PRIVATE_PROPERTY_OFFSET \
	VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h_134_RPC_WRAPPERS_NO_PURE_DECLS \
	VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h_134_CALLBACK_WRAPPERS \
	VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h_134_INCLASS_NO_PURE_DECLS \
	VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h_134_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREXPANSIONPLUGIN_API UClass* StaticClass<class UGripMotionControllerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
