#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Skill_AJaxPassive

#include "Basic.hpp"

#include "Skill_AJaxPassive_classes.hpp"
#include "Skill_AJaxPassive_parameters.hpp"


namespace SDK
{

// Function Skill_AJaxPassive.Skill_AJaxPassive_C.UpdatePassive
// (Public, BlueprintCallable, BlueprintEvent)

void USkill_AJaxPassive_C::UpdatePassive()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Skill_AJaxPassive_C", "UpdatePassive");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Skill_AJaxPassive.Skill_AJaxPassive_C.Update Common Gauge Status Effect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void USkill_AJaxPassive_C::Update_Common_Gauge_Status_Effect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Skill_AJaxPassive_C", "Update Common Gauge Status Effect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Skill_AJaxPassive.Skill_AJaxPassive_C.Stop Decrease Common Gauge
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void USkill_AJaxPassive_C::Stop_Decrease_Common_Gauge()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Skill_AJaxPassive_C", "Stop Decrease Common Gauge");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Skill_AJaxPassive.Skill_AJaxPassive_C.Start Decrease Common Gauge
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void USkill_AJaxPassive_C::Start_Decrease_Common_Gauge()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Skill_AJaxPassive_C", "Start Decrease Common Gauge");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Skill_AJaxPassive.Skill_AJaxPassive_C.OnFunctionalTest
// (Event, Protected, BlueprintEvent)

void USkill_AJaxPassive_C::OnFunctionalTest()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Skill_AJaxPassive_C", "OnFunctionalTest");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Skill_AJaxPassive.Skill_AJaxPassive_C.OnChangedCurrentCommonGauge
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EM1StatType                             StatType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkill_AJaxPassive_C::OnChangedCurrentCommonGauge(EM1StatType StatType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Skill_AJaxPassive_C", "OnChangedCurrentCommonGauge");

	Params::Skill_AJaxPassive_C_OnChangedCurrentCommonGauge Parms{};

	Parms.StatType = StatType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Skill_AJaxPassive.Skill_AJaxPassive_C.OnAbilityEvent_E3491EC841A80F3A2531E5B4CF4A06E6
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FM1AbilityEvent                  Event                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void USkill_AJaxPassive_C::OnAbilityEvent_E3491EC841A80F3A2531E5B4CF4A06E6(const struct FM1AbilityEvent& Event)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Skill_AJaxPassive_C", "OnAbilityEvent_E3491EC841A80F3A2531E5B4CF4A06E6");

	Params::Skill_AJaxPassive_C_OnAbilityEvent_E3491EC841A80F3A2531E5B4CF4A06E6 Parms{};

	Parms.Event = std::move(Event);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Skill_AJaxPassive.Skill_AJaxPassive_C.MakeGameplayTagContainerWithPassiveLevel
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer            Tag                                                    (Parm, OutParm)

void USkill_AJaxPassive_C::MakeGameplayTagContainerWithPassiveLevel(struct FGameplayTagContainer* Tag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Skill_AJaxPassive_C", "MakeGameplayTagContainerWithPassiveLevel");

	Params::Skill_AJaxPassive_C_MakeGameplayTagContainerWithPassiveLevel Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Tag != nullptr)
		*Tag = std::move(Parms.Tag);
}


// Function Skill_AJaxPassive.Skill_AJaxPassive_C.ExecuteUbergraph_Skill_AJaxPassive
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkill_AJaxPassive_C::ExecuteUbergraph_Skill_AJaxPassive(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Skill_AJaxPassive_C", "ExecuteUbergraph_Skill_AJaxPassive");

	Params::Skill_AJaxPassive_C_ExecuteUbergraph_Skill_AJaxPassive Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Skill_AJaxPassive.Skill_AJaxPassive_C.EvaluatePassiveLevel
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   PassiveLevel_0                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkill_AJaxPassive_C::EvaluatePassiveLevel(int32* PassiveLevel_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Skill_AJaxPassive_C", "EvaluatePassiveLevel");

	Params::Skill_AJaxPassive_C_EvaluatePassiveLevel Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (PassiveLevel_0 != nullptr)
		*PassiveLevel_0 = Parms.PassiveLevel_0;
}


// Function Skill_AJaxPassive.Skill_AJaxPassive_C.ClearPrevPassive
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void USkill_AJaxPassive_C::ClearPrevPassive()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Skill_AJaxPassive_C", "ClearPrevPassive");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Skill_AJaxPassive.Skill_AJaxPassive_C.BP_OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bCancelled                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkill_AJaxPassive_C::BP_OnDeactivated(bool bCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Skill_AJaxPassive_C", "BP_OnDeactivated");

	Params::Skill_AJaxPassive_C_BP_OnDeactivated Parms{};

	Parms.bCancelled = bCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Skill_AJaxPassive.Skill_AJaxPassive_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)

void USkill_AJaxPassive_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Skill_AJaxPassive_C", "BP_OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Skill_AJaxPassive.Skill_AJaxPassive_C.ActivateCurPassive
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void USkill_AJaxPassive_C::ActivateCurPassive()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Skill_AJaxPassive_C", "ActivateCurPassive");

	UObject::ProcessEvent(Func, nullptr);
}

}
