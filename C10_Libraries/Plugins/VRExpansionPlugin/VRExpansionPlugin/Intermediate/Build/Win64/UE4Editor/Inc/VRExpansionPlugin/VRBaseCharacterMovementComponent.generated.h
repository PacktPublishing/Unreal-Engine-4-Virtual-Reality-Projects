// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class UPrimitiveComponent;
enum class EVRConjoinedMovementModes : uint8;
enum class EVRMoveAction : uint8;
enum class EVRMoveActionDataReq : uint8;
struct FRotator;
#ifdef VREXPANSIONPLUGIN_VRBaseCharacterMovementComponent_generated_h
#error "VRBaseCharacterMovementComponent.generated.h already included, missing '#pragma once' in VRBaseCharacterMovementComponent.h"
#endif
#define VREXPANSIONPLUGIN_VRBaseCharacterMovementComponent_generated_h

#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_314_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<struct FVRConditionalMoveRep2>();

#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_251_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<struct FVRConditionalMoveRep>();

#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_178_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVRMoveActionArray_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<struct FVRMoveActionArray>();

#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_69_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<struct FVRMoveActionContainer>();

#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_15_DELEGATE \
struct _Script_VRExpansionPlugin_eventVROnPerformClimbingStepUp_Parms \
{ \
	FVector FinalStepUpLocation; \
}; \
static inline void FVROnPerformClimbingStepUp_DelegateWrapper(const FMulticastScriptDelegate& VROnPerformClimbingStepUp, FVector FinalStepUpLocation) \
{ \
	_Script_VRExpansionPlugin_eventVROnPerformClimbingStepUp_Parms Parms; \
	Parms.FinalStepUpLocation=FinalStepUpLocation; \
	VROnPerformClimbingStepUp.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_567_RPC_WRAPPERS \
	virtual void ClientVeryShortAdjustPosition_Implementation(float TimeStamp, FVector NewLoc, UPrimitiveComponent* NewBase, FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode); \
	virtual void ClientAdjustPosition_Implementation(float TimeStamp, FVector NewLoc, FVector NewVel, UPrimitiveComponent* NewBase, FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode); \
 \
	DECLARE_FUNCTION(execClientVeryShortAdjustPosition) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_GET_STRUCT(FVector,Z_Param_NewLoc); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_NewBase); \
		P_GET_PROPERTY(UNameProperty,Z_Param_NewBaseBoneName); \
		P_GET_UBOOL(Z_Param_bHasBase); \
		P_GET_UBOOL(Z_Param_bBaseRelativePosition); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ServerMovementMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClientVeryShortAdjustPosition_Implementation(Z_Param_TimeStamp,Z_Param_NewLoc,Z_Param_NewBase,Z_Param_NewBaseBoneName,Z_Param_bHasBase,Z_Param_bBaseRelativePosition,Z_Param_ServerMovementMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientAdjustPosition) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_GET_STRUCT(FVector,Z_Param_NewLoc); \
		P_GET_STRUCT(FVector,Z_Param_NewVel); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_NewBase); \
		P_GET_PROPERTY(UNameProperty,Z_Param_NewBaseBoneName); \
		P_GET_UBOOL(Z_Param_bHasBase); \
		P_GET_UBOOL(Z_Param_bBaseRelativePosition); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ServerMovementMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClientAdjustPosition_Implementation(Z_Param_TimeStamp,Z_Param_NewLoc,Z_Param_NewVel,Z_Param_NewBase,Z_Param_NewBaseBoneName,Z_Param_bHasBase,Z_Param_bBaseRelativePosition,Z_Param_ServerMovementMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetReplicatedMovementMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EVRConjoinedMovementModes*)Z_Param__Result=P_THIS->GetReplicatedMovementMode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetReplicatedMovementMode) \
	{ \
		P_GET_ENUM(EVRConjoinedMovementModes,Z_Param_NewMovementMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetReplicatedMovementMode(EVRConjoinedMovementModes(Z_Param_NewMovementMode)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetClimbingMode) \
	{ \
		P_GET_UBOOL(Z_Param_bIsClimbing); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetClimbingMode(Z_Param_bIsClimbing); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCustomInputVector) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetCustomInputVector(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRewindVRMovement) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->RewindVRMovement(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPerformMoveAction_Custom) \
	{ \
		P_GET_ENUM(EVRMoveAction,Z_Param_MoveActionToPerform); \
		P_GET_ENUM(EVRMoveActionDataReq,Z_Param_DataRequirementsForMoveAction); \
		P_GET_STRUCT(FVector,Z_Param_MoveActionVector); \
		P_GET_STRUCT(FRotator,Z_Param_MoveActionRotator); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PerformMoveAction_Custom(EVRMoveAction(Z_Param_MoveActionToPerform),EVRMoveActionDataReq(Z_Param_DataRequirementsForMoveAction),Z_Param_MoveActionVector,Z_Param_MoveActionRotator); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPerformMoveAction_StopAllMovement) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PerformMoveAction_StopAllMovement(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPerformMoveAction_Teleport) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_TeleportLocation); \
		P_GET_STRUCT(FRotator,Z_Param_TeleportRotation); \
		P_GET_UBOOL(Z_Param_bSkipEncroachmentCheck); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PerformMoveAction_Teleport(Z_Param_TeleportLocation,Z_Param_TeleportRotation,Z_Param_bSkipEncroachmentCheck); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPerformMoveAction_SetRotation) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewYaw); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PerformMoveAction_SetRotation(Z_Param_NewYaw); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPerformMoveAction_SnapTurn) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SnapTurnDeltaYaw); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PerformMoveAction_SnapTurn(Z_Param_SnapTurnDeltaYaw); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddCustomReplicatedMovement) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Movement); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddCustomReplicatedMovement(Z_Param_Movement); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCrouchedHalfHeight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewCrouchedHalfHeight); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCrouchedHalfHeight(Z_Param_NewCrouchedHalfHeight); \
		P_NATIVE_END; \
	}


