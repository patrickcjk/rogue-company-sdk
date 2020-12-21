#pragma once

// RogueCompany (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AudioMixer.SynthComponent.Stop
struct USynthComponent_Stop_Params
{
};

// Function AudioMixer.SynthComponent.start
struct USynthComponent_start_Params
{
};

// Function AudioMixer.SynthComponent.SetVolumeMultiplier
struct USynthComponent_SetVolumeMultiplier_Params
{
	float*                                             VolumeMultiplier;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioMixer.SynthComponent.SetSubmixSend
struct USynthComponent_SetSubmixSend_Params
{
	class USoundSubmix**                               Submix;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             SendLevel;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioMixer.SynthComponent.IsPlaying
struct USynthComponent_IsPlaying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.StopRecordingOutput
struct UAudioMixerBlueprintLibrary_StopRecordingOutput_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	EAudioRecordingExportType*                         ExportType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    Name;                                                     // (Parm, ZeroConstructor)
	struct FString*                                    Path;                                                     // (Parm, ZeroConstructor)
	class USoundSubmix**                               SubmixToRecord;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundWave**                                 ExistingSoundWaveToOverwrite;                             // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundWave*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.StopAnalyzingOutput
struct UAudioMixerBlueprintLibrary_StopAnalyzingOutput_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class USoundSubmix**                               SubmixToStopAnalyzing;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.StartRecordingOutput
struct UAudioMixerBlueprintLibrary_StartRecordingOutput_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ExpectedDuration;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundSubmix**                               SubmixToRecord;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.StartAnalyzingOutput
struct UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class USoundSubmix**                               SubmixToAnalyze;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	EFFTSize*                                          FFTSize;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	EFFTPeakInterpolationMethod*                       InterpolationMethod;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	EFFTWindowType*                                    WindowType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             HopSize;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.SetBypassSourceEffectChainEntry
struct UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class USoundEffectSourcePresetChain**              PresetChain;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               EntryIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bBypassed;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.ResumeRecordingOutput
struct UAudioMixerBlueprintLibrary_ResumeRecordingOutput_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class USoundSubmix**                               SubmixToPause;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSourceEffectFromPresetChain
struct UAudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class USoundEffectSourcePresetChain**              PresetChain;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               EntryIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.RemoveMasterSubmixEffect
struct UAudioMixerBlueprintLibrary_RemoveMasterSubmixEffect_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class USoundEffectSubmixPreset**                   SubmixEffectPreset;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.PauseRecordingOutput
struct UAudioMixerBlueprintLibrary_PauseRecordingOutput_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class USoundSubmix**                               SubmixToPause;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.GetPhaseForFrequencies
struct UAudioMixerBlueprintLibrary_GetPhaseForFrequencies_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<float>*                                     Frequencies;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<float>                                      Phases;                                                   // (Parm, OutParm, ZeroConstructor)
	class USoundSubmix**                               SubmixToAnalyze;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.GetNumberOfEntriesInSourceEffectChain
struct UAudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class USoundEffectSourcePresetChain**              PresetChain;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.GetMagnitudeForFrequencies
struct UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<float>*                                     Frequencies;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<float>                                      Magnitudes;                                               // (Parm, OutParm, ZeroConstructor)
	class USoundSubmix**                               SubmixToAnalyze;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.ClearMasterSubmixEffects
struct UAudioMixerBlueprintLibrary_ClearMasterSubmixEffects_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.AddSourceEffectToPresetChain
struct UAudioMixerBlueprintLibrary_AddSourceEffectToPresetChain_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class USoundEffectSourcePresetChain**              PresetChain;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSourceEffectChainEntry*                    Entry;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.AddMasterSubmixEffect
struct UAudioMixerBlueprintLibrary_AddMasterSubmixEffect_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class USoundEffectSubmixPreset**                   SubmixEffectPreset;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetSettings
struct USubmixEffectDynamicsProcessorPreset_SetSettings_Params
{
	struct FSubmixEffectDynamicsProcessorSettings*     InSettings;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function AudioMixer.SubmixEffectSubmixEQPreset.SetSettings
struct USubmixEffectSubmixEQPreset_SetSettings_Params
{
	struct FSubmixEffectSubmixEQSettings*              InSettings;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function AudioMixer.SubmixEffectReverbPreset.SetSettingsWithReverbEffect
struct USubmixEffectReverbPreset_SetSettingsWithReverbEffect_Params
{
	class UReverbEffect**                              InReverbEffect;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             WetLevel;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DryLevel;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioMixer.SubmixEffectReverbPreset.SetSettings
struct USubmixEffectReverbPreset_SetSettings_Params
{
	struct FSubmixEffectReverbSettings*                InSettings;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
