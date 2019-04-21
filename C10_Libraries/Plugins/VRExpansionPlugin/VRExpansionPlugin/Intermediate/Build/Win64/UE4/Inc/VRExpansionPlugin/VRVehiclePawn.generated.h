// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AController;
#ifdef VREXPANSIONPLUGIN_VRVehiclePawn_generated_h
#error "VRVehiclePawn.generated.h already included, missing '#pragma once' in VRVehiclePawn.h"
#endif
#define VREXPANSIONPLUGIN_VRVehiclePawn_generated_h

#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRVehiclePawn_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execForceSecondaryPossession) \
	{ \
		P_GET_OBJECT(AController,Z_Param_NewController); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ForceSecondaryPossession(Z_Param_NewController); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBindToInput) \
	{ \
		P_GET_OBJECT(AController,Z_Param_CController); \
		P_GET_UBOOL(Z_Param_bBindToInput); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SetBindToInput(Z_Param_CController,Z_Param_bBindToInput); \
		P_NATIVE_END; \
	}


#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRVehiclePawn_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execForceSecondaryPossession) \
	{ \
		P_GET_OBJECT(AController,Z_Param_NewController); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ForceSecondaryPossession(Z_Param_NewController); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBindToInput) \
	{ \
		P_GET_OBJECT(AController,Z_Param_CController); \
		P_GET_UBOOL(Z_Param_bBindToInput); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SetBindToInput(Z_Param_CController,Z_Param_bBindToInput); \
		P_NATIVE_END; \
	}


#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRVehiclePawn_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVRVehiclePawn(); \
	friend struct Z_Construct_UClass_AVRVehiclePawn_Statics; \
public: \
	DECLARE_CLASS(AVRVehiclePawn, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(AVRVehiclePawn)


#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRVehiclePawn_h_21_INCLASS \
private: \
	static void StaticRegisterNativesAVRVehiclePawn(); \
	friend struct Z_Construct_UClass_AVRVehiclePawn_Statics; \
public: \
	DECLARE_CLASS(AVRVehiclePawn, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(AVRVehiclePawn)


#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRVehiclePawn_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVRVehiclePawn(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVRVehiclePawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVRVehiclePawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVRVehiclePawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVRVehiclePawn(AVRVehiclePawn&&); \
	NO_API AVRVehiclePawn(const AVRVehiclePawn&); \
public:


#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRVehiclePawn_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVRVehiclePawn(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVRVehiclePawn(AVRVehiclePawn&&); \
	NO_API AVRVehiclePawn(const AVRVehiclePawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVRVehiclePawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVRVehiclePawn); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVRVehiclePawn)


#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRVehiclePawn_h_21_PRIVATE_PROPERTY_OFFSET
#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRVehiclePawn_h_18_PROLOG
#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRVehiclePawn_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRVehiclePawn_h_21_PRIVATE_PROPERTY_OFFSET \
	VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRVehiclePawn_h_21_RPC_WRAPPERS \
	VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRVehiclePawn_h_21_INCLASS \
	VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRVehiclePawn_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRVehiclePawn_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRVehiclePawn_h_21_PRIVATE_PROPERTY_OFFSET \
	VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRVehiclePawn_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRVehiclePawn_h_21_INCLASS_NO_PURE_DECLS \
	VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRVehiclePawn_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREXPANSIONPLUGIN_API UClass* StaticClass<class AVRVehiclePawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRVehiclePawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
