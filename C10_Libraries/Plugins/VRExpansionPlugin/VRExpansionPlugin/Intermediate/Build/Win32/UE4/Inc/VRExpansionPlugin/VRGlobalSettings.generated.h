// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FBPVRControllerProfile;
struct FTransform;
struct FBPVirtualStockSettings;
#ifdef VREXPANSIONPLUGIN_VRGlobalSettings_generated_h
#error "VRGlobalSettings.generated.h already included, missing '#pragma once' in VRGlobalSettings.h"
#endif
#define VREXPANSIONPLUGIN_VRGlobalSettings_generated_h

#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGlobalSettings_h_41_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<struct FBPVRControllerProfile>();

#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGlobalSettings_h_30_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FActionMappingDetails_Statics; \
	VREXPANSIONPLUGIN_API static class UScriptStruct* StaticStruct();


template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<struct FActionMappingDetails>();

#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGlobalSettings_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAxisMappingDetails_Statics; \
	VREXPANSIONPLUGIN_API static class UScriptStruct* StaticStruct();


template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<struct FAxisMappingDetails>();

#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGlobalSettings_h_106_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLoadControllerProfile) \
	{ \
		P_GET_STRUCT_REF(FBPVRControllerProfile,Z_Param_Out_ControllerProfile); \
		P_GET_UBOOL(Z_Param_bSetAsCurrentProfile); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVRGlobalSettings::LoadControllerProfile(Z_Param_Out_ControllerProfile,Z_Param_bSetAsCurrentProfile); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadControllerProfileByName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ControllerProfileName); \
		P_GET_UBOOL(Z_Param_bSetAsCurrentProfile); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVRGlobalSettings::LoadControllerProfileByName(Z_Param_ControllerProfileName,Z_Param_bSetAsCurrentProfile); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetControllerProfile) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ControllerProfileName); \
		P_GET_STRUCT_REF(FBPVRControllerProfile,Z_Param_Out_OutProfile); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVRGlobalSettings::GetControllerProfile(Z_Param_ControllerProfileName,Z_Param_Out_OutProfile); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentProfile) \
	{ \
		P_GET_UBOOL_REF(Z_Param_Out_bHadLoadedProfile); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FBPVRControllerProfile*)Z_Param__Result=UVRGlobalSettings::GetCurrentProfile(Z_Param_Out_bHadLoadedProfile); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentProfileName) \
	{ \
		P_GET_UBOOL_REF(Z_Param_Out_bHadLoadedProfile); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=UVRGlobalSettings::GetCurrentProfileName(Z_Param_Out_bHadLoadedProfile); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveControllerProfiles) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVRGlobalSettings::SaveControllerProfiles(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeleteControllerProfile) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ControllerProfileName); \
		P_GET_UBOOL(Z_Param_bSaveOutToConfig); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVRGlobalSettings::DeleteControllerProfile(Z_Param_ControllerProfileName,Z_Param_bSaveOutToConfig); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddControllerProfile) \
	{ \
		P_GET_STRUCT_REF(FBPVRControllerProfile,Z_Param_Out_NewProfile); \
		P_GET_UBOOL(Z_Param_bSaveOutToConfig); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVRGlobalSettings::AddControllerProfile(Z_Param_Out_NewProfile,Z_Param_bSaveOutToConfig); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOverwriteControllerProfile) \
	{ \
		P_GET_STRUCT_REF(FBPVRControllerProfile,Z_Param_Out_OverwritingProfile); \
		P_GET_UBOOL(Z_Param_bSaveOutToConfig); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVRGlobalSettings::OverwriteControllerProfile(Z_Param_Out_OverwritingProfile,Z_Param_bSaveOutToConfig); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetControllerProfiles) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FBPVRControllerProfile>*)Z_Param__Result=UVRGlobalSettings::GetControllerProfiles(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAdjustTransformByGivenControllerProfile) \
	{ \
		P_GET_STRUCT_REF(FBPVRControllerProfile,Z_Param_Out_ControllerProfile); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_SocketTransform); \
		P_GET_UBOOL(Z_Param_bIsRightHand); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=UVRGlobalSettings::AdjustTransformByGivenControllerProfile(Z_Param_Out_ControllerProfile,Z_Param_Out_SocketTransform,Z_Param_bIsRightHand); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAdjustTransformByControllerProfile) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_OptionalControllerProfileName); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_SocketTransform); \
		P_GET_UBOOL(Z_Param_bIsRightHand); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=UVRGlobalSettings::AdjustTransformByControllerProfile(Z_Param_OptionalControllerProfileName,Z_Param_Out_SocketTransform,Z_Param_bIsRightHand); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveVirtualStockGlobalSettings) \
	{ \
		P_GET_STRUCT(FBPVirtualStockSettings,Z_Param_NewVirtualStockSettings); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVRGlobalSettings::SaveVirtualStockGlobalSettings(Z_Param_NewVirtualStockSettings); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVirtualStockGlobalSettings) \
	{ \
		P_GET_STRUCT_REF(FBPVirtualStockSettings,Z_Param_Out_OutVirtualStockSettings); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVRGlobalSettings::GetVirtualStockGlobalSettings(Z_Param_Out_OutVirtualStockSettings); \
		P_NATIVE_END; \
	}


