#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_SkillIconCustom_AJaxActive2

#include "Basic.hpp"

#include "UI_SkillIconCustom_AJaxActive2_classes.hpp"
#include "UI_SkillIconCustom_AJaxActive2_parameters.hpp"


namespace SDK
{

// Function UI_SkillIconCustom_AJaxActive2.UI_SkillIconCustom_AJaxActive2_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_SkillIconCustom_AJaxActive2_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_SkillIconCustom_AJaxActive2_C", "Tick");

	Params::UI_SkillIconCustom_AJaxActive2_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_SkillIconCustom_AJaxActive2.UI_SkillIconCustom_AJaxActive2_C.ExecuteUbergraph_UI_SkillIconCustom_AJaxActive2
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_SkillIconCustom_AJaxActive2_C::ExecuteUbergraph_UI_SkillIconCustom_AJaxActive2(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_SkillIconCustom_AJaxActive2_C", "ExecuteUbergraph_UI_SkillIconCustom_AJaxActive2");

	Params::UI_SkillIconCustom_AJaxActive2_C_ExecuteUbergraph_UI_SkillIconCustom_AJaxActive2 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

