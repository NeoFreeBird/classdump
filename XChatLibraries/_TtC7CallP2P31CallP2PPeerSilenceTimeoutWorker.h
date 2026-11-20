//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC7CallP2P31CallP2PPeerSilenceTimeoutWorker_h
#define _TtC7CallP2P31CallP2PPeerSilenceTimeoutWorker_h
@import Foundation;

@class CallModels.CallConnectionStateStream, CallModels.CallPhaseStream, CallP2P.CallP2PSignalInboxStream, _$s11XFoundation11TimerStreamCMn, _$s11XFoundation13CombineWorkerCN, _$sSi;

@interface CallP2P.CallP2PPeerSilenceTimeoutWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    Swift.Int timeoutSeconds;
    nominal type descriptor for XFoundation.TimerStream timerStream;
    CallModels.CallConnectionStateStream callConnectionStateStream;
    CallModels.CallPhaseStream callPhaseStream;
    CallP2P.CallP2PSignalInboxStream callP2PSignalInboxStream;
}

@end

#endif /* _TtC7CallP2P31CallP2PPeerSilenceTimeoutWorker_h */
