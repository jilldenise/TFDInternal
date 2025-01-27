#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CalcPerkKingsGuardLanceDamage

#include "Basic.hpp"

#include "CalcPerkKingsGuardLanceDamage_classes.hpp"
#include "CalcPerkKingsGuardLanceDamage_parameters.hpp"


namespace SDK
{

// Function CalcPerkKingsGuardLanceDamage.CalcPerkKingsGuardLanceDamage_C.SetAdditionalDamageInfo
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FM1AbilityOpCalcParam            Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FM1CalcDamageInfo                DamageInfo                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UCalcPerkKingsGuardLanceDamage_C::SetAdditionalDamageInfo(struct FM1AbilityOpCalcParam& Param, struct FM1CalcDamageInfo& DamageInfo) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CalcPerkKingsGuardLanceDamage_C", "SetAdditionalDamageInfo");

	Params::CalcPerkKingsGuardLanceDamage_C_SetAdditionalDamageInfo Parms{};

	Parms.Param = std::move(Param);
	Parms.DamageInfo = std::move(DamageInfo);

	UObject::ProcessEvent(Func, &Parms);

	Param = std::move(Parms.Param);
	DamageInfo = std::move(Parms.DamageInfo);
}


// Function CalcPerkKingsGuardLanceDamage.CalcPerkKingsGuardLanceDamage_C.DoCalculation
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FM1AbilityOpCalcParam            Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FM1CalcDamageInfo                DamageInfo                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UCalcPerkKingsGuardLanceDamage_C::DoCalculation(struct FM1AbilityOpCalcParam& Param, struct FM1CalcDamageInfo& DamageInfo) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CalcPerkKingsGuardLanceDamage_C", "DoCalculation");

	Params::CalcPerkKingsGuardLanceDamage_C_DoCalculation Parms{};

	Parms.Param = std::move(Param);
	Parms.DamageInfo = std::move(DamageInfo);

	UObject::ProcessEvent(Func, &Parms);

	Param = std::move(Parms.Param);
	DamageInfo = std::move(Parms.DamageInfo);
}

}

