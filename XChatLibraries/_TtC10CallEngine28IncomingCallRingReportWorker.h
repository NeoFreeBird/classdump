//
#ifndef _TtC10CallEngine28IncomingCallRingReportWorker_h
#define _TtC10CallEngine28IncomingCallRingReportWorker_h
@import Foundation;

@class CallEngine.CallBackgroundTaskRunning, CallFeatureSwitches.CallFeatures _$sSSc, CallMedia.CallRequestHeaderProvider _$sSSc, CallModels.CallRingReportStream, _$s11XFoundation13CombineWorkerCN, _$sSa -> CallModels.CallID;

@interface CallEngine.IncomingCallRingReportWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    CallModels.CallRingReportStream callRingReportStream;
    CallMedia.CallRequestHeaderProvider _$sSSc requestHeaderProvider;
    CallFeatureSwitches.CallFeatures _$sSSc callFeaturesProvider;
    CallEngine.CallBackgroundTaskRunning backgroundTaskRunner;
    Swift.Array -> CallModels.CallID reportedCallIDs;
}

@end

#endif /* _TtC10CallEngine28IncomingCallRingReportWorker_h */
