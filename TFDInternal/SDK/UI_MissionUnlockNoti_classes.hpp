#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_MissionUnlockNoti

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "M1_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_MissionUnlockNoti.UI_MissionUnlockNoti_C
// 0x0020 (0x0770 - 0x0750)
class UUI_MissionUnlockNoti_C final : public UM1UIGame_MissionUnlockNoti
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0750(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UM1TextBlock*                           Text_BattleZoneDesc;                               // 0x0758(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UM1TextBlock*                           Text_Title;                                        // 0x0760(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_KeyButton_C*                        UI_KeyButton;                                      // 0x0768(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SequenceEvent__ENTRYPOINTUI_MissionUnlockNoti();
	void ExecuteUbergraph_UI_MissionUnlockNoti(int32 EntryPoint);
	void BP_widget_playAkEvent();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_MissionUnlockNoti_C">();
	}
	static class UUI_MissionUnlockNoti_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_MissionUnlockNoti_C>();
	}
};

}
