//
#ifndef RTCPeerConnectionDelegate_Protocol_h
#define RTCPeerConnectionDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol RTCPeerConnectionDelegate <NSObject>

@required

/* required instance methods */
- (void)peerConnection:(id)connection didChangeSignalingState:(long long)state;
- (void)peerConnection:(id)connection didChangeSignalingState:(long long)state;
- (void)peerConnection:(id)connection didAddStream:(id)stream;
- (void)peerConnection:(id)connection didAddStream:(id)stream;
- (void)peerConnection:(id)connection didRemoveStream:(id)stream;
- (void)peerConnection:(id)connection didRemoveStream:(id)stream;
- (void)peerConnectionShouldNegotiate:(id)negotiate;
- (void)peerConnection:(id)connection didChangeIceConnectionState:(long long)state;
- (void)peerConnection:(id)connection didChangeIceConnectionState:(long long)state;
- (void)peerConnection:(id)connection didChangeIceGatheringState:(long long)state;
- (void)peerConnection:(id)connection didChangeIceGatheringState:(long long)state;
- (void)peerConnection:(id)connection didGenerateIceCandidate:(id)candidate;
- (void)peerConnection:(id)connection didGenerateIceCandidate:(id)candidate;
- (void)peerConnection:(id)connection didRemoveIceCandidates:(id)candidates;
- (void)peerConnection:(id)connection didRemoveIceCandidates:(id)candidates;
- (void)peerConnection:(id)connection didOpenDataChannel:(id)channel;
- (void)peerConnection:(id)connection didOpenDataChannel:(id)channel;

@optional

/* optional instance methods */
- (void)peerConnection:(id)connection didChangeStandardizedIceConnectionState:(long long)state;
- (void)peerConnection:(id)connection didChangeConnectionState:(long long)state;
- (void)peerConnection:(id)connection didChangeConnectionState:(long long)state;
- (void)peerConnection:(id)connection didStartReceivingOnTransceiver:(id)transceiver;
- (void)peerConnection:(id)connection didStartReceivingOnTransceiver:(id)transceiver;
- (void)peerConnection:(id)connection didAddReceiver:(id)receiver streams:(id)streams;
- (void)peerConnection:(id)connection didAddReceiver:(id)receiver streams:(id)streams;
- (void)peerConnection:(id)connection didRemoveReceiver:(id)receiver;
- (void)peerConnection:(id)connection didRemoveReceiver:(id)receiver;
- (void)peerConnection:(id)connection didChangeLocalCandidate:(id)candidate remoteCandidate:(id)candidate lastReceivedMs:(int)ms changeReason:(id)reason;
- (void)peerConnection:(id)connection didFailToGatherIceCandidate:(id)candidate;

@end

#endif /* RTCPeerConnectionDelegate_Protocol_h */
