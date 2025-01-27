#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CalcPerkDamageRatioWithoutHitStop

#include "Basic.hpp"

#include "CalcPerkDamageRatioWithoutHitStop_classes.hpp"
#include "CalcPerkDamageRatioWithoutHitStop_parameters.hpp"


namespace SDK
{

// Function CalcPerkDamageRatioWithoutHitStop.CalcPerkDamageRatioWithoutHitStop_C.SetAdditionalDamageInfo
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FM1AbilityOpCalcParam            Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FM1CalcDamageInfo                DamageInfo                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UCalcPerkDamageRatioWithoutHitStop_C::SetAdditionalDamageInfo(struct FM1AbilityOpCalcParam& Param, struct FM1CalcDamageInfo& DamageInfo) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CalcPerkDamageRatioWithoutHitStop_C", "SetAdditionalDamageInfo");

	Params::CalcPerkDamageRatioWithoutHitStop_C_SetAdditionalDamageInfo Parms{};

	Parms.Param = std::move(Param);
	Parms.DamageInfo = std::move(DamageInfo);

	UObject::ProcessEvent(Func, &Parms);

	Param = std::move(Parms.Param);
	DamageInfo = std::move(Parms.DamageInfo);
}

}

