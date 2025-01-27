#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Tag_RoundsType

#include "Basic.hpp"

#include "M1Data_structs.hpp"
#include "M1_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Tag_RoundsType.UI_Tag_RoundsType_C
// 0x0018 (0x0720 - 0x0708)
class UUI_Tag_RoundsType_C final : public UM1UIWidget
{
public:
	class UHorizontalBox*                         HorizontalBox;                                     // 0x0708(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Icon;                                        // 0x0710(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UM1TextBlock*                           Text_Name;                                         // 0x0718(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetUIRoundsType(EM1RoundsType InRoundsType);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Tag_RoundsType_C">();
	}
	static class UUI_Tag_RoundsType_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Tag_RoundsType_C>();
	}
};

}

