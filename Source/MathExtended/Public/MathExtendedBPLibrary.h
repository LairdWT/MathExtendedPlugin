// Laird Shingleton, 2022

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "MathExtendedBPLibrary.generated.h"

/*
*	Extended Math Function library.
*	Functions are written inline, pass by reference, and pure function format for optimized performence
*
*	V 1.0 focusing on efficient Interpolation and Quaternion functions in blueprints
*/

UCLASS()
class UMathExtendedBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

public:

	static constexpr long double PiRecip = 0.318309886183790671537767526745028724068919291480;

	UFUNCTION(BlueprintCallable, Blueprintpure, meta = (DisplayName = "Inverse Quaternion", Keywords = "Math", ToolTip = "Returns the inverse of the provided Quaternion. This is a pass by reference operation."), Category = "Math Extended | Quaternion")
		static FORCEINLINE FQuat InverseQuaternion(const FQuat& Quaternion)
	{
		return FQuat(-Quaternion.X, -Quaternion.Y, -Quaternion.Z, Quaternion.W);
	};

	UFUNCTION(BlueprintCallable, Blueprintpure, meta = (DisplayName = "Angle between Unit Quaternions (Error)", Keywords = "Math", ToolTip = "Returns the angle (radians) between 2 quaternions. 0 When equal, 1 when 180 degrees apart"), Category = "Math Extended | Quaternion")
		static FORCEINLINE double QuaternionAngleError(const FQuat& Quaternion1, const FQuat& Quaternion2)
	{
		return (FMath::Abs(FMath::Abs(Quaternion1.X * Quaternion2.X + Quaternion1.Y * Quaternion2.Y + Quaternion1.Z * Quaternion2.Z + Quaternion1.W * Quaternion2.W)) < 0.99999999f) ? FMath::Acos(FMath::Abs(Quaternion1.X * Quaternion2.X + Quaternion1.Y * Quaternion2.Y + Quaternion1.Z * Quaternion2.Z + Quaternion1.W * Quaternion2.W)) * (PiRecip) : 0.0f;
	};

	UFUNCTION(BlueprintCallable, Blueprintpure, meta = (DisplayName = "Angle between Unit Quaternions", Keywords = "Math", ToolTip = "Returns the angle between 2 quaternions."), Category = "Math Extended | Quaternion")
		static FORCEINLINE double QuaternionAngle(const FQuat& Quaternion1, const FQuat& Quaternion2)
	{
		return 2.0f * FMath::Acos(FMath::Abs(((Quaternion1.X * Quaternion2.X + Quaternion1.Y * Quaternion2.Y + Quaternion1.Z * Quaternion2.Z + Quaternion1.W * Quaternion2.W) * (Quaternion1.X * Quaternion2.X + Quaternion1.Y * Quaternion2.Y + Quaternion1.Z * Quaternion2.Z + Quaternion1.W * Quaternion2.W))));
	};

	UFUNCTION(BlueprintCallable, Blueprintpure, meta = (DisplayName = "Unit Quaternion Equals", Keywords = "Math", ToolTip = "Returns true if the Quaternions are equal, given a tolerance value"), Category = "Math Extended | Quaternion")
		static FORCEINLINE bool QuaternionEquals(const FQuat& Quaternion1, const FQuat& Quaternion2, const double Tolerance)
	{
		return (FMath::Abs(Quaternion1.X - Quaternion2.X) <= Tolerance && FMath::Abs(Quaternion1.Y - Quaternion2.Y) <= Tolerance && FMath::Abs(Quaternion1.Z - Quaternion2.Z) <= Tolerance && FMath::Abs(Quaternion1.W - Quaternion2.W) <= Tolerance) || (FMath::Abs(Quaternion1.X + Quaternion2.X) <= Tolerance && FMath::Abs(Quaternion1.Y + Quaternion2.Y) <= Tolerance && FMath::Abs(Quaternion1.Z + Quaternion2.Z) <= Tolerance && FMath::Abs(Quaternion1.W + Quaternion2.W) <= Tolerance);
	};

	UFUNCTION(BlueprintCallable, Blueprintpure, meta = (DisplayName = "Unit Quaternion Spherical Interpolation", Keywords = "Math, SLerp", ToolTip = "Use spherical interpolation to interpolate between 2 UNIT quaternions (does not normalize). Interpolation value must be a value between 0 and 1!"), Category = "Math Extended | Quaternion")
		static FORCEINLINE FQuat QuaternionSphericalInterpolate(const FQuat& Quaternion1, const FQuat& Quaternion2, const double& Interpolation)
	{
		return Interpolation >= 1.0f ? Quaternion2 : (1.0f - Interpolation) * Quaternion1 + Interpolation * Quaternion2;
	};

	UFUNCTION(BlueprintCallable, Blueprintpure, meta = (DisplayName = "Inverse Square Falloff", Keywords = "Math, InverseSquare", ToolTip = "Inverse square falloff based on distance"), Category = "Math Extended | Utility")
		static FORCEINLINE double InverseSquareFalloff(const double& Intensity, const double& Distance)
	{
		return Intensity / (4 * PI * (Distance * Distance));
	};

	UFUNCTION(BlueprintCallable, Blueprintpure, meta = (DisplayName = "Inverse Square Falloff (Vector)", Keywords = "Math, InverseSquare", ToolTip = "Inverse square falloff based on distance between two supplied vectors"), Category = "Math Extended | Utility")
		static FORCEINLINE double InverseSquareFalloffVector(const double& Intensity, const FVector& StartLocation, const FVector& EndLocation)
	{
		return Intensity / (4 * PI * ((sqrt(((EndLocation.X - StartLocation.X) * (EndLocation.X - StartLocation.X)) + ((EndLocation.Y - StartLocation.Y) * (EndLocation.Y - StartLocation.Y)) + ((EndLocation.Z - StartLocation.Z) * (EndLocation.Z - StartLocation.Z)))) * (sqrt(((EndLocation.X - StartLocation.X) * (EndLocation.X - StartLocation.X)) + ((EndLocation.Y - StartLocation.Y) * (EndLocation.Y - StartLocation.Y)) + ((EndLocation.Z - StartLocation.Z) * (EndLocation.Z - StartLocation.Z))))));
	};

	UFUNCTION(BlueprintCallable, Blueprintpure, meta = (DisplayName = "Spiral Expansion over time", Keywords = "Math, Spiral", ToolTip = "Translates a position into a spiral along the X axis, which gets larger over time"), Category = "Math Extended | Utility")
		static FORCEINLINE FVector SpiralExpansion(const double& Time, const FVector& StartLocation)
	{
		return { (StartLocation.X + Time), (StartLocation.Y + (Time * cos(Time))), (StartLocation.Z + Time * (sin(Time))) };
	};

	UFUNCTION(BlueprintCallable, Blueprintpure, meta = (DisplayName = "Linear Interpolate", Keywords = "Math, Linear, INterpolate", ToolTip = "Returns A when amount <= 0 and and B when Amount >= 1. Interploation between A and B occurs for Amount values between 0 and 1."), Category = "Math Extended | Utility")
		static FORCEINLINE double LinearInterpolate(const double& InputA, const double& InputB, const double& Amount)
	{
		return InputA + Amount * (InputB - InputA);
	};

	UFUNCTION(BlueprintCallable, Blueprintpure, meta = (DisplayName = "Linear Interpolate (Vector)", Keywords = "Math, Linear, INterpolate", ToolTip = "Returns A when amount <= 0 and and B when Amount >= 1. Interploation between A and B occurs for Amount values between 0 and 1."), Category = "Math Extended | Utility")
		static FORCEINLINE FVector VectorLinearInterpolate(const FVector& InputA, const FVector& InputB, const FVector& Amount)
	{
		return InputA + Amount * (InputB - InputA);
	};

	UFUNCTION(BlueprintCallable, Blueprintpure, meta = (DisplayName = "Smooth Step", Keywords = "Math, Smooth Step", ToolTip = "Smooth interpolation between values. Clamps between 0 and 1."), Category = "Math Extended | Utility")
		static FORCEINLINE double SmoothStep(const double& Time, const double& Start, const double& End)
	{
		double x = FMath::Max(0, FMath::Min(1, (Time - Start) / (End - Start)));
		return x = (x * x) * (3 - 2 * x);
	};

	UFUNCTION(BlueprintCallable, Blueprintpure, meta = (DisplayName = "Perlin Smooth Step", Keywords = "Math, Perlin Smooth Step", ToolTip = "Smooth interpolation between values using Perlin 2nd Order smooth step. Clamps between 0 and 1."), Category = "Math Extended | Utility")
		static FORCEINLINE double PerlinSmoothStep(const double& Time, const double& StartDelay, const double& Duration)
	{
		double x = FMath::Max(0, FMath::Min(1, (Time - StartDelay) / (Duration - StartDelay)));
		return x * x * x * (x * (x * 6 - 15) + 10);
	};

	UFUNCTION(BlueprintCallable, Blueprintpure, meta = (DisplayName = "Inverse Smooth Step", Keywords = "Math, Smooth Step", ToolTip = "Compensate for the application of smooth step"), Category = "Math Extended | Utility")
		static FORCEINLINE double InverseSmoothStep(const double& Input)
	{
		return 0.5 - FMath::Sin(FMath::Asin(1.0 - 2.0 * Input) / 3.0);
	};

	UFUNCTION(BlueprintCallable, Blueprintpure, meta = (DisplayName = "Vector Smooth Step Interpolation", Keywords = "Math, Smooth Step, Vector, Interpolation", ToolTip = "Per axis control of smooth interpolation between vector values."), Category = "Math Extended | Utility")
		static FORCEINLINE FVector VectorSmoothStep(const double& Time, const FVector& StartDelay, const FVector& Duration, const FVector& StartLocation, const FVector& EndLocation)
	{
		FVector x = FVector::Max({ 0,0,0 }, FVector::Min({ 1, 1, 1 }, (FVector{ Time, Time, Time } - StartDelay) / (Duration - StartDelay)));
		x = (x * x) * (FVector{ 3, 3, 3 } - 2 * x);
		return VectorLinearInterpolate(StartLocation, EndLocation, x);
	};

	UFUNCTION(BlueprintCallable, Blueprintpure, meta = (DisplayName = "Vector Perlin Smooth Step Interpolation", Keywords = "Math, Smooth Step, Vector, Interpolation", ToolTip = "Per axis control of smooth interpolation between vector values using Perlin 2nd Order smooth step."), Category = "Math Extended | Utility")
		static FORCEINLINE FVector VectorPerlinSmoothStep(const double& Time, const FVector& StartDelay, const FVector& Duration, const FVector& StartLocation, const FVector& EndLocation)
	{
		FVector x = FVector::Max({ 0,0,0 }, FVector::Min({ 1, 1, 1 }, (FVector{ Time, Time, Time } - StartDelay) / (Duration - StartDelay)));
		x = x * x * x * (x * (x * 6 - 15) + 10);
		return VectorLinearInterpolate(StartLocation, EndLocation, x);
	};
};