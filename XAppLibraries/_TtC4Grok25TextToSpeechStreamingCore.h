//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC4Grok25TextToSpeechStreamingCore_h
#define _TtC4Grok25TextToSpeechStreamingCore_h
@import Foundation;

@class Builtin.DefaultActorStorage, Grok.TextToSpeechBufferScheduling, Grok.TextToSpeechStreamingCore _$s_ -> _$s10Foundation4DataVMn _$sSgtYbc, Swift.Bool, _$s10Foundation4DataVMn, _$s7Combine18PassthroughSubjectCMn Grok.TextToSpeechCoreEvent _$ss5NeverOMn, _$sSOSg, _$sSa -> Grok.TextToSpeechStreamingCore.ScheduleRequest, _$sSaySo8NSObject_pG, _$sScTyyt _$ss5ErrorMp ?, _$sScTyyt _$ss5NeverOMn ?, _$sSd, _$sSf, _$sSi, _$sSiSg, _$sSo13AVAudioEngineC, _$sSo13AVAudioFormatC, _$sSo17AVAudioPlayerNodeC, _$sSo20AVAudioUnitTimePitchC, _$ss5ErrorMp _$sSgYbcSg ->, _$ss6UInt32VMn, _TtCs12_SwiftObject;

@interface Grok.TextToSpeechStreamingCore : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Builtin.DefaultActorStorage $defaultActor;
    Swift.Double sampleRate;
    nominal type descriptor for Swift.UInt32 channels;
    Swift.Int bitsPerSample;
    Swift.Double minBufferDuration;
    Swift.Double prebufferTarget;
    __C.AVAudioEngine engine;
    __C.AVAudioPlayerNode player;
    __C.AVAudioUnitTimePitch timePitch;
    __C.AVAudioFormat format;
    nominal type descriptor for Foundation.Data fullBuffer;
    nominal type descriptor for Foundation.Data accumulator;
    Swift.Double scheduledSecondsAhead;
    Swift.Int scheduleEpoch;
    Swift.Array -> Grok.TextToSpeechStreamingCore.ScheduleRequest scheduleRequests;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? scheduleSubmissionTask;
    Swift.Int? activeScheduleSubmissionID;
    Swift.Int nextScheduleSubmissionID;
    Grok.TextToSpeechBufferScheduling bufferScheduler;
    Swift.Double timeBaseSeconds;
    Swift.Bool streamClosing;
    Swift.Bool isPlaybackDesired;
    Swift.Bool isSuspendedForInterruption;
    Swift.Bool isSessionDeactivating;
    Swift.Bool isInvalidated;
    Swift.Bool didEmitPlaybackSessionCompletion;
    Swift.Int fadeToken;
    Swift.Bool hasCalledOnFullData;
    Swift.Float speed;
    Swift.Double lastTime;
    Swift.ObjectIdentifier? connectedPlayerID;
    [__C.NSObject] observers;
    Swift.Task empty-list () protocol descriptor for Swift.Error ? ticker;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? streamTask;
    nominal type descriptor for Combine.PassthroughSubject Grok.TextToSpeechCoreEvent nominal type descriptor for Swift.Never eventSubject;
    Grok.TextToSpeechStreamingCore  first-element-marker  -> nominal type descriptor for Foundation.Data _$sSgtYbc onFullData;
    protocol descriptor for Swift.Error _$sSgYbcSg -> onInvalidated;
}

@end

#endif /* _TtC4Grok25TextToSpeechStreamingCore_h */
