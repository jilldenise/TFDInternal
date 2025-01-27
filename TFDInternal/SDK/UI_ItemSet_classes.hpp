#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_ItemSet

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "M1_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_ItemSet.UI_ItemSet_C
// 0x0048 (0x0768 - 0x0720)
class UUI_ItemSet_C final : public UM1UIAccessorySetOptionInfo
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0720(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UM1TextBlock*                           Text_Count;                                        // 0x0728(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UM1TextBlock*                           Text_Name;                                         // 0x0730(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ItemSet_Slot_C*                     UI_ItemSet_Slot;                                   // 0x0738(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ItemSet_Slot_C*                     UI_ItemSet_Slot_1;                                 // 0x0740(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ItemSet_Slot_C*                     UI_ItemSet_Slot_2;                                 // 0x0748(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ItemSet_Slot_C*                     UI_ItemSet_Slot_3;                                 // 0x0750(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ItemSet_Stat_C*                     UI_ItemSet_Stat;                                   // 0x0758(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ItemSet_Stat_C*                     UI_ItemSet_Stat_1;                                 // 0x0760(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetDataImpl(class UM1UIData* InData);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UI_ItemSet(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_ItemSet_C">();
	}
	static class UUI_ItemSet_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_ItemSet_C>();
	}
};

}

