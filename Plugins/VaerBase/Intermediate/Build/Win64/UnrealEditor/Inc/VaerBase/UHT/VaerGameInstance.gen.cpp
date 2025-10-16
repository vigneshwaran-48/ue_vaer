// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VaerGameInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVaerGameInstance() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
UPackage* Z_Construct_UPackage__Script_VaerBase();
VAERBASE_API UClass* Z_Construct_UClass_UVaerGameInstance();
VAERBASE_API UClass* Z_Construct_UClass_UVaerGameInstance_NoRegister();
VAERBASE_API UScriptStruct* Z_Construct_UScriptStruct_FVaerDataTableEntry();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FVaerDataTableEntry ***********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FVaerDataTableEntry;
class UScriptStruct* FVaerDataTableEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FVaerDataTableEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FVaerDataTableEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVaerDataTableEntry, (UObject*)Z_Construct_UPackage__Script_VaerBase(), TEXT("VaerDataTableEntry"));
	}
	return Z_Registration_Info_UScriptStruct_FVaerDataTableEntry.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FVaerDataTableEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VaerGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "Category", "Vaer|Data" },
		{ "ModuleRelativePath", "Public/VaerGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataTable_MetaData[] = {
		{ "Category", "Vaer|Data" },
		{ "ModuleRelativePath", "Public/VaerGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Key;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DataTable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVaerDataTableEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVaerDataTableEntry_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVaerDataTableEntry, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FVaerDataTableEntry_Statics::NewProp_DataTable = { "DataTable", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVaerDataTableEntry, DataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataTable_MetaData), NewProp_DataTable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVaerDataTableEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVaerDataTableEntry_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVaerDataTableEntry_Statics::NewProp_DataTable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVaerDataTableEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVaerDataTableEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VaerBase,
	nullptr,
	&NewStructOps,
	"VaerDataTableEntry",
	Z_Construct_UScriptStruct_FVaerDataTableEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVaerDataTableEntry_Statics::PropPointers),
	sizeof(FVaerDataTableEntry),
	alignof(FVaerDataTableEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVaerDataTableEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVaerDataTableEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVaerDataTableEntry()
{
	if (!Z_Registration_Info_UScriptStruct_FVaerDataTableEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FVaerDataTableEntry.InnerSingleton, Z_Construct_UScriptStruct_FVaerDataTableEntry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FVaerDataTableEntry.InnerSingleton;
}
// ********** End ScriptStruct FVaerDataTableEntry *************************************************

// ********** Begin Class UVaerGameInstance Function ClearAllDataTables ****************************
struct Z_Construct_UFunction_UVaerGameInstance_ClearAllDataTables_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Vaer|Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Clear all cached DataTables */" },
#endif
		{ "ModuleRelativePath", "Public/VaerGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clear all cached DataTables" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaerGameInstance_ClearAllDataTables_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVaerGameInstance, nullptr, "ClearAllDataTables", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaerGameInstance_ClearAllDataTables_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaerGameInstance_ClearAllDataTables_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UVaerGameInstance_ClearAllDataTables()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaerGameInstance_ClearAllDataTables_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVaerGameInstance::execClearAllDataTables)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearAllDataTables();
	P_NATIVE_END;
}
// ********** End Class UVaerGameInstance Function ClearAllDataTables ******************************

// ********** Begin Class UVaerGameInstance Function GetDataTable **********************************
struct Z_Construct_UFunction_UVaerGameInstance_GetDataTable_Statics
{
	struct VaerGameInstance_eventGetDataTable_Parms
	{
		FName Key;
		UDataTable* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Vaer|Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get the DataTable synchronously (loads on demand) */" },
#endif
		{ "ModuleRelativePath", "Public/VaerGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the DataTable synchronously (loads on demand)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Key;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVaerGameInstance_GetDataTable_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaerGameInstance_eventGetDataTable_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVaerGameInstance_GetDataTable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaerGameInstance_eventGetDataTable_Parms, ReturnValue), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaerGameInstance_GetDataTable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaerGameInstance_GetDataTable_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaerGameInstance_GetDataTable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaerGameInstance_GetDataTable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaerGameInstance_GetDataTable_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVaerGameInstance, nullptr, "GetDataTable", Z_Construct_UFunction_UVaerGameInstance_GetDataTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaerGameInstance_GetDataTable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVaerGameInstance_GetDataTable_Statics::VaerGameInstance_eventGetDataTable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaerGameInstance_GetDataTable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaerGameInstance_GetDataTable_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVaerGameInstance_GetDataTable_Statics::VaerGameInstance_eventGetDataTable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVaerGameInstance_GetDataTable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaerGameInstance_GetDataTable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVaerGameInstance::execGetDataTable)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UDataTable**)Z_Param__Result=P_THIS->GetDataTable(Z_Param_Key);
	P_NATIVE_END;
}
// ********** End Class UVaerGameInstance Function GetDataTable ************************************

// ********** Begin Class UVaerGameInstance Function RegisterDataTable *****************************
struct Z_Construct_UFunction_UVaerGameInstance_RegisterDataTable_Statics
{
	struct VaerGameInstance_eventRegisterDataTable_Parms
	{
		FName Key;
		TSoftObjectPtr<UDataTable> TableRef;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Vaer|Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Register a soft reference DataTable with a key (can be done by each\n   * plugin) */" },
#endif
		{ "ModuleRelativePath", "Public/VaerGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Register a soft reference DataTable with a key (can be done by each\nplugin)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Key;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_TableRef;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVaerGameInstance_RegisterDataTable_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaerGameInstance_eventRegisterDataTable_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UVaerGameInstance_RegisterDataTable_Statics::NewProp_TableRef = { "TableRef", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaerGameInstance_eventRegisterDataTable_Parms, TableRef), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaerGameInstance_RegisterDataTable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaerGameInstance_RegisterDataTable_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaerGameInstance_RegisterDataTable_Statics::NewProp_TableRef,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaerGameInstance_RegisterDataTable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaerGameInstance_RegisterDataTable_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVaerGameInstance, nullptr, "RegisterDataTable", Z_Construct_UFunction_UVaerGameInstance_RegisterDataTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaerGameInstance_RegisterDataTable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVaerGameInstance_RegisterDataTable_Statics::VaerGameInstance_eventRegisterDataTable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaerGameInstance_RegisterDataTable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaerGameInstance_RegisterDataTable_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVaerGameInstance_RegisterDataTable_Statics::VaerGameInstance_eventRegisterDataTable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVaerGameInstance_RegisterDataTable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaerGameInstance_RegisterDataTable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVaerGameInstance::execRegisterDataTable)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Key);
	P_GET_SOFTOBJECT(TSoftObjectPtr<UDataTable>,Z_Param_TableRef);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterDataTable(Z_Param_Key,Z_Param_TableRef);
	P_NATIVE_END;
}
// ********** End Class UVaerGameInstance Function RegisterDataTable *******************************

// ********** Begin Class UVaerGameInstance Function UnloadDataTable *******************************
struct Z_Construct_UFunction_UVaerGameInstance_UnloadDataTable_Statics
{
	struct VaerGameInstance_eventUnloadDataTable_Parms
	{
		FName Key;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Vaer|Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Unload a DataTable to free memory */" },
#endif
		{ "ModuleRelativePath", "Public/VaerGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unload a DataTable to free memory" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Key;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVaerGameInstance_UnloadDataTable_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaerGameInstance_eventUnloadDataTable_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaerGameInstance_UnloadDataTable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaerGameInstance_UnloadDataTable_Statics::NewProp_Key,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaerGameInstance_UnloadDataTable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaerGameInstance_UnloadDataTable_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVaerGameInstance, nullptr, "UnloadDataTable", Z_Construct_UFunction_UVaerGameInstance_UnloadDataTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaerGameInstance_UnloadDataTable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVaerGameInstance_UnloadDataTable_Statics::VaerGameInstance_eventUnloadDataTable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaerGameInstance_UnloadDataTable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaerGameInstance_UnloadDataTable_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVaerGameInstance_UnloadDataTable_Statics::VaerGameInstance_eventUnloadDataTable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVaerGameInstance_UnloadDataTable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaerGameInstance_UnloadDataTable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVaerGameInstance::execUnloadDataTable)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnloadDataTable(Z_Param_Key);
	P_NATIVE_END;
}
// ********** End Class UVaerGameInstance Function UnloadDataTable *********************************

// ********** Begin Class UVaerGameInstance ********************************************************
void UVaerGameInstance::StaticRegisterNativesUVaerGameInstance()
{
	UClass* Class = UVaerGameInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClearAllDataTables", &UVaerGameInstance::execClearAllDataTables },
		{ "GetDataTable", &UVaerGameInstance::execGetDataTable },
		{ "RegisterDataTable", &UVaerGameInstance::execRegisterDataTable },
		{ "UnloadDataTable", &UVaerGameInstance::execUnloadDataTable },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVaerGameInstance;
UClass* UVaerGameInstance::GetPrivateStaticClass()
{
	using TClass = UVaerGameInstance;
	if (!Z_Registration_Info_UClass_UVaerGameInstance.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VaerGameInstance"),
			Z_Registration_Info_UClass_UVaerGameInstance.InnerSingleton,
			StaticRegisterNativesUVaerGameInstance,
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
	return Z_Registration_Info_UClass_UVaerGameInstance.InnerSingleton;
}
UClass* Z_Construct_UClass_UVaerGameInstance_NoRegister()
{
	return UVaerGameInstance::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVaerGameInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VaerGameInstance.h" },
		{ "ModuleRelativePath", "Public/VaerGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegisteredTables_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Soft references to registered DataTables */" },
#endif
		{ "ModuleRelativePath", "Public/VaerGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Soft references to registered DataTables" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadedTables_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Loaded DataTables cached in memory */" },
#endif
		{ "ModuleRelativePath", "Public/VaerGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Loaded DataTables cached in memory" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_RegisteredTables_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RegisteredTables_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_RegisteredTables;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_LoadedTables_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LoadedTables_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_LoadedTables;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVaerGameInstance_ClearAllDataTables, "ClearAllDataTables" }, // 2328107449
		{ &Z_Construct_UFunction_UVaerGameInstance_GetDataTable, "GetDataTable" }, // 722344398
		{ &Z_Construct_UFunction_UVaerGameInstance_RegisterDataTable, "RegisterDataTable" }, // 1234858808
		{ &Z_Construct_UFunction_UVaerGameInstance_UnloadDataTable, "UnloadDataTable" }, // 3359411451
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVaerGameInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UVaerGameInstance_Statics::NewProp_RegisteredTables_ValueProp = { "RegisteredTables", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVaerGameInstance_Statics::NewProp_RegisteredTables_Key_KeyProp = { "RegisteredTables_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVaerGameInstance_Statics::NewProp_RegisteredTables = { "RegisteredTables", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVaerGameInstance, RegisteredTables), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegisteredTables_MetaData), NewProp_RegisteredTables_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UVaerGameInstance_Statics::NewProp_LoadedTables_ValueProp = { "LoadedTables", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVaerGameInstance_Statics::NewProp_LoadedTables_Key_KeyProp = { "LoadedTables_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVaerGameInstance_Statics::NewProp_LoadedTables = { "LoadedTables", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVaerGameInstance, LoadedTables), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadedTables_MetaData), NewProp_LoadedTables_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVaerGameInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVaerGameInstance_Statics::NewProp_RegisteredTables_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVaerGameInstance_Statics::NewProp_RegisteredTables_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVaerGameInstance_Statics::NewProp_RegisteredTables,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVaerGameInstance_Statics::NewProp_LoadedTables_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVaerGameInstance_Statics::NewProp_LoadedTables_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVaerGameInstance_Statics::NewProp_LoadedTables,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVaerGameInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVaerGameInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_VaerBase,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVaerGameInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVaerGameInstance_Statics::ClassParams = {
	&UVaerGameInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UVaerGameInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UVaerGameInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVaerGameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UVaerGameInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVaerGameInstance()
{
	if (!Z_Registration_Info_UClass_UVaerGameInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVaerGameInstance.OuterSingleton, Z_Construct_UClass_UVaerGameInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVaerGameInstance.OuterSingleton;
}
UVaerGameInstance::UVaerGameInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVaerGameInstance);
UVaerGameInstance::~UVaerGameInstance() {}
// ********** End Class UVaerGameInstance **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Vicky_Documents_Unreal_Projects_Vaer_Plugins_VaerBase_Source_VaerBase_Public_VaerGameInstance_h__Script_VaerBase_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FVaerDataTableEntry::StaticStruct, Z_Construct_UScriptStruct_FVaerDataTableEntry_Statics::NewStructOps, TEXT("VaerDataTableEntry"), &Z_Registration_Info_UScriptStruct_FVaerDataTableEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVaerDataTableEntry), 1076837474U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVaerGameInstance, UVaerGameInstance::StaticClass, TEXT("UVaerGameInstance"), &Z_Registration_Info_UClass_UVaerGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVaerGameInstance), 2927061494U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Vicky_Documents_Unreal_Projects_Vaer_Plugins_VaerBase_Source_VaerBase_Public_VaerGameInstance_h__Script_VaerBase_2115809875(TEXT("/Script/VaerBase"),
	Z_CompiledInDeferFile_FID_Users_Vicky_Documents_Unreal_Projects_Vaer_Plugins_VaerBase_Source_VaerBase_Public_VaerGameInstance_h__Script_VaerBase_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Vicky_Documents_Unreal_Projects_Vaer_Plugins_VaerBase_Source_VaerBase_Public_VaerGameInstance_h__Script_VaerBase_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_Vicky_Documents_Unreal_Projects_Vaer_Plugins_VaerBase_Source_VaerBase_Public_VaerGameInstance_h__Script_VaerBase_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Vicky_Documents_Unreal_Projects_Vaer_Plugins_VaerBase_Source_VaerBase_Public_VaerGameInstance_h__Script_VaerBase_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
