#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BinkMediaPlayer

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BinkMediaPlayer.BinkFunctionLibrary.BinkLoadingMovie_GetDuration
// 0x0008 (0x0008 - 0x0000)
struct BinkFunctionLibrary_BinkLoadingMovie_GetDuration final
{
public:
	struct FTimespan                              ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function BinkMediaPlayer.BinkFunctionLibrary.BinkLoadingMovie_GetTime
// 0x0008 (0x0008 - 0x0000)
struct BinkFunctionLibrary_BinkLoadingMovie_GetTime final
{
public:
	struct FTimespan                              ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function BinkMediaPlayer.BinkMediaPlayer.Draw
// 0x0018 (0x0018 - 0x0000)
struct BinkMediaPlayer_Draw final
{
public:
	class UTexture*                               Texture;                                           // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          Tonemap;                                           // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Out_nits;                                          // 0x000C(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Alpha;                                             // 0x0010(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          Srgb_decode;                                       // 0x0014(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          Hdr;                                               // 0x0015(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_16[0x2];                                       // 0x0016(0x0002)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function BinkMediaPlayer.BinkMediaPlayer.OpenUrl
// 0x0018 (0x0018 - 0x0000)
struct BinkMediaPlayer_OpenUrl final
{
public:
	class FString                                 NewUrl;                                            // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function BinkMediaPlayer.BinkMediaPlayer.Pause
// 0x0001 (0x0001 - 0x0000)
struct BinkMediaPlayer_Pause final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function BinkMediaPlayer.BinkMediaPlayer.Play
// 0x0001 (0x0001 - 0x0000)
struct BinkMediaPlayer_Play final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function BinkMediaPlayer.BinkMediaPlayer.Rewind
// 0x0001 (0x0001 - 0x0000)
struct BinkMediaPlayer_Rewind final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function BinkMediaPlayer.BinkMediaPlayer.Seek
// 0x0010 (0x0010 - 0x0000)
struct BinkMediaPlayer_Seek final
{
public:
	struct FTimespan                              InTime;                                            // 0x0000(0x0008)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function BinkMediaPlayer.BinkMediaPlayer.SetLooping
// 0x0002 (0x0002 - 0x0000)
struct BinkMediaPlayer_SetLooping final
{
public:
	bool                                          InLooping;                                         // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function BinkMediaPlayer.BinkMediaPlayer.SetRate
// 0x0008 (0x0008 - 0x0000)
struct BinkMediaPlayer_SetRate final
{
public:
	float                                         Rate;                                              // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function BinkMediaPlayer.BinkMediaPlayer.SetVolume
// 0x0004 (0x0004 - 0x0000)
struct BinkMediaPlayer_SetVolume final
{
public:
	float                                         Rate;                                              // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function BinkMediaPlayer.BinkMediaPlayer.CanPause
// 0x0001 (0x0001 - 0x0000)
struct BinkMediaPlayer_CanPause final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function BinkMediaPlayer.BinkMediaPlayer.CanPlay
// 0x0001 (0x0001 - 0x0000)
struct BinkMediaPlayer_CanPlay final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function BinkMediaPlayer.BinkMediaPlayer.GetDuration
// 0x0008 (0x0008 - 0x0000)
struct BinkMediaPlayer_GetDuration final
{
public:
	struct FTimespan                              ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function BinkMediaPlayer.BinkMediaPlayer.GetRate
// 0x0004 (0x0004 - 0x0000)
struct BinkMediaPlayer_GetRate final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function BinkMediaPlayer.BinkMediaPlayer.GetTime
// 0x0008 (0x0008 - 0x0000)
struct BinkMediaPlayer_GetTime final
{
public:
	struct FTimespan                              ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function BinkMediaPlayer.BinkMediaPlayer.GetUrl
// 0x0010 (0x0010 - 0x0000)
struct BinkMediaPlayer_GetUrl final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function BinkMediaPlayer.BinkMediaPlayer.IsInitialized
// 0x0001 (0x0001 - 0x0000)
struct BinkMediaPlayer_IsInitialized final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function BinkMediaPlayer.BinkMediaPlayer.IsLooping
// 0x0001 (0x0001 - 0x0000)
struct BinkMediaPlayer_IsLooping final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function BinkMediaPlayer.BinkMediaPlayer.IsPaused
// 0x0001 (0x0001 - 0x0000)
struct BinkMediaPlayer_IsPaused final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function BinkMediaPlayer.BinkMediaPlayer.IsPlaying
// 0x0001 (0x0001 - 0x0000)
struct BinkMediaPlayer_IsPlaying final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function BinkMediaPlayer.BinkMediaPlayer.IsStopped
// 0x0001 (0x0001 - 0x0000)
struct BinkMediaPlayer_IsStopped final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function BinkMediaPlayer.BinkMediaPlayer.SupportsRate
// 0x0008 (0x0008 - 0x0000)
struct BinkMediaPlayer_SupportsRate final
{
public:
	float                                         Rate;                                              // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          Unthinned;                                         // 0x0004(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0005(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function BinkMediaPlayer.BinkMediaPlayer.SupportsScrubbing
// 0x0001 (0x0001 - 0x0000)
struct BinkMediaPlayer_SupportsScrubbing final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function BinkMediaPlayer.BinkMediaPlayer.SupportsSeeking
// 0x0001 (0x0001 - 0x0000)
struct BinkMediaPlayer_SupportsSeeking final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function BinkMediaPlayer.BinkMediaTexture.SetMediaPlayer
// 0x0008 (0x0008 - 0x0000)
struct BinkMediaTexture_SetMediaPlayer final
{
public:
	class UBinkMediaPlayer*                       InMediaPlayer;                                     // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