#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_567_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClientVeryShortAdjustPosition) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_GET_STRUCT(FVector,Z_Param_NewLoc); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_NewBase); \
		P_GET_PROPERTY(UNameProperty,Z_Param_NewBaseBoneName); \
		P_GET_UBOOL(Z_Param_bHasBase); \
		P_GET_UBOOL(Z_Param_bBaseRelativePosition); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ServerMovementMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClientVeryShortAdjustPosition_Implementation(Z_Param_TimeStamp,Z_Param_NewLoc,Z_Param_NewBase,Z_Param_NewBaseBoneName,Z_Param_bHasBase,Z_Param_bBaseRelativePosition,Z_Param_ServerMovementMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientAdjustPosition) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_GET_STRUCT(FVector,Z_Param_NewLoc); \
		P_GET_STRUCT(FVector,Z_Param_NewVel); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_NewBase); \
		P_GET_PROPERTY(UNameProperty,Z_Param_NewBaseBoneName); \
		P_GET_UBOOL(Z_Param_bHasBase); \
		P_GET_UBOOL(Z_Param_bBaseRelativePosition); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ServerMovementMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClientAdjustPosition_Implementation(Z_Param_TimeStamp,Z_Param_NewLoc,Z_Param_NewVel,Z_Param_NewBase,Z_Param_NewBaseBoneName,Z_Param_bHasBase,Z_Param_bBaseRelativePosition,Z_Param_ServerMovementMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetReplicatedMovementMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EVRConjoinedMovementModes*)Z_Param__Result=P_THIS->GetReplicatedMovementMode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetReplicatedMovementMode) \
	{ \
		P_GET_ENUM(EVRConjoinedMovementModes,Z_Param_NewMovementMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetReplicatedMovementMode(EVRConjoinedMovementModes(Z_Param_NewMovementMode)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetClimbingMode) \
	{ \
		P_GET_UBOOL(Z_Param_bIsClimbing); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetClimbingMode(Z_Param_bIsClimbing); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCustomInputVector) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetCustomInputVector(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRewindVRMovement) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->RewindVRMovement(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPerformMoveAction_Custom) \
	{ \
		P_GET_ENUM(EVRMoveAction,Z_Param_MoveActionToPerform); \
		P_GET_ENUM(EVRMoveActionDataReq,Z_Param_DataRequirementsForMoveAction); \
		P_GET_STRUCT(FVector,Z_Param_MoveActionVector); \
		P_GET_STRUCT(FRotator,Z_Param_MoveActionRotator); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PerformMoveAction_Custom(EVRMoveAction(Z_Param_MoveActionToPerform),EVRMoveActionDataReq(Z_Param_DataRequirementsForMoveAction),Z_Param_MoveActionVector,Z_Param_MoveActionRotator); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPerformMoveAction_StopAllMovement) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PerformMoveAction_StopAllMovement(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPerformMoveAction_Teleport) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_TeleportLocation); \
		P_GET_STRUCT(FRotator,Z_Param_TeleportRotation); \
		P_GET_UBOOL(Z_Param_bSkipEncroachmentCheck); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PerformMoveAction_Teleport(Z_Param_TeleportLocation,Z_Param_TeleportRotation,Z_Param_bSkipEncroachmentCheck); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPerformMoveAction_SetRotation) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewYaw); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PerformMoveAction_SetRotation(Z_Param_NewYaw); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPerformMoveAction_SnapTurn) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SnapTurnDeltaYaw); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PerformMoveAction_SnapTurn(Z_Param_SnapTurnDeltaYaw); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddCustomReplicatedMovement) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Movement); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddCustomReplicatedMovement(Z_Param_Movement); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCrouchedHalfHeight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewCrouchedHalfHeight); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCrouchedHalfHeight(Z_Param_NewCrouchedHalfHeight); \
		P_NATIVE_END; \
	}


