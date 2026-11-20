//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC6AVChat23AVChatWebRTCCoordinator_h
#define _TtC6AVChat23AVChatWebRTCCoordinator_h
@import Foundation;

@class Chat.AVChatAudioSessionActor, Chat.AVChatContext, Chat.AVChatCoordinatorCallInfo, Chat.AVChatCoordinatorDelegate ?, Chat.AVChatIceTransportStrategy ?, Chat.AVChatIncomingCallPresetup ?, Chat.AVChatLoggingHandle ?, Chat.AVChatNetworkPathMonitor ?, Chat.AVChatOneToOneConversation, Chat.AVChatPollingRetryPolicy ?, Chat.AVChatSDPCapabilities, Chat.AVChatSignalingOutbox ?, Chat.AVChatUplinkStallDetector, Chat.AVChatWebRTCAPISignalingMessage message_ _$ss5Int64VMn userIDt6result_SS09broadcastC0tSg, Chat.AVChatWebRTCActor, Chat.AVChatWebRTCCoordinator.AppliedAnswer, Chat.AVChatWebRTCCoordinator.RelayFirstCheckpoint ?, Chat.AVChatWebRTCPeriscopeAPI, Chat.AVChatWebRTCPeriscopeAPISignaling ?, NSObject, Swift.Bool, _$s10Foundation4DateVMn ?, _$s13XCallContacts0A6HandleOMn, _$sSS, _$sSSSg, _$sSa -> AVChat.AVChatWebRTCAPISignalingMessage message_ _$ss5Int64VMn userIDtGSg, _$sSa -> AVChat.AVChatWebRTCCoordinator.WeakObserverWrapper, _$sSbSg, _$sScTyyt _$ss5NeverOMn ?, _$sSd, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSi, _$sSo15RTCMTLVideoViewCSg, _$sSo21RTCSessionDescriptionCSg, _$sySbcSg, __C.RTCIceConnectionState ?, __C.RTCPeerConnectionState ?;

