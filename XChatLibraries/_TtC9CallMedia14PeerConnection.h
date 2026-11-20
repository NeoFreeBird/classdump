//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC9CallMedia14PeerConnection_h
#define _TtC9CallMedia14PeerConnection_h
@import Foundation;

#include "RTCPeerConnectionDelegate-Protocol.h"

@class CallMedia.UnfairLock, NSObject, _$sSa -> CallMedia.IceCandidate, _$sSo12RTCRtpSenderCSg, _$sSo17RTCPeerConnectionCSg, _$sSo17RTCRtpTransceiverCSg, _$sySo14RTCDataChannelCc, _$syyc;

@interface CallMedia.PeerConnection : NSObject <RTCPeerConnectionDelegate> { // (Swift)
    /* instance variables */
    CallMedia.UnfairLock lock;
    __C.RTCPeerConnection? rtcPeerConnection;
    __C.RTCRtpSender? audioSender;
    __C.RTCRtpTransceiver? videoTransceiver;
    Swift.Array -> CallMedia.IceCandidate queuedRemoteCandidates;
    CallMedia.IceCandidate function type (escaping) onLocalCandidate;
    () -> () onRemoteVideoTrackStarted;
    CallMedia.CallIceState function type (escaping) onIceStateChanged;
    () -> () onConnected;
    CallMedia.CallCandidatePairChange function type (escaping) onSelectedCandidatePairChanged;
    (__C.RTCDataChannel) -> () onRemoteDataChannel;
}

/* instance methods */
- (void)peerConnection:(id)connection didChangeSignalingState:(long long)state;
- (void)peerConnection:(id)connection didAddStream:(id)stream;
- (void)peerConnection:(id)connection didRemoveStream:(id)stream;
- (void)peerConnectionShouldNegotiate:(id)negotiate;
- (void)peerConnection:(id)connection didChangeIceConnectionState:(long long)state;
- (void)peerConnection:(id)connection didChangeConnectionState:(long long)state;
- (void)peerConnection:(id)connection didChangeIceGatheringState:(long long)state;
- (void)peerConnection:(id)connection didGenerateIceCandidate:(id)candidate;
- (void)peerConnection:(id)connection didRemoveIceCandidates:(id)candidates;
- (void)peerConnection:(id)connection didOpenDataChannel:(id)channel;
- (void)peerConnection:(id)connection didChangeLocalCandidate:(id)candidate remoteCandidate:(id)candidate lastReceivedMs:(int)ms changeReason:(id)reason;
- (void)peerConnection:(id)connection didStartReceivingOnTransceiver:(id)transceiver;
- (id)init;

@end

#endif /* _TtC9CallMedia14PeerConnection_h */
