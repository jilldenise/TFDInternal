#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MonsterAbilityActorInitializeStats

#include "Basic.hpp"

#include "MonsterAbilityActorInitializeStats_classes.hpp"
#include "MonsterAbilityActorInitializeStats_parameters.hpp"


namespace SDK
{

// Function MonsterAbilityActorInitializeStats.MonsterAbilityActorInitializeStats_C.Execute
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FM1AbilityOpCalcParam            Param                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FM1AbilityOpExecCalcOutput       Output                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UMonsterAbilityActorInitializeStats_C::Execute(const struct FM1AbilityOpCalcParam& Param, struct FM1AbilityOpExecCalcOutput& Output) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MonsterAbilityActorInitializeStats_C", "Execute");

	Params::MonsterAbilityActorInitializeStats_C_Execute Parms{};

	Parms.Param = std::move(Param);
	Parms.Output = std::move(Output);

	UObject::ProcessEvent(Func, &Parms);

	Output = std::move(Parms.Output);
}

}

