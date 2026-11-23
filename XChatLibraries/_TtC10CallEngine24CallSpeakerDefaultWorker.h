//
#ifndef _TtC10CallEngine24CallSpeakerDefaultWorker_h
#define _TtC10CallEngine24CallSpeakerDefaultWorker_h
@import Foundation;

@class CallEngine.CallAudioRouting, CallModels.CallAudioRouteStream, CallModels.CallAudioSessionStateStream, CallModels.CallSessionActionTriggerStream, _$s11XFoundation13CombineWorkerCN;

@interface CallEngine.CallSpeakerDefaultWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    CallEngine.CallAudioRouting callAudioRouter;
    CallModels.CallAudioRouteStream callAudioRouteStream;
    CallModels.CallAudioSessionStateStream callAudioSessionStateStream;
    CallModels.CallSessionActionTriggerStream callSessionActionTriggerStream;
}

@end

#endif /* _TtC10CallEngine24CallSpeakerDefaultWorker_h */
