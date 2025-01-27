#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CL_CenterCircle

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "WB_CrosshairLayerBase_Circles_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CL_CenterCircle.CL_CenterCircle_C
// 0x0028 (0x0858 - 0x0830)
class UCL_CenterCircle_C final : public UWB_CrosshairLayerBase_Circles_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_CL_CenterCircle_C;                  // 0x0830(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	double                                        CircleRadius;                                      // 0x0838(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        LineThickness;                                     // 0x0840(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Fill;                                              // 0x0848(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          EnableRecoilResponse;                              // 0x0849(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_84A[0x6];                                      // 0x084A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        RecoilToCircleRadiusPercentage;                    // 0x0850(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void PreConstruct(bool IsDesignTime);
	void InitializeEditableVariables();
	void ExecuteUbergraph_CL_CenterCircle(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CL_CenterCircle_C">();
	}
	static class UCL_CenterCircle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCL_CenterCircle_C>();
	}
};

}

