// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Log/VaerLoggingUtil.h"

#ifdef VAERBASE_VaerLoggingUtil_generated_h
#error "VaerLoggingUtil.generated.h already included, missing '#pragma once' in VaerLoggingUtil.h"
#endif
#define VAERBASE_VaerLoggingUtil_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FColor;

// ********** Begin Class UVaerLoggingUtil *********************************************************
#define FID_Users_Vicky_Documents_Unreal_Projects_Vaer_Plugins_VaerBase_Source_VaerBase_Public_Log_VaerLoggingUtil_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execLogToOutput); \
	DECLARE_FUNCTION(execLogToScreen);


VAERBASE_API UClass* Z_Construct_UClass_UVaerLoggingUtil_NoRegister();

#define FID_Users_Vicky_Documents_Unreal_Projects_Vaer_Plugins_VaerBase_Source_VaerBase_Public_Log_VaerLoggingUtil_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVaerLoggingUtil(); \
	friend struct Z_Construct_UClass_UVaerLoggingUtil_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VAERBASE_API UClass* Z_Construct_UClass_UVaerLoggingUtil_NoRegister(); \
public: \
	DECLARE_CLASS2(UVaerLoggingUtil, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VaerBase"), Z_Construct_UClass_UVaerLoggingUtil_NoRegister) \
	DECLARE_SERIALIZER(UVaerLoggingUtil)


#define FID_Users_Vicky_Documents_Unreal_Projects_Vaer_Plugins_VaerBase_Source_VaerBase_Public_Log_VaerLoggingUtil_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVaerLoggingUtil(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVaerLoggingUtil(UVaerLoggingUtil&&) = delete; \
	UVaerLoggingUtil(const UVaerLoggingUtil&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVaerLoggingUtil); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVaerLoggingUtil); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVaerLoggingUtil) \
	NO_API virtual ~UVaerLoggingUtil();


#define FID_Users_Vicky_Documents_Unreal_Projects_Vaer_Plugins_VaerBase_Source_VaerBase_Public_Log_VaerLoggingUtil_h_12_PROLOG
#define FID_Users_Vicky_Documents_Unreal_Projects_Vaer_Plugins_VaerBase_Source_VaerBase_Public_Log_VaerLoggingUtil_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Vicky_Documents_Unreal_Projects_Vaer_Plugins_VaerBase_Source_VaerBase_Public_Log_VaerLoggingUtil_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Vicky_Documents_Unreal_Projects_Vaer_Plugins_VaerBase_Source_VaerBase_Public_Log_VaerLoggingUtil_h_14_INCLASS_NO_PURE_DECLS \
	FID_Users_Vicky_Documents_Unreal_Projects_Vaer_Plugins_VaerBase_Source_VaerBase_Public_Log_VaerLoggingUtil_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVaerLoggingUtil;

// ********** End Class UVaerLoggingUtil ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Vicky_Documents_Unreal_Projects_Vaer_Plugins_VaerBase_Source_VaerBase_Public_Log_VaerLoggingUtil_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
