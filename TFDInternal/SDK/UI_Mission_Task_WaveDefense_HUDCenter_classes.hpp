#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Mission_Task_WaveDefense_HUDCenter

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "M1_structs.hpp"
#include "M1_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Mission_Task_WaveDefense_HUDCenter.UI_Mission_Task_WaveDefense_HUDCenter_C
// 0x0020 (0x0768 - 0x0748)
class UUI_Mission_Task_WaveDefense_HUDCenter_C final : public UM1UIMIssionTaskGoal_WaveDefenseHudCenter
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0748(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       UIAnim_Hit;                                        // 0x0750(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       UIAnim_Warning;                                    // 0x0758(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image_Hit;                                         // 0x0760(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void PreConstruct(bool IsDesignTime);
	void OnUpdateProgressEvent_Event();
	void OnEventWidgetOpen(EM1WidgetAnimDirection InDirection);
	void ExecuteUbergraph_UI_Mission_Task_WaveDefense_HUDCenter(int32 EntryPoint);
	void CustomEvent();
	void Construct();
	void BP_OnDefenseTargetHpLowered();
	void BP_OnDefenseTargetHit();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Mission_Task_WaveDefense_HUDCenter_C">();
	}
	static class UUI_Mission_Task_WaveDefense_HUDCenter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Mission_Task_WaveDefense_HUDCenter_C>();
	}
};

}
