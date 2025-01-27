#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_ItemSet_Slot

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "M1_classes.hpp"
#include "M1Data_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_ItemSet_Slot.UI_ItemSet_Slot_C
// 0x0018 (0x0728 - 0x0710)
class UUI_ItemSet_Slot_C final : public UM1UIAccessorySetOptionSlot
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0710(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_Slot;                                        // 0x0718(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	EM1EquipmentSlotType                          Slot_Type;                                         // 0x0720(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void SetUISlotType();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UI_ItemSet_Slot(int32 EntryPoint);
	void BP_SetEquipStatus(bool bIsEquipped);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_ItemSet_Slot_C">();
	}
	static class UUI_ItemSet_Slot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_ItemSet_Slot_C>();
	}
};

}

