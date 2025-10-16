// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Log/VaerLoggingUtil.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVaerLoggingUtil() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_VaerBase();
VAERBASE_API UClass* Z_Construct_UClass_UVaerLoggingUtil();
VAERBASE_API UClass* Z_Construct_UClass_UVaerLoggingUtil_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVaerLoggingUtil Function LogToOutput ************************************
struct Z_Construct_UFunction_UVaerLoggingUtil_LogToOutput_Statics
{
	struct VaerLoggingUtil_eventLogToOutput_Parms
	{
		FString Message;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Vaer|Debug" },
		{ "ModuleRelativePath", "Public/Log/VaerLoggingUtil.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaerLoggingUtil_LogToOutput_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaerLoggingUtil_eventLogToOutput_Parms, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaerLoggingUtil_LogToOutput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaerLoggingUtil_LogToOutput_Statics::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaerLoggingUtil_LogToOutput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaerLoggingUtil_LogToOutput_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVaerLoggingUtil, nullptr, "LogToOutput", Z_Construct_UFunction_UVaerLoggingUtil_LogToOutput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaerLoggingUtil_LogToOutput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVaerLoggingUtil_LogToOutput_Statics::VaerLoggingUtil_eventLogToOutput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaerLoggingUtil_LogToOutput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaerLoggingUtil_LogToOutput_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVaerLoggingUtil_LogToOutput_Statics::VaerLoggingUtil_eventLogToOutput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVaerLoggingUtil_LogToOutput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaerLoggingUtil_LogToOutput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVaerLoggingUtil::execLogToOutput)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Message);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVaerLoggingUtil::LogToOutput(Z_Param_Message);
	P_NATIVE_END;
}
// ********** End Class UVaerLoggingUtil Function LogToOutput **************************************

// ********** Begin Class UVaerLoggingUtil Function LogToScreen ************************************
struct Z_Construct_UFunction_UVaerLoggingUtil_LogToScreen_Statics
{
	struct VaerLoggingUtil_eventLogToScreen_Parms
	{
		FString Message;
		FColor Color;
		float Duration;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Vaer|Debug" },
		{ "CPP_Default_Color", "(R=255,G=255,B=255,A=255)" },
		{ "CPP_Default_Duration", "2.000000" },
		{ "ModuleRelativePath", "Public/Log/VaerLoggingUtil.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaerLoggingUtil_LogToScreen_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaerLoggingUtil_eventLogToScreen_Parms, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVaerLoggingUtil_LogToScreen_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaerLoggingUtil_eventLogToScreen_Parms, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVaerLoggingUtil_LogToScreen_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaerLoggingUtil_eventLogToScreen_Parms, Duration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaerLoggingUtil_LogToScreen_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaerLoggingUtil_LogToScreen_Statics::NewProp_Message,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaerLoggingUtil_LogToScreen_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaerLoggingUtil_LogToScreen_Statics::NewProp_Duration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaerLoggingUtil_LogToScreen_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaerLoggingUtil_LogToScreen_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVaerLoggingUtil, nullptr, "LogToScreen", Z_Construct_UFunction_UVaerLoggingUtil_LogToScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaerLoggingUtil_LogToScreen_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVaerLoggingUtil_LogToScreen_Statics::VaerLoggingUtil_eventLogToScreen_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaerLoggingUtil_LogToScreen_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaerLoggingUtil_LogToScreen_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVaerLoggingUtil_LogToScreen_Statics::VaerLoggingUtil_eventLogToScreen_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVaerLoggingUtil_LogToScreen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaerLoggingUtil_LogToScreen_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVaerLoggingUtil::execLogToScreen)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Message);
	P_GET_STRUCT(FColor,Z_Param_Color);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVaerLoggingUtil::LogToScreen(Z_Param_Message,Z_Param_Color,Z_Param_Duration);
	P_NATIVE_END;
}
// ********** End Class UVaerLoggingUtil Function LogToScreen **************************************

// ********** Begin Class UVaerLoggingUtil *********************************************************
void UVaerLoggingUtil::StaticRegisterNativesUVaerLoggingUtil()
{
	UClass* Class = UVaerLoggingUtil::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "LogToOutput", &UVaerLoggingUtil::execLogToOutput },
		{ "LogToScreen", &UVaerLoggingUtil::execLogToScreen },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVaerLoggingUtil;
UClass* UVaerLoggingUtil::GetPrivateStaticClass()
{
	using TClass = UVaerLoggingUtil;
	if (!Z_Registration_Info_UClass_UVaerLoggingUtil.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VaerLoggingUtil"),
			Z_Registration_Info_UClass_UVaerLoggingUtil.InnerSingleton,
			StaticRegisterNativesUVaerLoggingUtil,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UVaerLoggingUtil.InnerSingleton;
}
UClass* Z_Construct_UClass_UVaerLoggingUtil_NoRegister()
{
	return UVaerLoggingUtil::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVaerLoggingUtil_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Log/VaerLoggingUtil.h" },
		{ "ModuleRelativePath", "Public/Log/VaerLoggingUtil.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVaerLoggingUtil_LogToOutput, "LogToOutput" }, // 2860467539
		{ &Z_Construct_UFunction_UVaerLoggingUtil_LogToScreen, "LogToScreen" }, // 2136312585
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVaerLoggingUtil>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVaerLoggingUtil_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_VaerBase,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVaerLoggingUtil_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVaerLoggingUtil_Statics::ClassParams = {
	&UVaerLoggingUtil::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVaerLoggingUtil_Statics::Class_MetaDataParams), Z_Construct_UClass_UVaerLoggingUtil_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVaerLoggingUtil()
{
	if (!Z_Registration_Info_UClass_UVaerLoggingUtil.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVaerLoggingUtil.OuterSingleton, Z_Construct_UClass_UVaerLoggingUtil_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVaerLoggingUtil.OuterSingleton;
}
UVaerLoggingUtil::UVaerLoggingUtil(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVaerLoggingUtil);
UVaerLoggingUtil::~UVaerLoggingUtil() {}
// ********** End Class UVaerLoggingUtil ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Vicky_Documents_Unreal_Projects_Vaer_Plugins_VaerBase_Source_VaerBase_Public_Log_VaerLoggingUtil_h__Script_VaerBase_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVaerLoggingUtil, UVaerLoggingUtil::StaticClass, TEXT("UVaerLoggingUtil"), &Z_Registration_Info_UClass_UVaerLoggingUtil, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVaerLoggingUtil), 123918780U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Vicky_Documents_Unreal_Projects_Vaer_Plugins_VaerBase_Source_VaerBase_Public_Log_VaerLoggingUtil_h__Script_VaerBase_2352107618(TEXT("/Script/VaerBase"),
	Z_CompiledInDeferFile_FID_Users_Vicky_Documents_Unreal_Projects_Vaer_Plugins_VaerBase_Source_VaerBase_Public_Log_VaerLoggingUtil_h__Script_VaerBase_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Vicky_Documents_Unreal_Projects_Vaer_Plugins_VaerBase_Source_VaerBase_Public_Log_VaerLoggingUtil_h__Script_VaerBase_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
