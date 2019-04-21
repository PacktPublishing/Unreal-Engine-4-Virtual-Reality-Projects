// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EBPVRConsoleDrawType : uint8;
class UTextureRenderTarget2D;
struct FKey;
#ifdef VREXPANSIONPLUGIN_VRLogComponent_generated_h
#error "VRLogComponent.generated.h already included, missing '#pragma once' in VRLogComponent.h"
#endif
#define VREXPANSIONPLUGIN_VRLogComponent_generated_h

#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRLogComponent_h_199_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDrawConsoleToRenderTarget2D) \
	{ \
		P_GET_ENUM(EBPVRConsoleDrawType,Z_Param_DrawType); \
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_Texture); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ScrollOffset); \
		P_GET_UBOOL(Z_Param_bForceDraw); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->DrawConsoleToRenderTarget2D(EBPVRConsoleDrawType(Z_Param_DrawType),Z_Param_Texture,Z_Param_ScrollOffset,Z_Param_bForceDraw); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAppendTextToConsole) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Text); \
		P_GET_UBOOL(Z_Param_bReturnAtEnd); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AppendTextToConsole(Z_Param_Text,Z_Param_bReturnAtEnd); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendKeyEventToConsole) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_Key); \
		P_GET_PROPERTY(UByteProperty,Z_Param_KeyEvent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SendKeyEventToConsole(Z_Param_Key,EInputEvent(Z_Param_KeyEvent)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetConsoleText) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Text); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetConsoleText(Z_Param_Text); \
		P_NATIVE_END; \
	}


#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRLogComponent_h_199_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDrawConsoleToRenderTarget2D) \
	{ \
		P_GET_ENUM(EBPVRConsoleDrawType,Z_Param_DrawType); \
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_Texture); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ScrollOffset); \
		P_GET_UBOOL(Z_Param_bForceDraw); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->DrawConsoleToRenderTarget2D(EBPVRConsoleDrawType(Z_Param_DrawType),Z_Param_Texture,Z_Param_ScrollOffset,Z_Param_bForceDraw); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAppendTextToConsole) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Text); \
		P_GET_UBOOL(Z_Param_bReturnAtEnd); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AppendTextToConsole(Z_Param_Text,Z_Param_bReturnAtEnd); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendKeyEventToConsole) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_Key); \
		P_GET_PROPERTY(UByteProperty,Z_Param_KeyEvent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SendKeyEventToConsole(Z_Param_Key,EInputEvent(Z_Param_KeyEvent)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetConsoleText) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Text); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetConsoleText(Z_Param_Text); \
		P_NATIVE_END; \
	}


#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRLogComponent_h_199_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVRLogComponent(); \
	friend struct Z_Construct_UClass_UVRLogComponent_Statics; \
public: \
	DECLARE_CLASS(UVRLogComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVRLogComponent)


#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRLogComponent_h_199_INCLASS \
private: \
	static void StaticRegisterNativesUVRLogComponent(); \
	friend struct Z_Construct_UClass_UVRLogComponent_Statics; \
public: \
	DECLARE_CLASS(UVRLogComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVRLogComponent)


#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRLogComponent_h_199_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVRLogComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRLogComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRLogComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRLogComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRLogComponent(UVRLogComponent&&); \
	NO_API UVRLogComponent(const UVRLogComponent&); \
public:


#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRLogComponent_h_199_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRLogComponent(UVRLogComponent&&); \
	NO_API UVRLogComponent(const UVRLogComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRLogComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRLogComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRLogComponent)


#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRLogComponent_h_199_PRIVATE_PROPERTY_OFFSET
#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRLogComponent_h_196_PROLOG
#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRLogComponent_h_199_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRLogComponent_h_199_PRIVATE_PROPERTY_OFFSET \
	VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRLogComponent_h_199_RPC_WRAPPERS \
	VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRLogComponent_h_199_INCLASS \
	VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRLogComponent_h_199_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRLogComponent_h_199_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRLogComponent_h_199_PRIVATE_PROPERTY_OFFSET \
	VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRLogComponent_h_199_RPC_WRAPPERS_NO_PURE_DECLS \
	VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRLogComponent_h_199_INCLASS_NO_PURE_DECLS \
	VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRLogComponent_h_199_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREXPANSIONPLUGIN_API UClass* StaticClass<class UVRLogComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VRExpPluginExp_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRLogComponent_h


#define FOREACH_ENUM_EBPVRCONSOLEDRAWTYPE(op) \
	op(EBPVRConsoleDrawType::VRConsole_Draw_ConsoleOnly) \
	op(EBPVRConsoleDrawType::VRConsole_Draw_OutputLogOnly) 

enum class EBPVRConsoleDrawType : uint8;
template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EBPVRConsoleDrawType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
