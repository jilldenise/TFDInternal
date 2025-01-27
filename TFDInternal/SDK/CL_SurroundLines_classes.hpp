#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CL_SurroundLines

#include "Basic.hpp"

#include "WB_CrosshairLayerBase_Rectangles_classes.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CL_SurroundLines.CL_SurroundLines_C
// 0x0080 (0x08E8 - 0x0868)
class UCL_SurroundLines_C final : public UWB_CrosshairLayerBase_Rectangles_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_CL_SurroundLines_C;                 // 0x0868(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         NLines;                                            // 0x0870(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_874[0x4];                                      // 0x0874(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CenterGap;                                         // 0x0878(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          StepAngleForceEqualDivision;                       // 0x0880(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_881[0x7];                                      // 0x0881(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        StepAngle;                                         // 0x0888(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              LineSize;                                          // 0x0890(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          EnableRecoilResponse;                              // 0x0898(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_899[0x7];                                      // 0x0899(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        RecoilToCenterGapPercentage;                       // 0x08A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              RecoilToSizePercentage;                            // 0x08A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              ElementAlignment;                                  // 0x08B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              ElementScale;                                      // 0x08B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              ElementRotationPivot;                              // 0x08C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ElementAngle;                                      // 0x08C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        LayerAngle;                                        // 0x08D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        AutoRotationRPM__Element_;                         // 0x08D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        AutoRotationRPM__Layer_;                           // 0x08E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void InitializeEditableVariables();
	void ExecuteUbergraph_CL_SurroundLines(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CL_SurroundLines_C">();
	}
	static class UCL_SurroundLines_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCL_SurroundLines_C>();
	}
};

}

