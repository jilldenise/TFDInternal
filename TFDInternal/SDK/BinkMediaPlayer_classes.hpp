#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BinkMediaPlayer

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "BinkMediaPlayer_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class BinkMediaPlayer.BinkFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UBinkFunctionLibrary final : public UBlueprintFunctionLibrary
{
public:
	static void Bink_DrawOverlays();
	static struct FTimespan BinkLoadingMovie_GetDuration();
	static struct FTimespan BinkLoadingMovie_GetTime();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BinkFunctionLibrary">();
	}
	static class UBinkFunctionLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBinkFunctionLibrary>();
	}
};

// Class BinkMediaPlayer.BinkMediaPlayer
// 0x00D8 (0x0100 - 0x0028)
class UBinkMediaPlayer final : public UObject
{
public:
	uint8                                         Pad_28[0x8];                                       // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnMediaClosed;                                     // 0x0030(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnMediaOpened;                                     // 0x0040(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnMediaReachedEnd;                                 // 0x0050(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnPlaybackSuspended;                               // 0x0060(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Looping : 1;                                       // 0x0070(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         StartImmediately : 1;                              // 0x0070(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         DelayedOpen : 1;                                   // 0x0070(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_71[0x3];                                       // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              BinkDestinationUpperLeft;                          // 0x0074(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              BinkDestinationLowerRight;                         // 0x007C(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_84[0x4];                                       // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 URL;                                               // 0x0088(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EBinkMediaPlayerBinkBufferModes               BinkBufferMode;                                    // 0x0098(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EBinkMediaPlayerBinkSoundTrack                BinkSoundTrack;                                    // 0x0099(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9A[0x2];                                       // 0x009A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         BinkSoundTrackStart;                               // 0x009C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EBinkMediaPlayerBinkDrawStyle                 BinkDrawStyle;                                     // 0x00A0(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_A1[0x3];                                       // 0x00A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         BinkLayerDepth;                                    // 0x00A4(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_A8[0x58];                                      // 0x00A8(0x0058)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void CloseUrl();
	void Draw(class UTexture* Texture, bool Tonemap, int32 Out_nits, float Alpha, bool Srgb_decode, bool Hdr);
	bool OpenUrl(const class FString& NewUrl);
	bool Pause();
	bool Play();
	bool Rewind();
	bool Seek(const struct FTimespan& InTime);
	bool SetLooping(bool InLooping);
	bool SetRate(float Rate);
	void SetVolume(float Rate);
	void Stop();

	bool CanPause() const;
	bool CanPlay() const;
	struct FTimespan GetDuration() const;
	float GetRate() const;
	struct FTimespan GetTime() const;
	class FString GetUrl() const;
	bool IsInitialized() const;
	bool IsLooping() const;
	bool IsPaused() const;
	bool IsPlaying() const;
	bool IsStopped() const;
	bool SupportsRate(float Rate, bool Unthinned) const;
	bool SupportsScrubbing() const;
	bool SupportsSeeking() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BinkMediaPlayer">();
	}
	static class UBinkMediaPlayer* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBinkMediaPlayer>();
	}
};

// Class BinkMediaPlayer.BinkMediaTexture
// 0x0040 (0x0200 - 0x01C0)
class UBinkMediaTexture final : public UTexture
{
public:
	ETextureAddress                               AddressX;                                          // 0x01C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ETextureAddress                               AddressY;                                          // 0x01C1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1C2[0x6];                                      // 0x01C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UBinkMediaPlayer*                       MediaPlayer;                                       // 0x01C8(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EPixelFormat                                  PixelFormat;                                       // 0x01D0(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          Tonemap;                                           // 0x01D1(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1D2[0x2];                                      // 0x01D2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         OutputNits;                                        // 0x01D4(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Alpha;                                             // 0x01D8(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          DecodeSRGB;                                        // 0x01DC(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1DD[0x23];                                     // 0x01DD(0x0023)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void Clear();
	void SetMediaPlayer(class UBinkMediaPlayer* InMediaPlayer);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BinkMediaTexture">();
	}
	static class UBinkMediaTexture* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBinkMediaTexture>();
	}
};

// Class BinkMediaPlayer.BinkMoviePlayerSettings
// 0x0020 (0x0048 - 0x0028)
class UBinkMoviePlayerSettings final : public UObject
{
public:
	EBinkMoviePlayerBinkBufferModes               BinkBufferMode;                                    // 0x0028(0x0001)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EBinkMoviePlayerBinkSoundTrack                BinkSoundTrack;                                    // 0x0029(0x0001)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2A[0x2];                                       // 0x002A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         BinkSoundTrackStart;                               // 0x002C(0x0004)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              BinkDestinationUpperLeft;                          // 0x0030(0x0008)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              BinkDestinationLowerRight;                         // 0x0038(0x0008)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EPixelFormat                                  BinkPixelFormat;                                   // 0x0040(0x0001)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BinkMoviePlayerSettings">();
	}
	static class UBinkMoviePlayerSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBinkMoviePlayerSettings>();
	}
};

}
