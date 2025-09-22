// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PracticasCursoUe/MyActorPractice1.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyActorPractice1() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
PRACTICASCURSOUE_API UClass* Z_Construct_UClass_AMyActorPractice1();
PRACTICASCURSOUE_API UClass* Z_Construct_UClass_AMyActorPractice1_NoRegister();
UPackage* Z_Construct_UPackage__Script_PracticasCursoUe();
// End Cross Module References

// Begin Class AMyActorPractice1
void AMyActorPractice1::StaticRegisterNativesAMyActorPractice1()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyActorPractice1);
UClass* Z_Construct_UClass_AMyActorPractice1_NoRegister()
{
	return AMyActorPractice1::StaticClass();
}
struct Z_Construct_UClass_AMyActorPractice1_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MyActorPractice1.h" },
		{ "ModuleRelativePath", "MyActorPractice1.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyActorPractice1>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMyActorPractice1_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_PracticasCursoUe,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyActorPractice1_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyActorPractice1_Statics::ClassParams = {
	&AMyActorPractice1::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyActorPractice1_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyActorPractice1_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyActorPractice1()
{
	if (!Z_Registration_Info_UClass_AMyActorPractice1.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyActorPractice1.OuterSingleton, Z_Construct_UClass_AMyActorPractice1_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyActorPractice1.OuterSingleton;
}
template<> PRACTICASCURSOUE_API UClass* StaticClass<AMyActorPractice1>()
{
	return AMyActorPractice1::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyActorPractice1);
AMyActorPractice1::~AMyActorPractice1() {}
// End Class AMyActorPractice1

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Marco_Pr_cticasCursoC__Ue_PracticasCursoUe_Source_PracticasCursoUe_MyActorPractice1_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyActorPractice1, AMyActorPractice1::StaticClass, TEXT("AMyActorPractice1"), &Z_Registration_Info_UClass_AMyActorPractice1, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyActorPractice1), 4223729055U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Marco_Pr_cticasCursoC__Ue_PracticasCursoUe_Source_PracticasCursoUe_MyActorPractice1_h_2796327275(TEXT("/Script/PracticasCursoUe"),
	Z_CompiledInDeferFile_FID_Users_Marco_Pr_cticasCursoC__Ue_PracticasCursoUe_Source_PracticasCursoUe_MyActorPractice1_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Marco_Pr_cticasCursoC__Ue_PracticasCursoUe_Source_PracticasCursoUe_MyActorPractice1_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
