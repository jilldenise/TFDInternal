#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_StatusEffect_NoticePanel

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "M1_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_StatusEffect_NoticePanel.UI_StatusEffect_NoticePanel_C
// 0x0020 (0x0740 - 0x0720)
class UUI_StatusEffect_NoticePanel_C final : public UM1UIGameStatusEffect_NoticePanel
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0720(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UOverlay*                               P_AnchorsAlign;                                    // 0x0728(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               P_Notice;                                          // 0x0730(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	EVerticalAlignment                            AnchorAlign;                                       // 0x0738(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bBoss;                                             // 0x0739(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void SetUIAlign(EVerticalAlignment InVerticalAling);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UI_StatusEffect_NoticePanel(int32 EntryPoint);
	void Construct();
	void BP_SetupForReuse();
	void BP_OnAddedStatusEffectNotice(const class UM1UIWidget* InNoticeWidget);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_StatusEffect_NoticePanel_C">();
	}
	static class UUI_StatusEffect_NoticePanel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_StatusEffect_NoticePanel_C>();
	}
};

}