@interface AVChat.AVChatWebRTCCoordinator : NSObject { // (Swift)
    /* instance variables */
    oneway _Atomic Chat.AVChatOneToOneConversation _conversation;
    oneway _Atomic Chat.AVChatWebRTCActor _webRTCActor;
    oneway _Atomic Chat.AVChatAudioSessionActor _audioSessionActor;
    oneway _Atomic Chat.AVChatWebRTCPeriscopeAPI _api;
    Swift.Bool _isCallSetupStateCheckEnabled;
    Swift.Bool _isIncomingCallFastAnswerEnabled;
    Swift.Bool _isIncomingCallPresetupEnabled;
    Swift.Bool _isPresetupLocalRelayEnabled;
    Swift.Bool _isInstantConnectionEnabled;
    Swift.Bool _isRingingStatusEnabled;
    oneway _Atomic Chat.AVChatSDPCapabilities _localCapabilities;
    oneway _Atomic Chat.AVChatSDPCapabilities _remoteCapabilities;
    Swift.String _deviceToken;
    Swift.Bool _optsOutOfInstantConnection;
    Swift.String? _preselectedDeviceToken;
    __C.RTCSessionDescription? _lastSentOfferSdp;
    oneway _Atomic Chat.AVChatWebRTCCoordinator.AppliedAnswer _appliedAnswer;
    nominal type descriptor for Foundation.Date ? _deviceSwitchTS;
    Swift.Bool _restartsIceOnAcceptance;
    __C.RTCPeerConnectionState ? _calledUserPeerConnectionState;
    __C.RTCIceConnectionState ? _calledUserStandardizedIceConnectionState;
    Swift.Bool _isProvisionalConnectionConfirmed;
    oneway _Atomic Chat.AVChatWebRTCAPISignalingMessage message_ nominal type descriptor for Swift.Int64 userIDt6result_SS09broadcastC0tSg _deferredPickupAnswer;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? _deferredPickupAnswerTimeoutTask;
    Swift.Bool _isRelayFirstConnectEnabled;
    Swift.Bool _isIcePresumeRelayWritableEnabled;
    Swift.Double _relayFirstUpgradeDelay;
    Swift.Bool _isRelayFirstConnectingCheckpointEnabled;
    Swift.Double _relayFirstConnectingCheckpointDelay;
    oneway _Atomic Chat.AVChatIceTransportStrategy ? _iceTransportStrategy;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? _relayFirstCheckpointTask;
    oneway _Atomic Chat.AVChatWebRTCCoordinator.RelayFirstCheckpoint ? _relayFirstCheckpoint;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? _relayFirstUpgradeCheckTask;
    Swift.Bool _relayFirstAllowsDirectCandidates;
    __C.RTCSessionDescription? _undeliveredIceRestartOffer;
    Swift.Bool _isCallRecoveryEnabled;
    Swift.Bool _isPollingRestartAfterFailureEnabled;
    Swift.Bool _isPollingConnectingDeadlineEnabled;
    Swift.Double _pollingConnectingRequestTimeout;
    Swift.Bool _isStatusPollingRateLimitBackoffEnabled;
    Swift.Bool _isSignalingNewestSDPOnlyEnabled;
    Swift.Bool _isSignalingSendBatchEnabled;
    Swift.Bool _isNetworkPathChangeRestartEnabled;
    Swift.Bool _isPartialIceCandidateRemovalEnabled;
    Swift.Bool _isIceCandidateSendFailureTolerated;
    Swift.Bool _isPathChangePollRestartEnabled;
    Swift.Bool _isInitialOfferResendEnabled;
    Swift.Bool _isMediaStatusRetryEnabled;
    Swift.Bool _isEndCallBackgroundTaskEnabled;
    oneway _Atomic Chat.AVChatPollingRetryPolicy ? _pollingRetryPolicy;
    Swift.Bool _isUplinkStallCueEnabled;
    oneway _Atomic Chat.AVChatUplinkStallDetector _uplinkStallDetector;
    oneway _Atomic Chat.AVChatCoordinatorCallInfo _callInfo;
    Swift.Array -> AVChat.AVChatWebRTCAPISignalingMessage message_ nominal type descriptor for Swift.Int64 userIDtGSg _pendingSignalingMessages;
    oneway _Atomic Chat.AVChatIncomingCallPresetup ? _presetup;
    Swift.Bool _didSendPresetupAnswer;
    oneway _Atomic Chat.AVChatSignalingOutbox ? _signalingOutbox;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? _signalingTask;
    oneway _Atomic Chat.AVChatWebRTCPeriscopeAPISignaling ? _signaling;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? _broadcastStatusTask;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? _rtcStatisticsTask;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? _iceRecoveryTask;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? _reconnectDeadlineTask;
    oneway _Atomic Chat.AVChatNetworkPathMonitor ? _networkPathMonitor;
    Swift.Int _rtcStatsScribeCounter;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable _subscribers;
    oneway _Atomic Chat.AVChatLoggingHandle ? _loggingHandle;
    ((Swift.Bool) -> ())? _answerCompletion;
    Swift.Bool _shouldPostCallDidStopNotification;
    Swift.Bool _isCameraOn;
    Swift.Bool? _isMicrophoneOnOptimistic;
    Swift.Bool _isMicrophoneOn;
    __C.RTCMTLVideoView? $__lazy_storage_$__localVideoView;
    oneway _Atomic Chat.AVChatCoordinatorDelegate ? _delegate;
    nominal type descriptor for XCallContacts.XCallHandle handle;
    Swift.Bool isInitiator;
    Swift.Bool isAudioOnly;
    oneway _Atomic Chat.AVChatContext context;
    Swift.Array -> AVChat.AVChatWebRTCCoordinator.WeakObserverWrapper _observers;
}

/* instance methods */
- (void)dealloc;
- (id)init;

@end

#endif /* _TtC6AVChat23AVChatWebRTCCoordinator_h */
