#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_GameTop_MasteryRank_LevelUp_Possible

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "M1_structs.hpp"
#include "M1_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_GameTop_MasteryRank_LevelUp_Possible.UI_GameTop_MasteryRank_LevelUp_Possible_C
// 0x0018 (0x0730 - 0x0718)
class UUI_GameTop_MasteryRank_LevelUp_Possible_C final : public UM1UIGameTop_MasteryRankUp_Possible
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0718(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       UIAnim_OpenClose;                                  // 0x0720(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image_LevelBg;                                     // 0x0728(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SequenceEvent__ENTRYPOINTUI_GameTop_MasteryRank_LevelUp_Possible();
	void OnEventWidgetOpen(EM1WidgetAnimDirection InDirection);
	class UWidgetAnimation* GetEndAnimation();
	void ExecuteUbergraph_UI_GameTop_MasteryRank_LevelUp_Possible(int32 EntryPoint);
	void BP_widget_playAkEvent();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_GameTop_MasteryRank_LevelUp_Possible_C">();
	}
	static class UUI_GameTop_MasteryRank_LevelUp_Possible_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_GameTop_MasteryRank_LevelUp_Possible_C>();
	}
};

}
