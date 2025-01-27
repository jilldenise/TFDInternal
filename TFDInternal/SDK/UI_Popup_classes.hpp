#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Popup

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "M1_structs.hpp"
#include "M1_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Popup.UI_Popup_C
// 0x0030 (0x07D8 - 0x07A8)
class UUI_Popup_C final : public UM1UIPopup
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x07A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       UIAnim_Close;                                      // 0x07B0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       UIAnim_Open;                                       // 0x07B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USpacer*                                Spacer_5;                                          // 0x07C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Deco_Cube_Line_01_C*                UI_Deco_Cube_Line_01;                              // 0x07C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_PopupTitleBG_C*                     UI_PopupTitleBG;                                   // 0x07D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SequenceEvent__ENTRYPOINTUI_Popup();
	void OnEventWidgetOpen(EM1WidgetAnimDirection InDirection);
	void OnEventWidgetClose(EM1WidgetAnimDirection InDirection);
	void ExecuteUbergraph_UI_Popup(int32 EntryPoint);
	void BP_SetButtonCountImpl(int32 InCount);
	void BP_playakEvent(class UAkAudioEvent* AkEvent);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Popup_C">();
	}
	static class UUI_Popup_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Popup_C>();
	}
};

}

