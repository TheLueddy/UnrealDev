// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObstacleAssault/MovingPlatform.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovingPlatform() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
OBSTACLEASSAULT_API UClass* Z_Construct_UClass_AMovingPlatform();
OBSTACLEASSAULT_API UClass* Z_Construct_UClass_AMovingPlatform_NoRegister();
UPackage* Z_Construct_UPackage__Script_ObstacleAssault();
// End Cross Module References

// Begin Class AMovingPlatform
void AMovingPlatform::StaticRegisterNativesAMovingPlatform()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMovingPlatform);
UClass* Z_Construct_UClass_AMovingPlatform_NoRegister()
{
	return AMovingPlatform::StaticClass();
}
struct Z_Construct_UClass_AMovingPlatform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MovingPlatform.h" },
		{ "ModuleRelativePath", "MovingPlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlatformVelocity_MetaData[] = {
		{ "Category", "Moving Parameters" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Set travel speed + direction of platform\n" },
#endif
		{ "ModuleRelativePath", "MovingPlatform.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set travel speed + direction of platform" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationVelocity_MetaData[] = {
		{ "Category", "Rotation Parameters" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Set rotation speed\n" },
#endif
		{ "ModuleRelativePath", "MovingPlatform.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set rotation speed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllowedDistance_MetaData[] = {
		{ "Category", "Moving Parameters" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Set allowed travel distance\n" },
#endif
		{ "ModuleRelativePath", "MovingPlatform.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set allowed travel distance" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovedDistance_MetaData[] = {
		{ "Category", "Moving Parameters" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Get the traveled distance (Only information purpose)\n" },
#endif
		{ "ModuleRelativePath", "MovingPlatform.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the traveled distance (Only information purpose)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlatformVelocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationVelocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AllowedDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MovedDistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMovingPlatform>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMovingPlatform_Statics::NewProp_PlatformVelocity = { "PlatformVelocity", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovingPlatform, PlatformVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlatformVelocity_MetaData), NewProp_PlatformVelocity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMovingPlatform_Statics::NewProp_RotationVelocity = { "RotationVelocity", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovingPlatform, RotationVelocity), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationVelocity_MetaData), NewProp_RotationVelocity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovingPlatform_Statics::NewProp_AllowedDistance = { "AllowedDistance", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovingPlatform, AllowedDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllowedDistance_MetaData), NewProp_AllowedDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovingPlatform_Statics::NewProp_MovedDistance = { "MovedDistance", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovingPlatform, MovedDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovedDistance_MetaData), NewProp_MovedDistance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMovingPlatform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingPlatform_Statics::NewProp_PlatformVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingPlatform_Statics::NewProp_RotationVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingPlatform_Statics::NewProp_AllowedDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingPlatform_Statics::NewProp_MovedDistance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatform_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMovingPlatform_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ObstacleAssault,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatform_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMovingPlatform_Statics::ClassParams = {
	&AMovingPlatform::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMovingPlatform_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatform_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatform_Statics::Class_MetaDataParams), Z_Construct_UClass_AMovingPlatform_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMovingPlatform()
{
	if (!Z_Registration_Info_UClass_AMovingPlatform.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMovingPlatform.OuterSingleton, Z_Construct_UClass_AMovingPlatform_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMovingPlatform.OuterSingleton;
}
template<> OBSTACLEASSAULT_API UClass* StaticClass<AMovingPlatform>()
{
	return AMovingPlatform::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMovingPlatform);
AMovingPlatform::~AMovingPlatform() {}
// End Class AMovingPlatform

// Begin Registration
struct Z_CompiledInDeferFile_FID_ObstacleAssault_Source_ObstacleAssault_MovingPlatform_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMovingPlatform, AMovingPlatform::StaticClass, TEXT("AMovingPlatform"), &Z_Registration_Info_UClass_AMovingPlatform, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMovingPlatform), 1653709425U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ObstacleAssault_Source_ObstacleAssault_MovingPlatform_h_1897832871(TEXT("/Script/ObstacleAssault"),
	Z_CompiledInDeferFile_FID_ObstacleAssault_Source_ObstacleAssault_MovingPlatform_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ObstacleAssault_Source_ObstacleAssault_MovingPlatform_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
