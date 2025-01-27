#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CameraCalibrationCore

#include "Basic.hpp"

#include "CameraCalibrationCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "ProceduralMeshComponent_classes.hpp"
#include "CinematicCamera_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "DeveloperSettings_classes.hpp"


namespace SDK
{

// Class CameraCalibrationCore.CameraCalibrationSettings
// 0x0140 (0x0178 - 0x0038)
class UCameraCalibrationSettings final : public UDeveloperSettings
{
public:
	TSoftObjectPtr<class ULensFile>               StartupLensFile;                                   // 0x0038(0x0030)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FIntPoint                              DisplacementMapResolution;                         // 0x0068(0x0008)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         CalibrationInputTolerance;                         // 0x0070(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_74[0x4];                                       // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<TSubclassOf<class ULensDistortionModelHandlerBase>, TSoftObjectPtr<class UMaterialInterface>> DefaultUndistortionDisplacementMaterials;          // 0x0078(0x0050)(Config, UObjectWrapper, NativeAccessSpecifierPrivate)
	TMap<TSubclassOf<class ULensDistortionModelHandlerBase>, TSoftObjectPtr<class UMaterialInterface>> DefaultDistortionDisplacementMaterials;            // 0x00C8(0x0050)(Config, UObjectWrapper, NativeAccessSpecifierPrivate)
	TMap<TSubclassOf<class ULensDistortionModelHandlerBase>, TSoftObjectPtr<class UMaterialInterface>> DefaultDistortionMaterials;                        // 0x0118(0x0050)(Config, UObjectWrapper, NativeAccessSpecifierPrivate)
	bool                                          bEnableCalibrationDatasetImportExport;             // 0x0168(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_169[0xF];                                      // 0x0169(0x000F)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CameraCalibrationSettings">();
	}
	static class UCameraCalibrationSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCameraCalibrationSettings>();
	}
};

// Class CameraCalibrationCore.LensDistortionModelHandlerBase
// 0x0090 (0x00B8 - 0x0028)
class ULensDistortionModelHandlerBase : public UObject
{
public:
	TSubclassOf<class ULensModel>                 LensModelClass;                                    // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, EditConst, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*               DistortionPostProcessMID;                          // 0x0030(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLensDistortionState                   CurrentState;                                      // 0x0038(0x0020)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FCameraFilmbackSettings                CameraFilmback;                                    // 0x0058(0x000C)(Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                         Pad_64[0x4];                                       // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 DisplayName;                                       // 0x0068(0x0010)(Edit, ZeroConstructor, EditConst, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         OverscanFactor;                                    // 0x0078(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_7C[0x4];                                       // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               UndistortionDisplacementMapMID;                    // 0x0080(0x0008)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*               DistortionDisplacementMapMID;                      // 0x0088(0x0008)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextureRenderTarget2D*                 UndistortionDisplacementMapRT;                     // 0x0090(0x0008)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextureRenderTarget2D*                 DistortionDisplacementMapRT;                       // 0x0098(0x0008)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGuid                                  DistortionProducerID;                              // 0x00A0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_B0[0x8];                                       // 0x00B0(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void SetDistortionState(const struct FLensDistortionState& InNewState);

	class UTextureRenderTarget2D* GetDistortionDisplacementMap() const;
	class UTextureRenderTarget2D* GetUndistortionDisplacementMap() const;
	bool IsModelSupported(const TSubclassOf<class ULensModel>& ModelToSupport) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LensDistortionModelHandlerBase">();
	}
	static class ULensDistortionModelHandlerBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULensDistortionModelHandlerBase>();
	}
};

// Class CameraCalibrationCore.CameraCalibrationEditorSettings
// 0x0000 (0x0038 - 0x0038)
class UCameraCalibrationEditorSettings final : public UDeveloperSettings
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CameraCalibrationEditorSettings">();
	}
	static class UCameraCalibrationEditorSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCameraCalibrationEditorSettings>();
	}
};

// Class CameraCalibrationCore.AnamorphicLensDistortionModelHandler
// 0x0038 (0x00F0 - 0x00B8)
class UAnamorphicLensDistortionModelHandler final : public ULensDistortionModelHandlerBase
{
public:
	uint8                                         Pad_B8[0x38];                                      // 0x00B8(0x0038)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AnamorphicLensDistortionModelHandler">();
	}
	static class UAnamorphicLensDistortionModelHandler* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnamorphicLensDistortionModelHandler>();
	}
};

