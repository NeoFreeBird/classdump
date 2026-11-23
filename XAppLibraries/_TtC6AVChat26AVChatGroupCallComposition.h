//
#ifndef _TtC6AVChat26AVChatGroupCallComposition_h
#define _TtC6AVChat26AVChatGroupCallComposition_h
@import Foundation;

#include "PTVWebRTCClientDelegate-Protocol.h"

@class Chat.AVChatChatmanClient ?, Chat.AVChatGroupCallCoordinator.SessionRef, Chat.AVChatGroupCallData, Chat.AVChatGroupCallInfo, Chat.AVChatGroupCallMediaActor ?, Chat.AVChatSpaceGuestPublishingFetcher ?, Chat.AVChatSpaceParticipantsPublishingFetcher ?, Chat.AVChatSpacePublishingFetcher ?, Chat.AVChatWebRTCPeriscopeAPI, Chat.AVChatXConversationPublishingFetcher ?, NSObject, PeriscopeSDKSwift.JanusMultistreamClient ?, _$s7Combine19CurrentValueSubjectCMn AVChat.AVChatGroupCallInfo _$ss5ErrorMp, _$s7Combine9PublishedVMn _$s14TFSTwitterCore17TwitterAudiospaceCMn _$s5space_So12PTVBroadcastC9broadcasttSg, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSo17TFNTwitterAccountC, _$ss5ErrorMp ?;

@interface AVChat.AVChatGroupCallComposition : NSObject <PTVWebRTCClientDelegate> { // (Swift)
    /* instance variables */
    oneway _Atomic Chat.AVChatGroupCallInfo callInfo;
    protocol descriptor for Swift.Error ? error;
    nominal type descriptor for Combine.CurrentValueSubject AVChat.AVChatGroupCallInfo protocol descriptor for Swift.Error callInfoPublisher;
    nominal type descriptor for Combine.Published nominal type descriptor for TFSTwitterCore.TwitterAudiospace _$s5space_So12PTVBroadcastC9broadcasttSg _spaceAndBroadcast;
    oneway _Atomic Chat.AVChatGroupCallData callFetchedData;
    PeriscopeSDKSwift.JanusMultistreamClient ? janusClient;
    oneway _Atomic Chat.AVChatGroupCallMediaActor ? webRTCMediaActor;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable _webRTCActorCancellables;
    oneway _Atomic Chat.AVChatChatmanClient ? chatmanClient;
    oneway _Atomic Chat.AVChatWebRTCPeriscopeAPI _api;
    __C.TFNTwitterAccount _account;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable _cancellables;
    oneway _Atomic Chat.AVChatXConversationPublishingFetcher ? _xchatConversationFetcher;
    oneway _Atomic Chat.AVChatSpacePublishingFetcher ? _spaceFetcher;
    oneway _Atomic Chat.AVChatSpaceGuestPublishingFetcher ? _guestFetcher;
    oneway _Atomic Chat.AVChatSpaceParticipantsPublishingFetcher ? _participantFetcher;
    oneway _Atomic Chat.AVChatGroupCallCoordinator.SessionRef _sessionRef;
}

/* instance methods */
- (void)didCreateLocalVideoSource:(id)source;
- (void)didReceiveLocalVideoTrack:(id)track;
- (void)didReceiveLocalAudioTrack:(id)track;
- (void)didUpdateRemoteMediaStream:(id)stream userId:(id)id;
- (void)didRemoveRemoteMediaStream:(id)stream userId:(id)id;
- (void)didUpdateRemoteAudioLevel:(id)level forUserId:(id)id;
- (void)didUpdateLocalAudioLevel:(id)level;
- (void)didUpdateIsFullyConnectedForUserId:(id)id;
- (void)didChangeWebRTCActiveState;
- (void)didDestroyVideoRoom;
- (void)didReceiveVideoRoomIsFull;
- (void)didTriggerICERestartAndShouldNotify:(_Bool)notify;
- (void)didUpdateActiveSpeaker:(id)speaker;
- (void)didChangeWebRTCClientState:(long long)state;
- (void)didStoreAndOutputLogEntry:(id)entry;
- (void)didLeave;
- (void)didUpdateVideoStreamDisabledWithPeriscopeUserId:(id)id disabled:(_Bool)disabled;
- (void)dealloc;
- (id)init;

@end

#endif /* _TtC6AVChat26AVChatGroupCallComposition_h */
