//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC7CallP2P23CallP2PSignalPollWorker_h
#define _TtC7CallP2P23CallP2PSignalPollWorker_h
@import Foundation;

@class CallModels.CallConnectionStateStream, CallP2P.CallP2PAnsweredSessionStream, CallP2P.CallP2PJoinStream, CallP2P.CallP2PMediaSessionControlling, CallP2P.CallP2PSessionStream, CallP2P.CallP2PSignalInboxStream, CallP2P.CallRemoteEndStream, CallP2P.P2PSignalingApi, _$s11XFoundation11AsyncWorkerCN;

@interface CallP2P.CallP2PSignalPollWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    CallP2P.P2PSignalingApi signalingApi;
    CallP2P.CallP2PSessionStream callP2PSessionStream;
    CallP2P.CallP2PSignalInboxStream callP2PSignalInboxStream;
    CallP2P.CallP2PAnsweredSessionStream callP2PAnsweredSessionStream;
    CallP2P.CallP2PMediaSessionControlling callP2PMediaSessionStream;
    CallModels.CallConnectionStateStream callConnectionStateStream;
    CallP2P.CallRemoteEndStream callRemoteEndStream;
    CallP2P.CallP2PJoinStream callP2PJoinStream;
}

@end

#endif /* _TtC7CallP2P23CallP2PSignalPollWorker_h */
