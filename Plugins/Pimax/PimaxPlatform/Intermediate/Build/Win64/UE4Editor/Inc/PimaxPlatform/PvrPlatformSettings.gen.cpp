// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PimaxPlatform/Public/PvrPlatformSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePvrPlatformSettings() {}
// Cross Module References
	PIMAXPLATFORM_API UClass* Z_Construct_UClass_UPvrPlatformSettings_NoRegister();
	PIMAXPLATFORM_API UClass* Z_Construct_UClass_UPvrPlatformSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_PimaxPlatform();
// End Cross Module References
	void UPvrPlatformSettings::StaticRegisterNativesUPvrPlatformSettings()
	{
	}
	UClass* Z_Construct_UClass_UPvrPlatformSettings_NoRegister()
	{
		return UPvrPlatformSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPvrPlatformSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AppID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AppID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPvrPlatformSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PimaxPlatform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPvrPlatformSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PvrPlatformSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PvrPlatformSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPvrPlatformSettings_Statics::NewProp_AppID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PvrPlatformSettings" },
		{ "ModuleRelativePath", "Public/PvrPlatformSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPvrPlatformSettings_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPvrPlatformSettings, AppID), METADATA_PARAMS(Z_Construct_UClass_UPvrPlatformSettings_Statics::NewProp_AppID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPvrPlatformSettings_Statics::NewProp_AppID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPvrPlatformSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPvrPlatformSettings_Statics::NewProp_AppID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPvrPlatformSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPvrPlatformSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPvrPlatformSettings_Statics::ClassParams = {
		&UPvrPlatformSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPvrPlatformSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPvrPlatformSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPvrPlatformSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPvrPlatformSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPvrPlatformSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPvrPlatformSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPvrPlatformSettings, 1455445368);
	template<> PIMAXPLATFORM_API UClass* StaticClass<UPvrPlatformSettings>()
	{
		return UPvrPlatformSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPvrPlatformSettings(Z_Construct_UClass_UPvrPlatformSettings, &UPvrPlatformSettings::StaticClass, TEXT("/Script/PimaxPlatform"), TEXT("UPvrPlatformSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPvrPlatformSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