// Class CameraCalibrationCore.LensModel
// 0x0000 (0x0028 - 0x0028)
class ULensModel : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LensModel">();
	}
	static class ULensModel* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULensModel>();
	}
};

// Class CameraCalibrationCore.AnamorphicLensModel
// 0x0000 (0x0028 - 0x0028)
class UAnamorphicLensModel final : public ULensModel
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AnamorphicLensModel">();
	}
	static class UAnamorphicLensModel* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnamorphicLensModel>();
	}
};

// Class CameraCalibrationCore.CalibrationPointComponent
// 0x0060 (0x0570 - 0x0510)
class UCalibrationPointComponent final : public UProceduralMeshComponent
{
public:
	TMap<class FString, struct FVector>           SubPoints;                                         // 0x0510(0x0050)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                          bVisualizePointsInEditor;                          // 0x0560(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_561[0x3];                                      // 0x0561(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         PointVisualizationScale;                           // 0x0564(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ECalibrationPointVisualization                VisualizationShape;                                // 0x0568(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_569[0x7];                                      // 0x0569(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void RebuildVertices();

	void GetNamespacedPointNames(TArray<class FString>* OutNamespacedNames) const;
	bool GetWorldLocation(const class FString& InPointName, struct FVector* OutLocation) const;
	bool NamespacedSubpointName(const class FString& InSubpointName, class FString* OutNamespacedName) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CalibrationPointComponent">();
	}
	static class UCalibrationPointComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCalibrationPointComponent>();
	}
};

// Class CameraCalibrationCore.CameraCalibrationCheckerboard
// 0x0058 (0x02A0 - 0x0248)
class ACameraCalibrationCheckerboard final : public AActor
{
public:
	class USceneComponent*                        Root;                                              // 0x0248(0x0008)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCalibrationPointComponent*             TopLeft;                                           // 0x0250(0x0008)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCalibrationPointComponent*             TopRight;                                          // 0x0258(0x0008)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCalibrationPointComponent*             BottomLeft;                                        // 0x0260(0x0008)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCalibrationPointComponent*             BottomRight;                                       // 0x0268(0x0008)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCalibrationPointComponent*             Center;                                            // 0x0270(0x0008)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         NumCornerRows;                                     // 0x0278(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         NumCornerCols;                                     // 0x027C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SquareSideLength;                                  // 0x0280(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Thickness;                                         // 0x0284(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                            CubeMesh;                                          // 0x0288(0x0008)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                     OddCubeMaterial;                                   // 0x0290(0x0008)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                     EvenCubeMaterial;                                  // 0x0298(0x0008)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void Rebuild();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CameraCalibrationCheckerboard">();
	}
	static class ACameraCalibrationCheckerboard* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACameraCalibrationCheckerboard>();
	}
};

// Class CameraCalibrationCore.CameraCalibrationStep
// 0x0000 (0x0028 - 0x0028)
class UCameraCalibrationStep final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CameraCalibrationStep">();
	}
	static class UCameraCalibrationStep* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCameraCalibrationStep>();
	}
};

// Class CameraCalibrationCore.CameraCalibrationSubsystem
// 0x01F0 (0x0220 - 0x0030)
class UCameraCalibrationSubsystem final : public UEngineSubsystem
{
public:
	class ULensFile*                              DefaultLensFile;                                   // 0x0030(0x0008)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<class FName, TSubclassOf<class ULensModel>> LensModelMap;                                      // 0x0038(0x0050)(Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	TMap<class FName, TSubclassOf<class UCameraNodalOffsetAlgo>> CameraNodalOffsetAlgosMap;                         // 0x0088(0x0050)(Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	TMap<class FName, TSubclassOf<class UCameraImageCenterAlgo>> CameraImageCenterAlgosMap;                         // 0x00D8(0x0050)(Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	TMap<class FName, TSubclassOf<class UCameraCalibrationStep>> CameraCalibrationStepsMap;                         // 0x0128(0x0050)(Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                         Pad_178[0xA8];                                     // 0x0178(0x00A8)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	class ULensDistortionModelHandlerBase* FindOrCreateDistortionModelHandler(struct FDistortionHandlerPicker& DistortionHandlerPicker, const TSubclassOf<class ULensModel> LensModelClass);
	TArray<class ULensDistortionModelHandlerBase*> GetDistortionModelHandlers(class UCineCameraComponent* Component);
	void SetDefaultLensFile(class ULensFile* NewDefaultLensFile);
	void UnregisterDistortionModelHandler(class UCineCameraComponent* Component, class ULensDistortionModelHandlerBase* Handler);

