// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/Misc/VRLogComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRLogComponent() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EBPVRConsoleDrawType();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRLogComponent_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRLogComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRLogComponent_AppendTextToConsole();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRLogComponent_DrawConsoleToRenderTarget2D();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRLogComponent_SendKeyEventToConsole();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EInputEvent();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRLogComponent_SetConsoleText();
// End Cross Module References
	static UEnum* EBPVRConsoleDrawType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EBPVRConsoleDrawType, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EBPVRConsoleDrawType"));
		}
		return Singleton;
	}
	template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EBPVRConsoleDrawType>()
	{
		return EBPVRConsoleDrawType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBPVRConsoleDrawType(EBPVRConsoleDrawType_StaticEnum, TEXT("/Script/VRExpansionPlugin"), TEXT("EBPVRConsoleDrawType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VRExpansionPlugin_EBPVRConsoleDrawType_Hash() { return 2548993905U; }
	UEnum* Z_Construct_UEnum_VRExpansionPlugin_EBPVRConsoleDrawType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBPVRConsoleDrawType"), 0, Get_Z_Construct_UEnum_VRExpansionPlugin_EBPVRConsoleDrawType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBPVRConsoleDrawType::VRConsole_Draw_ConsoleOnly", (int64)EBPVRConsoleDrawType::VRConsole_Draw_ConsoleOnly },
				{ "EBPVRConsoleDrawType::VRConsole_Draw_OutputLogOnly", (int64)EBPVRConsoleDrawType::VRConsole_Draw_OutputLogOnly },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Misc/VRLogComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
				nullptr,
				"EBPVRConsoleDrawType",
				"EBPVRConsoleDrawType",
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
	void UVRLogComponent::StaticRegisterNativesUVRLogComponent()
	{
		UClass* Class = UVRLogComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AppendTextToConsole", &UVRLogComponent::execAppendTextToConsole },
			{ "DrawConsoleToRenderTarget2D", &UVRLogComponent::execDrawConsoleToRenderTarget2D },
			{ "SendKeyEventToConsole", &UVRLogComponent::execSendKeyEventToConsole },
			{ "SetConsoleText", &UVRLogComponent::execSetConsoleText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVRLogComponent_AppendTextToConsole_Statics
	{
		struct VRLogComponent_eventAppendTextToConsole_Parms
		{
			FString Text;
			bool bReturnAtEnd;
		};
		static void NewProp_bReturnAtEnd_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReturnAtEnd;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Text;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVRLogComponent_AppendTextToConsole_Statics::NewProp_bReturnAtEnd_SetBit(void* Obj)
	{
		((VRLogComponent_eventAppendTextToConsole_Parms*)Obj)->bReturnAtEnd = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRLogComponent_AppendTextToConsole_Statics::NewProp_bReturnAtEnd = { "bReturnAtEnd", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRLogComponent_eventAppendTextToConsole_Parms), &Z_Construct_UFunction_UVRLogComponent_AppendTextToConsole_Statics::NewProp_bReturnAtEnd_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVRLogComponent_AppendTextToConsole_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRLogComponent_eventAppendTextToConsole_Parms, Text), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRLogComponent_AppendTextToConsole_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRLogComponent_AppendTextToConsole_Statics::NewProp_bReturnAtEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRLogComponent_AppendTextToConsole_Statics::NewProp_Text,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRLogComponent_AppendTextToConsole_Statics::Function_MetaDataParams[] = {
		{ "bIgnoreSelf", "true" },
		{ "Category", "VRLogComponent|Console" },
		{ "CPP_Default_bReturnAtEnd", "false" },
		{ "ModuleRelativePath", "Public/Misc/VRLogComponent.h" },
		{ "ToolTip", "Sends text to the console - Optionally returns at the end to \"enter\" the text, end flashes the cursor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRLogComponent_AppendTextToConsole_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRLogComponent, nullptr, "AppendTextToConsole", sizeof(VRLogComponent_eventAppendTextToConsole_Parms), Z_Construct_UFunction_UVRLogComponent_AppendTextToConsole_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVRLogComponent_AppendTextToConsole_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRLogComponent_AppendTextToConsole_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVRLogComponent_AppendTextToConsole_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRLogComponent_AppendTextToConsole()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRLogComponent_AppendTextToConsole_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRLogComponent_DrawConsoleToRenderTarget2D_Statics
	{
		struct VRLogComponent_eventDrawConsoleToRenderTarget2D_Parms
		{
			EBPVRConsoleDrawType DrawType;
			UTextureRenderTarget2D* Texture;
			float ScrollOffset;
			bool bForceDraw;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bForceDraw_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceDraw;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScrollOffset;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DrawType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DrawType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVRLogComponent_DrawConsoleToRenderTarget2D_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VRLogComponent_eventDrawConsoleToRenderTarget2D_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRLogComponent_DrawConsoleToRenderTarget2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRLogComponent_eventDrawConsoleToRenderTarget2D_Parms), &Z_Construct_UFunction_UVRLogComponent_DrawConsoleToRenderTarget2D_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVRLogComponent_DrawConsoleToRenderTarget2D_Statics::NewProp_bForceDraw_SetBit(void* Obj)
	{
		((VRLogComponent_eventDrawConsoleToRenderTarget2D_Parms*)Obj)->bForceDraw = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRLogComponent_DrawConsoleToRenderTarget2D_Statics::NewProp_bForceDraw = { "bForceDraw", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRLogComponent_eventDrawConsoleToRenderTarget2D_Parms), &Z_Construct_UFunction_UVRLogComponent_DrawConsoleToRenderTarget2D_Statics::NewProp_bForceDraw_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRLogComponent_DrawConsoleToRenderTarget2D_Statics::NewProp_ScrollOffset = { "ScrollOffset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRLogComponent_eventDrawConsoleToRenderTarget2D_Parms, ScrollOffset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRLogComponent_DrawConsoleToRenderTarget2D_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRLogComponent_eventDrawConsoleToRenderTarget2D_Parms, Texture), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVRLogComponent_DrawConsoleToRenderTarget2D_Statics::NewProp_DrawType = { "DrawType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRLogComponent_eventDrawConsoleToRenderTarget2D_Parms, DrawType), Z_Construct_UEnum_VRExpansionPlugin_EBPVRConsoleDrawType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVRLogComponent_DrawConsoleToRenderTarget2D_Statics::NewProp_DrawType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRLogComponent_DrawConsoleToRenderTarget2D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRLogComponent_DrawConsoleToRenderTarget2D_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRLogComponent_DrawConsoleToRenderTarget2D_Statics::NewProp_bForceDraw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRLogComponent_DrawConsoleToRenderTarget2D_Statics::NewProp_ScrollOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRLogComponent_DrawConsoleToRenderTarget2D_Statics::NewProp_Texture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRLogComponent_DrawConsoleToRenderTarget2D_Statics::NewProp_DrawType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRLogComponent_DrawConsoleToRenderTarget2D_Statics::NewProp_DrawType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRLogComponent_DrawConsoleToRenderTarget2D_Statics::Function_MetaDataParams[] = {
		{ "bIgnoreSelf", "true" },
		{ "Category", "VRLogComponent|Console" },
		{ "DisplayName", "DrawConsoleToCanvasRenderTarget2D" },
		{ "ModuleRelativePath", "Public/Misc/VRLogComponent.h" },
		{ "ToolTip", "Draw the console to a render target 2D" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRLogComponent_DrawConsoleToRenderTarget2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRLogComponent, nullptr, "DrawConsoleToRenderTarget2D", sizeof(VRLogComponent_eventDrawConsoleToRenderTarget2D_Parms), Z_Construct_UFunction_UVRLogComponent_DrawConsoleToRenderTarget2D_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVRLogComponent_DrawConsoleToRenderTarget2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRLogComponent_DrawConsoleToRenderTarget2D_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVRLogComponent_DrawConsoleToRenderTarget2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRLogComponent_DrawConsoleToRenderTarget2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRLogComponent_DrawConsoleToRenderTarget2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRLogComponent_SendKeyEventToConsole_Statics
	{
		struct VRLogComponent_eventSendKeyEventToConsole_Parms
		{
			FKey Key;
			TEnumAsByte<EInputEvent> KeyEvent;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_KeyEvent;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVRLogComponent_SendKeyEventToConsole_Statics::NewProp_KeyEvent = { "KeyEvent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRLogComponent_eventSendKeyEventToConsole_Parms, KeyEvent), Z_Construct_UEnum_Engine_EInputEvent, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRLogComponent_SendKeyEventToConsole_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRLogComponent_eventSendKeyEventToConsole_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRLogComponent_SendKeyEventToConsole_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRLogComponent_SendKeyEventToConsole_Statics::NewProp_KeyEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRLogComponent_SendKeyEventToConsole_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRLogComponent_SendKeyEventToConsole_Statics::Function_MetaDataParams[] = {
		{ "bIgnoreSelf", "true" },
		{ "Category", "VRLogComponent|Console" },
		{ "ModuleRelativePath", "Public/Misc/VRLogComponent.h" },
		{ "ToolTip", "Sends a key to the console - Console considers Released as final, flashes the cursor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRLogComponent_SendKeyEventToConsole_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRLogComponent, nullptr, "SendKeyEventToConsole", sizeof(VRLogComponent_eventSendKeyEventToConsole_Parms), Z_Construct_UFunction_UVRLogComponent_SendKeyEventToConsole_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVRLogComponent_SendKeyEventToConsole_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRLogComponent_SendKeyEventToConsole_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVRLogComponent_SendKeyEventToConsole_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRLogComponent_SendKeyEventToConsole()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRLogComponent_SendKeyEventToConsole_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRLogComponent_SetConsoleText_Statics
	{
		struct VRLogComponent_eventSetConsoleText_Parms
		{
			FString Text;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Text;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVRLogComponent_SetConsoleText_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRLogComponent_eventSetConsoleText_Parms, Text), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRLogComponent_SetConsoleText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRLogComponent_SetConsoleText_Statics::NewProp_Text,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRLogComponent_SetConsoleText_Statics::Function_MetaDataParams[] = {
		{ "bIgnoreSelf", "true" },
		{ "Category", "VRLogComponent|Console" },
		{ "ModuleRelativePath", "Public/Misc/VRLogComponent.h" },
		{ "ToolTip", "Sets the console input text, can be used to clear the console or enter full or partial commands" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRLogComponent_SetConsoleText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRLogComponent, nullptr, "SetConsoleText", sizeof(VRLogComponent_eventSetConsoleText_Parms), Z_Construct_UFunction_UVRLogComponent_SetConsoleText_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVRLogComponent_SetConsoleText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRLogComponent_SetConsoleText_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVRLogComponent_SetConsoleText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRLogComponent_SetConsoleText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRLogComponent_SetConsoleText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVRLogComponent_NoRegister()
	{
		return UVRLogComponent::StaticClass();
	}
	struct Z_Construct_UClass_UVRLogComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxStoredMessages_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxStoredMessages;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxLineLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxLineLength;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVRLogComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVRLogComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVRLogComponent_AppendTextToConsole, "AppendTextToConsole" }, // 727211162
		{ &Z_Construct_UFunction_UVRLogComponent_DrawConsoleToRenderTarget2D, "DrawConsoleToRenderTarget2D" }, // 2897965641
		{ &Z_Construct_UFunction_UVRLogComponent_SendKeyEventToConsole, "SendKeyEventToConsole" }, // 820187575
		{ &Z_Construct_UFunction_UVRLogComponent_SetConsoleText, "SetConsoleText" }, // 4066032
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRLogComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "VRExpansionPlugin" },
		{ "IncludePath", "Misc/VRLogComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Misc/VRLogComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "This class taps into the output log and console and renders them to textures so they can be viewed in levels.\nGenerally used for debugging and testing in VR, also allows sending input to the console." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRLogComponent_Statics::NewProp_MaxStoredMessages_MetaData[] = {
		{ "Category", "VRLogComponent|Console" },
		{ "ModuleRelativePath", "Public/Misc/VRLogComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVRLogComponent_Statics::NewProp_MaxStoredMessages = { "MaxStoredMessages", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRLogComponent, MaxStoredMessages), METADATA_PARAMS(Z_Construct_UClass_UVRLogComponent_Statics::NewProp_MaxStoredMessages_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVRLogComponent_Statics::NewProp_MaxStoredMessages_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRLogComponent_Statics::NewProp_MaxLineLength_MetaData[] = {
		{ "Category", "VRLogComponent|Console" },
		{ "ModuleRelativePath", "Public/Misc/VRLogComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVRLogComponent_Statics::NewProp_MaxLineLength = { "MaxLineLength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRLogComponent, MaxLineLength), METADATA_PARAMS(Z_Construct_UClass_UVRLogComponent_Statics::NewProp_MaxLineLength_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVRLogComponent_Statics::NewProp_MaxLineLength_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVRLogComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRLogComponent_Statics::NewProp_MaxStoredMessages,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRLogComponent_Statics::NewProp_MaxLineLength,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVRLogComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVRLogComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVRLogComponent_Statics::ClassParams = {
		&UVRLogComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVRLogComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UVRLogComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVRLogComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UVRLogComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVRLogComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVRLogComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVRLogComponent, 3735459042);
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UVRLogComponent>()
	{
		return UVRLogComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVRLogComponent(Z_Construct_UClass_UVRLogComponent, &UVRLogComponent::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("UVRLogComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVRLogComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
