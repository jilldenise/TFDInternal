#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Notice_MtxItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "M1Data_structs.hpp"
#include "M1_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Notice_MtxItem.UI_Notice_MtxItem_C
// 0x0030 (0x0780 - 0x0750)
class UUI_Notice_MtxItem_C final : public UM1UIBoostActivationNotice
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0750(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 bg_01_tier;                                        // 0x0758(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_2;                                           // 0x0760(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_3;                                           // 0x0768(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 MI_Bright;                                         // 0x0770(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          NewVar;                                            // 0x0778(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void SequenceEvent__ENTRYPOINTUI_Notice_MtxItem();
	void ExecuteUbergraph_UI_Notice_MtxItem(int32 EntryPoint);
	void BP_widget_playAkEvent();
	void BP_SetIcon(const EM1BuffSubItemType InBoostType);
	void BP_SetBackgroundColor(const EM1ItemTierType InTierType);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Notice_MtxItem_C">();
	}
	static class UUI_Notice_MtxItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Notice_MtxItem_C>();
	}
};

}
