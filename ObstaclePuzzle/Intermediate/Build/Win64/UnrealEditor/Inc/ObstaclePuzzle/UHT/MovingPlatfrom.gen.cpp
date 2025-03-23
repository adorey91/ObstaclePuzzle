// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObstaclePuzzle/MovingPlatfrom.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovingPlatfrom() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
OBSTACLEPUZZLE_API UClass* Z_Construct_UClass_AMovingPlatfrom();
OBSTACLEPUZZLE_API UClass* Z_Construct_UClass_AMovingPlatfrom_NoRegister();
UPackage* Z_Construct_UPackage__Script_ObstaclePuzzle();
// End Cross Module References

// Begin Class AMovingPlatfrom
void AMovingPlatfrom::StaticRegisterNativesAMovingPlatfrom()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMovingPlatfrom);
UClass* Z_Construct_UClass_AMovingPlatfrom_NoRegister()
{
	return AMovingPlatfrom::StaticClass();
}
struct Z_Construct_UClass_AMovingPlatfrom_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MovingPlatfrom.h" },
		{ "ModuleRelativePath", "MovingPlatfrom.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyVector_MetaData[] = {
		{ "Category", "MovingPlatfrom" },
		{ "ModuleRelativePath", "MovingPlatfrom.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MyVector;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMovingPlatfrom>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMovingPlatfrom_Statics::NewProp_MyVector = { "MyVector", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovingPlatfrom, MyVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyVector_MetaData), NewProp_MyVector_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMovingPlatfrom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingPlatfrom_Statics::NewProp_MyVector,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatfrom_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMovingPlatfrom_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ObstaclePuzzle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatfrom_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMovingPlatfrom_Statics::ClassParams = {
	&AMovingPlatfrom::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMovingPlatfrom_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatfrom_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatfrom_Statics::Class_MetaDataParams), Z_Construct_UClass_AMovingPlatfrom_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMovingPlatfrom()
{
	if (!Z_Registration_Info_UClass_AMovingPlatfrom.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMovingPlatfrom.OuterSingleton, Z_Construct_UClass_AMovingPlatfrom_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMovingPlatfrom.OuterSingleton;
}
template<> OBSTACLEPUZZLE_API UClass* StaticClass<AMovingPlatfrom>()
{
	return AMovingPlatfrom::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMovingPlatfrom);
AMovingPlatfrom::~AMovingPlatfrom() {}
// End Class AMovingPlatfrom

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_ObstaclePuzzle_Source_ObstaclePuzzle_MovingPlatfrom_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMovingPlatfrom, AMovingPlatfrom::StaticClass, TEXT("AMovingPlatfrom"), &Z_Registration_Info_UClass_AMovingPlatfrom, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMovingPlatfrom), 463235591U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ObstaclePuzzle_Source_ObstaclePuzzle_MovingPlatfrom_h_3396203208(TEXT("/Script/ObstaclePuzzle"),
	Z_CompiledInDeferFile_FID_UnrealProjects_ObstaclePuzzle_Source_ObstaclePuzzle_MovingPlatfrom_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ObstaclePuzzle_Source_ObstaclePuzzle_MovingPlatfrom_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
