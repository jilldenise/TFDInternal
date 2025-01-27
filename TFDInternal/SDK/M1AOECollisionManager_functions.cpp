#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: M1AOECollisionManager

#include "Basic.hpp"

#include "M1AOECollisionManager_classes.hpp"
#include "M1AOECollisionManager_parameters.hpp"


namespace SDK
{

// Function M1AOECollisionManager.M1AOECollisionManager_C.OnPeriodEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UM1AOECollisionManager_C::OnPeriodEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("M1AOECollisionManager_C", "OnPeriodEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function M1AOECollisionManager.M1AOECollisionManager_C.OnPeriod
// (BlueprintCallable, BlueprintEvent)

void UM1AOECollisionManager_C::OnPeriod()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("M1AOECollisionManager_C", "OnPeriod");

	UObject::ProcessEvent(Func, nullptr);
}


// Function M1AOECollisionManager.M1AOECollisionManager_C.Init
// (BlueprintCallable, BlueprintEvent)

void UM1AOECollisionManager_C::Init()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("M1AOECollisionManager_C", "Init");

	UObject::ProcessEvent(Func, nullptr);
}


// Function M1AOECollisionManager.M1AOECollisionManager_C.GetOverlapActors
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class AActor*>                   OverlapActors_0                                        (Parm, OutParm)

void UM1AOECollisionManager_C::GetOverlapActors(TArray<class AActor*>* OverlapActors_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("M1AOECollisionManager_C", "GetOverlapActors");

	Params::M1AOECollisionManager_C_GetOverlapActors Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OverlapActors_0 != nullptr)
		*OverlapActors_0 = std::move(Parms.OverlapActors_0);
}


// Function M1AOECollisionManager.M1AOECollisionManager_C.ExecuteUbergraph_M1AOECollisionManager
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UM1AOECollisionManager_C::ExecuteUbergraph_M1AOECollisionManager(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("M1AOECollisionManager_C", "ExecuteUbergraph_M1AOECollisionManager");

	Params::M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function M1AOECollisionManager.M1AOECollisionManager_C.EndOverlapEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UM1AOECollisionManager_C::EndOverlapEvent(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("M1AOECollisionManager_C", "EndOverlapEvent");

	Params::M1AOECollisionManager_C_EndOverlapEvent Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function M1AOECollisionManager.M1AOECollisionManager_C.BeginOverlapEvent
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void UM1AOECollisionManager_C::BeginOverlapEvent(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("M1AOECollisionManager_C", "BeginOverlapEvent");

	Params::M1AOECollisionManager_C_BeginOverlapEvent Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}

}

