#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Codex_Tracking_Task

#include "Basic.hpp"

#include "UI_Codex_Tracking_Task_classes.hpp"
#include "UI_Codex_Tracking_Task_parameters.hpp"


namespace SDK
{

// Function UI_Codex_Tracking_Task.UI_Codex_Tracking_Task_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Codex_Tracking_Task_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Codex_Tracking_Task_C", "PreConstruct");

	Params::UI_Codex_Tracking_Task_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Codex_Tracking_Task.UI_Codex_Tracking_Task_C.ExecuteUbergraph_UI_Codex_Tracking_Task
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Codex_Tracking_Task_C::ExecuteUbergraph_UI_Codex_Tracking_Task(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Codex_Tracking_Task_C", "ExecuteUbergraph_UI_Codex_Tracking_Task");

	Params::UI_Codex_Tracking_Task_C_ExecuteUbergraph_UI_Codex_Tracking_Task Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Codex_Tracking_Task.UI_Codex_Tracking_Task_C.BP_widget_playAkEvent
// (BlueprintCallable, BlueprintEvent)

void UUI_Codex_Tracking_Task_C::BP_widget_playAkEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Codex_Tracking_Task_C", "BP_widget_playAkEvent");

	UObject::ProcessEvent(Func, nullptr);
}

}

