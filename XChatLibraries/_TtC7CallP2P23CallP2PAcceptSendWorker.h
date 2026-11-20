//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC7CallP2P23CallP2PAcceptSendWorker_h
#define _TtC7CallP2P23CallP2PAcceptSendWorker_h
@import Foundation;

@class CallMedia.CallStateChannelStream, CallP2P.CallP2PJoinStream, CallP2P.CallP2PSessionStream, _$s11XFoundation13CombineWorkerCN;

@interface CallP2P.CallP2PAcceptSendWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    CallMedia.CallStateChannelStream callStateChannelStream;
    CallP2P.CallP2PSessionStream callP2PSessionStream;
    CallP2P.CallP2PJoinStream callP2PJoinStream;
}

@end

#endif /* _TtC7CallP2P23CallP2PAcceptSendWorker_h */
