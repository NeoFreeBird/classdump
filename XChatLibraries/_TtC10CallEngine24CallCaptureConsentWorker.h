//
#ifndef _TtC10CallEngine24CallCaptureConsentWorker_h
#define _TtC10CallEngine24CallCaptureConsentWorker_h
@import Foundation;

@class CallModels.CallCaptureConsentStream, CallModels.CallCaptureNoticeStream, CallModels.CallConnectionStateStream, CallModels.CallSessionActionTriggerStream, _$s11XFoundation13CombineWorkerCN;

@interface CallEngine.CallCaptureConsentWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    CallModels.CallCaptureNoticeStream callCaptureNoticeStream;
    CallModels.CallSessionActionTriggerStream callSessionActionTriggerStream;
    CallModels.CallConnectionStateStream callConnectionStateStream;
    CallModels.CallCaptureConsentStream callCaptureConsentStream;
}

@end

#endif /* _TtC10CallEngine24CallCaptureConsentWorker_h */
