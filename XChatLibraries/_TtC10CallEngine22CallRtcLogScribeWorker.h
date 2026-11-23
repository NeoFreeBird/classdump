//
#ifndef _TtC10CallEngine22CallRtcLogScribeWorker_h
#define _TtC10CallEngine22CallRtcLogScribeWorker_h
@import Foundation;

@class CallEngine.CallRtcLogScribeWorker.Line ?, CallEngine.CallScribeEmitter, DispatchQueue, _$s11XFoundation13CombineWorkerCN, _$sSi, _$sSiSg, _$sSo17RTCCallbackLoggerC, __C.RTCLoggingSeverity;

@interface CallEngine.CallRtcLogScribeWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    CallEngine.CallScribeEmitter emitter;
    __C.RTCLoggingSeverity severity;
    Swift.Int? maxPerCall;
    __C.RTCCallbackLogger logger;
    DispatchQueue queue;
    Swift.Int emittedCount;
    Swift.Int droppedCount;
    CallEngine.CallRtcLogScribeWorker.Line ? lastLine;
    Swift.Int lastLineRepeats;
}

@end

#endif /* _TtC10CallEngine22CallRtcLogScribeWorker_h */
