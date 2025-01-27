#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_GuideMessage_Meta

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "M1_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_GuideMessage_Meta.UI_GuideMessage_Meta_C
// 0x0030 (0x0770 - 0x0740)
class UUI_GuideMessage_Meta_C final : public UM1UIMetaGameGuideMessage
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0740(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimOpenClose;                                     // 0x0748(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USpacer*                                Spacer_273;                                        // 0x0750(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Title;                                             // 0x0758(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Deco_Cube_Line_01_C*                UI_Deco_Cube_Line_01;                              // 0x0760(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_PopupTitleBG_C*                     UI_PopupTitleBG_1;                                 // 0x0768(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_GuideMessage_Meta(int32 EntryPoint);
	void Construct();
	void BP_ShowTitle(bool bShow);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_GuideMessage_Meta_C">();
	}
	static class UUI_GuideMessage_Meta_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_GuideMessage_Meta_C>();
	}
};

}

