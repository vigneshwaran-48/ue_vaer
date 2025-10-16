// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VaerGameInstance.h"

#ifdef VAERBASE_VaerGameInstance_generated_h
#error "VaerGameInstance.generated.h already included, missing '#pragma once' in VaerGameInstance.h"
#endif
#define VAERBASE_VaerGameInstance_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UDataTable;

// ********** Begin ScriptStruct FVaerDataTableEntry ***********************************************
#define FID_Users_Vicky_Documents_Unreal_Projects_Vaer_Plugins_VaerBase_Source_VaerBase_Public_VaerGameInstance_h_11_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVaerDataTableEntry_Statics; \
	VAERBASE_API static class UScriptStruct* StaticStruct();


struct FVaerDataTableEntry;
// ********** End ScriptStruct FVaerDataTableEntry *************************************************

// ********** Begin Class UVaerGameInstance ********************************************************
#define FID_Users_Vicky_Documents_Unreal_Projects_Vaer_Plugins_VaerBase_Source_VaerBase_Public_VaerGameInstance_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execClearAllDataTables); \
	DECLARE_FUNCTION(execUnloadDataTable); \
	DECLARE_FUNCTION(execGetDataTable); \
	DECLARE_FUNCTION(execRegisterDataTable);


VAERBASE_API UClass* Z_Construct_UClass_UVaerGameInstance_NoRegister();

#define FID_Users_Vicky_Documents_Unreal_Projects_Vaer_Plugins_VaerBase_Source_VaerBase_Public_VaerGameInstance_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVaerGameInstance(); \
	friend struct Z_Construct_UClass_UVaerGameInstance_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VAERBASE_API UClass* Z_Construct_UClass_UVaerGameInstance_NoRegister(); \
public: \
	DECLARE_CLASS2(UVaerGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/VaerBase"), Z_Construct_UClass_UVaerGameInstance_NoRegister) \
	DECLARE_SERIALIZER(UVaerGameInstance)


#define FID_Users_Vicky_Documents_Unreal_Projects_Vaer_Plugins_VaerBase_Source_VaerBase_Public_VaerGameInstance_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVaerGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVaerGameInstance(UVaerGameInstance&&) = delete; \
	UVaerGameInstance(const UVaerGameInstance&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVaerGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVaerGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVaerGameInstance) \
	NO_API virtual ~UVaerGameInstance();


#define FID_Users_Vicky_Documents_Unreal_Projects_Vaer_Plugins_VaerBase_Source_VaerBase_Public_VaerGameInstance_h_24_PROLOG
#define FID_Users_Vicky_Documents_Unreal_Projects_Vaer_Plugins_VaerBase_Source_VaerBase_Public_VaerGameInstance_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Vicky_Documents_Unreal_Projects_Vaer_Plugins_VaerBase_Source_VaerBase_Public_VaerGameInstance_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Vicky_Documents_Unreal_Projects_Vaer_Plugins_VaerBase_Source_VaerBase_Public_VaerGameInstance_h_26_INCLASS_NO_PURE_DECLS \
	FID_Users_Vicky_Documents_Unreal_Projects_Vaer_Plugins_VaerBase_Source_VaerBase_Public_VaerGameInstance_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVaerGameInstance;

// ********** End Class UVaerGameInstance **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Vicky_Documents_Unreal_Projects_Vaer_Plugins_VaerBase_Source_VaerBase_Public_VaerGameInstance_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
