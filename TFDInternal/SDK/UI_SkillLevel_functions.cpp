#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_SkillLevel

#include "Basic.hpp"

#include "UI_SkillLevel_classes.hpp"
#include "UI_SkillLevel_parameters.hpp"


namespace SDK
{

// Function UI_SkillLevel.UI_SkillLevel_C.SetLevel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InLevel                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_SkillLevel_C::SetLevel(int32 InLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_SkillLevel_C", "SetLevel");

	Params::UI_SkillLevel_C_SetLevel Parms{};

	Parms.InLevel = InLevel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_SkillLevel.UI_SkillLevel_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_SkillLevel_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_SkillLevel_C", "PreConstruct");

	Params::UI_SkillLevel_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_SkillLevel.UI_SkillLevel_C.FontAlign
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UM1TextBlock*                     Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FMargin                          Padding_0                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_SkillLevel_C::FontAlign(class UM1TextBlock* Target, const struct FMargin& Padding_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_SkillLevel_C", "FontAlign");

	Params::UI_SkillLevel_C_FontAlign Parms{};

	Parms.Target = Target;
	Parms.Padding_0 = std::move(Padding_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_SkillLevel.UI_SkillLevel_C.ExecuteUbergraph_UI_SkillLevel
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_SkillLevel_C::ExecuteUbergraph_UI_SkillLevel(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_SkillLevel_C", "ExecuteUbergraph_UI_SkillLevel");

	Params::UI_SkillLevel_C_ExecuteUbergraph_UI_SkillLevel Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

