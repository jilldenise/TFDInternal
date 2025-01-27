#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_CrosshairLayerBase

#include "Basic.hpp"

#include "WB_CrosshairLayerBase_classes.hpp"
#include "WB_CrosshairLayerBase_parameters.hpp"


namespace SDK
{

// Function WB_CrosshairLayerBase.WB_CrosshairLayerBase_C.UpdateRender
// (BlueprintCallable, BlueprintEvent)

void UWB_CrosshairLayerBase_C::UpdateRender()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CrosshairLayerBase_C", "UpdateRender");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_CrosshairLayerBase.WB_CrosshairLayerBase_C.updateMaterialParameters
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_CrosshairLayerBase_C::UpdateMaterialParameters()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CrosshairLayerBase_C", "updateMaterialParameters");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_CrosshairLayerBase.WB_CrosshairLayerBase_C.updateCanvasPanelSlot
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_CrosshairLayerBase_C::UpdateCanvasPanelSlot()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CrosshairLayerBase_C", "updateCanvasPanelSlot");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_CrosshairLayerBase.WB_CrosshairLayerBase_C.updateAutoRotation
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_CrosshairLayerBase_C::UpdateAutoRotation(double DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CrosshairLayerBase_C", "updateAutoRotation");

	Params::WB_CrosshairLayerBase_C_UpdateAutoRotation Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_CrosshairLayerBase.WB_CrosshairLayerBase_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_CrosshairLayerBase_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CrosshairLayerBase_C", "Tick");

	Params::WB_CrosshairLayerBase_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_CrosshairLayerBase.WB_CrosshairLayerBase_C.SetSpread
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Spread                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_CrosshairLayerBase_C::SetSpread(double Spread)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CrosshairLayerBase_C", "SetSpread");

	Params::WB_CrosshairLayerBase_C_SetSpread Parms{};

	Parms.Spread = Spread;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_CrosshairLayerBase.WB_CrosshairLayerBase_C.Render
// (BlueprintCallable, BlueprintEvent)

void UWB_CrosshairLayerBase_C::Render()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CrosshairLayerBase_C", "Render");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_CrosshairLayerBase.WB_CrosshairLayerBase_C.PreRender
// (BlueprintCallable, BlueprintEvent)

void UWB_CrosshairLayerBase_C::PreRender()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CrosshairLayerBase_C", "PreRender");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_CrosshairLayerBase.WB_CrosshairLayerBase_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_CrosshairLayerBase_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CrosshairLayerBase_C", "PreConstruct");

	Params::WB_CrosshairLayerBase_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_CrosshairLayerBase.WB_CrosshairLayerBase_C.optimizeMaterialSizeAndPosition
// (Protected, BlueprintCallable, BlueprintEvent)

void UWB_CrosshairLayerBase_C::OptimizeMaterialSizeAndPosition()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CrosshairLayerBase_C", "optimizeMaterialSizeAndPosition");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_CrosshairLayerBase.WB_CrosshairLayerBase_C.initializeEditableVariables
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_CrosshairLayerBase_C::InitializeEditableVariables()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CrosshairLayerBase_C", "initializeEditableVariables");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_CrosshairLayerBase.WB_CrosshairLayerBase_C.Initialize
// (BlueprintCallable, BlueprintEvent)

void UWB_CrosshairLayerBase_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CrosshairLayerBase_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_CrosshairLayerBase.WB_CrosshairLayerBase_C.Idle
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_CrosshairLayerBase_C::Idle(double DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CrosshairLayerBase_C", "Idle");

	Params::WB_CrosshairLayerBase_C_Idle Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_CrosshairLayerBase.WB_CrosshairLayerBase_C.getWeaponRecoilResponse (pixels)
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                                  Recoil                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_CrosshairLayerBase_C::GetWeaponRecoilResponse__pixels_(double* Recoil)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CrosshairLayerBase_C", "getWeaponRecoilResponse (pixels)");

	Params::WB_CrosshairLayerBase_C_GetWeaponRecoilResponse__pixels_ Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Recoil != nullptr)
		*Recoil = Parms.Recoil;
}


// Function WB_CrosshairLayerBase.WB_CrosshairLayerBase_C.GetSafeViewportSize
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D                        ViewportSize_0                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_CrosshairLayerBase_C::GetSafeViewportSize(struct FVector2D* ViewportSize_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CrosshairLayerBase_C", "GetSafeViewportSize");

	Params::WB_CrosshairLayerBase_C_GetSafeViewportSize Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ViewportSize_0 != nullptr)
		*ViewportSize_0 = std::move(Parms.ViewportSize_0);
}


// Function WB_CrosshairLayerBase.WB_CrosshairLayerBase_C.GetMaterial
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UMaterialInterface*               Material                                               (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWB_CrosshairLayerBase_C::GetMaterial(class UMaterialInterface** Material)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CrosshairLayerBase_C", "GetMaterial");

	Params::WB_CrosshairLayerBase_C_GetMaterial Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Material != nullptr)
		*Material = Parms.Material;
}


// Function WB_CrosshairLayerBase.WB_CrosshairLayerBase_C.getImagePlane
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UImage*                           Image                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWB_CrosshairLayerBase_C::GetImagePlane(class UImage** Image)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CrosshairLayerBase_C", "getImagePlane");

	Params::WB_CrosshairLayerBase_C_GetImagePlane Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Image != nullptr)
		*Image = Parms.Image;
}


// Function WB_CrosshairLayerBase.WB_CrosshairLayerBase_C.ExecuteUbergraph_WB_CrosshairLayerBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_CrosshairLayerBase_C::ExecuteUbergraph_WB_CrosshairLayerBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CrosshairLayerBase_C", "ExecuteUbergraph_WB_CrosshairLayerBase");

	Params::WB_CrosshairLayerBase_C_ExecuteUbergraph_WB_CrosshairLayerBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_CrosshairLayerBase.WB_CrosshairLayerBase_C.computeRenderingInfo
// (Private, BlueprintCallable, BlueprintEvent)

void UWB_CrosshairLayerBase_C::ComputeRenderingInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CrosshairLayerBase_C", "computeRenderingInfo");

	UObject::ProcessEvent(Func, nullptr);
}

}

