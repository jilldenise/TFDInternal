#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Quest_Task_Description

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "M1_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Quest_Task_Description.UI_Quest_Task_Description_C
// 0x0010 (0x0730 - 0x0720)
class UUI_Quest_Task_Description_C final : public UM1UIQuestTrackerDescription
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0720(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_98;                                          // 0x0728(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UI_Quest_Task_Description(int32 EntryPoint);
	void BP_widget_playAkEvent(class UAkAudioEvent* AkEvent);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Quest_Task_Description_C">();
	}
	static class UUI_Quest_Task_Description_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Quest_Task_Description_C>();
	}
};

}
