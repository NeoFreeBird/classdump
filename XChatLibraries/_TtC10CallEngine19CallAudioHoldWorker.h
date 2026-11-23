//
#ifndef _TtC10CallEngine19CallAudioHoldWorker_h
#define _TtC10CallEngine19CallAudioHoldWorker_h
@import Foundation;

@class CallModels.CallKitIntegration, CallModels.CallOrigin, CallModels.CallPhaseStream, _$s10Foundation4UUIDVMn, _$s11XFoundation13CombineWorkerCN;

@interface CallEngine.CallAudioHoldWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    nominal type descriptor for Foundation.UUID callUUID;
    CallModels.CallOrigin origin;
    CallModels.CallPhaseStream callPhaseStream;
    CallModels.CallKitIntegration callKitIntegration;
}

@end

#endif /* _TtC10CallEngine19CallAudioHoldWorker_h */
