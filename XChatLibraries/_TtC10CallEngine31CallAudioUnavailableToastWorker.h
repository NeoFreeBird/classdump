//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
