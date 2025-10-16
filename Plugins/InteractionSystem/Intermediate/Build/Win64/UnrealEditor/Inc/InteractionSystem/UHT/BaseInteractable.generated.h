// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interactables/BaseInteractable.h"

#ifdef INTERACTIONSYSTEM_BaseInteractable_generated_h
#error "BaseInteractable.generated.h already included, missing '#pragma once' in BaseInteractable.h"
#endif
#define INTERACTIONSYSTEM_BaseInteractable_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ABaseInteractable ********************************************************
INTERACTIONSYSTEM_API UClass* Z_Construct_UClass_ABaseInteractable_NoRegister();

#define FID_Users_Vicky_Documents_Unreal_Projects_Vaer_Plugins_InteractionSystem_Source_InteractionSystem_Public_Interactables_BaseInteractable_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseInteractable(); \
	friend struct Z_Construct_UClass_ABaseInteractable_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERACTIONSYSTEM_API UClass* Z_Construct_UClass_ABaseInteractable_NoRegister(); \
public: \
	DECLARE_CLASS2(ABaseInteractable, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InteractionSystem"), Z_Construct_UClass_ABaseInteractable_NoRegister) \
	DECLARE_SERIALIZER(ABaseInteractable) \
	virtual UObject* _getUObject() const override { return const_cast<ABaseInteractable*>(this); }


#define FID_Users_Vicky_Documents_Unreal_Projects_Vaer_Plugins_InteractionSystem_Source_InteractionSystem_Public_Interactables_BaseInteractable_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ABaseInteractable(ABaseInteractable&&) = delete; \
	ABaseInteractable(const ABaseInteractable&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseInteractable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseInteractable); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseInteractable) \
	NO_API virtual ~ABaseInteractable();


#define FID_Users_Vicky_Documents_Unreal_Projects_Vaer_Plugins_InteractionSystem_Source_InteractionSystem_Public_Interactables_BaseInteractable_h_10_PROLOG
#define FID_Users_Vicky_Documents_Unreal_Projects_Vaer_Plugins_InteractionSystem_Source_InteractionSystem_Public_Interactables_BaseInteractable_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Vicky_Documents_Unreal_Projects_Vaer_Plugins_InteractionSystem_Source_InteractionSystem_Public_Interactables_BaseInteractable_h_13_INCLASS_NO_PURE_DECLS \
	FID_Users_Vicky_Documents_Unreal_Projects_Vaer_Plugins_InteractionSystem_Source_InteractionSystem_Public_Interactables_BaseInteractable_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ABaseInteractable;

// ********** End Class ABaseInteractable **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Vicky_Documents_Unreal_Projects_Vaer_Plugins_InteractionSystem_Source_InteractionSystem_Public_Interactables_BaseInteractable_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
