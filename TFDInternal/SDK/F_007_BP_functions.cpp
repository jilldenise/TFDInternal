#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: F_007_BP

#include "Basic.hpp"

#include "F_007_BP_classes.hpp"
#include "F_007_BP_parameters.hpp"


namespace SDK
{

// Function F_007_BP.F_007_BP_C.OnHeadAnimInstanceChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// class UM1HeadAnimInstance*              HeadAnimInstance_0                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UF_007_BP_C::OnHeadAnimInstanceChanged(class UM1HeadAnimInstance* HeadAnimInstance_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("F_007_BP_C", "OnHeadAnimInstanceChanged");

	Params::F_007_BP_C_OnHeadAnimInstanceChanged Parms{};

	Parms.HeadAnimInstance_0 = HeadAnimInstance_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function F_007_BP.F_007_BP_C.FindRequiredAnimInstances
// (Public, BlueprintCallable, BlueprintEvent)

void UF_007_BP_C::FindRequiredAnimInstances()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("F_007_BP_C", "FindRequiredAnimInstances");

	UObject::ProcessEvent(Func, nullptr);
}


// Function F_007_BP.F_007_BP_C.ExecuteUbergraph_F_007_BP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UF_007_BP_C::ExecuteUbergraph_F_007_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("F_007_BP_C", "ExecuteUbergraph_F_007_BP");

	Params::F_007_BP_C_ExecuteUbergraph_F_007_BP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function F_007_BP.F_007_BP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTimeX                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UF_007_BP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("F_007_BP_C", "BlueprintUpdateAnimation");

	Params::F_007_BP_C_BlueprintUpdateAnimation Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);
}

}
