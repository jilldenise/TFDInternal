#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Rune_Exclusive_Character

#include "Basic.hpp"

#include "UI_Rune_Exclusive_Character_classes.hpp"
#include "UI_Rune_Exclusive_Character_parameters.hpp"


namespace SDK
{

// Function UI_Rune_Exclusive_Character.UI_Rune_Exclusive_Character_C.SetDataImpl
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UM1UIData*                        InData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UUI_Rune_Exclusive_Character_C::SetDataImpl(class UM1UIData* InData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Rune_Exclusive_Character_C", "SetDataImpl");

	Params::UI_Rune_Exclusive_Character_C_SetDataImpl Parms{};

	Parms.InData = InData;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Rune_Exclusive_Character.UI_Rune_Exclusive_Character_C.ExecuteUbergraph_UI_Rune_Exclusive_Character
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Rune_Exclusive_Character_C::ExecuteUbergraph_UI_Rune_Exclusive_Character(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Rune_Exclusive_Character_C", "ExecuteUbergraph_UI_Rune_Exclusive_Character");

	Params::UI_Rune_Exclusive_Character_C_ExecuteUbergraph_UI_Rune_Exclusive_Character Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