	class ULensDistortionModelHandlerBase* FindDistortionModelHandler(struct FDistortionHandlerPicker& DistortionHandlerPicker, bool bUpdatePicker) const;
	TSubclassOf<class UCameraCalibrationStep> GetCameraCalibrationStep(class FName Name_0) const;
	TArray<class FName> GetCameraCalibrationSteps() const;
	TSubclassOf<class UCameraImageCenterAlgo> GetCameraImageCenterAlgo(class FName Name_0) const;
	TArray<class FName> GetCameraImageCenterAlgos() const;
	TSubclassOf<class UCameraNodalOffsetAlgo> GetCameraNodalOffsetAlgo(class FName Name_0) const;
	TArray<class FName> GetCameraNodalOffsetAlgos() const;
	class ULensFile* GetDefaultLensFile() const;
	class ULensFile* GetLensFile(const struct FLensFilePicker& Picker) const;
	class UMaterialInterface* GetOverlayMaterial(const class FName& OverlayName) const;
	TArray<class FName> GetOverlayMaterialNames() const;
	TSubclassOf<class ULensModel> GetRegisteredLensModel(class FName ModelName) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CameraCalibrationSubsystem">();
	}
	static class UCameraCalibrationSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCameraCalibrationSubsystem>();
	}
};

// Class CameraCalibrationCore.CameraImageCenterAlgo
// 0x0008 (0x0030 - 0x0028)
class UCameraImageCenterAlgo final : public UObject
{
public:
	uint8                                         Pad_28[0x8];                                       // 0x0028(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CameraImageCenterAlgo">();
	}
	static class UCameraImageCenterAlgo* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCameraImageCenterAlgo>();
	}
};

// Class CameraCalibrationCore.CameraLensDistortionAlgo
// 0x0000 (0x0028 - 0x0028)
class UCameraLensDistortionAlgo final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CameraLensDistortionAlgo">();
	}
	static class UCameraLensDistortionAlgo* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCameraLensDistortionAlgo>();
	}
};

// Class CameraCalibrationCore.CameraNodalOffsetAlgo
// 0x0000 (0x0028 - 0x0028)
class UCameraNodalOffsetAlgo final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CameraNodalOffsetAlgo">();
	}
	static class UCameraNodalOffsetAlgo* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCameraNodalOffsetAlgo>();
	}
};

