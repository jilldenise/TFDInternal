#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Skill_LepicPowerstream

#include "Basic.hpp"

#include "Skill_LepicPowerstream_classes.hpp"
#include "Skill_LepicPowerstream_parameters.hpp"


namespace SDK
{

// Function Skill_LepicPowerstream.Skill_LepicPowerstream_C.OnFunctionalTest
// (Event, Protected, BlueprintEvent)

void USkill_LepicPowerstream_C::OnFunctionalTest()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Skill_LepicPowerstream_C", "OnFunctionalTest");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Skill_LepicPowerstream.Skill_LepicPowerstream_C.OnEventReceived_A63EE6B44E2D6816D6A6938D6A5D15CC
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FM1AbilityEvent                  Event                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void USkill_LepicPowerstream_C::OnEventReceived_A63EE6B44E2D6816D6A6938D6A5D15CC(const struct FM1AbilityEvent& Event)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Skill_LepicPowerstream_C", "OnEventReceived_A63EE6B44E2D6816D6A6938D6A5D15CC");

	Params::Skill_LepicPowerstream_C_OnEventReceived_A63EE6B44E2D6816D6A6938D6A5D15CC Parms{};

	Parms.Event = std::move(Event);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Skill_LepicPowerstream.Skill_LepicPowerstream_C.OnCompleted_A63EE6B44E2D6816D6A6938D6A5D15CC
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FM1AbilityEvent                  Event                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void USkill_LepicPowerstream_C::OnCompleted_A63EE6B44E2D6816D6A6938D6A5D15CC(const struct FM1AbilityEvent& Event)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Skill_LepicPowerstream_C", "OnCompleted_A63EE6B44E2D6816D6A6938D6A5D15CC");

	Params::Skill_LepicPowerstream_C_OnCompleted_A63EE6B44E2D6816D6A6938D6A5D15CC Parms{};

	Parms.Event = std::move(Event);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Skill_LepicPowerstream.Skill_LepicPowerstream_C.OnBlendOut_A63EE6B44E2D6816D6A6938D6A5D15CC
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FM1AbilityEvent                  Event                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void USkill_LepicPowerstream_C::OnBlendOut_A63EE6B44E2D6816D6A6938D6A5D15CC(const struct FM1AbilityEvent& Event)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Skill_LepicPowerstream_C", "OnBlendOut_A63EE6B44E2D6816D6A6938D6A5D15CC");

	Params::Skill_LepicPowerstream_C_OnBlendOut_A63EE6B44E2D6816D6A6938D6A5D15CC Parms{};

	Parms.Event = std::move(Event);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Skill_LepicPowerstream.Skill_LepicPowerstream_C.ExecuteUbergraph_Skill_LepicPowerstream
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkill_LepicPowerstream_C::ExecuteUbergraph_Skill_LepicPowerstream(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Skill_LepicPowerstream_C", "ExecuteUbergraph_Skill_LepicPowerstream");

	Params::Skill_LepicPowerstream_C_ExecuteUbergraph_Skill_LepicPowerstream Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Skill_LepicPowerstream.Skill_LepicPowerstream_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)

void USkill_LepicPowerstream_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Skill_LepicPowerstream_C", "BP_OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}

}

