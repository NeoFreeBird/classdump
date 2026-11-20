//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC17GrokVoiceRealtime16VoiceAudioEngine_h
#define _TtC17GrokVoiceRealtime16VoiceAudioEngine_h
@import Foundation;

@class GrokVoiceRealtime.AudioEngineOutputGraph ?, GrokVoiceRealtime.AudioInterruptionHandler, GrokVoiceRealtime.CallObserver, GrokVoiceRealtime.DeferredRebuild ?, GrokVoiceRealtime.SharedAudioSession.Token ?, GrokVoiceRealtime.VoiceAudioEngineDelegate ?, Swift.Bool, _$sSbSg, _$sScTyyt _$ss5NeverOMn ?, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSo11NSHashTableCy17GrokVoiceRealtime20AudioOutputProducing_pG, _$sSo11NSHashTableCy17GrokVoiceRealtime24MicrophoneInputListening_pG, _$sSo13AVAudioEngineC, _$sSo6NSLockC, _TtCs12_SwiftObject;

@interface GrokVoiceRealtime.VoiceAudioEngine : Swift._SwiftObject { // (Swift)
    /* instance variables */
    GrokVoiceRealtime.VoiceAudioEngineDelegate ? delegate;
    Swift.Bool isTapInstalled;
    Swift.Bool isAppActive;
    GrokVoiceRealtime.DeferredRebuild ? pendingRebuild;
    __C.NSHashTable<GrokVoiceRealtime.MicrophoneInputListening> listeners;
    __C.NSHashTable<GrokVoiceRealtime.AudioOutputProducing> producers;
    __C.NSLock lock;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? removeTapTask;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? callEndedRebuildTask;
    Swift.Bool tapAudioReceived;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? deafnessTrackingTask;
    Swift.Bool? lastFarFieldSpeakerStatus;
    Swift.Bool? lastOnDeviceMicStatus;
    GrokVoiceRealtime.SharedAudioSession.Token ? audioSessionToken;
    Swift.Bool skipDeferredRebuild;
    GrokVoiceRealtime.AudioInterruptionHandler interruptionHandler;
    GrokVoiceRealtime.CallObserver callObserver;
    __C.AVAudioEngine engine;
    GrokVoiceRealtime.AudioEngineOutputGraph ? outputGraph;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable cancellables;
}

@end

#endif /* _TtC17GrokVoiceRealtime16VoiceAudioEngine_h */