// Class CameraCalibrationCore.LensComponent
// 0x0198 (0x0240 - 0x00A8)
class ULensComponent final : public UActorComponent
{
public:
	struct FLensFilePicker                        LensFilePicker;                                    // 0x00A8(0x0010)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	EFIZEvaluationMode                            EvaluationMode;                                    // 0x00B8(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_B9[0x7];                                       // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FComponentReference                    TargetCameraComponent;                             // 0x00C0(0x0028)(Edit, DisableEditOnTemplate, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	struct FLensFileEvaluationInputs              EvalInputs;                                        // 0x00E8(0x001C)(Edit, EditConst, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	EDistortionSource                             DistortionStateSource;                             // 0x0104(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bApplyDistortion;                                  // 0x0105(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_106[0x2];                                      // 0x0106(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class ULensModel>                 LensModel;                                         // 0x0108(0x0008)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLensDistortionState                   DistortionState;                                   // 0x0110(0x0020)(Edit, BlueprintVisible, Interp, Protected, NativeAccessSpecifierProtected)
	bool                                          bScaleOverscan;                                    // 0x0130(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_131[0x3];                                      // 0x0131(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         OverscanMultiplier;                                // 0x0134(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	EFilmbackOverrideSource                       FilmbackOverride;                                  // 0x0138(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_139[0x3];                                      // 0x0139(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCameraFilmbackSettings                CroppedFilmback;                                   // 0x013C(0x000C)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                          bApplyNodalOffsetOnTick;                           // 0x0148(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_149[0x7];                                      // 0x0149(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             OriginalTrackedComponentTransform;                 // 0x0150(0x0030)(Edit, BlueprintVisible, EditConst, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bIsDistortionSetup;                                // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_181[0x3];                                      // 0x0181(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         OriginalFocalLength;                               // 0x0184(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*               LastDistortionMID;                                 // 0x0188(0x0008)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCineCameraComponent*                   LastCameraComponent;                               // 0x0190(0x0008)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<TSubclassOf<class ULensModel>, class ULensDistortionModelHandlerBase*> LensDistortionHandlerMap;                          // 0x0198(0x0050)(Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class USceneComponent>         TrackedComponent;                                  // 0x01E8(0x0008)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                 TrackedComponentName;                              // 0x01F0(0x0010)(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_200[0x40];                                     // 0x0200(0x0040)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void ApplyNodalOffset(class USceneComponent* ComponentToOffset, bool bUseManualInputs, float ManualFocusInput, float ManualZoomInput);
	void ClearDistortionState();
	void SetApplyDistortion(bool bApply);
	void SetApplyNodalOffsetOnTick(bool bApplyNodalOffset);
	void SetCroppedFilmback(const struct FCameraFilmbackSettings& Filmback);
	void SetDistortionSource(EDistortionSource Source);
	void SetDistortionState(const struct FLensDistortionState& State);
	void SetFilmbackOverrideSetting(EFilmbackOverrideSource Setting);
	void SetFIZEvaluationMode(EFIZEvaluationMode Mode);
	void SetLensFile(class ULensFile* LensFile);
	void SetLensFilePicker(const struct FLensFilePicker& LensFile);
	void SetLensModel(TSubclassOf<class ULensModel> Model);
	void SetOverscanMultiplier(float Multiplier);

	struct FCameraFilmbackSettings GetCroppedFilmback() const;
	EDistortionSource GetDistortionSource() const;
	struct FLensDistortionState GetDistortionState() const;
	EFilmbackOverrideSource GetFilmbackOverrideSetting() const;
	EFIZEvaluationMode GetFIZEvaluationMode() const;
	class ULensFile* GetLensFile() const;
	const struct FLensFileEvaluationInputs GetLensFileEvaluationInputs() const;
	struct FLensFilePicker GetLensFilePicker() const;
	TSubclassOf<class ULensModel> GetLensModel() const;
	float GetOriginalFocalLength() const;
	float GetOverscanMultiplier() const;
	bool ShouldApplyDistortion() const;
	bool ShouldApplyNodalOffsetOnTick() const;
	bool WasDistortionEvaluated() const;
	bool WasNodalOffsetAppliedThisTick() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LensComponent">();
	}
	static class ULensComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULensComponent>();
	}
};

// Class CameraCalibrationCore.LensFile
// 0x0280 (0x02A8 - 0x0028)
class ULensFile final : public UObject
{
public:
	uint8                                         Pad_28[0x8];                                       // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLensInfo                              LensInfo;                                          // 0x0030(0x0038)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	ELensDataMode                                 DataMode;                                          // 0x0068(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FString, class FString>            UserMetadata;                                      // 0x0070(0x0050)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FEncodersTable                         EncodersTable;                                     // 0x00C0(0x0100)(NativeAccessSpecifierPublic)
	struct FDistortionTable                       DistortionTable;                                   // 0x01C0(0x0020)(NativeAccessSpecifierPublic)
	struct FFocalLengthTable                      FocalLengthTable;                                  // 0x01E0(0x0020)(NativeAccessSpecifierPublic)
	struct FImageCenterTable                      ImageCenterTable;                                  // 0x0200(0x0020)(NativeAccessSpecifierPublic)
	struct FNodalOffsetTable                      NodalOffsetTable;                                  // 0x0220(0x0020)(NativeAccessSpecifierPublic)
	struct FSTMapTable                            STMapTable;                                        // 0x0240(0x0020)(NativeAccessSpecifierPublic)
	uint8                                         Pad_260[0x10];                                     // 0x0260(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UTextureRenderTarget2D*>         UndistortionDisplacementMapHolders;                // 0x0270(0x0010)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<class UTextureRenderTarget2D*>         DistortionDisplacementMapHolders;                  // 0x0280(0x0010)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                         Pad_290[0x18];                                     // 0x0290(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void AddDistortionPoint(float NewFocus, float NewZoom, const struct FDistortionInfo& NewPoint, const struct FFocalLengthInfo& NewFocalLength);
	void AddFocalLengthPoint(float NewFocus, float NewZoom, const struct FFocalLengthInfo& NewFocalLength);
	void AddImageCenterPoint(float NewFocus, float NewZoom, const struct FImageCenterInfo& NewPoint);
	void AddNodalOffsetPoint(float NewFocus, float NewZoom, const struct FNodalPointOffset& NewPoint);
	void AddSTMapPoint(float NewFocus, float NewZoom, const struct FSTMapInfo& NewPoint);
	void ClearAll();
	void ClearData(ELensDataCategory InDataCategory);
	void RemoveFocusPoint(ELensDataCategory InDataCategory, float InFocus);
	void RemoveZoomPoint(ELensDataCategory InDataCategory, float InFocus, float InZoom);

