#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Codex_Tracking_Task

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "M1_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Codex_Tracking_Task.UI_Codex_Tracking_Task_C
// 0x0010 (0x0728 - 0x0718)
class UUI_Codex_Tracking_Task_C final : public UM1UIGameCodexTrackingSlot
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0718(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UUI_Deco_TitleLine_04_C*                UI_Deco_TitleLine_04;                              // 0x0720(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UI_Codex_Tracking_Task(int32 EntryPoint);
	void BP_widget_playAkEvent();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Codex_Tracking_Task_C">();
	}
	static class UUI_Codex_Tracking_Task_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Codex_Tracking_Task_C>();
	}
};

}

