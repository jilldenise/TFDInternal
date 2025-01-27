#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StatusEffect_Knockdown

#include "Basic.hpp"

#include "StatusEffect_Knockdown_classes.hpp"
#include "StatusEffect_Knockdown_parameters.hpp"


namespace SDK
{

// Function StatusEffect_Knockdown.StatusEffect_Knockdown_C.GetVelocityZ
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                                  VelocityZ_0                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStatusEffect_Knockdown_C::GetVelocityZ(double* VelocityZ_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StatusEffect_Knockdown_C", "GetVelocityZ");

	Params::StatusEffect_Knockdown_C_GetVelocityZ Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (VelocityZ_0 != nullptr)
		*VelocityZ_0 = Parms.VelocityZ_0;
}


// Function StatusEffect_Knockdown.StatusEffect_Knockdown_C.GetVelocityX
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                                  VelocityX_0                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStatusEffect_Knockdown_C::GetVelocityX(double* VelocityX_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StatusEffect_Knockdown_C", "GetVelocityX");

	Params::StatusEffect_Knockdown_C_GetVelocityX Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (VelocityX_0 != nullptr)
		*VelocityX_0 = Parms.VelocityX_0;
}


// Function StatusEffect_Knockdown.StatusEffect_Knockdown_C.GetMoveVectorCurve
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UCurveVector*                     MoveCurve                                              (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UStatusEffect_Knockdown_C::GetMoveVectorCurve(class UCurveVector** MoveCurve)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StatusEffect_Knockdown_C", "GetMoveVectorCurve");

	Params::StatusEffect_Knockdown_C_GetMoveVectorCurve Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (MoveCurve != nullptr)
		*MoveCurve = Parms.MoveCurve;
}


// Function StatusEffect_Knockdown.StatusEffect_Knockdown_C.GetMoveFloatCurve
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UCurveFloat*                      MoveCurve                                              (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UStatusEffect_Knockdown_C::GetMoveFloatCurve(class UCurveFloat** MoveCurve)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StatusEffect_Knockdown_C", "GetMoveFloatCurve");

	Params::StatusEffect_Knockdown_C_GetMoveFloatCurve Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (MoveCurve != nullptr)
		*MoveCurve = Parms.MoveCurve;
}


// Function StatusEffect_Knockdown.StatusEffect_Knockdown_C.CalcAnimHitDirYaw
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                                  Yaw                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStatusEffect_Knockdown_C::CalcAnimHitDirYaw(double* Yaw)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StatusEffect_Knockdown_C", "CalcAnimHitDirYaw");

	Params::StatusEffect_Knockdown_C_CalcAnimHitDirYaw Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Yaw != nullptr)
		*Yaw = Parms.Yaw;
}


// Function StatusEffect_Knockdown.StatusEffect_Knockdown_C.GetMoveDuration
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// double                                  Duration                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStatusEffect_Knockdown_C::GetMoveDuration(double* Duration) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StatusEffect_Knockdown_C", "GetMoveDuration");

	Params::StatusEffect_Knockdown_C_GetMoveDuration Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Duration != nullptr)
		*Duration = Parms.Duration;
}

}

