#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Mission_VoidBattle_Fail

#include "Basic.hpp"

#include "UI_Mission_VoidBattle_Fail_classes.hpp"
#include "UI_Mission_VoidBattle_Fail_parameters.hpp"


namespace SDK
{

// Function UI_Mission_VoidBattle_Fail.UI_Mission_VoidBattle_Fail_C.SequenceEvent__ENTRYPOINTUI_Mission_VoidBattle_Fail
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_Mission_VoidBattle_Fail_C::SequenceEvent__ENTRYPOINTUI_Mission_VoidBattle_Fail()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Mission_VoidBattle_Fail_C", "SequenceEvent__ENTRYPOINTUI_Mission_VoidBattle_Fail");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Mission_VoidBattle_Fail.UI_Mission_VoidBattle_Fail_C.PlayAnimOpenClose
// (BlueprintCallable, BlueprintEvent)

void UUI_Mission_VoidBattle_Fail_C::PlayAnimOpenClose()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Mission_VoidBattle_Fail_C", "PlayAnimOpenClose");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Mission_VoidBattle_Fail.UI_Mission_VoidBattle_Fail_C.Finished_4AB1BCA24CFA3B30600E85B720EEE308
// (BlueprintCallable, BlueprintEvent)

void UUI_Mission_VoidBattle_Fail_C::Finished_4AB1BCA24CFA3B30600E85B720EEE308()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Mission_VoidBattle_Fail_C", "Finished_4AB1BCA24CFA3B30600E85B720EEE308");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Mission_VoidBattle_Fail.UI_Mission_VoidBattle_Fail_C.ExecuteUbergraph_UI_Mission_VoidBattle_Fail
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Mission_VoidBattle_Fail_C::ExecuteUbergraph_UI_Mission_VoidBattle_Fail(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Mission_VoidBattle_Fail_C", "ExecuteUbergraph_UI_Mission_VoidBattle_Fail");

	Params::UI_Mission_VoidBattle_Fail_C_ExecuteUbergraph_UI_Mission_VoidBattle_Fail Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Mission_VoidBattle_Fail.UI_Mission_VoidBattle_Fail_C.BP_widget_playAkEven
// (BlueprintCallable, BlueprintEvent)

void UUI_Mission_VoidBattle_Fail_C::BP_widget_playAkEven()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Mission_VoidBattle_Fail_C", "BP_widget_playAkEven");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Mission_VoidBattle_Fail.UI_Mission_VoidBattle_Fail_C.GetEndAnimation
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidgetAnimation*                 ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)

class UWidgetAnimation* UUI_Mission_VoidBattle_Fail_C::GetEndAnimation() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Mission_VoidBattle_Fail_C", "GetEndAnimation");

	Params::UI_Mission_VoidBattle_Fail_C_GetEndAnimation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

