#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: M1PlatformBridge

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// Class M1PlatformBridge.M1PlatformBridgeSubsystem
// 0x0170 (0x01A0 - 0x0030)
class UM1PlatformBridgeSubsystem final : public UGameInstanceSubsystem
{
public:
	uint8                                         Pad_30[0x170];                                     // 0x0030(0x0170)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"M1PlatformBridgeSubsystem">();
	}
	static class UM1PlatformBridgeSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UM1PlatformBridgeSubsystem>();
	}
};

}
