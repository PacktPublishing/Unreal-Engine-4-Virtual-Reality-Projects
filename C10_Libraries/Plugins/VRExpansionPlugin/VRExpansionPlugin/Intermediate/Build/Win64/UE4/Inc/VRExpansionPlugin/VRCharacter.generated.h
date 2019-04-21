// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector_NetQuantize10;
struct FVRConditionalMoveRep;
struct FVector_NetQuantize100;
struct FVRConditionalMoveRep2;
struct FVector;
class UPrimitiveComponent;
#ifdef VREXPANSIONPLUGIN_VRCharacter_generated_h
#error "VRCharacter.generated.h already included, missing '#pragma once' in VRCharacter.h"
#endif
#define VREXPANSIONPLUGIN_VRCharacter_generated_h

#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h_22_RPC_WRAPPERS \
	virtual bool ServerMoveVROld_Validate(float , FVector_NetQuantize10 , uint8 , FVRConditionalMoveRep ); \
	virtual void ServerMoveVROld_Implementation(float OldTimeStamp, FVector_NetQuantize10 OldAccel, uint8 OldMoveFlags, FVRConditionalMoveRep ConditionalReps); \
	virtual bool ServerMoveVRDualHybridRootMotion_Validate(float , FVector_NetQuantize10 , uint8 , uint32 , FVector_NetQuantize100 , FVRConditionalMoveRep , FVector_NetQuantize100 , uint16 , float , FVector_NetQuantize10 , FVector_NetQuantize100 , FVector_NetQuantize100 , FVRConditionalMoveRep , FVector_NetQuantize100 , uint16 , uint8 , FVRConditionalMoveRep2 , uint8 ); \
	virtual void ServerMoveVRDualHybridRootMotion_Implementation(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint32 View0, FVector_NetQuantize100 OldCapsuleLoc, FVRConditionalMoveRep OldConditionalReps, FVector_NetQuantize100 OldLFDiff, uint16 OldCapsuleYaw, float TimeStamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, FVector_NetQuantize100 CapsuleLoc, FVRConditionalMoveRep ConditionalReps, FVector_NetQuantize100 LFDiff, uint16 CapsuleYaw, uint8 NewFlags, FVRConditionalMoveRep2 MoveReps, uint8 ClientMovementMode); \
	virtual bool ServerMoveVRDualExLight_Validate(float , uint8 , uint32 , FVector_NetQuantize100 , FVRConditionalMoveRep , FVector_NetQuantize100 , uint16 , float , FVector_NetQuantize100 , FVector_NetQuantize100 , FVRConditionalMoveRep , FVector_NetQuantize100 , uint16 , uint8 , FVRConditionalMoveRep2 , uint8 ); \
	virtual void ServerMoveVRDualExLight_Implementation(float TimeStamp0, uint8 PendingFlags, uint32 View0, FVector_NetQuantize100 OldCapsuleLoc, FVRConditionalMoveRep OldConditionalReps, FVector_NetQuantize100 OldLFDiff, uint16 OldCapsuleYaw, float TimeStamp, FVector_NetQuantize100 ClientLoc, FVector_NetQuantize100 CapsuleLoc, FVRConditionalMoveRep ConditionalReps, FVector_NetQuantize100 LFDiff, uint16 CapsuleYaw, uint8 NewFlags, FVRConditionalMoveRep2 MoveReps, uint8 ClientMovementMode); \
	virtual bool ServerMoveVRDual_Validate(float , FVector_NetQuantize10 , uint8 , uint32 , FVector_NetQuantize100 , FVRConditionalMoveRep , FVector_NetQuantize100 , uint16 , float , FVector_NetQuantize10 , FVector_NetQuantize100 , FVector_NetQuantize100 , FVRConditionalMoveRep , FVector_NetQuantize100 , uint16 , uint8 , FVRConditionalMoveRep2 , uint8 ); \
	virtual void ServerMoveVRDual_Implementation(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint32 View0, FVector_NetQuantize100 OldCapsuleLoc, FVRConditionalMoveRep OldConditionalReps, FVector_NetQuantize100 OldLFDiff, uint16 OldCapsuleYaw, float TimeStamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, FVector_NetQuantize100 CapsuleLoc, FVRConditionalMoveRep ConditionalReps, FVector_NetQuantize100 LFDiff, uint16 CapsuleYaw, uint8 NewFlags, FVRConditionalMoveRep2 MoveReps, uint8 ClientMovementMode); \
	virtual bool ServerMoveVRExLight_Validate(float , FVector_NetQuantize100 , FVector_NetQuantize100 , FVRConditionalMoveRep , FVector_NetQuantize100 , uint16 , uint8 , FVRConditionalMoveRep2 , uint8 ); \
	virtual void ServerMoveVRExLight_Implementation(float TimeStamp, FVector_NetQuantize100 ClientLoc, FVector_NetQuantize100 CapsuleLoc, FVRConditionalMoveRep ConditionalReps, FVector_NetQuantize100 LFDiff, uint16 CapsuleYaw, uint8 CompressedMoveFlags, FVRConditionalMoveRep2 MoveReps, uint8 ClientMovementMode); \
	virtual bool ServerMoveVR_Validate(float , FVector_NetQuantize10 , FVector_NetQuantize100 , FVector_NetQuantize100 , FVRConditionalMoveRep , FVector_NetQuantize100 , uint16 , uint8 , FVRConditionalMoveRep2 , uint8 ); \
	virtual void ServerMoveVR_Implementation(float TimeStamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, FVector_NetQuantize100 CapsuleLoc, FVRConditionalMoveRep ConditionalReps, FVector_NetQuantize100 LFDiff, uint16 CapsuleYaw, uint8 CompressedMoveFlags, FVRConditionalMoveRep2 MoveReps, uint8 ClientMovementMode); \
	virtual void ClientVeryShortAdjustPositionVR_Implementation(float TimeStamp, FVector NewLoc, uint16 NewYaw, UPrimitiveComponent* NewBase, FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode); \
	virtual void ClientAdjustPositionVR_Implementation(float TimeStamp, FVector NewLoc, uint16 NewYaw, FVector NewVel, UPrimitiveComponent* NewBase, FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode); \
 \
	DECLARE_FUNCTION(execServerMoveVROld) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_OldTimeStamp); \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_OldAccel); \
		P_GET_PROPERTY(UByteProperty,Z_Param_OldMoveFlags); \
		P_GET_STRUCT(FVRConditionalMoveRep,Z_Param_ConditionalReps); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerMoveVROld_Validate(Z_Param_OldTimeStamp,Z_Param_OldAccel,Z_Param_OldMoveFlags,Z_Param_ConditionalReps)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerMoveVROld_Validate")); \
			return; \
		} \
		P_THIS->ServerMoveVROld_Implementation(Z_Param_OldTimeStamp,Z_Param_OldAccel,Z_Param_OldMoveFlags,Z_Param_ConditionalReps); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerMoveVRDualHybridRootMotion) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp0); \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InAccel0); \
		P_GET_PROPERTY(UByteProperty,Z_Param_PendingFlags); \
		P_GET_PROPERTY(UUInt32Property,Z_Param_View0); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_OldCapsuleLoc); \
		P_GET_STRUCT(FVRConditionalMoveRep,Z_Param_OldConditionalReps); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_OldLFDiff); \
		P_GET_PROPERTY(UUInt16Property,Z_Param_OldCapsuleYaw); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InAccel); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_ClientLoc); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_CapsuleLoc); \
		P_GET_STRUCT(FVRConditionalMoveRep,Z_Param_ConditionalReps); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_LFDiff); \
		P_GET_PROPERTY(UUInt16Property,Z_Param_CapsuleYaw); \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewFlags); \
		P_GET_STRUCT(FVRConditionalMoveRep2,Z_Param_MoveReps); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientMovementMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerMoveVRDualHybridRootMotion_Validate(Z_Param_TimeStamp0,Z_Param_InAccel0,Z_Param_PendingFlags,Z_Param_View0,Z_Param_OldCapsuleLoc,Z_Param_OldConditionalReps,Z_Param_OldLFDiff,Z_Param_OldCapsuleYaw,Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_CapsuleLoc,Z_Param_ConditionalReps,Z_Param_LFDiff,Z_Param_CapsuleYaw,Z_Param_NewFlags,Z_Param_MoveReps,Z_Param_ClientMovementMode)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerMoveVRDualHybridRootMotion_Validate")); \
			return; \
		} \
		P_THIS->ServerMoveVRDualHybridRootMotion_Implementation(Z_Param_TimeStamp0,Z_Param_InAccel0,Z_Param_PendingFlags,Z_Param_View0,Z_Param_OldCapsuleLoc,Z_Param_OldConditionalReps,Z_Param_OldLFDiff,Z_Param_OldCapsuleYaw,Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_CapsuleLoc,Z_Param_ConditionalReps,Z_Param_LFDiff,Z_Param_CapsuleYaw,Z_Param_NewFlags,Z_Param_MoveReps,Z_Param_ClientMovementMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerMoveVRDualExLight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp0); \
		P_GET_PROPERTY(UByteProperty,Z_Param_PendingFlags); \
		P_GET_PROPERTY(UUInt32Property,Z_Param_View0); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_OldCapsuleLoc); \
		P_GET_STRUCT(FVRConditionalMoveRep,Z_Param_OldConditionalReps); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_OldLFDiff); \
		P_GET_PROPERTY(UUInt16Property,Z_Param_OldCapsuleYaw); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_ClientLoc); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_CapsuleLoc); \
		P_GET_STRUCT(FVRConditionalMoveRep,Z_Param_ConditionalReps); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_LFDiff); \
		P_GET_PROPERTY(UUInt16Property,Z_Param_CapsuleYaw); \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewFlags); \
		P_GET_STRUCT(FVRConditionalMoveRep2,Z_Param_MoveReps); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientMovementMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerMoveVRDualExLight_Validate(Z_Param_TimeStamp0,Z_Param_PendingFlags,Z_Param_View0,Z_Param_OldCapsuleLoc,Z_Param_OldConditionalReps,Z_Param_OldLFDiff,Z_Param_OldCapsuleYaw,Z_Param_TimeStamp,Z_Param_ClientLoc,Z_Param_CapsuleLoc,Z_Param_ConditionalReps,Z_Param_LFDiff,Z_Param_CapsuleYaw,Z_Param_NewFlags,Z_Param_MoveReps,Z_Param_ClientMovementMode)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerMoveVRDualExLight_Validate")); \
			return; \
		} \
		P_THIS->ServerMoveVRDualExLight_Implementation(Z_Param_TimeStamp0,Z_Param_PendingFlags,Z_Param_View0,Z_Param_OldCapsuleLoc,Z_Param_OldConditionalReps,Z_Param_OldLFDiff,Z_Param_OldCapsuleYaw,Z_Param_TimeStamp,Z_Param_ClientLoc,Z_Param_CapsuleLoc,Z_Param_ConditionalReps,Z_Param_LFDiff,Z_Param_CapsuleYaw,Z_Param_NewFlags,Z_Param_MoveReps,Z_Param_ClientMovementMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerMoveVRDual) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp0); \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InAccel0); \
		P_GET_PROPERTY(UByteProperty,Z_Param_PendingFlags); \
		P_GET_PROPERTY(UUInt32Property,Z_Param_View0); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_OldCapsuleLoc); \
		P_GET_STRUCT(FVRConditionalMoveRep,Z_Param_OldConditionalReps); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_OldLFDiff); \
		P_GET_PROPERTY(UUInt16Property,Z_Param_OldCapsuleYaw); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InAccel); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_ClientLoc); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_CapsuleLoc); \
		P_GET_STRUCT(FVRConditionalMoveRep,Z_Param_ConditionalReps); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_LFDiff); \
		P_GET_PROPERTY(UUInt16Property,Z_Param_CapsuleYaw); \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewFlags); \
		P_GET_STRUCT(FVRConditionalMoveRep2,Z_Param_MoveReps); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientMovementMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerMoveVRDual_Validate(Z_Param_TimeStamp0,Z_Param_InAccel0,Z_Param_PendingFlags,Z_Param_View0,Z_Param_OldCapsuleLoc,Z_Param_OldConditionalReps,Z_Param_OldLFDiff,Z_Param_OldCapsuleYaw,Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_CapsuleLoc,Z_Param_ConditionalReps,Z_Param_LFDiff,Z_Param_CapsuleYaw,Z_Param_NewFlags,Z_Param_MoveReps,Z_Param_ClientMovementMode)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerMoveVRDual_Validate")); \
			return; \
		} \
		P_THIS->ServerMoveVRDual_Implementation(Z_Param_TimeStamp0,Z_Param_InAccel0,Z_Param_PendingFlags,Z_Param_View0,Z_Param_OldCapsuleLoc,Z_Param_OldConditionalReps,Z_Param_OldLFDiff,Z_Param_OldCapsuleYaw,Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_CapsuleLoc,Z_Param_ConditionalReps,Z_Param_LFDiff,Z_Param_CapsuleYaw,Z_Param_NewFlags,Z_Param_MoveReps,Z_Param_ClientMovementMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerMoveVRExLight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_ClientLoc); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_CapsuleLoc); \
		P_GET_STRUCT(FVRConditionalMoveRep,Z_Param_ConditionalReps); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_LFDiff); \
		P_GET_PROPERTY(UUInt16Property,Z_Param_CapsuleYaw); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CompressedMoveFlags); \
		P_GET_STRUCT(FVRConditionalMoveRep2,Z_Param_MoveReps); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientMovementMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerMoveVRExLight_Validate(Z_Param_TimeStamp,Z_Param_ClientLoc,Z_Param_CapsuleLoc,Z_Param_ConditionalReps,Z_Param_LFDiff,Z_Param_CapsuleYaw,Z_Param_CompressedMoveFlags,Z_Param_MoveReps,Z_Param_ClientMovementMode)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerMoveVRExLight_Validate")); \
			return; \
		} \
		P_THIS->ServerMoveVRExLight_Implementation(Z_Param_TimeStamp,Z_Param_ClientLoc,Z_Param_CapsuleLoc,Z_Param_ConditionalReps,Z_Param_LFDiff,Z_Param_CapsuleYaw,Z_Param_CompressedMoveFlags,Z_Param_MoveReps,Z_Param_ClientMovementMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerMoveVR) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InAccel); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_ClientLoc); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_CapsuleLoc); \
		P_GET_STRUCT(FVRConditionalMoveRep,Z_Param_ConditionalReps); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_LFDiff); \
		P_GET_PROPERTY(UUInt16Property,Z_Param_CapsuleYaw); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CompressedMoveFlags); \
		P_GET_STRUCT(FVRConditionalMoveRep2,Z_Param_MoveReps); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientMovementMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerMoveVR_Validate(Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_CapsuleLoc,Z_Param_ConditionalReps,Z_Param_LFDiff,Z_Param_CapsuleYaw,Z_Param_CompressedMoveFlags,Z_Param_MoveReps,Z_Param_ClientMovementMode)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerMoveVR_Validate")); \
			return; \
		} \
		P_THIS->ServerMoveVR_Implementation(Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_CapsuleLoc,Z_Param_ConditionalReps,Z_Param_LFDiff,Z_Param_CapsuleYaw,Z_Param_CompressedMoveFlags,Z_Param_MoveReps,Z_Param_ClientMovementMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientVeryShortAdjustPositionVR) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_GET_STRUCT(FVector,Z_Param_NewLoc); \
		P_GET_PROPERTY(UUInt16Property,Z_Param_NewYaw); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_NewBase); \
		P_GET_PROPERTY(UNameProperty,Z_Param_NewBaseBoneName); \
		P_GET_UBOOL(Z_Param_bHasBase); \
		P_GET_UBOOL(Z_Param_bBaseRelativePosition); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ServerMovementMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClientVeryShortAdjustPositionVR_Implementation(Z_Param_TimeStamp,Z_Param_NewLoc,Z_Param_NewYaw,Z_Param_NewBase,Z_Param_NewBaseBoneName,Z_Param_bHasBase,Z_Param_bBaseRelativePosition,Z_Param_ServerMovementMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientAdjustPositionVR) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_GET_STRUCT(FVector,Z_Param_NewLoc); \
		P_GET_PROPERTY(UUInt16Property,Z_Param_NewYaw); \
		P_GET_STRUCT(FVector,Z_Param_NewVel); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_NewBase); \
		P_GET_PROPERTY(UNameProperty,Z_Param_NewBaseBoneName); \
		P_GET_UBOOL(Z_Param_bHasBase); \
		P_GET_UBOOL(Z_Param_bBaseRelativePosition); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ServerMovementMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClientAdjustPositionVR_Implementation(Z_Param_TimeStamp,Z_Param_NewLoc,Z_Param_NewYaw,Z_Param_NewVel,Z_Param_NewBase,Z_Param_NewBaseBoneName,Z_Param_bHasBase,Z_Param_bBaseRelativePosition,Z_Param_ServerMovementMode); \
		P_NATIVE_END; \
	}


