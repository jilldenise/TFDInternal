#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Skill_Evade

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "M1Data_structs.hpp"
#include "M1_structs.hpp"
#include "M1_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Skill_Evade.Skill_Evade_C
// 0x0300 (0x0638 - 0x0338)
class USkill_Evade_C final : public UM1SkillAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0338(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                                StartLoc;                                          // 0x0340(0x000C)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                EvadeDir;                                          // 0x034C(0x000C)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        EvadeTime;                                         // 0x0358(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        EvadeMoveTimeRate;                                 // 0x0360(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        EvadeDistance;                                     // 0x0368(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UClass*>                         AbilityAnimLayers;                                 // 0x0370(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                SavedInputAxis;                                    // 0x0380(0x000C)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_38C[0x4];                                      // 0x038C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FM1ActiveAbilityOperationId>    EventEvadeOprationIds;                             // 0x0390(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                        EvadeExitCooltime;                                 // 0x03A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<EM1CharacterGender, class UAnimMontage*> EvadeMontage_F;                                    // 0x03A8(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<EM1CharacterGender, class UAnimMontage*> EvadeMontage_FL;                                   // 0x03F8(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<EM1CharacterGender, class UAnimMontage*> EvadeMontage_FR;                                   // 0x0448(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<EM1CharacterGender, class UAnimMontage*> EvadeMontage_L;                                    // 0x0498(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<EM1CharacterGender, class UAnimMontage*> EvadeMontage_R;                                    // 0x04E8(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<EM1CharacterGender, class UAnimMontage*> EvadeMontage_BL;                                   // 0x0538(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<EM1CharacterGender, class UAnimMontage*> EvadeMontage_BR;                                   // 0x0588(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<EM1CharacterGender, class UAnimMontage*> EvadeMontage_B;                                    // 0x05D8(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UAnimMontage*                           SelectedMontage;                                   // 0x0628(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UM1AbilityTask_PlayMontageAndWait*      PlayMontageTask;                                   // 0x0630(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void OnFinished_6FE8C95042F333E7CBFD0ABF316AB07F(bool DestinationReached, bool TimedOut, const struct FVector& FinalTargetLocation);
	void OnEventReceived_E0302FCF43DF0741F5CFC58FF67626CF(const struct FM1AbilityEvent& Event);
	void OnCompleted_E0302FCF43DF0741F5CFC58FF67626CF(const struct FM1AbilityEvent& Event);
	void OnBlendOut_E0302FCF43DF0741F5CFC58FF67626CF(const struct FM1AbilityEvent& Event);
	void IsRunning(bool* bRunning);
	void IsPlayerRunning(bool* bOutRunning);
	void GetEvadeRecoveryAnimLength(double* OutLength);
	void GetEvadeAnimLength(double* OutLength);
	void ExecuteUbergraph_Skill_Evade(int32 EntryPoint);
	void ConvertDegreeTo8Direction(double Angle, class UAnimMontage** OutMontage);
	void BP_OnDeactivated(bool bCancelled);
	void BP_OnActivated();
	void AxisMoveSmoothingOnReached();

	TArray<struct FM1AbilityParamData> MakeSkillActivateParams(const class AActor* InOwner) const;
	void GetEvadeDistance(double* OutDistance) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Skill_Evade_C">();
	}
	static class USkill_Evade_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkill_Evade_C>();
	}
};

}
