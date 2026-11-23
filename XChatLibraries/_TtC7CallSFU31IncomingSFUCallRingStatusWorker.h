//
#ifndef _TtC7CallSFU31IncomingSFUCallRingStatusWorker_h
#define _TtC7CallSFU31IncomingSFUCallRingStatusWorker_h
@import Foundation;

@class CallMedia.CallRequestHeaderProvider _$sSSc, CallModels.CallKitIntegration, _$s11XFoundation11AsyncWorkerCN, _$s7Combine19CurrentValueSubjectCMn _$sySh -> _$s10Foundation4UUIDVMn _$sG _$ss5NeverOMn, _$sSbSSc;

@interface CallSFU.IncomingSFUCallRingStatusWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    CallModels.CallKitIntegration callKitIntegration;
    CallMedia.CallRequestHeaderProvider _$sSSc requestHeaderProvider;
    (Swift.String) -> Swift.Bool isEnabled;
    nominal type descriptor for Combine.CurrentValueSubject  empty-list Swift.Set -> nominal type descriptor for Foundation.UUID _$sG nominal type descriptor for Swift.Never stoppedRings;
}

@end

#endif /* _TtC7CallSFU31IncomingSFUCallRingStatusWorker_h */
