#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NexonPlatform

#include "Basic.hpp"


namespace SDK
{

// Enum NexonPlatform.EUINavigationFeatureActivationStatus
// NumValues: 0x0004
enum class EUINavigationFeatureActivationStatus : uint8
{
	Off                                      = 0,
	On                                       = 1,
	UINavigationAction_Back_Only             = 2,
	EUINavigationFeatureActivationStatus_MAX = 3,
};

// Enum NexonPlatform.EUINavigationMoveCursorToFocusedWidget
// NumValues: 0x0003
enum class EUINavigationMoveCursorToFocusedWidget : uint8
{
	Off                                      = 0,
	On                                       = 1,
	EUINavigationMoveCursorToFocusedWidget_MAX = 2,
};

}

