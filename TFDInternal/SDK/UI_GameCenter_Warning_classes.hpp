#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_GameCenter_Warning

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "M1_structs.hpp"
#include "M1_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_GameCenter_Warning.UI_GameCenter_Warning_C
// 0x0050 (0x07B0 - 0x0760)
class UUI_GameCenter_Warning_C final : public UM1UIGameCenter_Message
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0760(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       ANIM_LoopingMessag;                                // 0x0768(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ANIM_Message;                                      // 0x0770(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UM1SpriteImage*                         Message_BG;                                        // 0x0778(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UM1TextBlock*                           TB_Message;                                        // 0x0780(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	EGameCenterMessageType                        LastLoopingMessageType;                            // 0x0788(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_789[0x3];                                      // 0x0789(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           In_Color_and_Opacity;                              // 0x078C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           In_Color_and_Opacity_0;                            // 0x079C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void UpdateTextByType(EGameCenterMessageType InType);
	void UpdateText(const class FText& Text, const struct FLinearColor& Color, const struct FLinearColor& BG_color);
	void SequenceEvent__ENTRYPOINTUI_GameCenter_Warning();
	void SequenceEvent_0();
	void ExecuteUbergraph_UI_GameCenter_Warning(int32 EntryPoint);
	void Construct();
	void BP_ShowMessage(const EGameCenterMessageType InType, const bool bIsLooping);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_GameCenter_Warning_C">();
	}
	static class UUI_GameCenter_Warning_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_GameCenter_Warning_C>();
	}
};

}
