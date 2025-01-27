#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Mission_Task_Escort_HUDCenter

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "M1_structs.hpp"
#include "M1_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Mission_Task_Escort_HUDCenter.UI_Mission_Task_Escort_HUDCenter_C
// 0x0068 (0x0790 - 0x0728)
class UUI_Mission_Task_Escort_HUDCenter_C final : public UM1UIMissionTaskGoal_Escort
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0728(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       UIAnim_Update;                                     // 0x0730(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       UIAnim_Distrub;                                    // 0x0738(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       UIAnim_Progress;                                   // 0x0740(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       UIAnim_Open;                                       // 0x0748(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USizeBox*                               Panel_State;                                       // 0x0750(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Text_Disturb;                                      // 0x0758(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Text_Progress;                                     // 0x0760(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UM1WidgetSwitcher*                      WS_State;                                          // 0x0768(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                   EscortTimerStringId;                               // 0x0770(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   DefenseTimerStringId;                              // 0x0778(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bDefensePhase;                                     // 0x0780(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_781[0x7];                                      // 0x0781(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidgetAnimation*                       UIAnim_Progress_0;                                 // 0x0788(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void SequenceEvent__ENTRYPOINTUI_Mission_Task_Escort_HUDCenter(class UUI_Timer_MissionOnly_C* Default_Timer_0);
	void OnEventWidgetOpen(EM1WidgetAnimDirection InDirection);
	void OnEventWidgetClose(EM1WidgetAnimDirection InDirection);
	void ExecuteUbergraph_UI_Mission_Task_Escort_HUDCenter(int32 EntryPoint);
	void Default_Timer_Event(class UUI_Timer_MissionOnly_C* Default_Timer_0);
	void Construct();
	void BP_OnChangedState(bool bMoving);
	void BP_OnChangedDefensePhase();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Mission_Task_Escort_HUDCenter_C">();
	}
	static class UUI_Mission_Task_Escort_HUDCenter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Mission_Task_Escort_HUDCenter_C>();
	}
};

}

