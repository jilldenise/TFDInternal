#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_PhaseProgress

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "M1_structs.hpp"
#include "M1_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_PhaseProgress.UI_PhaseProgress_C
// 0x0020 (0x0C60 - 0x0C40)
class UUI_PhaseProgress_C final : public UM1PhaseProgressBar
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0C40(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       UIAnim_Hit;                                        // 0x0C48(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image_Hit;                                         // 0x0C50(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void UI_PhaseProgress_UpdateProgress();
	void SetUI_Corner();
	void PreConstruct(bool IsDesignTime);
	void OnEventWidgetOpen(EM1WidgetAnimDirection InDirection);
	void OnEventWidgetClose(EM1WidgetAnimDirection InDirection);
	void ExecuteUbergraph_UI_PhaseProgress(int32 EntryPoint);
	void Construct();
	void BP_SetProgressStyleOnEdge(const struct FProgressBarStyle& InStyle, bool InEnd);
	void BP_PlayPhaseAnimation(int32 InInfoIndex);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_PhaseProgress_C">();
	}
	static class UUI_PhaseProgress_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_PhaseProgress_C>();
	}
};

}
