#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_ItemIcon_Perk

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "M1_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_ItemIcon_Perk.UI_ItemIcon_Perk_C
// 0x0040 (0x0750 - 0x0710)
class UUI_ItemIcon_Perk_C final : public UM1UIItemLevel
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0710(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UUI_ItemIcon_Perk_Node_C*               UI_ItemIcon_Perk_Node;                             // 0x0718(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ItemIcon_Perk_Node_C*               UI_ItemIcon_Perk_Node_1;                           // 0x0720(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ItemIcon_Perk_Node_C*               UI_ItemIcon_Perk_Node_2;                           // 0x0728(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ItemIcon_Perk_Node_C*               UI_ItemIcon_Perk_Node_3;                           // 0x0730(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	EOrientation                                  SetOrientation;                                    // 0x0738(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_739[0x3];                                      // 0x0739(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              SetNodeSize;                                       // 0x073C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              SetNodePadding;                                    // 0x0744(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ViewBgDeco;                                        // 0x074C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ViewNodeEffect;                                    // 0x074D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void SetUIStyel();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UI_ItemIcon_Perk(int32 EntryPoint);
	void SetPerkLevel(int32 Level, bool MaxLevel);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_ItemIcon_Perk_C">();
	}
	static class UUI_ItemIcon_Perk_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_ItemIcon_Perk_C>();
	}
};

}

