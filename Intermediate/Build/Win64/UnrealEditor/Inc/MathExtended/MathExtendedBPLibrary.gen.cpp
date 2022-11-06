// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MathExtended/Public/MathExtendedBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMathExtendedBPLibrary() {}
// Cross Module References
	MATHEXTENDED_API UClass* Z_Construct_UClass_UMathExtendedBPLibrary_NoRegister();
	MATHEXTENDED_API UClass* Z_Construct_UClass_UMathExtendedBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_MathExtended();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(UMathExtendedBPLibrary::execVectorPerlinSmoothStep)
	{
		P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_Time);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_StartDelay);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Duration);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_StartLocation);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_EndLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UMathExtendedBPLibrary::VectorPerlinSmoothStep(Z_Param_Out_Time,Z_Param_Out_StartDelay,Z_Param_Out_Duration,Z_Param_Out_StartLocation,Z_Param_Out_EndLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMathExtendedBPLibrary::execVectorSmoothStep)
	{
		P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_Time);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_StartDelay);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Duration);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_StartLocation);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_EndLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UMathExtendedBPLibrary::VectorSmoothStep(Z_Param_Out_Time,Z_Param_Out_StartDelay,Z_Param_Out_Duration,Z_Param_Out_StartLocation,Z_Param_Out_EndLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMathExtendedBPLibrary::execInverseSmoothStep)
	{
		P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_Input);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(double*)Z_Param__Result=UMathExtendedBPLibrary::InverseSmoothStep(Z_Param_Out_Input);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMathExtendedBPLibrary::execPerlinSmoothStep)
	{
		P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_Time);
		P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_StartDelay);
		P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_Duration);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(double*)Z_Param__Result=UMathExtendedBPLibrary::PerlinSmoothStep(Z_Param_Out_Time,Z_Param_Out_StartDelay,Z_Param_Out_Duration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMathExtendedBPLibrary::execSmoothStep)
	{
		P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_Time);
		P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_Start);
		P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_End);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(double*)Z_Param__Result=UMathExtendedBPLibrary::SmoothStep(Z_Param_Out_Time,Z_Param_Out_Start,Z_Param_Out_End);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMathExtendedBPLibrary::execVectorLinearInterpolate)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InputA);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InputB);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UMathExtendedBPLibrary::VectorLinearInterpolate(Z_Param_Out_InputA,Z_Param_Out_InputB,Z_Param_Out_Amount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMathExtendedBPLibrary::execLinearInterpolate)
	{
		P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_InputA);
		P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_InputB);
		P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_Amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(double*)Z_Param__Result=UMathExtendedBPLibrary::LinearInterpolate(Z_Param_Out_InputA,Z_Param_Out_InputB,Z_Param_Out_Amount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMathExtendedBPLibrary::execSpiralExpansion)
	{
		P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_Time);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_StartLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UMathExtendedBPLibrary::SpiralExpansion(Z_Param_Out_Time,Z_Param_Out_StartLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMathExtendedBPLibrary::execInverseSquareFalloffVector)
	{
		P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_Intensity);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_StartLocation);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_EndLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(double*)Z_Param__Result=UMathExtendedBPLibrary::InverseSquareFalloffVector(Z_Param_Out_Intensity,Z_Param_Out_StartLocation,Z_Param_Out_EndLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMathExtendedBPLibrary::execInverseSquareFalloff)
	{
		P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_Intensity);
		P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_Distance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(double*)Z_Param__Result=UMathExtendedBPLibrary::InverseSquareFalloff(Z_Param_Out_Intensity,Z_Param_Out_Distance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMathExtendedBPLibrary::execQuaternionSphericalInterpolate)
	{
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Quaternion1);
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Quaternion2);
		P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_Interpolation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuat*)Z_Param__Result=UMathExtendedBPLibrary::QuaternionSphericalInterpolate(Z_Param_Out_Quaternion1,Z_Param_Out_Quaternion2,Z_Param_Out_Interpolation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMathExtendedBPLibrary::execQuaternionEquals)
	{
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Quaternion1);
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Quaternion2);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_Tolerance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMathExtendedBPLibrary::QuaternionEquals(Z_Param_Out_Quaternion1,Z_Param_Out_Quaternion2,Z_Param_Tolerance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMathExtendedBPLibrary::execQuaternionAngle)
	{
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Quaternion1);
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Quaternion2);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(double*)Z_Param__Result=UMathExtendedBPLibrary::QuaternionAngle(Z_Param_Out_Quaternion1,Z_Param_Out_Quaternion2);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMathExtendedBPLibrary::execQuaternionAngleError)
	{
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Quaternion1);
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Quaternion2);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(double*)Z_Param__Result=UMathExtendedBPLibrary::QuaternionAngleError(Z_Param_Out_Quaternion1,Z_Param_Out_Quaternion2);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMathExtendedBPLibrary::execInverseQuaternion)
	{
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Quaternion);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuat*)Z_Param__Result=UMathExtendedBPLibrary::InverseQuaternion(Z_Param_Out_Quaternion);
		P_NATIVE_END;
	}
	void UMathExtendedBPLibrary::StaticRegisterNativesUMathExtendedBPLibrary()
	{
		UClass* Class = UMathExtendedBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InverseQuaternion", &UMathExtendedBPLibrary::execInverseQuaternion },
			{ "InverseSmoothStep", &UMathExtendedBPLibrary::execInverseSmoothStep },
			{ "InverseSquareFalloff", &UMathExtendedBPLibrary::execInverseSquareFalloff },
			{ "InverseSquareFalloffVector", &UMathExtendedBPLibrary::execInverseSquareFalloffVector },
			{ "LinearInterpolate", &UMathExtendedBPLibrary::execLinearInterpolate },
			{ "PerlinSmoothStep", &UMathExtendedBPLibrary::execPerlinSmoothStep },
			{ "QuaternionAngle", &UMathExtendedBPLibrary::execQuaternionAngle },
			{ "QuaternionAngleError", &UMathExtendedBPLibrary::execQuaternionAngleError },
			{ "QuaternionEquals", &UMathExtendedBPLibrary::execQuaternionEquals },
			{ "QuaternionSphericalInterpolate", &UMathExtendedBPLibrary::execQuaternionSphericalInterpolate },
			{ "SmoothStep", &UMathExtendedBPLibrary::execSmoothStep },
			{ "SpiralExpansion", &UMathExtendedBPLibrary::execSpiralExpansion },
			{ "VectorLinearInterpolate", &UMathExtendedBPLibrary::execVectorLinearInterpolate },
			{ "VectorPerlinSmoothStep", &UMathExtendedBPLibrary::execVectorPerlinSmoothStep },
			{ "VectorSmoothStep", &UMathExtendedBPLibrary::execVectorSmoothStep },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMathExtendedBPLibrary_InverseQuaternion_Statics
	{
		struct MathExtendedBPLibrary_eventInverseQuaternion_Parms
		{
			FQuat Quaternion;
			FQuat ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Quaternion_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Quaternion;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathExtendedBPLibrary_InverseQuaternion_Statics::NewProp_Quaternion_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathExtendedBPLibrary_InverseQuaternion_Statics::NewProp_Quaternion = { "Quaternion", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MathExtendedBPLibrary_eventInverseQuaternion_Parms, Quaternion), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UMathExtendedBPLibrary_InverseQuaternion_Statics::NewProp_Quaternion_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathExtendedBPLibrary_InverseQuaternion_Statics::NewProp_Quaternion_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathExtendedBPLibrary_InverseQuaternion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MathExtendedBPLibrary_eventInverseQuaternion_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMathExtendedBPLibrary_InverseQuaternion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathExtendedBPLibrary_InverseQuaternion_Statics::NewProp_Quaternion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathExtendedBPLibrary_InverseQuaternion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathExtendedBPLibrary_InverseQuaternion_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math Extended | Quaternion" },
		{ "DisplayName", "Inverse Quaternion" },
		{ "Keywords", "Math" },
		{ "ModuleRelativePath", "Public/MathExtendedBPLibrary.h" },
		{ "ToolTip", "Returns the inverse of the provided Quaternion. This is a pass by reference operation." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMathExtendedBPLibrary_InverseQuaternion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMathExtendedBPLibrary, nullptr, "InverseQuaternion", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMathExtendedBPLibrary_InverseQuaternion_Statics::MathExtendedBPLibrary_eventInverseQuaternion_Parms), Z_Construct_UFunction_UMathExtendedBPLibrary_InverseQuaternion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathExtendedBPLibrary_InverseQuaternion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMathExtendedBPLibrary_InverseQuaternion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathExtendedBPLibrary_InverseQuaternion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMathExtendedBPLibrary_InverseQuaternion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMathExtendedBPLibrary_InverseQuaternion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMathExtendedBPLibrary_InverseSmoothStep_Statics
	{
		struct MathExtendedBPLibrary_eventInverseSmoothStep_Parms
		{
			double Input;
			double ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Input;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathExtendedBPLibrary_InverseSmoothStep_Statics::NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMathExtendedBPLibrary_InverseSmoothStep_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MathExtendedBPLibrary_eventInverseSmoothStep_Parms, Input), METADATA_PARAMS(Z_Construct_UFunction_UMathExtendedBPLibrary_InverseSmoothStep_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathExtendedBPLibrary_InverseSmoothStep_Statics::NewProp_Input_MetaData)) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMathExtendedBPLibrary_InverseSmoothStep_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MathExtendedBPLibrary_eventInverseSmoothStep_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMathExtendedBPLibrary_InverseSmoothStep_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathExtendedBPLibrary_InverseSmoothStep_Statics::NewProp_Input,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathExtendedBPLibrary_InverseSmoothStep_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathExtendedBPLibrary_InverseSmoothStep_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math Extended | Utility" },
		{ "DisplayName", "Inverse Smooth Step" },
		{ "Keywords", "Math, Smooth Step" },
		{ "ModuleRelativePath", "Public/MathExtendedBPLibrary.h" },
		{ "ToolTip", "Compensate for the application of smooth step" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMathExtendedBPLibrary_InverseSmoothStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMathExtendedBPLibrary, nullptr, "InverseSmoothStep", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMathExtendedBPLibrary_InverseSmoothStep_Statics::MathExtendedBPLibrary_eventInverseSmoothStep_Parms), Z_Construct_UFunction_UMathExtendedBPLibrary_InverseSmoothStep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathExtendedBPLibrary_InverseSmoothStep_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMathExtendedBPLibrary_InverseSmoothStep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathExtendedBPLibrary_InverseSmoothStep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMathExtendedBPLibrary_InverseSmoothStep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMathExtendedBPLibrary_InverseSmoothStep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMathExtendedBPLibrary_InverseSquareFalloff_Statics
	{
		struct MathExtendedBPLibrary_eventInverseSquareFalloff_Parms
		{
			double Intensity;
			double Distance;
			double ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Intensity_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Intensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Distance;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathExtendedBPLibrary_InverseSquareFalloff_Statics::NewProp_Intensity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMathExtendedBPLibrary_InverseSquareFalloff_Statics::NewProp_Intensity = { "Intensity", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MathExtendedBPLibrary_eventInverseSquareFalloff_Parms, Intensity), METADATA_PARAMS(Z_Construct_UFunction_UMathExtendedBPLibrary_InverseSquareFalloff_Statics::NewProp_Intensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathExtendedBPLibrary_InverseSquareFalloff_Statics::NewProp_Intensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathExtendedBPLibrary_InverseSquareFalloff_Statics::NewProp_Distance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMathExtendedBPLibrary_InverseSquareFalloff_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MathExtendedBPLibrary_eventInverseSquareFalloff_Parms, Distance), METADATA_PARAMS(Z_Construct_UFunction_UMathExtendedBPLibrary_InverseSquareFalloff_Statics::NewProp_Distance_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathExtendedBPLibrary_InverseSquareFalloff_Statics::NewProp_Distance_MetaData)) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMathExtendedBPLibrary_InverseSquareFalloff_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MathExtendedBPLibrary_eventInverseSquareFalloff_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMathExtendedBPLibrary_InverseSquareFalloff_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathExtendedBPLibrary_InverseSquareFalloff_Statics::NewProp_Intensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathExtendedBPLibrary_InverseSquareFalloff_Statics::NewProp_Distance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathExtendedBPLibrary_InverseSquareFalloff_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathExtendedBPLibrary_InverseSquareFalloff_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math Extended | Utility" },
		{ "DisplayName", "Inverse Square Falloff" },
		{ "Keywords", "Math, InverseSquare" },
		{ "ModuleRelativePath", "Public/MathExtendedBPLibrary.h" },
		{ "ToolTip", "Inverse square falloff based on distance" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMathExtendedBPLibrary_InverseSquareFalloff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMathExtendedBPLibrary, nullptr, "InverseSquareFalloff", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMathExtendedBPLibrary_InverseSquareFalloff_Statics::MathExtendedBPLibrary_eventInverseSquareFalloff_Parms), Z_Construct_UFunction_UMathExtendedBPLibrary_InverseSquareFalloff_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathExtendedBPLibrary_InverseSquareFalloff_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMathExtendedBPLibrary_InverseSquareFalloff_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathExtendedBPLibrary_InverseSquareFalloff_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMathExtendedBPLibrary_InverseSquareFalloff()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMathExtendedBPLibrary_InverseSquareFalloff_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMathExtendedBPLibrary_InverseSquareFalloffVector_Statics
	{
		struct MathExtendedBPLibrary_eventInverseSquareFalloffVector_Parms
		{
			double Intensity;
			FVector StartLocation;
			FVector EndLocation;
			double ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Intensity_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Intensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EndLocation;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathExtendedBPLibrary_InverseSquareFalloffVector_Statics::NewProp_Intensity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMathExtendedBPLibrary_InverseSquareFalloffVector_Statics::NewProp_Intensity = { "Intensity", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MathExtendedBPLibrary_eventInverseSquareFalloffVector_Parms, Intensity), METADATA_PARAMS(Z_Construct_UFunction_UMathExtendedBPLibrary_InverseSquareFalloffVector_Statics::NewProp_Intensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathExtendedBPLibrary_InverseSquareFalloffVector_Statics::NewProp_Intensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathExtendedBPLibrary_InverseSquareFalloffVector_Statics::NewProp_StartLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathExtendedBPLibrary_InverseSquareFalloffVector_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MathExtendedBPLibrary_eventInverseSquareFalloffVector_Parms, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UMathExtendedBPLibrary_InverseSquareFalloffVector_Statics::NewProp_StartLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathExtendedBPLibrary_InverseSquareFalloffVector_Statics::NewProp_StartLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathExtendedBPLibrary_InverseSquareFalloffVector_Statics::NewProp_EndLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathExtendedBPLibrary_InverseSquareFalloffVector_Statics::NewProp_EndLocation = { "EndLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MathExtendedBPLibrary_eventInverseSquareFalloffVector_Parms, EndLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UMathExtendedBPLibrary_InverseSquareFalloffVector_Statics::NewProp_EndLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathExtendedBPLibrary_InverseSquareFalloffVector_Statics::NewProp_EndLocation_MetaData)) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMathExtendedBPLibrary_InverseSquareFalloffVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MathExtendedBPLibrary_eventInverseSquareFalloffVector_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMathExtendedBPLibrary_InverseSquareFalloffVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathExtendedBPLibrary_InverseSquareFalloffVector_Statics::NewProp_Intensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathExtendedBPLibrary_InverseSquareFalloffVector_Statics::NewProp_StartLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathExtendedBPLibrary_InverseSquareFalloffVector_Statics::NewProp_EndLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathExtendedBPLibrary_InverseSquareFalloffVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathExtendedBPLibrary_InverseSquareFalloffVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math Extended | Utility" },
		{ "DisplayName", "Inverse Square Falloff (Vector)" },
		{ "Keywords", "Math, InverseSquare" },
		{ "ModuleRelativePath", "Public/MathExtendedBPLibrary.h" },
		{ "ToolTip", "Inverse square falloff based on distance between two supplied vectors" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMathExtendedBPLibrary_InverseSquareFalloffVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMathExtendedBPLibrary, nullptr, "InverseSquareFalloffVector", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMathExtendedBPLibrary_InverseSquareFalloffVector_Statics::MathExtendedBPLibrary_eventInverseSquareFalloffVector_Parms), Z_Construct_UFunction_UMathExtendedBPLibrary_InverseSquareFalloffVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathExtendedBPLibrary_InverseSquareFalloffVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMathExtendedBPLibrary_InverseSquareFalloffVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathExtendedBPLibrary_InverseSquareFalloffVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMathExtendedBPLibrary_InverseSquareFalloffVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMathExtendedBPLibrary_InverseSquareFalloffVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMathExtendedBPLibrary_LinearInterpolate_Statics
	{
		struct MathExtendedBPLibrary_eventLinearInterpolate_Parms
		{
			double InputA;
			double InputB;
			double Amount;
			double ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputA_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_InputA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputB_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_InputB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Amount_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Amount;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathExtendedBPLibrary_LinearInterpolate_Statics::NewProp_InputA_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMathExtendedBPLibrary_LinearInterpolate_Statics::NewProp_InputA = { "InputA", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MathExtendedBPLibrary_eventLinearInterpolate_Parms, InputA), METADATA_PARAMS(Z_Construct_UFunction_UMathExtendedBPLibrary_LinearInterpolate_Statics::NewProp_InputA_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathExtendedBPLibrary_LinearInterpolate_Statics::NewProp_InputA_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathExtendedBPLibrary_LinearInterpolate_Statics::NewProp_InputB_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMathExtendedBPLibrary_LinearInterpolate_Statics::NewProp_InputB = { "InputB", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MathExtendedBPLibrary_eventLinearInterpolate_Parms, InputB), METADATA_PARAMS(Z_Construct_UFunction_UMathExtendedBPLibrary_LinearInterpolate_Statics::NewProp_InputB_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathExtendedBPLibrary_LinearInterpolate_Statics::NewProp_InputB_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathExtendedBPLibrary_LinearInterpolate_Statics::NewProp_Amount_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMathExtendedBPLibrary_LinearInterpolate_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MathExtendedBPLibrary_eventLinearInterpolate_Parms, Amount), METADATA_PARAMS(Z_Construct_UFunction_UMathExtendedBPLibrary_LinearInterpolate_Statics::NewProp_Amount_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathExtendedBPLibrary_LinearInterpolate_Statics::NewProp_Amount_MetaData)) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMathExtendedBPLibrary_LinearInterpolate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MathExtendedBPLibrary_eventLinearInterpolate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMathExtendedBPLibrary_LinearInterpolate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathExtendedBPLibrary_LinearInterpolate_Statics::NewProp_InputA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathExtendedBPLibrary_LinearInterpolate_Statics::NewProp_InputB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathExtendedBPLibrary_LinearInterpolate_Statics::NewProp_Amount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathExtendedBPLibrary_LinearInterpolate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathExtendedBPLibrary_LinearInterpolate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math Extended | Utility" },
		{ "DisplayName", "Linear Interpolate" },
		{ "Keywords", "Math, Linear, INterpolate" },
		{ "ModuleRelativePath", "Public/MathExtendedBPLibrary.h" },
		{ "ToolTip", "Returns A when amount <= 0 and and B when Amount >= 1. Interploation between A and B occurs for Amount values between 0 and 1." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMathExtendedBPLibrary_LinearInterpolate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMathExtendedBPLibrary, nullptr, "LinearInterpolate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMathExtendedBPLibrary_LinearInterpolate_Statics::MathExtendedBPLibrary_eventLinearInterpolate_Parms), Z_Construct_UFunction_UMathExtendedBPLibrary_LinearInterpolate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathExtendedBPLibrary_LinearInterpolate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMathExtendedBPLibrary_LinearInterpolate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathExtendedBPLibrary_LinearInterpolate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMathExtendedBPLibrary_LinearInterpolate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMathExtendedBPLibrary_LinearInterpolate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMathExtendedBPLibrary_PerlinSmoothStep_Statics
	{
		struct MathExtendedBPLibrary_eventPerlinSmoothStep_Parms
		{
			double Time;
			double StartDelay;
			double Duration;
			double ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Time;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartDelay_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_StartDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Duration;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathExtendedBPLibrary_PerlinSmoothStep_Statics::NewProp_Time_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMathExtendedBPLibrary_PerlinSmoothStep_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MathExtendedBPLibrary_eventPerlinSmoothStep_Parms, Time), METADATA_PARAMS(Z_Construct_UFunction_UMathExtendedBPLibrary_PerlinSmoothStep_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathExtendedBPLibrary_PerlinSmoothStep_Statics::NewProp_Time_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathExtendedBPLibrary_PerlinSmoothStep_Statics::NewProp_StartDelay_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMathExtendedBPLibrary_PerlinSmoothStep_Statics::NewProp_StartDelay = { "StartDelay", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MathExtendedBPLibrary_eventPerlinSmoothStep_Parms, StartDelay), METADATA_PARAMS(Z_Construct_UFunction_UMathExtendedBPLibrary_PerlinSmoothStep_Statics::NewProp_StartDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathExtendedBPLibrary_PerlinSmoothStep_Statics::NewProp_StartDelay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathExtendedBPLibrary_PerlinSmoothStep_Statics::NewProp_Duration_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMathExtendedBPLibrary_PerlinSmoothStep_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MathExtendedBPLibrary_eventPerlinSmoothStep_Parms, Duration), METADATA_PARAMS(Z_Construct_UFunction_UMathExtendedBPLibrary_PerlinSmoothStep_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathExtendedBPLibrary_PerlinSmoothStep_Statics::NewProp_Duration_MetaData)) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMathExtendedBPLibrary_PerlinSmoothStep_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MathExtendedBPLibrary_eventPerlinSmoothStep_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMathExtendedBPLibrary_PerlinSmoothStep_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathExtendedBPLibrary_PerlinSmoothStep_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathExtendedBPLibrary_PerlinSmoothStep_Statics::NewProp_StartDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathExtendedBPLibrary_PerlinSmoothStep_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathExtendedBPLibrary_PerlinSmoothStep_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathExtendedBPLibrary_PerlinSmoothStep_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math Extended | Utility" },
		{ "DisplayName", "Perlin Smooth Step" },
		{ "Keywords", "Math, Perlin Smooth Step" },
		{ "ModuleRelativePath", "Public/MathExtendedBPLibrary.h" },
		{ "ToolTip", "Smooth interpolation between values using Perlin 2nd Order smooth step. Clamps between 0 and 1." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMathExtendedBPLibrary_PerlinSmoothStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMathExtendedBPLibrary, nullptr, "PerlinSmoothStep", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMathExtendedBPLibrary_PerlinSmoothStep_Statics::MathExtendedBPLibrary_eventPerlinSmoothStep_Parms), Z_Construct_UFunction_UMathExtendedBPLibrary_PerlinSmoothStep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathExtendedBPLibrary_PerlinSmoothStep_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMathExtendedBPLibrary_PerlinSmoothStep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathExtendedBPLibrary_PerlinSmoothStep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMathExtendedBPLibrary_PerlinSmoothStep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMathExtendedBPLibrary_PerlinSmoothStep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionAngle_Statics
	{
		struct MathExtendedBPLibrary_eventQuaternionAngle_Parms
		{
			FQuat Quaternion1;
			FQuat Quaternion2;
			double ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Quaternion1_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Quaternion1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Quaternion2_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Quaternion2;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionAngle_Statics::NewProp_Quaternion1_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionAngle_Statics::NewProp_Quaternion1 = { "Quaternion1", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MathExtendedBPLibrary_eventQuaternionAngle_Parms, Quaternion1), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionAngle_Statics::NewProp_Quaternion1_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionAngle_Statics::NewProp_Quaternion1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionAngle_Statics::NewProp_Quaternion2_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionAngle_Statics::NewProp_Quaternion2 = { "Quaternion2", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MathExtendedBPLibrary_eventQuaternionAngle_Parms, Quaternion2), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionAngle_Statics::NewProp_Quaternion2_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionAngle_Statics::NewProp_Quaternion2_MetaData)) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionAngle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MathExtendedBPLibrary_eventQuaternionAngle_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionAngle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionAngle_Statics::NewProp_Quaternion1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionAngle_Statics::NewProp_Quaternion2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionAngle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionAngle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math Extended | Quaternion" },
		{ "DisplayName", "Angle between Unit Quaternions" },
		{ "Keywords", "Math" },
		{ "ModuleRelativePath", "Public/MathExtendedBPLibrary.h" },
		{ "ToolTip", "Returns the angle between 2 quaternions." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMathExtendedBPLibrary, nullptr, "QuaternionAngle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionAngle_Statics::MathExtendedBPLibrary_eventQuaternionAngle_Parms), Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionAngle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionAngle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionAngle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionAngleError_Statics
	{
		struct MathExtendedBPLibrary_eventQuaternionAngleError_Parms
		{
			FQuat Quaternion1;
			FQuat Quaternion2;
			double ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Quaternion1_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Quaternion1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Quaternion2_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Quaternion2;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionAngleError_Statics::NewProp_Quaternion1_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionAngleError_Statics::NewProp_Quaternion1 = { "Quaternion1", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MathExtendedBPLibrary_eventQuaternionAngleError_Parms, Quaternion1), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionAngleError_Statics::NewProp_Quaternion1_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionAngleError_Statics::NewProp_Quaternion1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionAngleError_Statics::NewProp_Quaternion2_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionAngleError_Statics::NewProp_Quaternion2 = { "Quaternion2", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MathExtendedBPLibrary_eventQuaternionAngleError_Parms, Quaternion2), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionAngleError_Statics::NewProp_Quaternion2_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionAngleError_Statics::NewProp_Quaternion2_MetaData)) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionAngleError_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MathExtendedBPLibrary_eventQuaternionAngleError_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionAngleError_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionAngleError_Statics::NewProp_Quaternion1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionAngleError_Statics::NewProp_Quaternion2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionAngleError_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionAngleError_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math Extended | Quaternion" },
		{ "DisplayName", "Angle between Unit Quaternions (Error)" },
		{ "Keywords", "Math" },
		{ "ModuleRelativePath", "Public/MathExtendedBPLibrary.h" },
		{ "ToolTip", "Returns the angle (radians) between 2 quaternions. 0 When equal, 1 when 180 degrees apart" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionAngleError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMathExtendedBPLibrary, nullptr, "QuaternionAngleError", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionAngleError_Statics::MathExtendedBPLibrary_eventQuaternionAngleError_Parms), Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionAngleError_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionAngleError_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionAngleError_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionAngleError_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionAngleError()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionAngleError_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionEquals_Statics
	{
		struct MathExtendedBPLibrary_eventQuaternionEquals_Parms
		{
			FQuat Quaternion1;
			FQuat Quaternion2;
			double Tolerance;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Quaternion1_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Quaternion1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Quaternion2_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Quaternion2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tolerance_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Tolerance;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionEquals_Statics::NewProp_Quaternion1_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionEquals_Statics::NewProp_Quaternion1 = { "Quaternion1", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MathExtendedBPLibrary_eventQuaternionEquals_Parms, Quaternion1), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionEquals_Statics::NewProp_Quaternion1_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionEquals_Statics::NewProp_Quaternion1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionEquals_Statics::NewProp_Quaternion2_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionEquals_Statics::NewProp_Quaternion2 = { "Quaternion2", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MathExtendedBPLibrary_eventQuaternionEquals_Parms, Quaternion2), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionEquals_Statics::NewProp_Quaternion2_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionEquals_Statics::NewProp_Quaternion2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionEquals_Statics::NewProp_Tolerance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionEquals_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MathExtendedBPLibrary_eventQuaternionEquals_Parms, Tolerance), METADATA_PARAMS(Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionEquals_Statics::NewProp_Tolerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionEquals_Statics::NewProp_Tolerance_MetaData)) };
	void Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionEquals_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MathExtendedBPLibrary_eventQuaternionEquals_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionEquals_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MathExtendedBPLibrary_eventQuaternionEquals_Parms), &Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionEquals_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionEquals_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionEquals_Statics::NewProp_Quaternion1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionEquals_Statics::NewProp_Quaternion2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionEquals_Statics::NewProp_Tolerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionEquals_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionEquals_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math Extended | Quaternion" },
		{ "DisplayName", "Unit Quaternion Equals" },
		{ "Keywords", "Math" },
		{ "ModuleRelativePath", "Public/MathExtendedBPLibrary.h" },
		{ "ToolTip", "Returns true if the Quaternions are equal, given a tolerance value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionEquals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMathExtendedBPLibrary, nullptr, "QuaternionEquals", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionEquals_Statics::MathExtendedBPLibrary_eventQuaternionEquals_Parms), Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionEquals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionEquals_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionEquals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionEquals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionEquals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionEquals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionSphericalInterpolate_Statics
	{
		struct MathExtendedBPLibrary_eventQuaternionSphericalInterpolate_Parms
		{
			FQuat Quaternion1;
			FQuat Quaternion2;
			double Interpolation;
			FQuat ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Quaternion1_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Quaternion1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Quaternion2_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Quaternion2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Interpolation_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Interpolation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionSphericalInterpolate_Statics::NewProp_Quaternion1_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionSphericalInterpolate_Statics::NewProp_Quaternion1 = { "Quaternion1", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MathExtendedBPLibrary_eventQuaternionSphericalInterpolate_Parms, Quaternion1), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionSphericalInterpolate_Statics::NewProp_Quaternion1_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionSphericalInterpolate_Statics::NewProp_Quaternion1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionSphericalInterpolate_Statics::NewProp_Quaternion2_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionSphericalInterpolate_Statics::NewProp_Quaternion2 = { "Quaternion2", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MathExtendedBPLibrary_eventQuaternionSphericalInterpolate_Parms, Quaternion2), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionSphericalInterpolate_Statics::NewProp_Quaternion2_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionSphericalInterpolate_Statics::NewProp_Quaternion2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionSphericalInterpolate_Statics::NewProp_Interpolation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionSphericalInterpolate_Statics::NewProp_Interpolation = { "Interpolation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MathExtendedBPLibrary_eventQuaternionSphericalInterpolate_Parms, Interpolation), METADATA_PARAMS(Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionSphericalInterpolate_Statics::NewProp_Interpolation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionSphericalInterpolate_Statics::NewProp_Interpolation_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionSphericalInterpolate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MathExtendedBPLibrary_eventQuaternionSphericalInterpolate_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionSphericalInterpolate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionSphericalInterpolate_Statics::NewProp_Quaternion1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionSphericalInterpolate_Statics::NewProp_Quaternion2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionSphericalInterpolate_Statics::NewProp_Interpolation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionSphericalInterpolate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionSphericalInterpolate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math Extended | Quaternion" },
		{ "DisplayName", "Unit Quaternion Spherical Interpolation" },
		{ "Keywords", "Math, SLerp" },
		{ "ModuleRelativePath", "Public/MathExtendedBPLibrary.h" },
		{ "ToolTip", "Use spherical interpolation to interpolate between 2 UNIT quaternions (does not normalize). Interpolation value must be a value between 0 and 1!" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionSphericalInterpolate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMathExtendedBPLibrary, nullptr, "QuaternionSphericalInterpolate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionSphericalInterpolate_Statics::MathExtendedBPLibrary_eventQuaternionSphericalInterpolate_Parms), Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionSphericalInterpolate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionSphericalInterpolate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionSphericalInterpolate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionSphericalInterpolate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionSphericalInterpolate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionSphericalInterpolate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMathExtendedBPLibrary_SmoothStep_Statics
	{
		struct MathExtendedBPLibrary_eventSmoothStep_Parms
		{
			double Time;
			double Start;
			double End;
			double ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Time;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Start;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_End_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_End;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathExtendedBPLibrary_SmoothStep_Statics::NewProp_Time_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMathExtendedBPLibrary_SmoothStep_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MathExtendedBPLibrary_eventSmoothStep_Parms, Time), METADATA_PARAMS(Z_Construct_UFunction_UMathExtendedBPLibrary_SmoothStep_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathExtendedBPLibrary_SmoothStep_Statics::NewProp_Time_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathExtendedBPLibrary_SmoothStep_Statics::NewProp_Start_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMathExtendedBPLibrary_SmoothStep_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MathExtendedBPLibrary_eventSmoothStep_Parms, Start), METADATA_PARAMS(Z_Construct_UFunction_UMathExtendedBPLibrary_SmoothStep_Statics::NewProp_Start_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathExtendedBPLibrary_SmoothStep_Statics::NewProp_Start_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathExtendedBPLibrary_SmoothStep_Statics::NewProp_End_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMathExtendedBPLibrary_SmoothStep_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MathExtendedBPLibrary_eventSmoothStep_Parms, End), METADATA_PARAMS(Z_Construct_UFunction_UMathExtendedBPLibrary_SmoothStep_Statics::NewProp_End_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathExtendedBPLibrary_SmoothStep_Statics::NewProp_End_MetaData)) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMathExtendedBPLibrary_SmoothStep_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MathExtendedBPLibrary_eventSmoothStep_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMathExtendedBPLibrary_SmoothStep_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathExtendedBPLibrary_SmoothStep_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathExtendedBPLibrary_SmoothStep_Statics::NewProp_Start,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathExtendedBPLibrary_SmoothStep_Statics::NewProp_End,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathExtendedBPLibrary_SmoothStep_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathExtendedBPLibrary_SmoothStep_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math Extended | Utility" },
		{ "DisplayName", "Smooth Step" },
		{ "Keywords", "Math, Smooth Step" },
		{ "ModuleRelativePath", "Public/MathExtendedBPLibrary.h" },
		{ "ToolTip", "Smooth interpolation between values. Clamps between 0 and 1." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMathExtendedBPLibrary_SmoothStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMathExtendedBPLibrary, nullptr, "SmoothStep", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMathExtendedBPLibrary_SmoothStep_Statics::MathExtendedBPLibrary_eventSmoothStep_Parms), Z_Construct_UFunction_UMathExtendedBPLibrary_SmoothStep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathExtendedBPLibrary_SmoothStep_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMathExtendedBPLibrary_SmoothStep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathExtendedBPLibrary_SmoothStep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMathExtendedBPLibrary_SmoothStep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMathExtendedBPLibrary_SmoothStep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMathExtendedBPLibrary_SpiralExpansion_Statics
	{
		struct MathExtendedBPLibrary_eventSpiralExpansion_Parms
		{
			double Time;
			FVector StartLocation;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Time;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartLocation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathExtendedBPLibrary_SpiralExpansion_Statics::NewProp_Time_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMathExtendedBPLibrary_SpiralExpansion_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MathExtendedBPLibrary_eventSpiralExpansion_Parms, Time), METADATA_PARAMS(Z_Construct_UFunction_UMathExtendedBPLibrary_SpiralExpansion_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathExtendedBPLibrary_SpiralExpansion_Statics::NewProp_Time_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathExtendedBPLibrary_SpiralExpansion_Statics::NewProp_StartLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathExtendedBPLibrary_SpiralExpansion_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MathExtendedBPLibrary_eventSpiralExpansion_Parms, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UMathExtendedBPLibrary_SpiralExpansion_Statics::NewProp_StartLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathExtendedBPLibrary_SpiralExpansion_Statics::NewProp_StartLocation_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathExtendedBPLibrary_SpiralExpansion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MathExtendedBPLibrary_eventSpiralExpansion_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMathExtendedBPLibrary_SpiralExpansion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathExtendedBPLibrary_SpiralExpansion_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathExtendedBPLibrary_SpiralExpansion_Statics::NewProp_StartLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathExtendedBPLibrary_SpiralExpansion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathExtendedBPLibrary_SpiralExpansion_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math Extended | Utility" },
		{ "DisplayName", "Spiral Expansion over time" },
		{ "Keywords", "Math, Spiral" },
		{ "ModuleRelativePath", "Public/MathExtendedBPLibrary.h" },
		{ "ToolTip", "Translates a position into a spiral along the X axis, which gets larger over time" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMathExtendedBPLibrary_SpiralExpansion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMathExtendedBPLibrary, nullptr, "SpiralExpansion", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMathExtendedBPLibrary_SpiralExpansion_Statics::MathExtendedBPLibrary_eventSpiralExpansion_Parms), Z_Construct_UFunction_UMathExtendedBPLibrary_SpiralExpansion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathExtendedBPLibrary_SpiralExpansion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMathExtendedBPLibrary_SpiralExpansion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathExtendedBPLibrary_SpiralExpansion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMathExtendedBPLibrary_SpiralExpansion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMathExtendedBPLibrary_SpiralExpansion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMathExtendedBPLibrary_VectorLinearInterpolate_Statics
	{
		struct MathExtendedBPLibrary_eventVectorLinearInterpolate_Parms
		{
			FVector InputA;
			FVector InputB;
			FVector Amount;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputA_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputB_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Amount_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Amount;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathExtendedBPLibrary_VectorLinearInterpolate_Statics::NewProp_InputA_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathExtendedBPLibrary_VectorLinearInterpolate_Statics::NewProp_InputA = { "InputA", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MathExtendedBPLibrary_eventVectorLinearInterpolate_Parms, InputA), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UMathExtendedBPLibrary_VectorLinearInterpolate_Statics::NewProp_InputA_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathExtendedBPLibrary_VectorLinearInterpolate_Statics::NewProp_InputA_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathExtendedBPLibrary_VectorLinearInterpolate_Statics::NewProp_InputB_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathExtendedBPLibrary_VectorLinearInterpolate_Statics::NewProp_InputB = { "InputB", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MathExtendedBPLibrary_eventVectorLinearInterpolate_Parms, InputB), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UMathExtendedBPLibrary_VectorLinearInterpolate_Statics::NewProp_InputB_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathExtendedBPLibrary_VectorLinearInterpolate_Statics::NewProp_InputB_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathExtendedBPLibrary_VectorLinearInterpolate_Statics::NewProp_Amount_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathExtendedBPLibrary_VectorLinearInterpolate_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MathExtendedBPLibrary_eventVectorLinearInterpolate_Parms, Amount), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UMathExtendedBPLibrary_VectorLinearInterpolate_Statics::NewProp_Amount_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathExtendedBPLibrary_VectorLinearInterpolate_Statics::NewProp_Amount_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathExtendedBPLibrary_VectorLinearInterpolate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MathExtendedBPLibrary_eventVectorLinearInterpolate_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMathExtendedBPLibrary_VectorLinearInterpolate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathExtendedBPLibrary_VectorLinearInterpolate_Statics::NewProp_InputA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathExtendedBPLibrary_VectorLinearInterpolate_Statics::NewProp_InputB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathExtendedBPLibrary_VectorLinearInterpolate_Statics::NewProp_Amount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathExtendedBPLibrary_VectorLinearInterpolate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathExtendedBPLibrary_VectorLinearInterpolate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math Extended | Utility" },
		{ "DisplayName", "Linear Interpolate (Vector)" },
		{ "Keywords", "Math, Linear, INterpolate" },
		{ "ModuleRelativePath", "Public/MathExtendedBPLibrary.h" },
		{ "ToolTip", "Returns A when amount <= 0 and and B when Amount >= 1. Interploation between A and B occurs for Amount values between 0 and 1." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMathExtendedBPLibrary_VectorLinearInterpolate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMathExtendedBPLibrary, nullptr, "VectorLinearInterpolate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMathExtendedBPLibrary_VectorLinearInterpolate_Statics::MathExtendedBPLibrary_eventVectorLinearInterpolate_Parms), Z_Construct_UFunction_UMathExtendedBPLibrary_VectorLinearInterpolate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathExtendedBPLibrary_VectorLinearInterpolate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMathExtendedBPLibrary_VectorLinearInterpolate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathExtendedBPLibrary_VectorLinearInterpolate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMathExtendedBPLibrary_VectorLinearInterpolate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMathExtendedBPLibrary_VectorLinearInterpolate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMathExtendedBPLibrary_VectorPerlinSmoothStep_Statics
	{
		struct MathExtendedBPLibrary_eventVectorPerlinSmoothStep_Parms
		{
			double Time;
			FVector StartDelay;
			FVector Duration;
			FVector StartLocation;
			FVector EndLocation;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Time;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartDelay_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EndLocation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathExtendedBPLibrary_VectorPerlinSmoothStep_Statics::NewProp_Time_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMathExtendedBPLibrary_VectorPerlinSmoothStep_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MathExtendedBPLibrary_eventVectorPerlinSmoothStep_Parms, Time), METADATA_PARAMS(Z_Construct_UFunction_UMathExtendedBPLibrary_VectorPerlinSmoothStep_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathExtendedBPLibrary_VectorPerlinSmoothStep_Statics::NewProp_Time_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathExtendedBPLibrary_VectorPerlinSmoothStep_Statics::NewProp_StartDelay_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathExtendedBPLibrary_VectorPerlinSmoothStep_Statics::NewProp_StartDelay = { "StartDelay", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MathExtendedBPLibrary_eventVectorPerlinSmoothStep_Parms, StartDelay), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UMathExtendedBPLibrary_VectorPerlinSmoothStep_Statics::NewProp_StartDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathExtendedBPLibrary_VectorPerlinSmoothStep_Statics::NewProp_StartDelay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathExtendedBPLibrary_VectorPerlinSmoothStep_Statics::NewProp_Duration_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathExtendedBPLibrary_VectorPerlinSmoothStep_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MathExtendedBPLibrary_eventVectorPerlinSmoothStep_Parms, Duration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UMathExtendedBPLibrary_VectorPerlinSmoothStep_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathExtendedBPLibrary_VectorPerlinSmoothStep_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathExtendedBPLibrary_VectorPerlinSmoothStep_Statics::NewProp_StartLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathExtendedBPLibrary_VectorPerlinSmoothStep_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MathExtendedBPLibrary_eventVectorPerlinSmoothStep_Parms, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UMathExtendedBPLibrary_VectorPerlinSmoothStep_Statics::NewProp_StartLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathExtendedBPLibrary_VectorPerlinSmoothStep_Statics::NewProp_StartLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathExtendedBPLibrary_VectorPerlinSmoothStep_Statics::NewProp_EndLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathExtendedBPLibrary_VectorPerlinSmoothStep_Statics::NewProp_EndLocation = { "EndLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MathExtendedBPLibrary_eventVectorPerlinSmoothStep_Parms, EndLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UMathExtendedBPLibrary_VectorPerlinSmoothStep_Statics::NewProp_EndLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathExtendedBPLibrary_VectorPerlinSmoothStep_Statics::NewProp_EndLocation_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathExtendedBPLibrary_VectorPerlinSmoothStep_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MathExtendedBPLibrary_eventVectorPerlinSmoothStep_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMathExtendedBPLibrary_VectorPerlinSmoothStep_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathExtendedBPLibrary_VectorPerlinSmoothStep_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathExtendedBPLibrary_VectorPerlinSmoothStep_Statics::NewProp_StartDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathExtendedBPLibrary_VectorPerlinSmoothStep_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathExtendedBPLibrary_VectorPerlinSmoothStep_Statics::NewProp_StartLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathExtendedBPLibrary_VectorPerlinSmoothStep_Statics::NewProp_EndLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathExtendedBPLibrary_VectorPerlinSmoothStep_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathExtendedBPLibrary_VectorPerlinSmoothStep_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math Extended | Utility" },
		{ "DisplayName", "Vector Perlin Smooth Step Interpolation" },
		{ "Keywords", "Math, Smooth Step, Vector, Interpolation" },
		{ "ModuleRelativePath", "Public/MathExtendedBPLibrary.h" },
		{ "ToolTip", "Per axis control of smooth interpolation between vector values using Perlin 2nd Order smooth step." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMathExtendedBPLibrary_VectorPerlinSmoothStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMathExtendedBPLibrary, nullptr, "VectorPerlinSmoothStep", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMathExtendedBPLibrary_VectorPerlinSmoothStep_Statics::MathExtendedBPLibrary_eventVectorPerlinSmoothStep_Parms), Z_Construct_UFunction_UMathExtendedBPLibrary_VectorPerlinSmoothStep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathExtendedBPLibrary_VectorPerlinSmoothStep_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMathExtendedBPLibrary_VectorPerlinSmoothStep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathExtendedBPLibrary_VectorPerlinSmoothStep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMathExtendedBPLibrary_VectorPerlinSmoothStep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMathExtendedBPLibrary_VectorPerlinSmoothStep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMathExtendedBPLibrary_VectorSmoothStep_Statics
	{
		struct MathExtendedBPLibrary_eventVectorSmoothStep_Parms
		{
			double Time;
			FVector StartDelay;
			FVector Duration;
			FVector StartLocation;
			FVector EndLocation;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Time;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartDelay_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EndLocation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathExtendedBPLibrary_VectorSmoothStep_Statics::NewProp_Time_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMathExtendedBPLibrary_VectorSmoothStep_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MathExtendedBPLibrary_eventVectorSmoothStep_Parms, Time), METADATA_PARAMS(Z_Construct_UFunction_UMathExtendedBPLibrary_VectorSmoothStep_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathExtendedBPLibrary_VectorSmoothStep_Statics::NewProp_Time_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathExtendedBPLibrary_VectorSmoothStep_Statics::NewProp_StartDelay_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathExtendedBPLibrary_VectorSmoothStep_Statics::NewProp_StartDelay = { "StartDelay", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MathExtendedBPLibrary_eventVectorSmoothStep_Parms, StartDelay), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UMathExtendedBPLibrary_VectorSmoothStep_Statics::NewProp_StartDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathExtendedBPLibrary_VectorSmoothStep_Statics::NewProp_StartDelay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathExtendedBPLibrary_VectorSmoothStep_Statics::NewProp_Duration_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathExtendedBPLibrary_VectorSmoothStep_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MathExtendedBPLibrary_eventVectorSmoothStep_Parms, Duration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UMathExtendedBPLibrary_VectorSmoothStep_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathExtendedBPLibrary_VectorSmoothStep_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathExtendedBPLibrary_VectorSmoothStep_Statics::NewProp_StartLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathExtendedBPLibrary_VectorSmoothStep_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MathExtendedBPLibrary_eventVectorSmoothStep_Parms, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UMathExtendedBPLibrary_VectorSmoothStep_Statics::NewProp_StartLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathExtendedBPLibrary_VectorSmoothStep_Statics::NewProp_StartLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathExtendedBPLibrary_VectorSmoothStep_Statics::NewProp_EndLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathExtendedBPLibrary_VectorSmoothStep_Statics::NewProp_EndLocation = { "EndLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MathExtendedBPLibrary_eventVectorSmoothStep_Parms, EndLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UMathExtendedBPLibrary_VectorSmoothStep_Statics::NewProp_EndLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathExtendedBPLibrary_VectorSmoothStep_Statics::NewProp_EndLocation_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathExtendedBPLibrary_VectorSmoothStep_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MathExtendedBPLibrary_eventVectorSmoothStep_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMathExtendedBPLibrary_VectorSmoothStep_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathExtendedBPLibrary_VectorSmoothStep_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathExtendedBPLibrary_VectorSmoothStep_Statics::NewProp_StartDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathExtendedBPLibrary_VectorSmoothStep_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathExtendedBPLibrary_VectorSmoothStep_Statics::NewProp_StartLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathExtendedBPLibrary_VectorSmoothStep_Statics::NewProp_EndLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathExtendedBPLibrary_VectorSmoothStep_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathExtendedBPLibrary_VectorSmoothStep_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math Extended | Utility" },
		{ "DisplayName", "Vector Smooth Step Interpolation" },
		{ "Keywords", "Math, Smooth Step, Vector, Interpolation" },
		{ "ModuleRelativePath", "Public/MathExtendedBPLibrary.h" },
		{ "ToolTip", "Per axis control of smooth interpolation between vector values." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMathExtendedBPLibrary_VectorSmoothStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMathExtendedBPLibrary, nullptr, "VectorSmoothStep", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMathExtendedBPLibrary_VectorSmoothStep_Statics::MathExtendedBPLibrary_eventVectorSmoothStep_Parms), Z_Construct_UFunction_UMathExtendedBPLibrary_VectorSmoothStep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathExtendedBPLibrary_VectorSmoothStep_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMathExtendedBPLibrary_VectorSmoothStep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathExtendedBPLibrary_VectorSmoothStep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMathExtendedBPLibrary_VectorSmoothStep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMathExtendedBPLibrary_VectorSmoothStep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMathExtendedBPLibrary);
	UClass* Z_Construct_UClass_UMathExtendedBPLibrary_NoRegister()
	{
		return UMathExtendedBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UMathExtendedBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMathExtendedBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_MathExtended,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMathExtendedBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMathExtendedBPLibrary_InverseQuaternion, "InverseQuaternion" }, // 3418829881
		{ &Z_Construct_UFunction_UMathExtendedBPLibrary_InverseSmoothStep, "InverseSmoothStep" }, // 2443134389
		{ &Z_Construct_UFunction_UMathExtendedBPLibrary_InverseSquareFalloff, "InverseSquareFalloff" }, // 90269441
		{ &Z_Construct_UFunction_UMathExtendedBPLibrary_InverseSquareFalloffVector, "InverseSquareFalloffVector" }, // 253227379
		{ &Z_Construct_UFunction_UMathExtendedBPLibrary_LinearInterpolate, "LinearInterpolate" }, // 3280438010
		{ &Z_Construct_UFunction_UMathExtendedBPLibrary_PerlinSmoothStep, "PerlinSmoothStep" }, // 1984292964
		{ &Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionAngle, "QuaternionAngle" }, // 3684844922
		{ &Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionAngleError, "QuaternionAngleError" }, // 1342258016
		{ &Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionEquals, "QuaternionEquals" }, // 1666014522
		{ &Z_Construct_UFunction_UMathExtendedBPLibrary_QuaternionSphericalInterpolate, "QuaternionSphericalInterpolate" }, // 1551021157
		{ &Z_Construct_UFunction_UMathExtendedBPLibrary_SmoothStep, "SmoothStep" }, // 761229681
		{ &Z_Construct_UFunction_UMathExtendedBPLibrary_SpiralExpansion, "SpiralExpansion" }, // 1390931714
		{ &Z_Construct_UFunction_UMathExtendedBPLibrary_VectorLinearInterpolate, "VectorLinearInterpolate" }, // 2687089095
		{ &Z_Construct_UFunction_UMathExtendedBPLibrary_VectorPerlinSmoothStep, "VectorPerlinSmoothStep" }, // 1518164873
		{ &Z_Construct_UFunction_UMathExtendedBPLibrary_VectorSmoothStep, "VectorSmoothStep" }, // 2885971229
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMathExtendedBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n*\x09""Extended Math Function library.\n*\x09""Functions are written inline, pass by reference, and pure function format for optimized performence\n*\n*\x09V 1.0 focusing on efficient Interpolation and Quaternion functions in blueprints\n*/" },
		{ "IncludePath", "MathExtendedBPLibrary.h" },
		{ "ModuleRelativePath", "Public/MathExtendedBPLibrary.h" },
		{ "ToolTip", "*      Extended Math Function library.\n*      Functions are written inline, pass by reference, and pure function format for optimized performence\n*\n*      V 1.0 focusing on efficient Interpolation and Quaternion functions in blueprints" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMathExtendedBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMathExtendedBPLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMathExtendedBPLibrary_Statics::ClassParams = {
		&UMathExtendedBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMathExtendedBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMathExtendedBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMathExtendedBPLibrary()
	{
		if (!Z_Registration_Info_UClass_UMathExtendedBPLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMathExtendedBPLibrary.OuterSingleton, Z_Construct_UClass_UMathExtendedBPLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMathExtendedBPLibrary.OuterSingleton;
	}
	template<> MATHEXTENDED_API UClass* StaticClass<UMathExtendedBPLibrary>()
	{
		return UMathExtendedBPLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMathExtendedBPLibrary);
	struct Z_CompiledInDeferFile_FID_MathExtendedPlugin_Plugins_MathExtended_Source_MathExtended_Public_MathExtendedBPLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MathExtendedPlugin_Plugins_MathExtended_Source_MathExtended_Public_MathExtendedBPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMathExtendedBPLibrary, UMathExtendedBPLibrary::StaticClass, TEXT("UMathExtendedBPLibrary"), &Z_Registration_Info_UClass_UMathExtendedBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMathExtendedBPLibrary), 3111416240U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MathExtendedPlugin_Plugins_MathExtended_Source_MathExtended_Public_MathExtendedBPLibrary_h_1814301198(TEXT("/Script/MathExtended"),
		Z_CompiledInDeferFile_FID_MathExtendedPlugin_Plugins_MathExtended_Source_MathExtended_Public_MathExtendedBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MathExtendedPlugin_Plugins_MathExtended_Source_MathExtended_Public_MathExtendedBPLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
