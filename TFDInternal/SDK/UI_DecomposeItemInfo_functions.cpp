#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_DecomposeItemInfo

#include "Basic.hpp"

#include "UI_DecomposeItemInfo_classes.hpp"
#include "UI_DecomposeItemInfo_parameters.hpp"


namespace SDK
{

// Function UI_DecomposeItemInfo.UI_DecomposeItemInfo_C.ExecuteUbergraph_UI_DecomposeItemInfo
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_DecomposeItemInfo_C::ExecuteUbergraph_UI_DecomposeItemInfo(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_DecomposeItemInfo_C", "ExecuteUbergraph_UI_DecomposeItemInfo");

	Params::UI_DecomposeItemInfo_C_ExecuteUbergraph_UI_DecomposeItemInfo Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_DecomposeItemInfo.UI_DecomposeItemInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_DecomposeItemInfo_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_DecomposeItemInfo_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}
