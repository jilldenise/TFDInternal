#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Ability_HitStop

#include "Basic.hpp"

#include "Ability_HitStop_classes.hpp"
#include "Ability_HitStop_parameters.hpp"


namespace SDK
{

// Function Ability_HitStop.Ability_HitStop_C.UpdateHitStopPoint
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FM1ScaledInteger                 GainedPoint                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UAbility_HitStop_C::UpdateHitStopPoint(const struct FM1ScaledInteger& GainedPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ability_HitStop_C", "UpdateHitStopPoint");

	Params::Ability_HitStop_C_UpdateHitStopPoint Parms{};

	Parms.GainedPoint = std::move(GainedPoint);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Ability_HitStop.Ability_HitStop_C.UpdateHitStopPartsToPlay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             InBoneName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbility_HitStop_C::UpdateHitStopPartsToPlay(class FName InBoneName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ability_HitStop_C", "UpdateHitStopPartsToPlay");

	Params::Ability_HitStop_C_UpdateHitStopPartsToPlay Parms{};

	Parms.InBoneName = InBoneName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Ability_HitStop.Ability_HitStop_C.OnRep_bHitStopTrigger
// (BlueprintCallable, BlueprintEvent)

void UAbility_HitStop_C::OnRep_bHitStopTrigger()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ability_HitStop_C", "OnRep_bHitStopTrigger");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Ability_HitStop.Ability_HitStop_C.OnEvent_57AE72CE451681F520FA2B905A55DD98
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FM1CalcDamageInfo                DamageInfo                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UAbility_HitStop_C::OnEvent_57AE72CE451681F520FA2B905A55DD98(const struct FM1CalcDamageInfo& DamageInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ability_HitStop_C", "OnEvent_57AE72CE451681F520FA2B905A55DD98");

	Params::Ability_HitStop_C_OnEvent_57AE72CE451681F520FA2B905A55DD98 Parms{};

	Parms.DamageInfo = std::move(DamageInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Ability_HitStop.Ability_HitStop_C.FindConfigIndexByPartsName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                             InPartsName                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ConfigIndex                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbility_HitStop_C::FindConfigIndexByPartsName(class FName InPartsName, int32* ConfigIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ability_HitStop_C", "FindConfigIndexByPartsName");

	Params::Ability_HitStop_C_FindConfigIndexByPartsName Parms{};

	Parms.InPartsName = InPartsName;

	UObject::ProcessEvent(Func, &Parms);

	if (ConfigIndex != nullptr)
		*ConfigIndex = Parms.ConfigIndex;
}


// Function Ability_HitStop.Ability_HitStop_C.FindConfigDataByBoneName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                             InBoneName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FM1NormalMonsterHitReactionData  FoundData                                              (Parm, OutParm)

void UAbility_HitStop_C::FindConfigDataByBoneName(class FName InBoneName, struct FM1NormalMonsterHitReactionData* FoundData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ability_HitStop_C", "FindConfigDataByBoneName");

	Params::Ability_HitStop_C_FindConfigDataByBoneName Parms{};

	Parms.InBoneName = InBoneName;

	UObject::ProcessEvent(Func, &Parms);

	if (FoundData != nullptr)
		*FoundData = std::move(Parms.FoundData);
}


// Function Ability_HitStop.Ability_HitStop_C.ExecuteUbergraph_Ability_HitStop
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbility_HitStop_C::ExecuteUbergraph_Ability_HitStop(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ability_HitStop_C", "ExecuteUbergraph_Ability_HitStop");

	Params::Ability_HitStop_C_ExecuteUbergraph_Ability_HitStop Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Ability_HitStop.Ability_HitStop_C.CanApplyHitStop
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    CanApply                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbility_HitStop_C::CanApplyHitStop(bool* CanApply)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ability_HitStop_C", "CanApplyHitStop");

	Params::Ability_HitStop_C_CanApplyHitStop Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (CanApply != nullptr)
		*CanApply = Parms.CanApply;
}


// Function Ability_HitStop.Ability_HitStop_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_HitStop_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ability_HitStop_C", "BP_OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Ability_HitStop.Ability_HitStop_C.AbilityEvent_Damage
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FM1CalcDamageInfo                DamageInfo                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UAbility_HitStop_C::AbilityEvent_Damage(const struct FM1CalcDamageInfo& DamageInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ability_HitStop_C", "AbilityEvent_Damage");

	Params::Ability_HitStop_C_AbilityEvent_Damage Parms{};

	Parms.DamageInfo = std::move(DamageInfo);

	UObject::ProcessEvent(Func, &Parms);
}

}

