// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InventoryItem.h"

#ifdef INVENTORYSYSTEM_InventoryItem_generated_h
#error "InventoryItem.generated.h already included, missing '#pragma once' in InventoryItem.h"
#endif
#define INVENTORYSYSTEM_InventoryItem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FInventoryItem ****************************************************
#define FID_Users_Vicky_Documents_Unreal_Projects_Vaer_Plugins_InventorySystem_Source_InventorySystem_Public_InventoryItem_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInventoryItem_Statics; \
	INVENTORYSYSTEM_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


struct FInventoryItem;
// ********** End ScriptStruct FInventoryItem ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Vicky_Documents_Unreal_Projects_Vaer_Plugins_InventorySystem_Source_InventorySystem_Public_InventoryItem_h

// ********** Begin Enum EItemType *****************************************************************
#define FOREACH_ENUM_EITEMTYPE(op) \
	op(EItemType::Consumable) \
	op(EItemType::Weapon) \
	op(EItemType::Healing) 

enum class EItemType : uint8;
template<> struct TIsUEnumClass<EItemType> { enum { Value = true }; };
template<> INVENTORYSYSTEM_API UEnum* StaticEnum<EItemType>();
// ********** End Enum EItemType *******************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
