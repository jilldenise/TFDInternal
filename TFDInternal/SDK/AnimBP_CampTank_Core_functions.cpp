#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimBP_CampTank_Core

#include "Basic.hpp"

#include "AnimBP_CampTank_Core_classes.hpp"
#include "AnimBP_CampTank_Core_parameters.hpp"


namespace SDK
{

// Function AnimBP_CampTank_Core.AnimBP_CampTank_Core_C.ExecuteUbergraph_AnimBP_CampTank_Core
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAnimBP_CampTank_Core_C::ExecuteUbergraph_AnimBP_CampTank_Core(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimBP_CampTank_Core_C", "ExecuteUbergraph_AnimBP_CampTank_Core");

	Params::AnimBP_CampTank_Core_C_ExecuteUbergraph_AnimBP_CampTank_Core Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AnimBP_CampTank_Core.AnimBP_CampTank_Core_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_CampTank_Core_AnimGraphNode_TransitionResult_DE5B36CD41F91FA7AEB52B87927BDEF6
// (BlueprintEvent)

void UAnimBP_CampTank_Core_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_CampTank_Core_AnimGraphNode_TransitionResult_DE5B36CD41F91FA7AEB52B87927BDEF6()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimBP_CampTank_Core_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_CampTank_Core_AnimGraphNode_TransitionResult_DE5B36CD41F91FA7AEB52B87927BDEF6");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AnimBP_CampTank_Core.AnimBP_CampTank_Core_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_CampTank_Core_AnimGraphNode_TransitionResult_848BFFA94F362F73D724B9928EB23D4D
// (BlueprintEvent)

void UAnimBP_CampTank_Core_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_CampTank_Core_AnimGraphNode_TransitionResult_848BFFA94F362F73D724B9928EB23D4D()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimBP_CampTank_Core_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_CampTank_Core_AnimGraphNode_TransitionResult_848BFFA94F362F73D724B9928EB23D4D");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AnimBP_CampTank_Core.AnimBP_CampTank_Core_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_CampTank_Core_AnimGraphNode_TransitionResult_3EABCE9C49B62F3B6901949A20C1C540
// (BlueprintEvent)

void UAnimBP_CampTank_Core_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_CampTank_Core_AnimGraphNode_TransitionResult_3EABCE9C49B62F3B6901949A20C1C540()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimBP_CampTank_Core_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_CampTank_Core_AnimGraphNode_TransitionResult_3EABCE9C49B62F3B6901949A20C1C540");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AnimBP_CampTank_Core.AnimBP_CampTank_Core_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UAnimBP_CampTank_Core_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimBP_CampTank_Core_C", "AnimGraph");

	Params::AnimBP_CampTank_Core_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}

}
