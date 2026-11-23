//
#ifndef _TtC7CallP2P23CallP2PSignalSendWorker_h
#define _TtC7CallP2P23CallP2PSignalSendWorker_h
@import Foundation;

@class CallMedia.CallBatchClient, CallMedia.CallDiagnosticsStream, CallModels.CallUserID, CallP2P.CallP2PJoinStream, CallP2P.CallP2POutboxStream, CallP2P.CallP2PSessionStream, CallP2P.CallRemoteEndStream, CallP2P.P2PSignalScope, _$s11XFoundation11AsyncWorkerCN, _$s11XFoundation11TimerStreamCMn;

@interface CallP2P.CallP2PSignalSendWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    CallP2P.P2PSignalScope scope;
    CallMedia.CallBatchClient batchClient;
    CallModels.CallUserID selfUserID;
    nominal type descriptor for XFoundation.TimerStream timerStream;
    CallP2P.CallP2PSessionStream callP2PSessionStream;
    CallP2P.CallP2POutboxStream callP2POutboxStream;
    CallP2P.CallRemoteEndStream callRemoteEndStream;
    CallMedia.CallDiagnosticsStream callDiagnosticsStream;
    CallP2P.CallP2PJoinStream callP2PJoinStream;
}

@end

#endif /* _TtC7CallP2P23CallP2PSignalSendWorker_h */
