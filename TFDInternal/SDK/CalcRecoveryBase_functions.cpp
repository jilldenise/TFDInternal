#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CalcRecoveryBase

#include "Basic.hpp"

#include "CalcRecoveryBase_classes.hpp"
#include "CalcRecoveryBase_parameters.hpp"


namespace SDK
{

// Function CalcRecoveryBase.CalcRecoveryBase_C.SetRecoveryOutModifier
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FM1AbilityOpCalcParam            Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FM1CalcDamageInfo                DamageInfo                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// struct FM1AbilityOpExecCalcOutput       Output                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UCalcRecoveryBase_C::SetRecoveryOutModifier(struct FM1AbilityOpCalcParam& Param, struct FM1CalcDamageInfo& DamageInfo, struct FM1AbilityOpExecCalcOutput& Output) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CalcRecoveryBase_C", "SetRecoveryOutModifier");

	Params::CalcRecoveryBase_C_SetRecoveryOutModifier Parms{};

	Parms.Param = std::move(Param);
	Parms.DamageInfo = std::move(DamageInfo);
	Parms.Output = std::move(Output);

	UObject::ProcessEvent(Func, &Parms);

	Param = std::move(Parms.Param);
	DamageInfo = std::move(Parms.DamageInfo);
	Output = std::move(Parms.Output);
}


// Function CalcRecoveryBase.CalcRecoveryBase_C.Execute
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FM1AbilityOpCalcParam            Param                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FM1AbilityOpExecCalcOutput       Output                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UCalcRecoveryBase_C::Execute(const struct FM1AbilityOpCalcParam& Param, struct FM1AbilityOpExecCalcOutput& Output) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CalcRecoveryBase_C", "Execute");

	Params::CalcRecoveryBase_C_Execute Parms{};

	Parms.Param = std::move(Param);
	Parms.Output = std::move(Output);

	UObject::ProcessEvent(Func, &Parms);

	Output = std::move(Parms.Output);
}


// Function CalcRecoveryBase.CalcRecoveryBase_C.DoCalculation
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FM1AbilityOpCalcParam            Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FM1CalcDamageInfo                DamageInfo                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UCalcRecoveryBase_C::DoCalculation(struct FM1AbilityOpCalcParam& Param, struct FM1CalcDamageInfo& DamageInfo) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CalcRecoveryBase_C", "DoCalculation");

	Params::CalcRecoveryBase_C_DoCalculation Parms{};

	Parms.Param = std::move(Param);
	Parms.DamageInfo = std::move(DamageInfo);

	UObject::ProcessEvent(Func, &Parms);

	Param = std::move(Parms.Param);
	DamageInfo = std::move(Parms.DamageInfo);
}


// Function CalcRecoveryBase.CalcRecoveryBase_C.DetermineRecoveryCoefficient
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FM1AbilityOpCalcParam            Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FM1CalcDamageInfo                DamageInfo                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// EM1StatType                             StatType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    UseRecoveryCoefficient                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EM1StatType                             TakeRecoveryCoefficient                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EM1StatType                             GiveRecoveryCoefficient                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCalcRecoveryBase_C::DetermineRecoveryCoefficient(struct FM1AbilityOpCalcParam& Param, struct FM1CalcDamageInfo& DamageInfo, EM1StatType StatType, bool* UseRecoveryCoefficient, EM1StatType* TakeRecoveryCoefficient, EM1StatType* GiveRecoveryCoefficient) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CalcRecoveryBase_C", "DetermineRecoveryCoefficient");

	Params::CalcRecoveryBase_C_DetermineRecoveryCoefficient Parms{};

	Parms.Param = std::move(Param);
	Parms.DamageInfo = std::move(DamageInfo);
	Parms.StatType = StatType;

	UObject::ProcessEvent(Func, &Parms);

	Param = std::move(Parms.Param);
	DamageInfo = std::move(Parms.DamageInfo);

	if (UseRecoveryCoefficient != nullptr)
		*UseRecoveryCoefficient = Parms.UseRecoveryCoefficient;

	if (TakeRecoveryCoefficient != nullptr)
		*TakeRecoveryCoefficient = Parms.TakeRecoveryCoefficient;

	if (GiveRecoveryCoefficient != nullptr)
		*GiveRecoveryCoefficient = Parms.GiveRecoveryCoefficient;
}


