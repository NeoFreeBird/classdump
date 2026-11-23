//
#ifndef _TtC7CallP2P22CallP2PIcePolicyWorker_h
#define _TtC7CallP2P22CallP2PIcePolicyWorker_h
@import Foundation;

@class CallMedia.CallDiagnosticsStream, CallP2P.CallP2PAnswerStream, CallP2P.CallP2PIceRestartStream, CallP2P.CallP2PJoinStream, CallP2P.CallP2PMediaSessionControlling, CallP2P.CallP2POutboxStream, CallP2P.CallP2PSessionStream, CallP2P.CallP2PSignalInboxStream, CallP2P.P2PIceTransportStrategy, _$s11XFoundation11AsyncWorkerCN, _$s11XFoundation11TimerStreamCMn;

@interface CallP2P.CallP2PIcePolicyWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    CallP2P.P2PIceTransportStrategy strategy;
    nominal type descriptor for XFoundation.TimerStream timerStream;
    CallP2P.CallP2PSessionStream callP2PSessionStream;
    CallP2P.CallP2PSignalInboxStream callP2PSignalInboxStream;
    CallP2P.CallP2POutboxStream callP2POutboxStream;
    CallP2P.CallP2PIceRestartStream callP2PIceRestartStream;
    CallP2P.CallP2PMediaSessionControlling callP2PMediaSessionStream;
    CallP2P.CallP2PAnswerStream callP2PAnswerStream;
    CallP2P.CallP2PJoinStream callP2PJoinStream;
    CallMedia.CallDiagnosticsStream callDiagnosticsStream;
}

@end

#endif /* _TtC7CallP2P22CallP2PIcePolicyWorker_h */
