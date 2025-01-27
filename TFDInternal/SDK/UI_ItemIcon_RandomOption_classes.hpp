#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_ItemIcon_RandomOption

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "M1Data_structs.hpp"
#include "M1_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_ItemIcon_RandomOption.UI_ItemIcon_RandomOption_C
// 0x0038 (0x0740 - 0x0708)
class UUI_ItemIcon_RandomOption_C final : public UM1UIWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0708(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWrapBox*                               Panel_RendomOption;                                // 0x0710(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ItemIcon_RandomOption_Node_C*       UI_ItemIcon_RandomOption_Node;                     // 0x0718(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ItemIcon_RandomOption_Node_C*       UI_ItemIcon_RandomOption_Node_1;                   // 0x0720(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ItemIcon_RandomOption_Node_C*       UI_ItemIcon_RandomOption_Node_2;                   // 0x0728(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ItemIcon_RandomOption_Node_C*       UI_ItemIcon_RandomOption_Node_3;                   // 0x0730(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FVector2D                              Set_IconSize;                                      // 0x0738(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void SetRandomOptionTiers(TArray<EM1ItemOptionTierType>& Tiers);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UI_ItemIcon_RandomOption(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_ItemIcon_RandomOption_C">();
	}
	static class UUI_ItemIcon_RandomOption_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_ItemIcon_RandomOption_C>();
	}
};

}

