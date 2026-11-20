//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC7CallP2P21CallRingTimeoutWorker_h
#define _TtC7CallP2P21CallRingTimeoutWorker_h
@import Foundation;

@class CallModels.CallConnectionStateStream, CallModels.CallPhaseStream, CallP2P.CallP2PAnswerStream, CallP2P.CallP2PAnsweredSessionStream, _$s11XFoundation11TimerStreamCMn, _$s11XFoundation13CombineWorkerCN, _$sSi;

@interface CallP2P.CallRingTimeoutWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    Swift.Int ringTimeoutSeconds;
    nominal type descriptor for XFoundation.TimerStream timerStream;
    CallModels.CallPhaseStream callPhaseStream;
    CallModels.CallConnectionStateStream callConnectionStateStream;
    CallP2P.CallP2PAnswerStream callP2PAnswerStream;
    CallP2P.CallP2PAnsweredSessionStream callP2PAnsweredSessionStream;
}

@end

#endif /* _TtC7CallP2P21CallRingTimeoutWorker_h */
