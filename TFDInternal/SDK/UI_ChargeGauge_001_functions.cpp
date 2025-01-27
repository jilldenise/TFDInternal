#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_ChargeGauge_001

#include "Basic.hpp"

#include "UI_ChargeGauge_001_classes.hpp"
#include "UI_ChargeGauge_001_parameters.hpp"


namespace SDK
{

// Function UI_ChargeGauge_001.UI_ChargeGauge_001_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ChargeGauge_001_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ChargeGauge_001_C", "PreConstruct");

	Params::UI_ChargeGauge_001_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_ChargeGauge_001.UI_ChargeGauge_001_C.SetGaugeCount
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   GaugeCount                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ChargeGauge_001_C::SetGaugeCount(int32 GaugeCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ChargeGauge_001_C", "SetGaugeCount");

	Params::UI_ChargeGauge_001_C_SetGaugeCount Parms{};

	Parms.GaugeCount = GaugeCount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_ChargeGauge_001.UI_ChargeGauge_001_C.OnChargeLevelIncreased
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   CurrentLevel                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ChargeGauge_001_C::OnChargeLevelIncreased(int32 CurrentLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ChargeGauge_001_C", "OnChargeLevelIncreased");

	Params::UI_ChargeGauge_001_C_OnChargeLevelIncreased Parms{};

	Parms.CurrentLevel = CurrentLevel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_ChargeGauge_001.UI_ChargeGauge_001_C.SetGaugeColor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FM1WeaponChargeGaugeUIColors     GaugeColors                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UUI_ChargeGauge_001_C::SetGaugeColor(const struct FM1WeaponChargeGaugeUIColors& GaugeColors)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ChargeGauge_001_C", "SetGaugeColor");

	Params::UI_ChargeGauge_001_C_SetGaugeColor Parms{};

	Parms.GaugeColors = std::move(GaugeColors);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_ChargeGauge_001.UI_ChargeGauge_001_C.ExecuteUbergraph_UI_ChargeGauge_001
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ChargeGauge_001_C::ExecuteUbergraph_UI_ChargeGauge_001(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ChargeGauge_001_C", "ExecuteUbergraph_UI_ChargeGauge_001");

	Params::UI_ChargeGauge_001_C_ExecuteUbergraph_UI_ChargeGauge_001 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_ChargeGauge_001.UI_ChargeGauge_001_C.OnChargeLevelDecreased
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   CurrentLevel                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ChargeGauge_001_C::OnChargeLevelDecreased(int32 CurrentLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ChargeGauge_001_C", "OnChargeLevelDecreased");

	Params::UI_ChargeGauge_001_C_OnChargeLevelDecreased Parms{};

	Parms.CurrentLevel = CurrentLevel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_ChargeGauge_001.UI_ChargeGauge_001_C.BP_OnInitChargeGauge
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// int32                                   GaugeCount                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FM1WeaponChargeGaugeUIColors     GaugeUIColors                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UUI_ChargeGauge_001_C::BP_OnInitChargeGauge(int32 GaugeCount, const struct FM1WeaponChargeGaugeUIColors& GaugeUIColors)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ChargeGauge_001_C", "BP_OnInitChargeGauge");

	Params::UI_ChargeGauge_001_C_BP_OnInitChargeGauge Parms{};

	Parms.GaugeCount = GaugeCount;
	Parms.GaugeUIColors = std::move(GaugeUIColors);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_ChargeGauge_001.UI_ChargeGauge_001_C.BP_StoppedWeaponCharge
// (Event, Protected, BlueprintEvent)

void UUI_ChargeGauge_001_C::BP_StoppedWeaponCharge()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ChargeGauge_001_C", "BP_StoppedWeaponCharge");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_ChargeGauge_001.UI_ChargeGauge_001_C.BP_ChangedWeaponChargeLevel
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                                   CurrentLevel                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bShowProgress                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ChargeGauge_001_C::BP_ChangedWeaponChargeLevel(int32 CurrentLevel, bool bShowProgress)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ChargeGauge_001_C", "BP_ChangedWeaponChargeLevel");

	Params::UI_ChargeGauge_001_C_BP_ChangedWeaponChargeLevel Parms{};

	Parms.CurrentLevel = CurrentLevel;
	Parms.bShowProgress = bShowProgress;

	UObject::ProcessEvent(Func, &Parms);
}

}

