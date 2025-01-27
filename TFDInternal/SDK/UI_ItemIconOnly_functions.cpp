#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_ItemIconOnly

#include "Basic.hpp"

#include "UI_ItemIconOnly_classes.hpp"
#include "UI_ItemIconOnly_parameters.hpp"


namespace SDK
{

// Function UI_ItemIconOnly.UI_ItemIconOnly_C.ShowEquippedIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UM1UIDataItemInfo*                InItemInfo                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UUI_ItemIconOnly_C::ShowEquippedIcon(class UM1UIDataItemInfo* InItemInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ItemIconOnly_C", "ShowEquippedIcon");

	Params::UI_ItemIconOnly_C_ShowEquippedIcon Parms{};

	Parms.InItemInfo = InItemInfo;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_ItemIconOnly.UI_ItemIconOnly_C.SetUIItemIconType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UM1UIDataItemInfo*                UIData_0                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// EM1ItemIconType                         IconType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ItemIconOnly_C::SetUIItemIconType(class UM1UIDataItemInfo* UIData_0, EM1ItemIconType IconType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ItemIconOnly_C", "SetUIItemIconType");

	Params::UI_ItemIconOnly_C_SetUIItemIconType Parms{};

	Parms.UIData_0 = UIData_0;
	Parms.IconType = IconType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_ItemIconOnly.UI_ItemIconOnly_C.SetUIIconStretch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    NewParam                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ItemIconOnly_C::SetUIIconStretch(bool NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ItemIconOnly_C", "SetUIIconStretch");

	Params::UI_ItemIconOnly_C_SetUIIconStretch Parms{};

	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_ItemIconOnly.UI_ItemIconOnly_C.SetUIIconScaleFit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ScaleToFitX                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ItemIconOnly_C::SetUIIconScaleFit(bool ScaleToFitX)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ItemIconOnly_C", "SetUIIconScaleFit");

	Params::UI_ItemIconOnly_C_SetUIIconScaleFit Parms{};

	Parms.ScaleToFitX = ScaleToFitX;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_ItemIconOnly.UI_ItemIconOnly_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ItemIconOnly_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ItemIconOnly_C", "PreConstruct");

	Params::UI_ItemIconOnly_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_ItemIconOnly.UI_ItemIconOnly_C.ExecuteUbergraph_UI_ItemIconOnly
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ItemIconOnly_C::ExecuteUbergraph_UI_ItemIconOnly(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ItemIconOnly_C", "ExecuteUbergraph_UI_ItemIconOnly");

	Params::UI_ItemIconOnly_C_ExecuteUbergraph_UI_ItemIconOnly Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_ItemIconOnly.UI_ItemIconOnly_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_ItemIconOnly_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ItemIconOnly_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

