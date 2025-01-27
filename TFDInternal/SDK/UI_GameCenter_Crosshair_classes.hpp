#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_GameCenter_Crosshair

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "M1_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_GameCenter_Crosshair.UI_GameCenter_Crosshair_C
// 0x0088 (0x0838 - 0x07B0)
class UUI_GameCenter_Crosshair_C final : public UM1UIGameCenter_Crosshair
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x07B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UOverlay*                               Panel_Default;                                     // 0x07B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Panel_InstantHitGuide;                             // 0x07C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Panel_Zoomed;                                      // 0x07C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_CrosshairBase_C*                    CurrentCrosshairWidget;                            // 0x07D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            DefaultCrosshairWidget;                            // 0x07D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            ZoomCrosshairWidget;                               // 0x07E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        LastSpread;                                        // 0x07E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bZoomed;                                           // 0x07F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsScopeZoomed;                                    // 0x07F1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7F2[0x2];                                      // 0x07F2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_WireGuideID;                                  // 0x07F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            HitGuideWidget;                                    // 0x07F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            ZoomHitGuideWidget;                                // 0x0800(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsHighReady;                                      // 0x0808(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInstantHitBlocked;                                // 0x0809(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_80A[0x6];                                      // 0x080A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            ActiveHitGuideWidget;                              // 0x0810(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 ActiveHitGuideClass;                               // 0x0818(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          bChangeHitGuide;                                   // 0x0820(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_821[0x7];                                      // 0x0821(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        DefaultOpaqueValue;                                // 0x0828(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CrosshairHitGuideSizeMultiplier;                   // 0x0830(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void UpdateCrosshairSpread();
	void UpdateCrosshairOpacity();
	void ResetHitGuide();
	void ExecuteUbergraph_UI_GameCenter_Crosshair(int32 EntryPoint);
	void CreateCrosshairWidget(class UClass* CrosshairClass, class UUserWidget* CurrentWidget, class UPanelWidget* ParentWidget, class UUserWidget** OutWidget);
	void ChangeCrosshair(class UClass* CrosshairClass, class UClass* ZoomCrosshairClass);
	void CalcHitGuideWidgetClampedPos(const struct FVector2D& InPos, bool bClamp, const struct FVector2D* OutPos);
	void BP_WeaponFireBursted();
	void BP_UpdateWireGuide(const struct FVector2D& ScreenPos);
	void BP_UpdateInstantHitGuide(bool bShow, TSubclassOf<class UUserWidget> WidgetClass, TSubclassOf<class UUserWidget> ZoomWidgetClass, const struct FVector2D& ScreenPos);
	void BP_ResizedViewport();
	void BP_EnemyInWeaponRange(const bool bEnemyInWeaponRange, const struct FColor& InAimingNoticeCrosshairColor);
	void BP_ChangedWeaponZoom(const bool bZoomed_0, bool bIsScopeZoomed_0);
	void BP_ChangedWeaponSpread(const float Spread);
	void BP_ChangedWeaponHighReady(const bool bHighReady);
	void BP_ChangedWeapon(TSubclassOf<class UUserWidget> InCrosshairClass, TSubclassOf<class UUserWidget> InZoomCrosshairClass);
	void BP_ChangedCrosshair(const bool bZoomed_0);
	void BP_ChangedCameraFOV();
	void AttachHitGuideWidget(class UClass* WidgetClass, class UUserWidget*& WidgetReference, class UUserWidget** AttachedHitGuideWidget);
	void ApplyZoomState(bool InZoomed);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_GameCenter_Crosshair_C">();
	}
	static class UUI_GameCenter_Crosshair_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_GameCenter_Crosshair_C>();
	}
};

}

