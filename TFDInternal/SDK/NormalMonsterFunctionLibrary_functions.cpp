#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NormalMonsterFunctionLibrary

#include "Basic.hpp"

#include "NormalMonsterFunctionLibrary_classes.hpp"
#include "NormalMonsterFunctionLibrary_parameters.hpp"


namespace SDK
{

// Function NormalMonsterFunctionLibrary.NormalMonsterFunctionLibrary_C.SpawnMeleeHitFXBySurfaceType
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           AttackingActor                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                           HitActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UM1DataHitEffects*                HitEffectsData                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UM1DataSoundEffects*              OptionalHitSoundData                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UNormalMonsterFunctionLibrary_C::SpawnMeleeHitFXBySurfaceType(class AActor* AttackingActor, class AActor* HitActor, class UM1DataHitEffects* HitEffectsData, class UM1DataSoundEffects* OptionalHitSoundData, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NormalMonsterFunctionLibrary_C", "SpawnMeleeHitFXBySurfaceType");

	Params::NormalMonsterFunctionLibrary_C_SpawnMeleeHitFXBySurfaceType Parms{};

	Parms.AttackingActor = AttackingActor;
	Parms.HitActor = HitActor;
	Parms.HitEffectsData = HitEffectsData;
	Parms.OptionalHitSoundData = OptionalHitSoundData;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function NormalMonsterFunctionLibrary.NormalMonsterFunctionLibrary_C.SamplePivotLocationsOfSector
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  MinRadius                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  MaxRadius                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SampleCount                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Origin                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVector>                  SampleResult                                           (Parm, OutParm)

void UNormalMonsterFunctionLibrary_C::SamplePivotLocationsOfSector(double MinRadius, double MaxRadius, int32 SampleCount, const struct FVector& Origin, class UObject* __WorldContext, TArray<struct FVector>* SampleResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NormalMonsterFunctionLibrary_C", "SamplePivotLocationsOfSector");

	Params::NormalMonsterFunctionLibrary_C_SamplePivotLocationsOfSector Parms{};

	Parms.MinRadius = MinRadius;
	Parms.MaxRadius = MaxRadius;
	Parms.SampleCount = SampleCount;
	Parms.Origin = std::move(Origin);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (SampleResult != nullptr)
		*SampleResult = std::move(Parms.SampleResult);
}


// Function NormalMonsterFunctionLibrary.NormalMonsterFunctionLibrary_C.PlayAkSound_OnMonsterStartMeleeAttack
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           OwnerActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UNormalMonsterFunctionLibrary_C::PlayAkSound_OnMonsterStartMeleeAttack(class AActor* OwnerActor, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NormalMonsterFunctionLibrary_C", "PlayAkSound_OnMonsterStartMeleeAttack");

	Params::NormalMonsterFunctionLibrary_C_PlayAkSound_OnMonsterStartMeleeAttack Parms{};

	Parms.OwnerActor = OwnerActor;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function NormalMonsterFunctionLibrary.NormalMonsterFunctionLibrary_C.GetBeamTargetBoneLocation
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UM1Ability*                       Ability                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                             AttackBoneName                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UM1BeamComponent*                 BeamComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    bValid                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Location                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNormalMonsterFunctionLibrary_C::GetBeamTargetBoneLocation(class UM1Ability* Ability, class FName AttackBoneName, class UM1BeamComponent* BeamComponent, class UObject* __WorldContext, bool* bValid, struct FVector* Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NormalMonsterFunctionLibrary_C", "GetBeamTargetBoneLocation");

	Params::NormalMonsterFunctionLibrary_C_GetBeamTargetBoneLocation Parms{};

	Parms.Ability = Ability;
	Parms.AttackBoneName = AttackBoneName;
	Parms.BeamComponent = BeamComponent;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (bValid != nullptr)
		*bValid = Parms.bValid;

	if (Location != nullptr)
		*Location = std::move(Parms.Location);
}


// Function NormalMonsterFunctionLibrary.NormalMonsterFunctionLibrary_C.CalcRandomSpawnPointFromOrigin
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          WorldContext                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                          OriginLocation                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Radius                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  HeightLimit                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                          RandomLocation                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bSuccess                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNormalMonsterFunctionLibrary_C::CalcRandomSpawnPointFromOrigin(class UObject* WorldContext, const struct FVector& OriginLocation, double Radius, double HeightLimit, class UObject* __WorldContext, struct FVector* RandomLocation, bool* bSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NormalMonsterFunctionLibrary_C", "CalcRandomSpawnPointFromOrigin");

	Params::NormalMonsterFunctionLibrary_C_CalcRandomSpawnPointFromOrigin Parms{};

	Parms.WorldContext = WorldContext;
	Parms.OriginLocation = std::move(OriginLocation);
	Parms.Radius = Radius;
	Parms.HeightLimit = HeightLimit;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (RandomLocation != nullptr)
		*RandomLocation = std::move(Parms.RandomLocation);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;
}


// Function NormalMonsterFunctionLibrary.NormalMonsterFunctionLibrary_C.ApplySeigeMeleeAttackHitOperations
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UM1Ability*                       Ability                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>                   InDetectedActors                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UM1DataHitEffects*                HitFXs                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UM1DataSoundEffects*              SoundFXs                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UNormalMonsterFunctionLibrary_C::ApplySeigeMeleeAttackHitOperations(class UM1Ability* Ability, TArray<class AActor*>& InDetectedActors, class UM1DataHitEffects* HitFXs, class UM1DataSoundEffects* SoundFXs, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NormalMonsterFunctionLibrary_C", "ApplySeigeMeleeAttackHitOperations");

	Params::NormalMonsterFunctionLibrary_C_ApplySeigeMeleeAttackHitOperations Parms{};

	Parms.Ability = Ability;
	Parms.InDetectedActors = std::move(InDetectedActors);
	Parms.HitFXs = HitFXs;
	Parms.SoundFXs = SoundFXs;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	InDetectedActors = std::move(Parms.InDetectedActors);
}


// Function NormalMonsterFunctionLibrary.NormalMonsterFunctionLibrary_C.Apply Melee Attack Hit Operations
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UM1Ability*                       Ability                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>                   HitActors                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UM1DataHitEffects*                HitFXs                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UM1DataSoundEffects*              OptionalSoundFXs                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer            InTags                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UNormalMonsterFunctionLibrary_C::Apply_Melee_Attack_Hit_Operations(class UM1Ability* Ability, TArray<class AActor*>& HitActors, class UM1DataHitEffects* HitFXs, class UM1DataSoundEffects* OptionalSoundFXs, const struct FGameplayTagContainer& InTags, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NormalMonsterFunctionLibrary_C", "Apply Melee Attack Hit Operations");

	Params::NormalMonsterFunctionLibrary_C_Apply_Melee_Attack_Hit_Operations Parms{};

	Parms.Ability = Ability;
	Parms.HitActors = std::move(HitActors);
	Parms.HitFXs = HitFXs;
	Parms.OptionalSoundFXs = OptionalSoundFXs;
	Parms.InTags = std::move(InTags);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	HitActors = std::move(Parms.HitActors);
}

}

