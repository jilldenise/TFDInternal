#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_KeyButton_Symbol

#include "Basic.hpp"

#include "UI_KeyButton_Symbol_classes.hpp"
#include "UI_KeyButton_Symbol_parameters.hpp"


namespace SDK
{

// Function UI_KeyButton_Symbol.UI_KeyButton_Symbol_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_KeyButton_Symbol_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_KeyButton_Symbol_C", "PreConstruct");

	Params::UI_KeyButton_Symbol_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_KeyButton_Symbol.UI_KeyButton_Symbol_C.ExecuteUbergraph_UI_KeyButton_Symbol
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_KeyButton_Symbol_C::ExecuteUbergraph_UI_KeyButton_Symbol(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_KeyButton_Symbol_C", "ExecuteUbergraph_UI_KeyButton_Symbol");

	Params::UI_KeyButton_Symbol_C_ExecuteUbergraph_UI_KeyButton_Symbol Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_KeyButton_Symbol.UI_KeyButton_Symbol_C.BP_ChangeDimmedUI
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    InDimmed                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_KeyButton_Symbol_C::BP_ChangeDimmedUI(const bool InDimmed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_KeyButton_Symbol_C", "BP_ChangeDimmedUI");

	Params::UI_KeyButton_Symbol_C_BP_ChangeDimmedUI Parms{};

	Parms.InDimmed = InDimmed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_KeyButton_Symbol.UI_KeyButton_Symbol_C.BP_ChangeButtonUI
// (Event, Public, BlueprintEvent)
// Parameters:
// EM1ButtonUIType                         InType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_KeyButton_Symbol_C::BP_ChangeButtonUI(EM1ButtonUIType InType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_KeyButton_Symbol_C", "BP_ChangeButtonUI");

	Params::UI_KeyButton_Symbol_C_BP_ChangeButtonUI Parms{};

	Parms.InType = InType;

	UObject::ProcessEvent(Func, &Parms);
}

}
