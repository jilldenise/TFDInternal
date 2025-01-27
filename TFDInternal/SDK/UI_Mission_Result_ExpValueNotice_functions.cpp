#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Mission_Result_ExpValueNotice

#include "Basic.hpp"

#include "UI_Mission_Result_ExpValueNotice_classes.hpp"
#include "UI_Mission_Result_ExpValueNotice_parameters.hpp"


namespace SDK
{

// Function UI_Mission_Result_ExpValueNotice.UI_Mission_Result_ExpValueNotice_C.SetTextColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Index_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Mission_Result_ExpValueNotice_C::SetTextColor(int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Mission_Result_ExpValueNotice_C", "SetTextColor");

	Params::UI_Mission_Result_ExpValueNotice_C_SetTextColor Parms{};

	Parms.Index_0 = Index_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Mission_Result_ExpValueNotice.UI_Mission_Result_ExpValueNotice_C.SetExpText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EM1UIMissionResultExpType               InType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                                   InExp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EM1UIMissionResultExpOwnerType          InOwnerType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Mission_Result_ExpValueNotice_C::SetExpText(EM1UIMissionResultExpType InType, int64 InExp, EM1UIMissionResultExpOwnerType InOwnerType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Mission_Result_ExpValueNotice_C", "SetExpText");

	Params::UI_Mission_Result_ExpValueNotice_C_SetExpText Parms{};

	Parms.InType = InType;
	Parms.InExp = InExp;
	Parms.InOwnerType = InOwnerType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Mission_Result_ExpValueNotice.UI_Mission_Result_ExpValueNotice_C.ExecuteUbergraph_UI_Mission_Result_ExpValueNotice
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Mission_Result_ExpValueNotice_C::ExecuteUbergraph_UI_Mission_Result_ExpValueNotice(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Mission_Result_ExpValueNotice_C", "ExecuteUbergraph_UI_Mission_Result_ExpValueNotice");

	Params::UI_Mission_Result_ExpValueNotice_C_ExecuteUbergraph_UI_Mission_Result_ExpValueNotice Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Mission_Result_ExpValueNotice.UI_Mission_Result_ExpValueNotice_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Mission_Result_ExpValueNotice_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Mission_Result_ExpValueNotice_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