#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execServerMoveVROld) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_OldTimeStamp); \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_OldAccel); \
		P_GET_PROPERTY(UByteProperty,Z_Param_OldMoveFlags); \
		P_GET_STRUCT(FVRConditionalMoveRep,Z_Param_ConditionalReps); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerMoveVROld_Validate(Z_Param_OldTimeStamp,Z_Param_OldAccel,Z_Param_OldMoveFlags,Z_Param_ConditionalReps)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerMoveVROld_Validate")); \
			return; \
		} \
		P_THIS->ServerMoveVROld_Implementation(Z_Param_OldTimeStamp,Z_Param_OldAccel,Z_Param_OldMoveFlags,Z_Param_ConditionalReps); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerMoveVRDualHybridRootMotion) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp0); \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InAccel0); \
		P_GET_PROPERTY(UByteProperty,Z_Param_PendingFlags); \
		P_GET_PROPERTY(UUInt32Property,Z_Param_View0); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_OldCapsuleLoc); \
		P_GET_STRUCT(FVRConditionalMoveRep,Z_Param_OldConditionalReps); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_OldLFDiff); \
		P_GET_PROPERTY(UUInt16Property,Z_Param_OldCapsuleYaw); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InAccel); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_ClientLoc); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_CapsuleLoc); \
		P_GET_STRUCT(FVRConditionalMoveRep,Z_Param_ConditionalReps); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_LFDiff); \
		P_GET_PROPERTY(UUInt16Property,Z_Param_CapsuleYaw); \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewFlags); \
		P_GET_STRUCT(FVRConditionalMoveRep2,Z_Param_MoveReps); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientMovementMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerMoveVRDualHybridRootMotion_Validate(Z_Param_TimeStamp0,Z_Param_InAccel0,Z_Param_PendingFlags,Z_Param_View0,Z_Param_OldCapsuleLoc,Z_Param_OldConditionalReps,Z_Param_OldLFDiff,Z_Param_OldCapsuleYaw,Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_CapsuleLoc,Z_Param_ConditionalReps,Z_Param_LFDiff,Z_Param_CapsuleYaw,Z_Param_NewFlags,Z_Param_MoveReps,Z_Param_ClientMovementMode)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerMoveVRDualHybridRootMotion_Validate")); \
			return; \
		} \
		P_THIS->ServerMoveVRDualHybridRootMotion_Implementation(Z_Param_TimeStamp0,Z_Param_InAccel0,Z_Param_PendingFlags,Z_Param_View0,Z_Param_OldCapsuleLoc,Z_Param_OldConditionalReps,Z_Param_OldLFDiff,Z_Param_OldCapsuleYaw,Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_CapsuleLoc,Z_Param_ConditionalReps,Z_Param_LFDiff,Z_Param_CapsuleYaw,Z_Param_NewFlags,Z_Param_MoveReps,Z_Param_ClientMovementMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerMoveVRDualExLight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp0); \
		P_GET_PROPERTY(UByteProperty,Z_Param_PendingFlags); \
		P_GET_PROPERTY(UUInt32Property,Z_Param_View0); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_OldCapsuleLoc); \
		P_GET_STRUCT(FVRConditionalMoveRep,Z_Param_OldConditionalReps); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_OldLFDiff); \
		P_GET_PROPERTY(UUInt16Property,Z_Param_OldCapsuleYaw); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_ClientLoc); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_CapsuleLoc); \
		P_GET_STRUCT(FVRConditionalMoveRep,Z_Param_ConditionalReps); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_LFDiff); \
		P_GET_PROPERTY(UUInt16Property,Z_Param_CapsuleYaw); \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewFlags); \
		P_GET_STRUCT(FVRConditionalMoveRep2,Z_Param_MoveReps); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientMovementMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerMoveVRDualExLight_Validate(Z_Param_TimeStamp0,Z_Param_PendingFlags,Z_Param_View0,Z_Param_OldCapsuleLoc,Z_Param_OldConditionalReps,Z_Param_OldLFDiff,Z_Param_OldCapsuleYaw,Z_Param_TimeStamp,Z_Param_ClientLoc,Z_Param_CapsuleLoc,Z_Param_ConditionalReps,Z_Param_LFDiff,Z_Param_CapsuleYaw,Z_Param_NewFlags,Z_Param_MoveReps,Z_Param_ClientMovementMode)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerMoveVRDualExLight_Validate")); \
			return; \
		} \
		P_THIS->ServerMoveVRDualExLight_Implementation(Z_Param_TimeStamp0,Z_Param_PendingFlags,Z_Param_View0,Z_Param_OldCapsuleLoc,Z_Param_OldConditionalReps,Z_Param_OldLFDiff,Z_Param_OldCapsuleYaw,Z_Param_TimeStamp,Z_Param_ClientLoc,Z_Param_CapsuleLoc,Z_Param_ConditionalReps,Z_Param_LFDiff,Z_Param_CapsuleYaw,Z_Param_NewFlags,Z_Param_MoveReps,Z_Param_ClientMovementMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerMoveVRDual) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp0); \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InAccel0); \
		P_GET_PROPERTY(UByteProperty,Z_Param_PendingFlags); \
		P_GET_PROPERTY(UUInt32Property,Z_Param_View0); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_OldCapsuleLoc); \
		P_GET_STRUCT(FVRConditionalMoveRep,Z_Param_OldConditionalReps); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_OldLFDiff); \
		P_GET_PROPERTY(UUInt16Property,Z_Param_OldCapsuleYaw); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InAccel); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_ClientLoc); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_CapsuleLoc); \
		P_GET_STRUCT(FVRConditionalMoveRep,Z_Param_ConditionalReps); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_LFDiff); \
		P_GET_PROPERTY(UUInt16Property,Z_Param_CapsuleYaw); \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewFlags); \
		P_GET_STRUCT(FVRConditionalMoveRep2,Z_Param_MoveReps); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientMovementMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerMoveVRDual_Validate(Z_Param_TimeStamp0,Z_Param_InAccel0,Z_Param_PendingFlags,Z_Param_View0,Z_Param_OldCapsuleLoc,Z_Param_OldConditionalReps,Z_Param_OldLFDiff,Z_Param_OldCapsuleYaw,Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_CapsuleLoc,Z_Param_ConditionalReps,Z_Param_LFDiff,Z_Param_CapsuleYaw,Z_Param_NewFlags,Z_Param_MoveReps,Z_Param_ClientMovementMode)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerMoveVRDual_Validate")); \
			return; \
		} \
		P_THIS->ServerMoveVRDual_Implementation(Z_Param_TimeStamp0,Z_Param_InAccel0,Z_Param_PendingFlags,Z_Param_View0,Z_Param_OldCapsuleLoc,Z_Param_OldConditionalReps,Z_Param_OldLFDiff,Z_Param_OldCapsuleYaw,Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_CapsuleLoc,Z_Param_ConditionalReps,Z_Param_LFDiff,Z_Param_CapsuleYaw,Z_Param_NewFlags,Z_Param_MoveReps,Z_Param_ClientMovementMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerMoveVRExLight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_ClientLoc); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_CapsuleLoc); \
		P_GET_STRUCT(FVRConditionalMoveRep,Z_Param_ConditionalReps); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_LFDiff); \
		P_GET_PROPERTY(UUInt16Property,Z_Param_CapsuleYaw); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CompressedMoveFlags); \
		P_GET_STRUCT(FVRConditionalMoveRep2,Z_Param_MoveReps); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientMovementMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerMoveVRExLight_Validate(Z_Param_TimeStamp,Z_Param_ClientLoc,Z_Param_CapsuleLoc,Z_Param_ConditionalReps,Z_Param_LFDiff,Z_Param_CapsuleYaw,Z_Param_CompressedMoveFlags,Z_Param_MoveReps,Z_Param_ClientMovementMode)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerMoveVRExLight_Validate")); \
			return; \
		} \
		P_THIS->ServerMoveVRExLight_Implementation(Z_Param_TimeStamp,Z_Param_ClientLoc,Z_Param_CapsuleLoc,Z_Param_ConditionalReps,Z_Param_LFDiff,Z_Param_CapsuleYaw,Z_Param_CompressedMoveFlags,Z_Param_MoveReps,Z_Param_ClientMovementMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerMoveVR) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InAccel); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_ClientLoc); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_CapsuleLoc); \
		P_GET_STRUCT(FVRConditionalMoveRep,Z_Param_ConditionalReps); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_LFDiff); \
		P_GET_PROPERTY(UUInt16Property,Z_Param_CapsuleYaw); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CompressedMoveFlags); \
		P_GET_STRUCT(FVRConditionalMoveRep2,Z_Param_MoveReps); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientMovementMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerMoveVR_Validate(Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_CapsuleLoc,Z_Param_ConditionalReps,Z_Param_LFDiff,Z_Param_CapsuleYaw,Z_Param_CompressedMoveFlags,Z_Param_MoveReps,Z_Param_ClientMovementMode)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerMoveVR_Validate")); \
			return; \
		} \
		P_THIS->ServerMoveVR_Implementation(Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_CapsuleLoc,Z_Param_ConditionalReps,Z_Param_LFDiff,Z_Param_CapsuleYaw,Z_Param_CompressedMoveFlags,Z_Param_MoveReps,Z_Param_ClientMovementMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientVeryShortAdjustPositionVR) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_GET_STRUCT(FVector,Z_Param_NewLoc); \
		P_GET_PROPERTY(UUInt16Property,Z_Param_NewYaw); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_NewBase); \
		P_GET_PROPERTY(UNameProperty,Z_Param_NewBaseBoneName); \
		P_GET_UBOOL(Z_Param_bHasBase); \
		P_GET_UBOOL(Z_Param_bBaseRelativePosition); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ServerMovementMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClientVeryShortAdjustPositionVR_Implementation(Z_Param_TimeStamp,Z_Param_NewLoc,Z_Param_NewYaw,Z_Param_NewBase,Z_Param_NewBaseBoneName,Z_Param_bHasBase,Z_Param_bBaseRelativePosition,Z_Param_ServerMovementMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientAdjustPositionVR) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_GET_STRUCT(FVector,Z_Param_NewLoc); \
		P_GET_PROPERTY(UUInt16Property,Z_Param_NewYaw); \
		P_GET_STRUCT(FVector,Z_Param_NewVel); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_NewBase); \
		P_GET_PROPERTY(UNameProperty,Z_Param_NewBaseBoneName); \
		P_GET_UBOOL(Z_Param_bHasBase); \
		P_GET_UBOOL(Z_Param_bBaseRelativePosition); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ServerMovementMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClientAdjustPositionVR_Implementation(Z_Param_TimeStamp,Z_Param_NewLoc,Z_Param_NewYaw,Z_Param_NewVel,Z_Param_NewBase,Z_Param_NewBaseBoneName,Z_Param_bHasBase,Z_Param_bBaseRelativePosition,Z_Param_ServerMovementMode); \
		P_NATIVE_END; \
	}