	bool EvaluateDistortionData(float InFocus, float InZoom, const struct FVector2D& InFilmback, class ULensDistortionModelHandlerBase* InLensHandler) const;
	bool EvaluateDistortionParameters(float InFocus, float InZoom, struct FDistortionInfo* OutEvaluatedValue) const;
	bool EvaluateFocalLength(float InFocus, float InZoom, struct FFocalLengthInfo* OutEvaluatedValue) const;
	bool EvaluateImageCenterParameters(float InFocus, float InZoom, struct FImageCenterInfo* OutEvaluatedValue) const;
	bool EvaluateNodalPointOffset(float InFocus, float InZoom, struct FNodalPointOffset* OutEvaluatedValue) const;
	float EvaluateNormalizedFocus(float InNormalizedValue) const;
	float EvaluateNormalizedIris(float InNormalizedValue) const;
	bool GetDistortionPoint(float InFocus, float InZoom, struct FDistortionInfo* OutDistortionInfo) const;
	TArray<struct FDistortionPointInfo> GetDistortionPoints() const;
	bool GetFocalLengthPoint(float InFocus, float InZoom, struct FFocalLengthInfo* OutFocalLengthInfo) const;
	TArray<struct FFocalLengthPointInfo> GetFocalLengthPoints() const;
	bool GetImageCenterPoint(float InFocus, float InZoom, struct FImageCenterInfo* OutImageCenterInfo) const;
	TArray<struct FImageCenterPointInfo> GetImageCenterPoints() const;
	bool GetNodalOffsetPoint(float InFocus, float InZoom, struct FNodalPointOffset* OutNodalPointOffset) const;
	TArray<struct FNodalOffsetPointInfo> GetNodalOffsetPoints() const;
	bool GetSTMapPoint(float InFocus, float InZoom, struct FSTMapInfo* OutSTMapInfo) const;
	TArray<struct FSTMapPointInfo> GetSTMapPoints() const;
	int32 GetTotalPointNum(ELensDataCategory InDataCategory) const;
	bool HasFocusEncoderMapping() const;
	bool HasIrisEncoderMapping() const;
	bool HasSamples(ELensDataCategory InDataCategory) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LensFile">();
	}
	static class ULensFile* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULensFile>();
	}
};

// Class CameraCalibrationCore.SphericalLensDistortionModelHandler
// 0x0018 (0x00D0 - 0x00B8)
class USphericalLensDistortionModelHandler final : public ULensDistortionModelHandlerBase
{
public:
	uint8                                         Pad_B8[0x18];                                      // 0x00B8(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SphericalLensDistortionModelHandler">();
	}
	static class USphericalLensDistortionModelHandler* GetDefaultObj()
	{
		return GetDefaultObjImpl<USphericalLensDistortionModelHandler>();
	}
};

// Class CameraCalibrationCore.SphericalLensModel
// 0x0000 (0x0028 - 0x0028)
class USphericalLensModel final : public ULensModel
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SphericalLensModel">();
	}
	static class USphericalLensModel* GetDefaultObj()
	{
		return GetDefaultObjImpl<USphericalLensModel>();
	}
};

}

