//
#ifndef _TtC10CallEngine37CallNetworkChangeRtcStatsScribeWorker_h
#define _TtC10CallEngine37CallNetworkChangeRtcStatsScribeWorker_h
@import Foundation;

@class CallEngine.CallScribeEmitter, CallMedia.CallMediaSessionControlling, CallMedia.CallNetworkPathStream, _$s11XFoundation11AsyncWorkerCN;

@interface CallEngine.CallNetworkChangeRtcStatsScribeWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    CallMedia.CallNetworkPathStream callNetworkPathStream;
    CallMedia.CallMediaSessionControlling callMediaSessionStream;
    CallEngine.CallScribeEmitter emitter;
}

@end

#endif /* _TtC10CallEngine37CallNetworkChangeRtcStatsScribeWorker_h */
