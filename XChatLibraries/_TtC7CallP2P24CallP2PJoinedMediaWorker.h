//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC7CallP2P24CallP2PJoinedMediaWorker_h
#define _TtC7CallP2P24CallP2PJoinedMediaWorker_h
@import Foundation;

@class CallP2P.CallP2PJoinStream, CallP2P.CallP2PMediaSessionStream, CallP2P.CallP2PSessionStream, _$s11XFoundation11AsyncWorkerCN;

@interface CallP2P.CallP2PJoinedMediaWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    CallP2P.CallP2PSessionStream callP2PSessionStream;
    CallP2P.CallP2PJoinStream callP2PJoinStream;
    CallP2P.CallP2PMediaSessionStream callP2PMediaSessionStream;
}

@end

#endif /* _TtC7CallP2P24CallP2PJoinedMediaWorker_h */
