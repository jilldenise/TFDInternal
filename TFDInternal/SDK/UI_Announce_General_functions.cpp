#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Announce_General

#include "Basic.hpp"

#include "UI_Announce_General_classes.hpp"
#include "UI_Announce_General_parameters.hpp"


namespace SDK
{

// Function UI_Announce_General.UI_Announce_General_C.ExecuteUbergraph_UI_Announce_General
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Announce_General_C::ExecuteUbergraph_UI_Announce_General(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Announce_General_C", "ExecuteUbergraph_UI_Announce_General");

	Params::UI_Announce_General_C_ExecuteUbergraph_UI_Announce_General Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Announce_General.UI_Announce_General_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Announce_General_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Announce_General_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

