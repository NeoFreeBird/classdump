//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10CallEngine22CallKitReportingWorker_h
#define _TtC10CallEngine22CallKitReportingWorker_h
@import Foundation;

@class CallModels.CallConnectionStateStream, CallModels.CallKitIntegration, CallModels.CallPhaseStream, CallModels.CallSessionActionTriggerStream, CallModels.LocalMediaStateStream, _$s10Foundation4UUIDVMn, _$s11XFoundation13CombineWorkerCN;

@interface CallEngine.CallKitReportingWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    nominal type descriptor for Foundation.UUID callUUID;
    CallModels.CallKitIntegration callKitIntegration;
    CallModels.CallSessionActionTriggerStream callSessionActionTriggerStream;
    CallModels.CallConnectionStateStream callConnectionStateStream;
    CallModels.CallPhaseStream callPhaseStream;
    CallModels.LocalMediaStateStream localMediaStateStream;
}

@end

#endif /* _TtC10CallEngine22CallKitReportingWorker_h */
