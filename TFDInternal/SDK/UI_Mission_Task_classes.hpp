#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Mission_Task

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "M1_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Mission_Task.UI_Mission_Task_C
// 0x0030 (0x0760 - 0x0730)
class UUI_Mission_Task_C final : public UM1UIMissionTask
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0730(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anim_UpdateTaskInfo;                               // 0x0738(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_NewMission_Simple;                            // 0x0740(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_SuccessMission;                               // 0x0748(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UUI_Deco_TitleLine_04_C*                UI_Deco_TitleLine_04;                              // 0x0750(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_MissionIconImage_C*                 UI_MissionIconImage;                               // 0x0758(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetDataImpl(class UM1UIData* InData);
	void SequenceEvent__ENTRYPOINTUI_Mission_Task();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UI_Mission_Task(int32 EntryPoint);
	void BP_widget_playAkEvent();
	void BP_PlayUpdateTaskInfoAnim();
	void BP_PlaySucceedTaskAnim();
	void BP_PlayNewTaskAnim();
	void BP_PlayFailedTaskAnim();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Mission_Task_C">();
	}
	static class UUI_Mission_Task_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Mission_Task_C>();
	}
};

}
