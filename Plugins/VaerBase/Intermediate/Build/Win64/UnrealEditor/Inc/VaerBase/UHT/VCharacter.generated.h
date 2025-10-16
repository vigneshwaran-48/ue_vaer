// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VCharacter.h"

#ifdef VAERBASE_VCharacter_generated_h
#error "VCharacter.generated.h already included, missing '#pragma once' in VCharacter.h"
#endif
#define VAERBASE_VCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AVCharacter **************************************************************
VAERBASE_API UClass* Z_Construct_UClass_AVCharacter_NoRegister();

#define FID_Users_Vicky_Documents_Unreal_Projects_Vaer_Plugins_VaerBase_Source_VaerBase_Public_VCharacter_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVCharacter(); \
	friend struct Z_Construct_UClass_AVCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VAERBASE_API UClass* Z_Construct_UClass_AVCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AVCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VaerBase"), Z_Construct_UClass_AVCharacter_NoRegister) \
	DECLARE_SERIALIZER(AVCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<AVCharacter*>(this); }


#define FID_Users_Vicky_Documents_Unreal_Projects_Vaer_Plugins_VaerBase_Source_VaerBase_Public_VCharacter_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AVCharacter(AVCharacter&&) = delete; \
	AVCharacter(const AVCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AVCharacter) \
	NO_API virtual ~AVCharacter();


#define FID_Users_Vicky_Documents_Unreal_Projects_Vaer_Plugins_VaerBase_Source_VaerBase_Public_VCharacter_h_14_PROLOG
#define FID_Users_Vicky_Documents_Unreal_Projects_Vaer_Plugins_VaerBase_Source_VaerBase_Public_VCharacter_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Vicky_Documents_Unreal_Projects_Vaer_Plugins_VaerBase_Source_VaerBase_Public_VCharacter_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_Vicky_Documents_Unreal_Projects_Vaer_Plugins_VaerBase_Source_VaerBase_Public_VCharacter_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AVCharacter;

// ********** End Class AVCharacter ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Vicky_Documents_Unreal_Projects_Vaer_Plugins_VaerBase_Source_VaerBase_Public_VCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
