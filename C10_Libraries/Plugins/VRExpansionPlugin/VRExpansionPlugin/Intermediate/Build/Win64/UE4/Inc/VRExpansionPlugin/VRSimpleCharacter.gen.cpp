// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/SimpleChar/VRSimpleCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRSimpleCharacter() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AVRSimpleCharacter_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AVRSimpleCharacter();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AVRBaseCharacter();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVR();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVRConditionalMoveRep2();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize100();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVRConditionalMoveRep();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize10();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVRDual();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVRDualHybridRootMotion();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	static FName NAME_AVRSimpleCharacter_ServerMoveVR = FName(TEXT("ServerMoveVR"));
	void AVRSimpleCharacter::ServerMoveVR(float TimeStamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, FVRConditionalMoveRep ConditionalReps, FVector_NetQuantize100 LFDiff, uint8 CompressedMoveFlags, FVRConditionalMoveRep2 MoveReps, uint8 ClientMovementMode)
	{
		VRSimpleCharacter_eventServerMoveVR_Parms Parms;
		Parms.TimeStamp=TimeStamp;
		Parms.InAccel=InAccel;
		Parms.ClientLoc=ClientLoc;
		Parms.ConditionalReps=ConditionalReps;
		Parms.LFDiff=LFDiff;
		Parms.CompressedMoveFlags=CompressedMoveFlags;
		Parms.MoveReps=MoveReps;
		Parms.ClientMovementMode=ClientMovementMode;
		ProcessEvent(FindFunctionChecked(NAME_AVRSimpleCharacter_ServerMoveVR),&Parms);
	}
	static FName NAME_AVRSimpleCharacter_ServerMoveVRDual = FName(TEXT("ServerMoveVRDual"));
	void AVRSimpleCharacter::ServerMoveVRDual(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint32 View0, FVRConditionalMoveRep OldConditionalReps, FVector_NetQuantize100 OldLFDiff, float TimeStamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, FVRConditionalMoveRep ConditionalReps, FVector_NetQuantize100 LFDiff, uint8 NewFlags, FVRConditionalMoveRep2 MoveReps, uint8 ClientMovementMode)
	{
		VRSimpleCharacter_eventServerMoveVRDual_Parms Parms;
		Parms.TimeStamp0=TimeStamp0;
		Parms.InAccel0=InAccel0;
		Parms.PendingFlags=PendingFlags;
		Parms.View0=View0;
		Parms.OldConditionalReps=OldConditionalReps;
		Parms.OldLFDiff=OldLFDiff;
		Parms.TimeStamp=TimeStamp;
		Parms.InAccel=InAccel;
		Parms.ClientLoc=ClientLoc;
		Parms.ConditionalReps=ConditionalReps;
		Parms.LFDiff=LFDiff;
		Parms.NewFlags=NewFlags;
		Parms.MoveReps=MoveReps;
		Parms.ClientMovementMode=ClientMovementMode;
		ProcessEvent(FindFunctionChecked(NAME_AVRSimpleCharacter_ServerMoveVRDual),&Parms);
	}
	static FName NAME_AVRSimpleCharacter_ServerMoveVRDualHybridRootMotion = FName(TEXT("ServerMoveVRDualHybridRootMotion"));
	void AVRSimpleCharacter::ServerMoveVRDualHybridRootMotion(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint32 View0, FVRConditionalMoveRep OldConditionalReps, FVector_NetQuantize100 OldLFDiff, float TimeStamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, FVRConditionalMoveRep ConditionalReps, FVector_NetQuantize100 LFDiff, uint8 NewFlags, FVRConditionalMoveRep2 MoveReps, uint8 ClientMovementMode)
	{
		VRSimpleCharacter_eventServerMoveVRDualHybridRootMotion_Parms Parms;
		Parms.TimeStamp0=TimeStamp0;
		Parms.InAccel0=InAccel0;
		Parms.PendingFlags=PendingFlags;
		Parms.View0=View0;
		Parms.OldConditionalReps=OldConditionalReps;
		Parms.OldLFDiff=OldLFDiff;
		Parms.TimeStamp=TimeStamp;
		Parms.InAccel=InAccel;
		Parms.ClientLoc=ClientLoc;
		Parms.ConditionalReps=ConditionalReps;
		Parms.LFDiff=LFDiff;
		Parms.NewFlags=NewFlags;
		Parms.MoveReps=MoveReps;
		Parms.ClientMovementMode=ClientMovementMode;
		ProcessEvent(FindFunctionChecked(NAME_AVRSimpleCharacter_ServerMoveVRDualHybridRootMotion),&Parms);
	}
	void AVRSimpleCharacter::StaticRegisterNativesAVRSimpleCharacter()
	{
		UClass* Class = AVRSimpleCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ServerMoveVR", &AVRSimpleCharacter::execServerMoveVR },
			{ "ServerMoveVRDual", &AVRSimpleCharacter::execServerMoveVRDual },
			{ "ServerMoveVRDualHybridRootMotion", &AVRSimpleCharacter::execServerMoveVRDualHybridRootMotion },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVR_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ClientMovementMode;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MoveReps;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CompressedMoveFlags;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LFDiff;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConditionalReps;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClientLoc;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAccel;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeStamp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVR_Statics::NewProp_ClientMovementMode = { "ClientMovementMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRSimpleCharacter_eventServerMoveVR_Parms, ClientMovementMode), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVR_Statics::NewProp_MoveReps = { "MoveReps", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRSimpleCharacter_eventServerMoveVR_Parms, MoveReps), Z_Construct_UScriptStruct_FVRConditionalMoveRep2, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVR_Statics::NewProp_CompressedMoveFlags = { "CompressedMoveFlags", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRSimpleCharacter_eventServerMoveVR_Parms, CompressedMoveFlags), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVR_Statics::NewProp_LFDiff = { "LFDiff", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRSimpleCharacter_eventServerMoveVR_Parms, LFDiff), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVR_Statics::NewProp_ConditionalReps = { "ConditionalReps", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRSimpleCharacter_eventServerMoveVR_Parms, ConditionalReps), Z_Construct_UScriptStruct_FVRConditionalMoveRep, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVR_Statics::NewProp_ClientLoc = { "ClientLoc", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRSimpleCharacter_eventServerMoveVR_Parms, ClientLoc), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVR_Statics::NewProp_InAccel = { "InAccel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRSimpleCharacter_eventServerMoveVR_Parms, InAccel), Z_Construct_UScriptStruct_FVector_NetQuantize10, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVR_Statics::NewProp_TimeStamp = { "TimeStamp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRSimpleCharacter_eventServerMoveVR_Parms, TimeStamp), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVR_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVR_Statics::NewProp_ClientMovementMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVR_Statics::NewProp_MoveReps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVR_Statics::NewProp_CompressedMoveFlags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVR_Statics::NewProp_LFDiff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVR_Statics::NewProp_ConditionalReps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVR_Statics::NewProp_ClientLoc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVR_Statics::NewProp_InAccel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVR_Statics::NewProp_TimeStamp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVR_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleChar/VRSimpleCharacter.h" },
		{ "ToolTip", "Replicated function sent by client to server - contains client movement and view info." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVR_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRSimpleCharacter, nullptr, "ServerMoveVR", sizeof(VRSimpleCharacter_eventServerMoveVR_Parms), Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVR_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVR_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVR_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVR_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVR()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVR_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVRDual_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ClientMovementMode;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MoveReps;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewFlags;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LFDiff;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConditionalReps;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClientLoc;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAccel;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeStamp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldLFDiff;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldConditionalReps;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_View0;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PendingFlags;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAccel0;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeStamp0;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVRDual_Statics::NewProp_ClientMovementMode = { "ClientMovementMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRSimpleCharacter_eventServerMoveVRDual_Parms, ClientMovementMode), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVRDual_Statics::NewProp_MoveReps = { "MoveReps", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRSimpleCharacter_eventServerMoveVRDual_Parms, MoveReps), Z_Construct_UScriptStruct_FVRConditionalMoveRep2, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVRDual_Statics::NewProp_NewFlags = { "NewFlags", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRSimpleCharacter_eventServerMoveVRDual_Parms, NewFlags), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVRDual_Statics::NewProp_LFDiff = { "LFDiff", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRSimpleCharacter_eventServerMoveVRDual_Parms, LFDiff), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVRDual_Statics::NewProp_ConditionalReps = { "ConditionalReps", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRSimpleCharacter_eventServerMoveVRDual_Parms, ConditionalReps), Z_Construct_UScriptStruct_FVRConditionalMoveRep, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVRDual_Statics::NewProp_ClientLoc = { "ClientLoc", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRSimpleCharacter_eventServerMoveVRDual_Parms, ClientLoc), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVRDual_Statics::NewProp_InAccel = { "InAccel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRSimpleCharacter_eventServerMoveVRDual_Parms, InAccel), Z_Construct_UScriptStruct_FVector_NetQuantize10, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVRDual_Statics::NewProp_TimeStamp = { "TimeStamp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRSimpleCharacter_eventServerMoveVRDual_Parms, TimeStamp), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVRDual_Statics::NewProp_OldLFDiff = { "OldLFDiff", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRSimpleCharacter_eventServerMoveVRDual_Parms, OldLFDiff), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVRDual_Statics::NewProp_OldConditionalReps = { "OldConditionalReps", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRSimpleCharacter_eventServerMoveVRDual_Parms, OldConditionalReps), Z_Construct_UScriptStruct_FVRConditionalMoveRep, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVRDual_Statics::NewProp_View0 = { "View0", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRSimpleCharacter_eventServerMoveVRDual_Parms, View0), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVRDual_Statics::NewProp_PendingFlags = { "PendingFlags", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRSimpleCharacter_eventServerMoveVRDual_Parms, PendingFlags), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVRDual_Statics::NewProp_InAccel0 = { "InAccel0", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRSimpleCharacter_eventServerMoveVRDual_Parms, InAccel0), Z_Construct_UScriptStruct_FVector_NetQuantize10, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVRDual_Statics::NewProp_TimeStamp0 = { "TimeStamp0", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRSimpleCharacter_eventServerMoveVRDual_Parms, TimeStamp0), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVRDual_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVRDual_Statics::NewProp_ClientMovementMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVRDual_Statics::NewProp_MoveReps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVRDual_Statics::NewProp_NewFlags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVRDual_Statics::NewProp_LFDiff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVRDual_Statics::NewProp_ConditionalReps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVRDual_Statics::NewProp_ClientLoc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVRDual_Statics::NewProp_InAccel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVRDual_Statics::NewProp_TimeStamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVRDual_Statics::NewProp_OldLFDiff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVRDual_Statics::NewProp_OldConditionalReps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVRDual_Statics::NewProp_View0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVRDual_Statics::NewProp_PendingFlags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVRDual_Statics::NewProp_InAccel0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVRDual_Statics::NewProp_TimeStamp0,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVRDual_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleChar/VRSimpleCharacter.h" },
		{ "ToolTip", "Replicated function sent by client to server - contains client movement and view info for two moves." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVRDual_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRSimpleCharacter, nullptr, "ServerMoveVRDual", sizeof(VRSimpleCharacter_eventServerMoveVRDual_Parms), Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVRDual_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVRDual_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVRDual_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVRDual_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVRDual()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVRDual_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVRDualHybridRootMotion_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ClientMovementMode;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MoveReps;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewFlags;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LFDiff;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConditionalReps;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClientLoc;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAccel;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeStamp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldLFDiff;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldConditionalReps;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_View0;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PendingFlags;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAccel0;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeStamp0;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVRDualHybridRootMotion_Statics::NewProp_ClientMovementMode = { "ClientMovementMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRSimpleCharacter_eventServerMoveVRDualHybridRootMotion_Parms, ClientMovementMode), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVRDualHybridRootMotion_Statics::NewProp_MoveReps = { "MoveReps", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRSimpleCharacter_eventServerMoveVRDualHybridRootMotion_Parms, MoveReps), Z_Construct_UScriptStruct_FVRConditionalMoveRep2, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVRDualHybridRootMotion_Statics::NewProp_NewFlags = { "NewFlags", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRSimpleCharacter_eventServerMoveVRDualHybridRootMotion_Parms, NewFlags), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVRDualHybridRootMotion_Statics::NewProp_LFDiff = { "LFDiff", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRSimpleCharacter_eventServerMoveVRDualHybridRootMotion_Parms, LFDiff), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVRDualHybridRootMotion_Statics::NewProp_ConditionalReps = { "ConditionalReps", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRSimpleCharacter_eventServerMoveVRDualHybridRootMotion_Parms, ConditionalReps), Z_Construct_UScriptStruct_FVRConditionalMoveRep, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVRDualHybridRootMotion_Statics::NewProp_ClientLoc = { "ClientLoc", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRSimpleCharacter_eventServerMoveVRDualHybridRootMotion_Parms, ClientLoc), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVRDualHybridRootMotion_Statics::NewProp_InAccel = { "InAccel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRSimpleCharacter_eventServerMoveVRDualHybridRootMotion_Parms, InAccel), Z_Construct_UScriptStruct_FVector_NetQuantize10, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVRDualHybridRootMotion_Statics::NewProp_TimeStamp = { "TimeStamp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRSimpleCharacter_eventServerMoveVRDualHybridRootMotion_Parms, TimeStamp), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVRDualHybridRootMotion_Statics::NewProp_OldLFDiff = { "OldLFDiff", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRSimpleCharacter_eventServerMoveVRDualHybridRootMotion_Parms, OldLFDiff), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVRDualHybridRootMotion_Statics::NewProp_OldConditionalReps = { "OldConditionalReps", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRSimpleCharacter_eventServerMoveVRDualHybridRootMotion_Parms, OldConditionalReps), Z_Construct_UScriptStruct_FVRConditionalMoveRep, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVRDualHybridRootMotion_Statics::NewProp_View0 = { "View0", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRSimpleCharacter_eventServerMoveVRDualHybridRootMotion_Parms, View0), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVRDualHybridRootMotion_Statics::NewProp_PendingFlags = { "PendingFlags", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRSimpleCharacter_eventServerMoveVRDualHybridRootMotion_Parms, PendingFlags), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVRDualHybridRootMotion_Statics::NewProp_InAccel0 = { "InAccel0", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRSimpleCharacter_eventServerMoveVRDualHybridRootMotion_Parms, InAccel0), Z_Construct_UScriptStruct_FVector_NetQuantize10, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVRDualHybridRootMotion_Statics::NewProp_TimeStamp0 = { "TimeStamp0", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRSimpleCharacter_eventServerMoveVRDualHybridRootMotion_Parms, TimeStamp0), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVRDualHybridRootMotion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVRDualHybridRootMotion_Statics::NewProp_ClientMovementMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVRDualHybridRootMotion_Statics::NewProp_MoveReps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVRDualHybridRootMotion_Statics::NewProp_NewFlags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVRDualHybridRootMotion_Statics::NewProp_LFDiff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVRDualHybridRootMotion_Statics::NewProp_ConditionalReps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVRDualHybridRootMotion_Statics::NewProp_ClientLoc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVRDualHybridRootMotion_Statics::NewProp_InAccel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVRDualHybridRootMotion_Statics::NewProp_TimeStamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVRDualHybridRootMotion_Statics::NewProp_OldLFDiff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVRDualHybridRootMotion_Statics::NewProp_OldConditionalReps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVRDualHybridRootMotion_Statics::NewProp_View0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVRDualHybridRootMotion_Statics::NewProp_PendingFlags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVRDualHybridRootMotion_Statics::NewProp_InAccel0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVRDualHybridRootMotion_Statics::NewProp_TimeStamp0,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVRDualHybridRootMotion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleChar/VRSimpleCharacter.h" },
		{ "ToolTip", "Replicated function sent by client to server - contains client movement and view info for two moves. First move is non root motion, second is root motion." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVRDualHybridRootMotion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRSimpleCharacter, nullptr, "ServerMoveVRDualHybridRootMotion", sizeof(VRSimpleCharacter_eventServerMoveVRDualHybridRootMotion_Parms), Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVRDualHybridRootMotion_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVRDualHybridRootMotion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVRDualHybridRootMotion_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVRDualHybridRootMotion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVRDualHybridRootMotion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVRDualHybridRootMotion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AVRSimpleCharacter_NoRegister()
	{
		return AVRSimpleCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AVRSimpleCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VRSceneComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VRSceneComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVRSimpleCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVRBaseCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AVRSimpleCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVR, "ServerMoveVR" }, // 1292418080
		{ &Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVRDual, "ServerMoveVRDual" }, // 3817083188
		{ &Z_Construct_UFunction_AVRSimpleCharacter_ServerMoveVRDualHybridRootMotion, "ServerMoveVRDualHybridRootMotion" }, // 3988111228
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRSimpleCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SimpleChar/VRSimpleCharacter.h" },
		{ "ModuleRelativePath", "Public/SimpleChar/VRSimpleCharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRSimpleCharacter_Statics::NewProp_VRSceneComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRSimpleCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SimpleChar/VRSimpleCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVRSimpleCharacter_Statics::NewProp_VRSceneComponent = { "VRSceneComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVRSimpleCharacter, VRSceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVRSimpleCharacter_Statics::NewProp_VRSceneComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVRSimpleCharacter_Statics::NewProp_VRSceneComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVRSimpleCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRSimpleCharacter_Statics::NewProp_VRSceneComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVRSimpleCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVRSimpleCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AVRSimpleCharacter_Statics::ClassParams = {
		&AVRSimpleCharacter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AVRSimpleCharacter_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AVRSimpleCharacter_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AVRSimpleCharacter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AVRSimpleCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVRSimpleCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AVRSimpleCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVRSimpleCharacter, 4236710212);
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<AVRSimpleCharacter>()
	{
		return AVRSimpleCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVRSimpleCharacter(Z_Construct_UClass_AVRSimpleCharacter, &AVRSimpleCharacter::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("AVRSimpleCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVRSimpleCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
