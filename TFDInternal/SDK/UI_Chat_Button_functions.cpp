#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Chat_Button

#include "Basic.hpp"

#include "UI_Chat_Button_classes.hpp"
#include "UI_Chat_Button_parameters.hpp"


namespace SDK
{

// Function UI_Chat_Button.UI_Chat_Button_C.SetFontAlign
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UM1TextBlock*                     Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// EHorizontalAlignment                    HAlignment                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Chat_Button_C::SetFontAlign(class UM1TextBlock* Target, EHorizontalAlignment HAlignment)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Chat_Button_C", "SetFontAlign");

	Params::UI_Chat_Button_C_SetFontAlign Parms{};

	Parms.Target = Target;
	Parms.HAlignment = HAlignment;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Chat_Button.UI_Chat_Button_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Chat_Button_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Chat_Button_C", "PreConstruct");

	Params::UI_Chat_Button_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Chat_Button.UI_Chat_Button_C.ExecuteUbergraph_UI_Chat_Button
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Chat_Button_C::ExecuteUbergraph_UI_Chat_Button(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Chat_Button_C", "ExecuteUbergraph_UI_Chat_Button");

	Params::UI_Chat_Button_C_ExecuteUbergraph_UI_Chat_Button Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Chat_Button.UI_Chat_Button_C.EventShowNewIcon_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsShow                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Chat_Button_C::EventShowNewIcon_Event(bool bIsShow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Chat_Button_C", "EventShowNewIcon_Event");

	Params::UI_Chat_Button_C_EventShowNewIcon_Event Parms{};

	Parms.bIsShow = bIsShow;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Chat_Button.UI_Chat_Button_C.EventShowNewIcon__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_Chat_Button_C::EventShowNewIcon__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Chat_Button_C", "EventShowNewIcon__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Chat_Button.UI_Chat_Button_C.BP_Selected
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    InSelected                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Chat_Button_C::BP_Selected(bool InSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Chat_Button_C", "BP_Selected");

	Params::UI_Chat_Button_C_BP_Selected Parms{};

	Parms.InSelected = InSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Chat_Button.UI_Chat_Button_C.BP_ChangeButtonUI
// (Event, Public, BlueprintEvent)
// Parameters:
// EM1ButtonUIType                         InType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Chat_Button_C::BP_ChangeButtonUI(EM1ButtonUIType InType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Chat_Button_C", "BP_ChangeButtonUI");

	Params::UI_Chat_Button_C_BP_ChangeButtonUI Parms{};

	Parms.InType = InType;

	UObject::ProcessEvent(Func, &Parms);
}

}
