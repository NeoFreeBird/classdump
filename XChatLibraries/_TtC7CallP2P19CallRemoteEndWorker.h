//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC7CallP2P19CallRemoteEndWorker_h
#define _TtC7CallP2P19CallRemoteEndWorker_h
@import Foundation;

@class CallMedia.CallStateChannelStream, CallModels.CallConnectionStateStream, CallP2P.CallP2PSessionStream, CallP2P.CallRemoteEndStream, _$s11XFoundation13CombineWorkerCN;

@interface CallP2P.CallRemoteEndWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    CallP2P.CallRemoteEndStream callRemoteEndStream;
    CallModels.CallConnectionStateStream callConnectionStateStream;
    CallP2P.CallP2PSessionStream callP2PSessionStream;
    CallMedia.CallStateChannelStream callStateChannelStream;
}

@end

#endif /* _TtC7CallP2P19CallRemoteEndWorker_h */
