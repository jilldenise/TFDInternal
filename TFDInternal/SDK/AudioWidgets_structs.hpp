#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AudioWidgets

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// Enum AudioWidgets.EAudioRadialSliderLayout
// NumValues: 0x0004
enum class EAudioRadialSliderLayout : uint8
{
	Layout_LabelTop                          = 0,
	Layout_LabelCenter                       = 1,
	Layout_LabelBottom                       = 2,
	Layout_MAX                               = 3,
};

// ScriptStruct AudioWidgets.MeterChannelInfo
// 0x000C (0x000C - 0x0000)
struct FMeterChannelInfo final
{
public:
	float                                         MeterValue;                                        // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         PeakValue;                                         // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ClippingValue;                                     // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct AudioWidgets.AudioMeterStyle
// 0x0458 (0x0460 - 0x0008)
struct FAudioMeterStyle final : public FSlateWidgetStyle
{
public:
	uint8                                         Pad_8[0x8];                                        // 0x0008(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            MeterValueImage;                                   // 0x0010(0x00C0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                            BackgroundImage;                                   // 0x00D0(0x00C0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                            MeterBackgroundImage;                              // 0x0190(0x00C0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                            MeterValueBackgroundImage;                         // 0x0250(0x00C0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                            MeterPeakImage;                                    // 0x0310(0x00C0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FVector2D                              MeterSize;                                         // 0x03D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              MeterPadding;                                      // 0x03D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MeterValuePadding;                                 // 0x03E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         PeakValueWidth;                                    // 0x03E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              ValueRangeDb;                                      // 0x03E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bShowScale;                                        // 0x03F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bScaleSide;                                        // 0x03F1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3F2[0x2];                                      // 0x03F2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ScaleHashOffset;                                   // 0x03F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ScaleHashWidth;                                    // 0x03F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ScaleHashHeight;                                   // 0x03FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         DecibelsPerHash;                                   // 0x0400(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_404[0x4];                                      // 0x0404(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateFontInfo                         Font;                                              // 0x0408(0x0058)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct AudioWidgets.AudioTextBoxStyle
// 0x00E8 (0x00F0 - 0x0008)
struct FAudioTextBoxStyle final : public FSlateWidgetStyle
{
public:
	uint8                                         Pad_8[0x8];                                        // 0x0008(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            BackgroundImage;                                   // 0x0010(0x00C0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                            BackgroundColor;                                   // 0x00D0(0x0014)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                         Pad_E4[0xC];                                       // 0x00E4(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct AudioWidgets.AudioSliderStyle
// 0x06B8 (0x06C0 - 0x0008)
struct FAudioSliderStyle final : public FSlateWidgetStyle
{
public:
	uint8                                         Pad_8[0x8];                                        // 0x0008(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSliderStyle                           SliderStyle;                                       // 0x0010(0x04A0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FAudioTextBoxStyle                     TextBoxStyle;                                      // 0x04B0(0x00F0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                            WidgetBackgroundImage;                             // 0x05A0(0x00C0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                            SliderBackgroundColor;                             // 0x0660(0x0014)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FVector2D                              SliderBackgroundSize;                              // 0x0674(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LabelPadding;                                      // 0x067C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateColor                            SliderBarColor;                                    // 0x0680(0x0014)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                            SliderThumbColor;                                  // 0x0694(0x0014)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                            WidgetBackgroundColor;                             // 0x06A8(0x0014)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                         Pad_6BC[0x4];                                      // 0x06BC(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct AudioWidgets.AudioRadialSliderStyle
// 0x0148 (0x0150 - 0x0008)
struct FAudioRadialSliderStyle final : public FSlateWidgetStyle
{
public:
	uint8                                         Pad_8[0x8];                                        // 0x0008(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAudioTextBoxStyle                     TextBoxStyle;                                      // 0x0010(0x00F0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                            CenterBackgroundColor;                             // 0x0100(0x0014)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                            SliderBarColor;                                    // 0x0114(0x0014)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                            SliderProgressColor;                               // 0x0128(0x0014)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                         LabelPadding;                                      // 0x013C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DefaultSliderRadius;                               // 0x0140(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_144[0xC];                                      // 0x0144(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

}