// Function CalcRecoveryBase.CalcRecoveryBase_C.ApplySkillATK
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FM1AbilityOpCalcParam            Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FM1CalcDamageInfo                DamageInfo                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// EM1ElementalDamageChannel               ElementalChannel                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EM1SkillArcheType                       ArcheType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FM1ScaledInteger                 AddPower                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FM1ScaledInteger                 AddAttack                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// bool                                    IsHittingPC                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCalcRecoveryBase_C::ApplySkillATK(struct FM1AbilityOpCalcParam& Param, struct FM1CalcDamageInfo& DamageInfo, EM1ElementalDamageChannel ElementalChannel, EM1SkillArcheType ArcheType, const struct FM1ScaledInteger& AddPower, const struct FM1ScaledInteger& AddAttack, bool IsHittingPC) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CalcRecoveryBase_C", "ApplySkillATK");

	Params::CalcRecoveryBase_C_ApplySkillATK Parms{};

	Parms.Param = std::move(Param);
	Parms.DamageInfo = std::move(DamageInfo);
	Parms.ElementalChannel = ElementalChannel;
	Parms.ArcheType = ArcheType;
	Parms.AddPower = std::move(AddPower);
	Parms.AddAttack = std::move(AddAttack);
	Parms.IsHittingPC = IsHittingPC;

	UObject::ProcessEvent(Func, &Parms);

	Param = std::move(Parms.Param);
	DamageInfo = std::move(Parms.DamageInfo);
}


// Function CalcRecoveryBase.CalcRecoveryBase_C.ApplyRecoveryCoefficient
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                                    UseRecoveryCoefficient                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FM1AbilityOpCalcParam            Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FM1CalcDamageInfo                DamageInfo                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// EM1StatType                             GiveRecoveryCoefficientStatType                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EM1StatType                             TakeRecoveryCoefficientStatType                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCalcRecoveryBase_C::ApplyRecoveryCoefficient(bool UseRecoveryCoefficient, struct FM1AbilityOpCalcParam& Param, struct FM1CalcDamageInfo& DamageInfo, EM1StatType GiveRecoveryCoefficientStatType, EM1StatType TakeRecoveryCoefficientStatType) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CalcRecoveryBase_C", "ApplyRecoveryCoefficient");

	Params::CalcRecoveryBase_C_ApplyRecoveryCoefficient Parms{};

	Parms.UseRecoveryCoefficient = UseRecoveryCoefficient;
	Parms.Param = std::move(Param);
	Parms.DamageInfo = std::move(DamageInfo);
	Parms.GiveRecoveryCoefficientStatType = GiveRecoveryCoefficientStatType;
	Parms.TakeRecoveryCoefficientStatType = TakeRecoveryCoefficientStatType;

	UObject::ProcessEvent(Func, &Parms);

	Param = std::move(Parms.Param);
	DamageInfo = std::move(Parms.DamageInfo);
}


// Function CalcRecoveryBase.CalcRecoveryBase_C.ApplyMaxStatBaseRecovery
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FM1AbilityOpCalcParam            Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FM1CalcDamageInfo                Damage_info                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// EM1StatType                             BaseStatType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  RecoveryAmount                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EM1StatType                             RecoveryStatType_0                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCalcRecoveryBase_C::ApplyMaxStatBaseRecovery(struct FM1AbilityOpCalcParam& Param, struct FM1CalcDamageInfo& Damage_info, EM1StatType BaseStatType, double RecoveryAmount, EM1StatType RecoveryStatType_0) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CalcRecoveryBase_C", "ApplyMaxStatBaseRecovery");

	Params::CalcRecoveryBase_C_ApplyMaxStatBaseRecovery Parms{};

	Parms.Param = std::move(Param);
	Parms.Damage_info = std::move(Damage_info);
	Parms.BaseStatType = BaseStatType;
	Parms.RecoveryAmount = RecoveryAmount;
	Parms.RecoveryStatType_0 = RecoveryStatType_0;

	UObject::ProcessEvent(Func, &Parms);

	Param = std::move(Parms.Param);
	Damage_info = std::move(Parms.Damage_info);
}


// Function CalcRecoveryBase.CalcRecoveryBase_C.ApplyCommonRecovery
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FM1AbilityOpCalcParam            Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FM1CalcDamageInfo                DamageInfo                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// double                                  RecoveryAmount                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EM1RecoveryType                         RecoveryType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EM1StatType                             RecoveryStat                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCalcRecoveryBase_C::ApplyCommonRecovery(struct FM1AbilityOpCalcParam& Param, struct FM1CalcDamageInfo& DamageInfo, double RecoveryAmount, EM1RecoveryType RecoveryType, EM1StatType RecoveryStat) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CalcRecoveryBase_C", "ApplyCommonRecovery");

	Params::CalcRecoveryBase_C_ApplyCommonRecovery Parms{};

	Parms.Param = std::move(Param);
	Parms.DamageInfo = std::move(DamageInfo);
	Parms.RecoveryAmount = RecoveryAmount;
	Parms.RecoveryType = RecoveryType;
	Parms.RecoveryStat = RecoveryStat;

	UObject::ProcessEvent(Func, &Parms);

	Param = std::move(Parms.Param);
	DamageInfo = std::move(Parms.DamageInfo);
}

}

