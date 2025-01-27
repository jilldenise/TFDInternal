#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Mission_Task_DeathEvasion_HudCenter

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "M1_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Mission_Task_DeathEvasion_HudCenter.UI_Mission_Task_DeathEvasion_HudCenter_C
// 0x0018 (0x0738 - 0x0720)
class UUI_Mission_Task_DeathEvasion_HudCenter_C final : public UM1UIMissionTaskGoalDeathEvasionHudCenter
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0720(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       ANIM_Warning;                                      // 0x0728(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x0730(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetDataImpl(class UM1UIData* InData);
	void SequenceEvent__ENTRYPOINTUI_Mission_Task_DeathEvasion_HudCenter();
	void SequenceEvent();
	void ExecuteUbergraph_UI_Mission_Task_DeathEvasion_HudCenter(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Mission_Task_DeathEvasion_HudCenter_C">();
	}
	static class UUI_Mission_Task_DeathEvasion_HudCenter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Mission_Task_DeathEvasion_HudCenter_C>();
	}
};

}

