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
