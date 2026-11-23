//
#ifndef _TtC10CallEngine31CallAudioUnavailableToastWorker_h
#define _TtC10CallEngine31CallAudioUnavailableToastWorker_h
@import Foundation;

@class CallModels.CallAudioSessionStateStream, CallModels.CallSessionActionTriggerStream, CallModels.CallToastPresenting, _$s11XFoundation13CombineWorkerCN;

@interface CallEngine.CallAudioUnavailableToastWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    CallModels.CallAudioSessionStateStream callAudioSessionStateStream;
    CallModels.CallSessionActionTriggerStream callSessionActionTriggerStream;
    CallModels.CallToastPresenting callToastPresenter;
}

@end

#endif /* _TtC10CallEngine31CallAudioUnavailableToastWorker_h */