#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_567_EVENT_PARMS \
	struct VRBaseCharacterMovementComponent_eventClientAdjustPosition_Parms \
	{ \
		float TimeStamp; \
		FVector NewLoc; \
		FVector NewVel; \
		UPrimitiveComponent* NewBase; \
		FName NewBaseBoneName; \
		bool bHasBase; \
		bool bBaseRelativePosition; \
		uint8 ServerMovementMode; \
	}; \
	struct VRBaseCharacterMovementComponent_eventClientVeryShortAdjustPosition_Parms \
	{ \
		float TimeStamp; \
		FVector NewLoc; \
		UPrimitiveComponent* NewBase; \
		FName NewBaseBoneName; \
		bool bHasBase; \
		bool bBaseRelativePosition; \
		uint8 ServerMovementMode; \
	};


#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_567_CALLBACK_WRAPPERS
#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_567_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVRBaseCharacterMovementComponent(); \
	friend struct Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UVRBaseCharacterMovementComponent, UCharacterMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVRBaseCharacterMovementComponent)


#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_567_INCLASS \
private: \
	static void StaticRegisterNativesUVRBaseCharacterMovementComponent(); \
	friend struct Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UVRBaseCharacterMovementComponent, UCharacterMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVRBaseCharacterMovementComponent)


#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_567_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVRBaseCharacterMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRBaseCharacterMovementComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRBaseCharacterMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRBaseCharacterMovementComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRBaseCharacterMovementComponent(UVRBaseCharacterMovementComponent&&); \
	NO_API UVRBaseCharacterMovementComponent(const UVRBaseCharacterMovementComponent&); \
public:


#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_567_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRBaseCharacterMovementComponent(UVRBaseCharacterMovementComponent&&); \
	NO_API UVRBaseCharacterMovementComponent(const UVRBaseCharacterMovementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRBaseCharacterMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRBaseCharacterMovementComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRBaseCharacterMovementComponent)


#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_567_PRIVATE_PROPERTY_OFFSET
#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_564_PROLOG \
	VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_567_EVENT_PARMS


#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_567_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_567_PRIVATE_PROPERTY_OFFSET \
	VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_567_RPC_WRAPPERS \
	VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_567_CALLBACK_WRAPPERS \
	VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_567_INCLASS \
	VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_567_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_567_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_567_PRIVATE_PROPERTY_OFFSET \
	VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_567_RPC_WRAPPERS_NO_PURE_DECLS \
	VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_567_CALLBACK_WRAPPERS \
	VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_567_INCLASS_NO_PURE_DECLS \
	VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_567_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREXPANSIONPLUGIN_API UClass* StaticClass<class UVRBaseCharacterMovementComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h


#define FOREACH_ENUM_EVRMOVEACTIONDATAREQ(op) \
	op(EVRMoveActionDataReq::VRMOVEACTIONDATA_None) \
	op(EVRMoveActionDataReq::VRMOVEACTIONDATA_LOC) \
	op(EVRMoveActionDataReq::VRMOVEACTIONDATA_ROT) \
	op(EVRMoveActionDataReq::VRMOVEACTIONDATA_LOC_AND_ROT) 

enum class EVRMoveActionDataReq : uint8;
template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRMoveActionDataReq>();

#define FOREACH_ENUM_EVRMOVEACTION(op) \
	op(EVRMoveAction::VRMOVEACTION_None) \
	op(EVRMoveAction::VRMOVEACTION_SnapTurn) \
	op(EVRMoveAction::VRMOVEACTION_Teleport) \
	op(EVRMoveAction::VRMOVEACTION_StopAllMovement) \
	op(EVRMoveAction::VRMOVEACTION_SetRotation) \
	op(EVRMoveAction::VRMOVEACTION_CUSTOM1) \
	op(EVRMoveAction::VRMOVEACTION_CUSTOM2) \
	op(EVRMoveAction::VRMOVEACTION_CUSTOM3) \
	op(EVRMoveAction::VRMOVEACTION_CUSTOM4) \
	op(EVRMoveAction::VRMOVEACTION_CUSTOM5) \
	op(EVRMoveAction::VRMOVEACTION_CUSTOM6) \
	op(EVRMoveAction::VRMOVEACTION_CUSTOM7) \
	op(EVRMoveAction::VRMOVEACTION_CUSTOM8) \
	op(EVRMoveAction::VRMOVEACTION_CUSTOM9) \
	op(EVRMoveAction::VRMOVEACTION_CUSTOM10) 

enum class EVRMoveAction : uint8;
template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRMoveAction>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
