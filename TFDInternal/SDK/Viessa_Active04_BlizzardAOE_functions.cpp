#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Viessa_Active04_BlizzardAOE

#include "Basic.hpp"

#include "Viessa_Active04_BlizzardAOE_classes.hpp"
#include "Viessa_Active04_BlizzardAOE_parameters.hpp"


namespace SDK
{

// Function Viessa_Active04_BlizzardAOE.Viessa_Active04_BlizzardAOE_C.TryApplyDamage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AViessa_Active04_BlizzardAOE_C::TryApplyDamage(double DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Viessa_Active04_BlizzardAOE_C", "TryApplyDamage");

	Params::Viessa_Active04_BlizzardAOE_C_TryApplyDamage Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Viessa_Active04_BlizzardAOE.Viessa_Active04_BlizzardAOE_C.SendIceBindEvent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           TargetActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AViessa_Active04_BlizzardAOE_C::SendIceBindEvent(class AActor* TargetActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Viessa_Active04_BlizzardAOE_C", "SendIceBindEvent");

	Params::Viessa_Active04_BlizzardAOE_C_SendIceBindEvent Parms{};

	Parms.TargetActor = TargetActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Viessa_Active04_BlizzardAOE.Viessa_Active04_BlizzardAOE_C.RemoveStatusEffect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AViessa_Active04_BlizzardAOE_C::RemoveStatusEffect(class AActor* Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Viessa_Active04_BlizzardAOE_C", "RemoveStatusEffect");

	Params::Viessa_Active04_BlizzardAOE_C_RemoveStatusEffect Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Viessa_Active04_BlizzardAOE.Viessa_Active04_BlizzardAOE_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AViessa_Active04_BlizzardAOE_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Viessa_Active04_BlizzardAOE_C", "ReceiveTick");

	Params::Viessa_Active04_BlizzardAOE_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Viessa_Active04_BlizzardAOE.Viessa_Active04_BlizzardAOE_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void AViessa_Active04_BlizzardAOE_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Viessa_Active04_BlizzardAOE_C", "ReceiveDestroyed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Viessa_Active04_BlizzardAOE.Viessa_Active04_BlizzardAOE_C.OnEvent_9FBFFCA44DBF07C541E7B0979ECF2DE1
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FM1CalcDamageInfo                DamageInfo                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void AViessa_Active04_BlizzardAOE_C::OnEvent_9FBFFCA44DBF07C541E7B0979ECF2DE1(const struct FM1CalcDamageInfo& DamageInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Viessa_Active04_BlizzardAOE_C", "OnEvent_9FBFFCA44DBF07C541E7B0979ECF2DE1");

	Params::Viessa_Active04_BlizzardAOE_C_OnEvent_9FBFFCA44DBF07C541E7B0979ECF2DE1 Parms{};

	Parms.DamageInfo = std::move(DamageInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Viessa_Active04_BlizzardAOE.Viessa_Active04_BlizzardAOE_C.OnEndOverlap_315BF1B14638FA5CFF4CB1BDA25C9DE4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AViessa_Active04_BlizzardAOE_C::OnEndOverlap_315BF1B14638FA5CFF4CB1BDA25C9DE4(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Viessa_Active04_BlizzardAOE_C", "OnEndOverlap_315BF1B14638FA5CFF4CB1BDA25C9DE4");

	Params::Viessa_Active04_BlizzardAOE_C_OnEndOverlap_315BF1B14638FA5CFF4CB1BDA25C9DE4 Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Viessa_Active04_BlizzardAOE.Viessa_Active04_BlizzardAOE_C.OnBeginOverlap_315BF1B14638FA5CFF4CB1BDA25C9DE4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AViessa_Active04_BlizzardAOE_C::OnBeginOverlap_315BF1B14638FA5CFF4CB1BDA25C9DE4(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Viessa_Active04_BlizzardAOE_C", "OnBeginOverlap_315BF1B14638FA5CFF4CB1BDA25C9DE4");

	Params::Viessa_Active04_BlizzardAOE_C_OnBeginOverlap_315BF1B14638FA5CFF4CB1BDA25C9DE4 Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Viessa_Active04_BlizzardAOE.Viessa_Active04_BlizzardAOE_C.Explosion
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AViessa_Active04_BlizzardAOE_C::Explosion()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Viessa_Active04_BlizzardAOE_C", "Explosion");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Viessa_Active04_BlizzardAOE.Viessa_Active04_BlizzardAOE_C.ExecuteUbergraph_Viessa_Active04_BlizzardAOE
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AViessa_Active04_BlizzardAOE_C::ExecuteUbergraph_Viessa_Active04_BlizzardAOE(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Viessa_Active04_BlizzardAOE_C", "ExecuteUbergraph_Viessa_Active04_BlizzardAOE");

	Params::Viessa_Active04_BlizzardAOE_C_ExecuteUbergraph_Viessa_Active04_BlizzardAOE Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Viessa_Active04_BlizzardAOE.Viessa_Active04_BlizzardAOE_C.CanApplyStatusEffect
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AViessa_Active04_BlizzardAOE_C::CanApplyStatusEffect(class AActor* Target, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Viessa_Active04_BlizzardAOE_C", "CanApplyStatusEffect");

	Params::Viessa_Active04_BlizzardAOE_C_CanApplyStatusEffect Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function Viessa_Active04_BlizzardAOE.Viessa_Active04_BlizzardAOE_C.BP_OnPostSpawnAbilityActor
// (Event, Protected, BlueprintEvent)

void AViessa_Active04_BlizzardAOE_C::BP_OnPostSpawnAbilityActor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Viessa_Active04_BlizzardAOE_C", "BP_OnPostSpawnAbilityActor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Viessa_Active04_BlizzardAOE.Viessa_Active04_BlizzardAOE_C.ApplyStatusEffect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AViessa_Active04_BlizzardAOE_C::ApplyStatusEffect(class AActor* Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Viessa_Active04_BlizzardAOE_C", "ApplyStatusEffect");

	Params::Viessa_Active04_BlizzardAOE_C_ApplyStatusEffect Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Viessa_Active04_BlizzardAOE.Viessa_Active04_BlizzardAOE_C.ApplyDamage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AViessa_Active04_BlizzardAOE_C::ApplyDamage(class AActor* Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Viessa_Active04_BlizzardAOE_C", "ApplyDamage");

	Params::Viessa_Active04_BlizzardAOE_C_ApplyDamage Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);
}

}
