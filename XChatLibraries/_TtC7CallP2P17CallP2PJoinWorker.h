//
#ifndef _TtC7CallP2P17CallP2PJoinWorker_h
#define _TtC7CallP2P17CallP2PJoinWorker_h
@import Foundation;

@class CallMedia.CallBatchClient, CallMedia.CallDiagnosticsStream, CallModels.CallConfiguration, CallModels.CallRingReport ?, CallP2P.CallP2PJoinStream, CallP2P.CallRemoteEndStream, _$s11XFoundation11AsyncWorkerCN, _$s11XFoundation11TimerStreamCMn;

@interface CallP2P.CallP2PJoinWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    CallModels.CallConfiguration configuration;
    CallModels.CallRingReport ? ringReport;
    CallMedia.CallBatchClient batchClient;
    nominal type descriptor for XFoundation.TimerStream timerStream;
    CallP2P.CallP2PJoinStream callP2PJoinStream;
    CallP2P.CallRemoteEndStream callRemoteEndStream;
    CallMedia.CallDiagnosticsStream callDiagnosticsStream;
}

@end

#endif /* _TtC7CallP2P17CallP2PJoinWorker_h */
