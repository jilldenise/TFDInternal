#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EnzoRune03Value

#include "Basic.hpp"

#include "EnzoRune03Value_classes.hpp"
#include "EnzoRune03Value_parameters.hpp"


namespace SDK
{

// Function EnzoRune03Value.EnzoRune03Value_C.CalculateValue
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FM1AbilityOpCalcParam            Param                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FM1ScaledInteger                 ReturnValue                                            (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)

struct FM1ScaledInteger UEnzoRune03Value_C::CalculateValue(const struct FM1AbilityOpCalcParam& Param) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnzoRune03Value_C", "CalculateValue");

	Params::EnzoRune03Value_C_CalculateValue Parms{};

	Parms.Param = std::move(Param);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
