// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTransform;
class USceneComponent;
#ifdef VREXPANSIONPLUGIN_GS_GunTools_generated_h
#error "GS_GunTools.generated.h already included, missing '#pragma once' in GS_GunTools.h"
#endif
#define VREXPANSIONPLUGIN_GS_GunTools_generated_h

#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_GunTools_h_93_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGunTools_AdvSecondarySettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<struct FGunTools_AdvSecondarySettings>();

#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_GunTools_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBPVirtualStockSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<struct FBPVirtualStockSettings>();

#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_GunTools_h_13_DELEGATE \
struct _Script_VRExpansionPlugin_eventVRVirtualStockModeChangedSignature_Parms \
{ \
	bool IsVirtualStockEngaged; \
}; \
static inline void FVRVirtualStockModeChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& VRVirtualStockModeChangedSignature, bool IsVirtualStockEngaged) \
{ \
	_Script_VRExpansionPlugin_eventVRVirtualStockModeChangedSignature_Parms Parms; \
	Parms.IsVirtualStockEngaged=IsVirtualStockEngaged ? true : false; \
	VRVirtualStockModeChangedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_GunTools_h_153_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execResetRecoil) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetRecoil(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddRecoilInstance) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_RecoilAddition); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddRecoilInstance(Z_Param_Out_RecoilAddition); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVirtualStockEnabled) \
	{ \
		P_GET_UBOOL(Z_Param_bAllowVirtualStock); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetVirtualStockEnabled(Z_Param_bAllowVirtualStock); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVirtualStockComponent) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_NewStockComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetVirtualStockComponent(Z_Param_NewStockComponent); \
		P_NATIVE_END; \
	}


#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_GunTools_h_153_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execResetRecoil) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetRecoil(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddRecoilInstance) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_RecoilAddition); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddRecoilInstance(Z_Param_Out_RecoilAddition); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVirtualStockEnabled) \
	{ \
		P_GET_UBOOL(Z_Param_bAllowVirtualStock); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetVirtualStockEnabled(Z_Param_bAllowVirtualStock); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVirtualStockComponent) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_NewStockComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetVirtualStockComponent(Z_Param_NewStockComponent); \
		P_NATIVE_END; \
	}


#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_GunTools_h_153_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGS_GunTools(); \
	friend struct Z_Construct_UClass_UGS_GunTools_Statics; \
public: \
	DECLARE_CLASS(UGS_GunTools, UGS_Default, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UGS_GunTools)


#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_GunTools_h_153_INCLASS \
private: \
	static void StaticRegisterNativesUGS_GunTools(); \
	friend struct Z_Construct_UClass_UGS_GunTools_Statics; \
public: \
	DECLARE_CLASS(UGS_GunTools, UGS_Default, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UGS_GunTools)


#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_GunTools_h_153_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGS_GunTools(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGS_GunTools) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGS_GunTools); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGS_GunTools); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGS_GunTools(UGS_GunTools&&); \
	NO_API UGS_GunTools(const UGS_GunTools&); \
public:


#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_GunTools_h_153_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGS_GunTools(UGS_GunTools&&); \
	NO_API UGS_GunTools(const UGS_GunTools&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGS_GunTools); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGS_GunTools); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGS_GunTools)


#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_GunTools_h_153_PRIVATE_PROPERTY_OFFSET
#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_GunTools_h_150_PROLOG
#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_GunTools_h_153_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_GunTools_h_153_PRIVATE_PROPERTY_OFFSET \
	VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_GunTools_h_153_RPC_WRAPPERS \
	VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_GunTools_h_153_INCLASS \
	VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_GunTools_h_153_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_GunTools_h_153_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_GunTools_h_153_PRIVATE_PROPERTY_OFFSET \
	VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_GunTools_h_153_RPC_WRAPPERS_NO_PURE_DECLS \
	VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_GunTools_h_153_INCLASS_NO_PURE_DECLS \
	VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_GunTools_h_153_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREXPANSIONPLUGIN_API UClass* StaticClass<class UGS_GunTools>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_GunTools_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
