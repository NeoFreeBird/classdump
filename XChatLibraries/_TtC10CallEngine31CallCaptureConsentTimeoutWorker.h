//
#ifndef _TtC10CallEngine31CallCaptureConsentTimeoutWorker_h
#define _TtC10CallEngine31CallCaptureConsentTimeoutWorker_h
@import Foundation;

@class CallModels.CallCaptureConsentStream, CallModels.CallConfiguration, CallModels.CallSessionActionTriggerStream, CallModels.CallToastPresenting, _$s11XFoundation13CombineWorkerCN;

@interface CallEngine.CallCaptureConsentTimeoutWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    CallModels.CallConfiguration configuration;
    CallModels.CallCaptureConsentStream callCaptureConsentStream;
    CallModels.CallSessionActionTriggerStream callSessionActionTriggerStream;
    CallModels.CallToastPresenting callToastPresenter;
}

@end

#endif /* _TtC10CallEngine31CallCaptureConsentTimeoutWorker_h */
