#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CalcHaileyUltraColdDamage

#include "Basic.hpp"

#include "CalcHaileyUltraColdDamage_classes.hpp"
#include "CalcHaileyUltraColdDamage_parameters.hpp"


namespace SDK
{

// Function CalcHaileyUltraColdDamage.CalcHaileyUltraColdDamage_C.DoCalculation
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FM1AbilityOpCalcParam            Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FM1CalcDamageInfo                DamageInfo                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UCalcHaileyUltraColdDamage_C::DoCalculation(struct FM1AbilityOpCalcParam& Param, struct FM1CalcDamageInfo& DamageInfo) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CalcHaileyUltraColdDamage_C", "DoCalculation");

	Params::CalcHaileyUltraColdDamage_C_DoCalculation Parms{};

	Parms.Param = std::move(Param);
	Parms.DamageInfo = std::move(DamageInfo);

	UObject::ProcessEvent(Func, &Parms);

	Param = std::move(Parms.Param);
	DamageInfo = std::move(Parms.DamageInfo);
}

}
