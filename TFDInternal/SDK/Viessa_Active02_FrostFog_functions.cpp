#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Viessa_Active02_FrostFog

#include "Basic.hpp"

#include "Viessa_Active02_FrostFog_classes.hpp"
#include "Viessa_Active02_FrostFog_parameters.hpp"


namespace SDK
{

// Function Viessa_Active02_FrostFog.Viessa_Active02_FrostFog_C.OnEvaluateCondition
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool AViessa_Active02_FrostFog_C::OnEvaluateCondition()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Viessa_Active02_FrostFog_C", "OnEvaluateCondition");

	Params::Viessa_Active02_FrostFog_C_OnEvaluateCondition Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function Viessa_Active02_FrostFog.Viessa_Active02_FrostFog_C.OnBeginOverlap
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           OverlapActor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AViessa_Active02_FrostFog_C::OnBeginOverlap(class AActor* OverlapActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Viessa_Active02_FrostFog_C", "OnBeginOverlap");

	Params::Viessa_Active02_FrostFog_C_OnBeginOverlap Parms{};

	Parms.OverlapActor = OverlapActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Viessa_Active02_FrostFog.Viessa_Active02_FrostFog_C.ExecutePeriodDamage
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           TargetActor_0                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AViessa_Active02_FrostFog_C::ExecutePeriodDamage(class AActor* TargetActor_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Viessa_Active02_FrostFog_C", "ExecutePeriodDamage");

	Params::Viessa_Active02_FrostFog_C_ExecutePeriodDamage Parms{};

	Parms.TargetActor_0 = TargetActor_0;

	UObject::ProcessEvent(Func, &Parms);
}

}
