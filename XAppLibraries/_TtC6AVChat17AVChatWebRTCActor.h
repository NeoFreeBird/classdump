//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC6AVChat17AVChatWebRTCActor_h
#define _TtC6AVChat17AVChatWebRTCActor_h
@import Foundation;

#include "RTCPeerConnectionDelegate-Protocol.h"

@class Builtin.DefaultActorStorage, Chat.AVChatAudioEncoding, Chat.AVChatWebRTCActorDelegate ?, Swift.Bool, SwiftNativeNSObject, _$s7Combine9PublishedVMn AVChat.CaptureVideoSettings ?, _$s7Combine9PublishedVMn Swift.Bool, _$sSD -> _$ss5Int64VMn _$sSaySo15RTCIceCandidateCG, _$sSD -> _$ss5Int64VMn _$sSo17RTCPeerConnectionC, _$sSo12RTCRtpSenderCSg, _$sSo13RTCAudioTrackCSg, _$sSo13RTCVideoTrackCSg, _$sSo14RTCAudioSourceCSg, _$sSo14RTCVideoSourceCSg, _$sSo17RTCCallbackLoggerCSg, _$sSo22RTCCameraVideoCapturerCSg, _$sSo24RTCPeerConnectionFactoryC, _$ss5Int64VMn, _$sypSg;

@interface AVChat.AVChatWebRTCActor : SwiftNativeNSObject <RTCPeerConnectionDelegate> { // (Swift)
    /* instance variables */
    Builtin.DefaultActorStorage $defaultActor;
    oneway _Atomic Chat.AVChatWebRTCActorDelegate ? delegate;
    nominal type descriptor for Combine.Published AVChat.CaptureVideoSettings ? _currentLocalVideoSettings;
    nominal type descriptor for Combine.Published Swift.Bool _isCaptureInterrupted;
    Any? _interruptionStartedObserver;
    Any? _interruptionEndedObserver;
    __C.RTCPeerConnectionFactory _peerConnectionFactory;
    Swift.Dictionary -> nominal type descriptor for Swift.Int64 __C.RTCPeerConnection _peerConnections;
    __C.RTCRtpSender? _localVideoSender;
    Swift.Dictionary -> nominal type descriptor for Swift.Int64 [__C.RTCIceCandidate] _pendingIceCandidatesToAdd;
    Swift.Dictionary -> nominal type descriptor for Swift.Int64 [__C.RTCIceCandidate] _pendingIceCandidatesToRemove;
    Swift.Bool _allowsPartialIceCandidateRemoval;
    Swift.Bool isMicrophoneEnabled;
    Swift.Bool isCameraEnabled;
    Swift.Bool isCaptureEnabled;
    __C.RTCAudioSource? $__lazy_storage_$_localAudioSource;
    __C.RTCAudioTrack? $__lazy_storage_$_localAudioTrack;
    __C.RTCVideoSource? $__lazy_storage_$_localVideoSource;
    __C.RTCVideoTrack? $__lazy_storage_$_localVideoTrack;
    __C.RTCCameraVideoCapturer? $__lazy_storage_$_localCameraVideoCapturer;
    nominal type descriptor for Swift.Int64 _localUserID;
    Swift.Bool _isAudioOnly;
    oneway _Atomic Chat.AVChatAudioEncoding _audioEncoding;
    __C.RTCCallbackLogger? _webRTCLogger;
}

/* instance methods */
- (void)peerConnection:(id)connection didAddStream:(id)stream;
- (void)peerConnection:(id)connection didAddReceiver:(id)receiver streams:(id)streams;
- (void)peerConnection:(id)connection didChangeIceConnectionState:(long long)state;
- (void)peerConnection:(id)connection didGenerateIceCandidate:(id)candidate;
- (void)peerConnection:(id)connection didRemoveIceCandidates:(id)candidates;
- (void)peerConnection:(id)connection didChangeIceGatheringState:(long long)state;
- (void)peerConnection:(id)connection didRemoveStream:(id)stream;
- (void)peerConnectionShouldNegotiate:(id)negotiate;
- (void)peerConnection:(id)connection didChangeSignalingState:(long long)state;
- (void)peerConnection:(id)connection didOpenDataChannel:(id)channel;
- (void)peerConnection:(id)connection didChangeStandardizedIceConnectionState:(long long)state;
- (void)peerConnection:(id)connection didChangeConnectionState:(long long)state;
- (void)peerConnection:(id)connection didStartReceivingOnTransceiver:(id)transceiver;
- (void)peerConnection:(id)connection didRemoveReceiver:(id)receiver;
- (void)peerConnection:(id)connection didChangeLocalCandidate:(id)candidate remoteCandidate:(id)candidate lastReceivedMs:(int)ms changeReason:(id)reason;
- (void)peerConnection:(id)connection didFailToGatherIceCandidate:(id)candidate;
- (id)init;

@end

#endif /* _TtC6AVChat17AVChatWebRTCActor_h */
