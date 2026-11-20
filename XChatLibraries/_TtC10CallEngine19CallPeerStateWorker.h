//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10CallEngine19CallPeerStateWorker_h
#define _TtC10CallEngine19CallPeerStateWorker_h
@import Foundation;

@class CallEngine.CallMediaTopologyStream, CallMedia.CallMediaSessionControlling, CallMedia.CallPeerStateStream, CallMedia.CallStateChannelStream, _$s11XFoundation13CombineWorkerCN;

@interface CallEngine.CallPeerStateWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    CallMedia.CallMediaSessionControlling callMediaSessionStream;
    CallMedia.CallStateChannelStream callStateChannelStream;
    CallMedia.CallPeerStateStream callPeerStateStream;
    CallEngine.CallMediaTopologyStream callMediaTopologyStream;
}

@end

#endif /* _TtC10CallEngine19CallPeerStateWorker_h */
