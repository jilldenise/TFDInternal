#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Game_MonsterInfos

#include "Basic.hpp"

#include "UI_Game_MonsterInfos_classes.hpp"
#include "UI_Game_MonsterInfos_parameters.hpp"


namespace SDK
{

// Function UI_Game_MonsterInfos.UI_Game_MonsterInfos_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Game_MonsterInfos_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Game_MonsterInfos_C", "PreConstruct");

	Params::UI_Game_MonsterInfos_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Game_MonsterInfos.UI_Game_MonsterInfos_C.ExecuteUbergraph_UI_Game_MonsterInfos
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Game_MonsterInfos_C::ExecuteUbergraph_UI_Game_MonsterInfos(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Game_MonsterInfos_C", "ExecuteUbergraph_UI_Game_MonsterInfos");

	Params::UI_Game_MonsterInfos_C_ExecuteUbergraph_UI_Game_MonsterInfos Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Game_MonsterInfos.UI_Game_MonsterInfos_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Game_MonsterInfos_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Game_MonsterInfos_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}
