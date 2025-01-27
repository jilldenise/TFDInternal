#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_GameTop_MasteryRank_LevelUp_Possible

#include "Basic.hpp"

#include "UI_GameTop_MasteryRank_LevelUp_Possible_classes.hpp"
#include "UI_GameTop_MasteryRank_LevelUp_Possible_parameters.hpp"


namespace SDK
{

// Function UI_GameTop_MasteryRank_LevelUp_Possible.UI_GameTop_MasteryRank_LevelUp_Possible_C.SequenceEvent__ENTRYPOINTUI_GameTop_MasteryRank_LevelUp_Possible
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_GameTop_MasteryRank_LevelUp_Possible_C::SequenceEvent__ENTRYPOINTUI_GameTop_MasteryRank_LevelUp_Possible()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameTop_MasteryRank_LevelUp_Possible_C", "SequenceEvent__ENTRYPOINTUI_GameTop_MasteryRank_LevelUp_Possible");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_GameTop_MasteryRank_LevelUp_Possible.UI_GameTop_MasteryRank_LevelUp_Possible_C.OnEventWidgetOpen
// (Event, Protected, BlueprintEvent)
// Parameters:
// EM1WidgetAnimDirection                  InDirection                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_GameTop_MasteryRank_LevelUp_Possible_C::OnEventWidgetOpen(EM1WidgetAnimDirection InDirection)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameTop_MasteryRank_LevelUp_Possible_C", "OnEventWidgetOpen");

	Params::UI_GameTop_MasteryRank_LevelUp_Possible_C_OnEventWidgetOpen Parms{};

	Parms.InDirection = InDirection;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_GameTop_MasteryRank_LevelUp_Possible.UI_GameTop_MasteryRank_LevelUp_Possible_C.GetEndAnimation
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)

class UWidgetAnimation* UUI_GameTop_MasteryRank_LevelUp_Possible_C::GetEndAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameTop_MasteryRank_LevelUp_Possible_C", "GetEndAnimation");

	Params::UI_GameTop_MasteryRank_LevelUp_Possible_C_GetEndAnimation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UI_GameTop_MasteryRank_LevelUp_Possible.UI_GameTop_MasteryRank_LevelUp_Possible_C.ExecuteUbergraph_UI_GameTop_MasteryRank_LevelUp_Possible
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_GameTop_MasteryRank_LevelUp_Possible_C::ExecuteUbergraph_UI_GameTop_MasteryRank_LevelUp_Possible(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameTop_MasteryRank_LevelUp_Possible_C", "ExecuteUbergraph_UI_GameTop_MasteryRank_LevelUp_Possible");

	Params::UI_GameTop_MasteryRank_LevelUp_Possible_C_ExecuteUbergraph_UI_GameTop_MasteryRank_LevelUp_Possible Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_GameTop_MasteryRank_LevelUp_Possible.UI_GameTop_MasteryRank_LevelUp_Possible_C.BP_widget_playAkEvent
// (BlueprintCallable, BlueprintEvent)

void UUI_GameTop_MasteryRank_LevelUp_Possible_C::BP_widget_playAkEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameTop_MasteryRank_LevelUp_Possible_C", "BP_widget_playAkEvent");

	UObject::ProcessEvent(Func, nullptr);
}

}

