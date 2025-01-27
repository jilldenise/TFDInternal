#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Mission_Result_ScoreStat

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "M1_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Mission_Result_ScoreStat.UI_Mission_Result_ScoreStat_C
// 0x0018 (0x0730 - 0x0718)
class UUI_Mission_Result_ScoreStat_C final : public UM1UIMissionResultScoreStat
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0718(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_48;                                          // 0x0720(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Deco_Cube_02_C*                     UI_Deco_Cube_02;                                   // 0x0728(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetTextColor(int32 Index_0);
	void ExecuteUbergraph_UI_Mission_Result_ScoreStat(int32 EntryPoint);
	void BP_SetTextColor(int32 InColorIndex);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Mission_Result_ScoreStat_C">();
	}
	static class UUI_Mission_Result_ScoreStat_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Mission_Result_ScoreStat_C>();
	}
};

}