#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h_22_EVENT_PARMS \
	struct VRCharacter_eventClientAdjustPositionVR_Parms \
	{ \
		float TimeStamp; \
		FVector NewLoc; \
		uint16 NewYaw; \
		FVector NewVel; \
		UPrimitiveComponent* NewBase; \
		FName NewBaseBoneName; \
		bool bHasBase; \
		bool bBaseRelativePosition; \
		uint8 ServerMovementMode; \
	}; \
	struct VRCharacter_eventClientVeryShortAdjustPositionVR_Parms \
	{ \
		float TimeStamp; \
		FVector NewLoc; \
		uint16 NewYaw; \
		UPrimitiveComponent* NewBase; \
		FName NewBaseBoneName; \
		bool bHasBase; \
		bool bBaseRelativePosition; \
		uint8 ServerMovementMode; \
	}; \
	struct VRCharacter_eventServerMoveVR_Parms \
	{ \
		float TimeStamp; \
		FVector_NetQuantize10 InAccel; \
		FVector_NetQuantize100 ClientLoc; \
		FVector_NetQuantize100 CapsuleLoc; \
		FVRConditionalMoveRep ConditionalReps; \
		FVector_NetQuantize100 LFDiff; \
		uint16 CapsuleYaw; \
		uint8 CompressedMoveFlags; \
		FVRConditionalMoveRep2 MoveReps; \
		uint8 ClientMovementMode; \
	}; \
	struct VRCharacter_eventServerMoveVRDual_Parms \
	{ \
		float TimeStamp0; \
		FVector_NetQuantize10 InAccel0; \
		uint8 PendingFlags; \
		uint32 View0; \
		FVector_NetQuantize100 OldCapsuleLoc; \
		FVRConditionalMoveRep OldConditionalReps; \
		FVector_NetQuantize100 OldLFDiff; \
		uint16 OldCapsuleYaw; \
		float TimeStamp; \
		FVector_NetQuantize10 InAccel; \
		FVector_NetQuantize100 ClientLoc; \
		FVector_NetQuantize100 CapsuleLoc; \
		FVRConditionalMoveRep ConditionalReps; \
		FVector_NetQuantize100 LFDiff; \
		uint16 CapsuleYaw; \
		uint8 NewFlags; \
		FVRConditionalMoveRep2 MoveReps; \
		uint8 ClientMovementMode; \
	}; \
	struct VRCharacter_eventServerMoveVRDualExLight_Parms \
	{ \
		float TimeStamp0; \
		uint8 PendingFlags; \
		uint32 View0; \
		FVector_NetQuantize100 OldCapsuleLoc; \
		FVRConditionalMoveRep OldConditionalReps; \
		FVector_NetQuantize100 OldLFDiff; \
		uint16 OldCapsuleYaw; \
		float TimeStamp; \
		FVector_NetQuantize100 ClientLoc; \
		FVector_NetQuantize100 CapsuleLoc; \
		FVRConditionalMoveRep ConditionalReps; \
		FVector_NetQuantize100 LFDiff; \
		uint16 CapsuleYaw; \
		uint8 NewFlags; \
		FVRConditionalMoveRep2 MoveReps; \
		uint8 ClientMovementMode; \
	}; \
	struct VRCharacter_eventServerMoveVRDualHybridRootMotion_Parms \
	{ \
		float TimeStamp0; \
		FVector_NetQuantize10 InAccel0; \
		uint8 PendingFlags; \
		uint32 View0; \
		FVector_NetQuantize100 OldCapsuleLoc; \
		FVRConditionalMoveRep OldConditionalReps; \
		FVector_NetQuantize100 OldLFDiff; \
		uint16 OldCapsuleYaw; \
		float TimeStamp; \
		FVector_NetQuantize10 InAccel; \
		FVector_NetQuantize100 ClientLoc; \
		FVector_NetQuantize100 CapsuleLoc; \
		FVRConditionalMoveRep ConditionalReps; \
		FVector_NetQuantize100 LFDiff; \
		uint16 CapsuleYaw; \
		uint8 NewFlags; \
		FVRConditionalMoveRep2 MoveReps; \
		uint8 ClientMovementMode; \
	}; \
	struct VRCharacter_eventServerMoveVRExLight_Parms \
	{ \
		float TimeStamp; \
		FVector_NetQuantize100 ClientLoc; \
		FVector_NetQuantize100 CapsuleLoc; \
		FVRConditionalMoveRep ConditionalReps; \
		FVector_NetQuantize100 LFDiff; \
		uint16 CapsuleYaw; \
		uint8 CompressedMoveFlags; \
		FVRConditionalMoveRep2 MoveReps; \
		uint8 ClientMovementMode; \
	}; \
	struct VRCharacter_eventServerMoveVROld_Parms \
	{ \
		float OldTimeStamp; \
		FVector_NetQuantize10 OldAccel; \
		uint8 OldMoveFlags; \
		FVRConditionalMoveRep ConditionalReps; \
	};


