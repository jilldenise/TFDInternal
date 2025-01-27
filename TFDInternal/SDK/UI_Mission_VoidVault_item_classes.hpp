#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Mission_VoidVault_item

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "M1_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Mission_VoidVault_item.UI_Mission_VoidVault_item_C
// 0x0028 (0x0730 - 0x0708)
class UUI_Mission_VoidVault_item_C final : public UM1UIRequiredVoidVaultEntryWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0708(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_Icon;                                        // 0x0710(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_LinkedVault;                                 // 0x0718(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         Itme;                                              // 0x0720(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UM1TextBlock*                           TB_Name;                                           // 0x0728(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetDataImpl(class UM1UIData* InData);
	void ExecuteUbergraph_UI_Mission_VoidVault_item(int32 EntryPoint);
	void BP_SetIsOwned(bool bOwned);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Mission_VoidVault_item_C">();
	}
	static class UUI_Mission_VoidVault_item_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Mission_VoidVault_item_C>();
	}
};

}

