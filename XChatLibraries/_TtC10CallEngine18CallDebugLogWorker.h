//
#ifndef _TtC10CallEngine18CallDebugLogWorker_h
#define _TtC10CallEngine18CallDebugLogWorker_h
@import Foundation;

@class CallEngine.CallDebugLogStream, CallEngine.CallSimulcastGraphStream, CallMedia.CallDiagnosticsStream, CallMedia.CallNetworkPathStream, CallModels.CallConnectionStateStream, _$s11XFoundation13CombineWorkerCN;

@interface CallEngine.CallDebugLogWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    CallMedia.CallDiagnosticsStream callDiagnosticsStream;
    CallMedia.CallNetworkPathStream callNetworkPathStream;
    CallModels.CallConnectionStateStream callConnectionStateStream;
    CallEngine.CallSimulcastGraphStream callSimulcastGraphStream;
    CallEngine.CallDebugLogStream callDebugLogStream;
}

@end

#endif /* _TtC10CallEngine18CallDebugLogWorker_h */