#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h_22_CALLBACK_WRAPPERS
#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVRCharacter(); \
	friend struct Z_Construct_UClass_AVRCharacter_Statics; \
public: \
	DECLARE_CLASS(AVRCharacter, AVRBaseCharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(AVRCharacter)


#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h_22_INCLASS \
private: \
	static void StaticRegisterNativesAVRCharacter(); \
	friend struct Z_Construct_UClass_AVRCharacter_Statics; \
public: \
	DECLARE_CLASS(AVRCharacter, AVRBaseCharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(AVRCharacter)


#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVRCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVRCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVRCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVRCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVRCharacter(AVRCharacter&&); \
	NO_API AVRCharacter(const AVRCharacter&); \
public:


#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVRCharacter(AVRCharacter&&); \
	NO_API AVRCharacter(const AVRCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVRCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVRCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVRCharacter)


#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h_22_PRIVATE_PROPERTY_OFFSET
#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h_19_PROLOG \
	VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h_22_EVENT_PARMS


#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h_22_PRIVATE_PROPERTY_OFFSET \
	VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h_22_RPC_WRAPPERS \
	VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h_22_CALLBACK_WRAPPERS \
	VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h_22_INCLASS \
	VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h_22_PRIVATE_PROPERTY_OFFSET \
	VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h_22_CALLBACK_WRAPPERS \
	VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h_22_INCLASS_NO_PURE_DECLS \
	VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREXPANSIONPLUGIN_API UClass* StaticClass<class AVRCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
