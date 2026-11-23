//
#ifndef _TtC7CallSFU23CallMediaRecoveryWorker_h
#define _TtC7CallSFU23CallMediaRecoveryWorker_h
@import Foundation;

@class CallMedia.CallDiagnosticsStream, CallMedia.CallDownlinkStream, CallMedia.CallMediaLossStream, CallMedia.CallMediaSessionControlling, CallMedia.CallRemoteParticipantsStream, CallModels.CallConnectionStateStream, CallSFU.CallSFUIceRestartStream, Swift.Bool, _$s11XFoundation13CombineWorkerCN, _$s7Combine12AnyPublisherVMn CallMedia.CallIceHealth _$ss5NeverOMn ?, _$sSo17OS_dispatch_queueC8DispatchE17SchedulerTimeTypeV6StrideVMn;

@interface CallSFU.CallMediaRecoveryWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    CallModels.CallConnectionStateStream callConnectionStateStream;
    CallMedia.CallMediaSessionControlling callMediaSessionStream;
    CallMedia.CallRemoteParticipantsStream callRemoteParticipantsStream;
    CallMedia.CallDownlinkStream callDownlinkStream;
    CallMedia.CallMediaLossStream callMediaLossStream;
    CallMedia.CallDiagnosticsStream callDiagnosticsStream;
    CallSFU.CallSFUIceRestartStream callSFUIceRestartStream;
    nominal type descriptor for (extension in Dispatch):__C.OS_dispatch_queue.SchedulerTimeType.Stride disconnectedWindow;
    Swift.Bool recoversInPlace;
    nominal type descriptor for Combine.AnyPublisher CallMedia.CallIceHealth nominal type descriptor for Swift.Never ? $__lazy_storage_$_sessionIceHealth;
}

@end

#endif /* _TtC7CallSFU23CallMediaRecoveryWorker_h */