#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGlobalSettings_h_106_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLoadControllerProfile) \
	{ \
		P_GET_STRUCT_REF(FBPVRControllerProfile,Z_Param_Out_ControllerProfile); \
		P_GET_UBOOL(Z_Param_bSetAsCurrentProfile); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVRGlobalSettings::LoadControllerProfile(Z_Param_Out_ControllerProfile,Z_Param_bSetAsCurrentProfile); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadControllerProfileByName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ControllerProfileName); \
		P_GET_UBOOL(Z_Param_bSetAsCurrentProfile); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVRGlobalSettings::LoadControllerProfileByName(Z_Param_ControllerProfileName,Z_Param_bSetAsCurrentProfile); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetControllerProfile) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ControllerProfileName); \
		P_GET_STRUCT_REF(FBPVRControllerProfile,Z_Param_Out_OutProfile); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVRGlobalSettings::GetControllerProfile(Z_Param_ControllerProfileName,Z_Param_Out_OutProfile); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentProfile) \
	{ \
		P_GET_UBOOL_REF(Z_Param_Out_bHadLoadedProfile); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FBPVRControllerProfile*)Z_Param__Result=UVRGlobalSettings::GetCurrentProfile(Z_Param_Out_bHadLoadedProfile); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentProfileName) \
	{ \
		P_GET_UBOOL_REF(Z_Param_Out_bHadLoadedProfile); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=UVRGlobalSettings::GetCurrentProfileName(Z_Param_Out_bHadLoadedProfile); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveControllerProfiles) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVRGlobalSettings::SaveControllerProfiles(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeleteControllerProfile) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ControllerProfileName); \
		P_GET_UBOOL(Z_Param_bSaveOutToConfig); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVRGlobalSettings::DeleteControllerProfile(Z_Param_ControllerProfileName,Z_Param_bSaveOutToConfig); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddControllerProfile) \
	{ \
		P_GET_STRUCT_REF(FBPVRControllerProfile,Z_Param_Out_NewProfile); \
		P_GET_UBOOL(Z_Param_bSaveOutToConfig); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVRGlobalSettings::AddControllerProfile(Z_Param_Out_NewProfile,Z_Param_bSaveOutToConfig); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOverwriteControllerProfile) \
	{ \
		P_GET_STRUCT_REF(FBPVRControllerProfile,Z_Param_Out_OverwritingProfile); \
		P_GET_UBOOL(Z_Param_bSaveOutToConfig); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVRGlobalSettings::OverwriteControllerProfile(Z_Param_Out_OverwritingProfile,Z_Param_bSaveOutToConfig); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetControllerProfiles) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FBPVRControllerProfile>*)Z_Param__Result=UVRGlobalSettings::GetControllerProfiles(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAdjustTransformByGivenControllerProfile) \
	{ \
		P_GET_STRUCT_REF(FBPVRControllerProfile,Z_Param_Out_ControllerProfile); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_SocketTransform); \
		P_GET_UBOOL(Z_Param_bIsRightHand); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=UVRGlobalSettings::AdjustTransformByGivenControllerProfile(Z_Param_Out_ControllerProfile,Z_Param_Out_SocketTransform,Z_Param_bIsRightHand); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAdjustTransformByControllerProfile) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_OptionalControllerProfileName); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_SocketTransform); \
		P_GET_UBOOL(Z_Param_bIsRightHand); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=UVRGlobalSettings::AdjustTransformByControllerProfile(Z_Param_OptionalControllerProfileName,Z_Param_Out_SocketTransform,Z_Param_bIsRightHand); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveVirtualStockGlobalSettings) \
	{ \
		P_GET_STRUCT(FBPVirtualStockSettings,Z_Param_NewVirtualStockSettings); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVRGlobalSettings::SaveVirtualStockGlobalSettings(Z_Param_NewVirtualStockSettings); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVirtualStockGlobalSettings) \
	{ \
		P_GET_STRUCT_REF(FBPVirtualStockSettings,Z_Param_Out_OutVirtualStockSettings); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVRGlobalSettings::GetVirtualStockGlobalSettings(Z_Param_Out_OutVirtualStockSettings); \
		P_NATIVE_END; \
	}


#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGlobalSettings_h_106_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVRGlobalSettings(); \
	friend struct Z_Construct_UClass_UVRGlobalSettings_Statics; \
public: \
	DECLARE_CLASS(UVRGlobalSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVRGlobalSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGlobalSettings_h_106_INCLASS \
private: \
	static void StaticRegisterNativesUVRGlobalSettings(); \
	friend struct Z_Construct_UClass_UVRGlobalSettings_Statics; \
public: \
	DECLARE_CLASS(UVRGlobalSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVRGlobalSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGlobalSettings_h_106_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVRGlobalSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRGlobalSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRGlobalSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRGlobalSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRGlobalSettings(UVRGlobalSettings&&); \
	NO_API UVRGlobalSettings(const UVRGlobalSettings&); \
public:


#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGlobalSettings_h_106_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRGlobalSettings(UVRGlobalSettings&&); \
	NO_API UVRGlobalSettings(const UVRGlobalSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRGlobalSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRGlobalSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRGlobalSettings)


#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGlobalSettings_h_106_PRIVATE_PROPERTY_OFFSET
#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGlobalSettings_h_103_PROLOG
#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGlobalSettings_h_106_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGlobalSettings_h_106_PRIVATE_PROPERTY_OFFSET \
	VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGlobalSettings_h_106_RPC_WRAPPERS \
	VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGlobalSettings_h_106_INCLASS \
	VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGlobalSettings_h_106_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGlobalSettings_h_106_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGlobalSettings_h_106_PRIVATE_PROPERTY_OFFSET \
	VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGlobalSettings_h_106_RPC_WRAPPERS_NO_PURE_DECLS \
	VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGlobalSettings_h_106_INCLASS_NO_PURE_DECLS \
	VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGlobalSettings_h_106_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREXPANSIONPLUGIN_API UClass* StaticClass<class UVRGlobalSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGlobalSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
