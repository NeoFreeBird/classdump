//
#ifndef _TtC10CallEngine32CallAudioUnavailableScribeWorker_h
#define _TtC10CallEngine32CallAudioUnavailableScribeWorker_h
@import Foundation;

@class CallEngine.CallScribeEmitter, CallModels.CallAudioSessionStateStream, CallModels.CallSessionActionTriggerStream, _$s11XFoundation13CombineWorkerCN;

@interface CallEngine.CallAudioUnavailableScribeWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    CallModels.CallAudioSessionStateStream callAudioSessionStateStream;
    CallModels.CallSessionActionTriggerStream callSessionActionTriggerStream;
    CallEngine.CallScribeEmitter emitter;
}

@end

#endif /* _TtC10CallEngine32CallAudioUnavailableScribeWorker_h */
