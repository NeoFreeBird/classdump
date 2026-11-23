//
#ifndef _TtC10CallEngine16CallScribeWorker_h
#define _TtC10CallEngine16CallScribeWorker_h
@import Foundation;

@class CallEngine.CallScribeEmitter, CallMedia.CallDiagnosticsStream, CallMedia.CallDownlinkStream, CallMedia.CallMediaSessionControlling, CallMedia.CallMediaStatisticsStream, CallMedia.CallNetworkPathStream, CallModels.CallConnectionStateStream, CallModels.CallPhaseStream, DispatchQueue, Swift.Bool, _$s11XFoundation13CombineWorkerCN;

@interface CallEngine.CallScribeWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    CallModels.CallConnectionStateStream callConnectionStateStream;
    CallModels.CallPhaseStream callPhaseStream;
    CallMedia.CallDiagnosticsStream callDiagnosticsStream;
    CallMedia.CallNetworkPathStream callNetworkPathStream;
    CallMedia.CallMediaSessionControlling callMediaSessionStream;
    CallMedia.CallMediaStatisticsStream callMediaStatisticsStream;
    CallMedia.CallDownlinkStream callDownlinkStream;
    CallEngine.CallScribeEmitter emitter;
    Swift.Bool isActiveOnDownlinkEnabled;
    DispatchQueue queue;
}

@end

#endif /* _TtC10CallEngine16CallScribeWorker_h */
