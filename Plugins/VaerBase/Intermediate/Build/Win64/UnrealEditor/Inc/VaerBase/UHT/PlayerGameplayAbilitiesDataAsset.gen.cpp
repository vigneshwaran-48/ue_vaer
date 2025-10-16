// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Input/PlayerGameplayAbilitiesDataAsset.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePlayerGameplayAbilitiesDataAsset() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
UPackage* Z_Construct_UPackage__Script_VaerBase();
VAERBASE_API UClass* Z_Construct_UClass_UPlayerGameplayAbilitiesDataAsset();
VAERBASE_API UClass* Z_Construct_UClass_UPlayerGameplayAbilitiesDataAsset_NoRegister();
VAERBASE_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayInputAbilityInfo();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FGameplayInputAbilityInfo *****************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FGameplayInputAbilityInfo;
class UScriptStruct* FGameplayInputAbilityInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FGameplayInputAbilityInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FGameplayInputAbilityInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayInputAbilityInfo, (UObject*)Z_Construct_UPackage__Script_VaerBase(), TEXT("GameplayInputAbilityInfo"));
	}
	return Z_Registration_Info_UScriptStruct_FGameplayInputAbilityInfo.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FGameplayInputAbilityInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Input/PlayerGameplayAbilitiesDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayAbilityClass_MetaData[] = {
		{ "Category", "GameplayInputAbilityInfo" },
		{ "ModuleRelativePath", "Public/Input/PlayerGameplayAbilitiesDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputAction_MetaData[] = {
		{ "Category", "GameplayInputAbilityInfo" },
		{ "ModuleRelativePath", "Public/Input/PlayerGameplayAbilitiesDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputID_MetaData[] = {
		{ "Category", "GameplayInputAbilityInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** It will be generated automatically. */" },
#endif
		{ "ModuleRelativePath", "Public/Input/PlayerGameplayAbilitiesDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "It will be generated automatically." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_GameplayAbilityClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputAction;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InputID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayInputAbilityInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FGameplayInputAbilityInfo_Statics::NewProp_GameplayAbilityClass = { "GameplayAbilityClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayInputAbilityInfo, GameplayAbilityClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayAbilityClass_MetaData), NewProp_GameplayAbilityClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGameplayInputAbilityInfo_Statics::NewProp_InputAction = { "InputAction", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayInputAbilityInfo, InputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputAction_MetaData), NewProp_InputAction_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplayInputAbilityInfo_Statics::NewProp_InputID = { "InputID", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayInputAbilityInfo, InputID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputID_MetaData), NewProp_InputID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayInputAbilityInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayInputAbilityInfo_Statics::NewProp_GameplayAbilityClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayInputAbilityInfo_Statics::NewProp_InputAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayInputAbilityInfo_Statics::NewProp_InputID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInputAbilityInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayInputAbilityInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VaerBase,
	nullptr,
	&NewStructOps,
	"GameplayInputAbilityInfo",
	Z_Construct_UScriptStruct_FGameplayInputAbilityInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInputAbilityInfo_Statics::PropPointers),
	sizeof(FGameplayInputAbilityInfo),
	alignof(FGameplayInputAbilityInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInputAbilityInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayInputAbilityInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameplayInputAbilityInfo()
{
	if (!Z_Registration_Info_UScriptStruct_FGameplayInputAbilityInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FGameplayInputAbilityInfo.InnerSingleton, Z_Construct_UScriptStruct_FGameplayInputAbilityInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FGameplayInputAbilityInfo.InnerSingleton;
}
// ********** End ScriptStruct FGameplayInputAbilityInfo *******************************************

// ********** Begin Class UPlayerGameplayAbilitiesDataAsset ****************************************
void UPlayerGameplayAbilitiesDataAsset::StaticRegisterNativesUPlayerGameplayAbilitiesDataAsset()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPlayerGameplayAbilitiesDataAsset;
UClass* UPlayerGameplayAbilitiesDataAsset::GetPrivateStaticClass()
{
	using TClass = UPlayerGameplayAbilitiesDataAsset;
	if (!Z_Registration_Info_UClass_UPlayerGameplayAbilitiesDataAsset.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PlayerGameplayAbilitiesDataAsset"),
			Z_Registration_Info_UClass_UPlayerGameplayAbilitiesDataAsset.InnerSingleton,
			StaticRegisterNativesUPlayerGameplayAbilitiesDataAsset,
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
	return Z_Registration_Info_UClass_UPlayerGameplayAbilitiesDataAsset.InnerSingleton;
}
UClass* Z_Construct_UClass_UPlayerGameplayAbilitiesDataAsset_NoRegister()
{
	return UPlayerGameplayAbilitiesDataAsset::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPlayerGameplayAbilitiesDataAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Input/PlayerGameplayAbilitiesDataAsset.h" },
		{ "ModuleRelativePath", "Public/Input/PlayerGameplayAbilitiesDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputAbilities_MetaData[] = {
		{ "Category", "AbilitySystem" },
		{ "ModuleRelativePath", "Public/Input/PlayerGameplayAbilitiesDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputAbilities_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_InputAbilities;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerGameplayAbilitiesDataAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerGameplayAbilitiesDataAsset_Statics::NewProp_InputAbilities_ElementProp = { "InputAbilities", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayInputAbilityInfo, METADATA_PARAMS(0, nullptr) }; // 2906371448
static_assert(TModels_V<CGetTypeHashable, FGameplayInputAbilityInfo>, "The structure 'FGameplayInputAbilityInfo' is used in a TSet but does not have a GetValueTypeHash defined");
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UPlayerGameplayAbilitiesDataAsset_Statics::NewProp_InputAbilities = { "InputAbilities", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerGameplayAbilitiesDataAsset, InputAbilities), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputAbilities_MetaData), NewProp_InputAbilities_MetaData) }; // 2906371448
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerGameplayAbilitiesDataAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerGameplayAbilitiesDataAsset_Statics::NewProp_InputAbilities_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerGameplayAbilitiesDataAsset_Statics::NewProp_InputAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerGameplayAbilitiesDataAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPlayerGameplayAbilitiesDataAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_VaerBase,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerGameplayAbilitiesDataAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerGameplayAbilitiesDataAsset_Statics::ClassParams = {
	&UPlayerGameplayAbilitiesDataAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPlayerGameplayAbilitiesDataAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerGameplayAbilitiesDataAsset_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerGameplayAbilitiesDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerGameplayAbilitiesDataAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayerGameplayAbilitiesDataAsset()
{
	if (!Z_Registration_Info_UClass_UPlayerGameplayAbilitiesDataAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerGameplayAbilitiesDataAsset.OuterSingleton, Z_Construct_UClass_UPlayerGameplayAbilitiesDataAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayerGameplayAbilitiesDataAsset.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerGameplayAbilitiesDataAsset);
UPlayerGameplayAbilitiesDataAsset::~UPlayerGameplayAbilitiesDataAsset() {}
// ********** End Class UPlayerGameplayAbilitiesDataAsset ******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Vicky_Documents_Unreal_Projects_Vaer_Plugins_VaerBase_Source_VaerBase_Public_Input_PlayerGameplayAbilitiesDataAsset_h__Script_VaerBase_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGameplayInputAbilityInfo::StaticStruct, Z_Construct_UScriptStruct_FGameplayInputAbilityInfo_Statics::NewStructOps, TEXT("GameplayInputAbilityInfo"), &Z_Registration_Info_UScriptStruct_FGameplayInputAbilityInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayInputAbilityInfo), 2906371448U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerGameplayAbilitiesDataAsset, UPlayerGameplayAbilitiesDataAsset::StaticClass, TEXT("UPlayerGameplayAbilitiesDataAsset"), &Z_Registration_Info_UClass_UPlayerGameplayAbilitiesDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerGameplayAbilitiesDataAsset), 1829863779U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Vicky_Documents_Unreal_Projects_Vaer_Plugins_VaerBase_Source_VaerBase_Public_Input_PlayerGameplayAbilitiesDataAsset_h__Script_VaerBase_2842642243(TEXT("/Script/VaerBase"),
	Z_CompiledInDeferFile_FID_Users_Vicky_Documents_Unreal_Projects_Vaer_Plugins_VaerBase_Source_VaerBase_Public_Input_PlayerGameplayAbilitiesDataAsset_h__Script_VaerBase_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Vicky_Documents_Unreal_Projects_Vaer_Plugins_VaerBase_Source_VaerBase_Public_Input_PlayerGameplayAbilitiesDataAsset_h__Script_VaerBase_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_Vicky_Documents_Unreal_Projects_Vaer_Plugins_VaerBase_Source_VaerBase_Public_Input_PlayerGameplayAbilitiesDataAsset_h__Script_VaerBase_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Vicky_Documents_Unreal_Projects_Vaer_Plugins_VaerBase_Source_VaerBase_Public_Input_PlayerGameplayAbilitiesDataAsset_h__Script_VaerBase_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
