// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Input/PlayerGameplayAbilitiesDataAsset.h"

#ifdef VAERBASE_PlayerGameplayAbilitiesDataAsset_generated_h
#error "PlayerGameplayAbilitiesDataAsset.generated.h already included, missing '#pragma once' in PlayerGameplayAbilitiesDataAsset.h"
#endif
#define VAERBASE_PlayerGameplayAbilitiesDataAsset_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FGameplayInputAbilityInfo *****************************************
#define FID_Users_Vicky_Documents_Unreal_Projects_Vaer_Plugins_VaerBase_Source_VaerBase_Public_Input_PlayerGameplayAbilitiesDataAsset_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayInputAbilityInfo_Statics; \
	VAERBASE_API static class UScriptStruct* StaticStruct();


struct FGameplayInputAbilityInfo;
// ********** End ScriptStruct FGameplayInputAbilityInfo *******************************************

// ********** Begin Class UPlayerGameplayAbilitiesDataAsset ****************************************
VAERBASE_API UClass* Z_Construct_UClass_UPlayerGameplayAbilitiesDataAsset_NoRegister();

#define FID_Users_Vicky_Documents_Unreal_Projects_Vaer_Plugins_VaerBase_Source_VaerBase_Public_Input_PlayerGameplayAbilitiesDataAsset_h_45_INCLASS \
private: \
	static void StaticRegisterNativesUPlayerGameplayAbilitiesDataAsset(); \
	friend struct Z_Construct_UClass_UPlayerGameplayAbilitiesDataAsset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VAERBASE_API UClass* Z_Construct_UClass_UPlayerGameplayAbilitiesDataAsset_NoRegister(); \
public: \
	DECLARE_CLASS2(UPlayerGameplayAbilitiesDataAsset, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VaerBase"), Z_Construct_UClass_UPlayerGameplayAbilitiesDataAsset_NoRegister) \
	DECLARE_SERIALIZER(UPlayerGameplayAbilitiesDataAsset)


#define FID_Users_Vicky_Documents_Unreal_Projects_Vaer_Plugins_VaerBase_Source_VaerBase_Public_Input_PlayerGameplayAbilitiesDataAsset_h_45_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerGameplayAbilitiesDataAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerGameplayAbilitiesDataAsset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerGameplayAbilitiesDataAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerGameplayAbilitiesDataAsset); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPlayerGameplayAbilitiesDataAsset(UPlayerGameplayAbilitiesDataAsset&&) = delete; \
	UPlayerGameplayAbilitiesDataAsset(const UPlayerGameplayAbilitiesDataAsset&) = delete; \
	NO_API virtual ~UPlayerGameplayAbilitiesDataAsset();


#define FID_Users_Vicky_Documents_Unreal_Projects_Vaer_Plugins_VaerBase_Source_VaerBase_Public_Input_PlayerGameplayAbilitiesDataAsset_h_43_PROLOG
#define FID_Users_Vicky_Documents_Unreal_Projects_Vaer_Plugins_VaerBase_Source_VaerBase_Public_Input_PlayerGameplayAbilitiesDataAsset_h_45_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Vicky_Documents_Unreal_Projects_Vaer_Plugins_VaerBase_Source_VaerBase_Public_Input_PlayerGameplayAbilitiesDataAsset_h_45_INCLASS \
	FID_Users_Vicky_Documents_Unreal_Projects_Vaer_Plugins_VaerBase_Source_VaerBase_Public_Input_PlayerGameplayAbilitiesDataAsset_h_45_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPlayerGameplayAbilitiesDataAsset;

// ********** End Class UPlayerGameplayAbilitiesDataAsset ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Vicky_Documents_Unreal_Projects_Vaer_Plugins_VaerBase_Source_VaerBase_Public_Input_PlayerGameplayAbilitiesDataAsset_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
