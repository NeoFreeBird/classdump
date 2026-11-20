//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC6AVChat26AVChatGroupCallCoordinator_h
#define _TtC6AVChat26AVChatGroupCallCoordinator_h
@import Foundation;

#include "PTVWebRTCClientDelegate-Protocol.h"

@class Chat.AVChatChatmanClient ?, Chat.AVChatGroupAudioSessionActor, Chat.AVChatGroupCallComposition, Chat.AVChatGroupCallCoordinator.Session, Chat.AVChatGroupCallMediaActor, Chat.AVChatSpacesInfo ?, Chat.AVChatWebRTCPeriscopeAPI, NSObject, PeriscopeSDKSwift.JanusMultistreamClient ?, Swift.Bool, _$s7Combine19CurrentValueSubjectCMn AVChat.AVChatGroupCallCoordinator.State _$ss5NeverOMn, _$sScTyyt _$ss5NeverOMn ?, _$sSh -> _$s7Combine14AnyCancellableCMn;

@interface AVChat.AVChatGroupCallCoordinator : NSObject <PTVWebRTCClientDelegate> { // (Swift)
    /* instance variables */
    nominal type descriptor for Combine.CurrentValueSubject AVChat.AVChatGroupCallCoordinator.State nominal type descriptor for Swift.Never statePublisher;
    oneway _Atomic Chat.AVChatGroupCallCoordinator.Session callSession;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? _connectTask;
    oneway _Atomic Chat.AVChatWebRTCPeriscopeAPI _api;
    oneway _Atomic Chat.AVChatGroupCallMediaActor _webRTCMediaActor;
    oneway _Atomic Chat.AVChatGroupAudioSessionActor _audioSessionActor;
    PeriscopeSDKSwift.JanusMultistreamClient ? _janusClient;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable _cancellables;
    oneway _Atomic Chat.AVChatGroupCallComposition _callInfoAPI;
    oneway _Atomic Chat.AVChatChatmanClient ? _chatmanClient;
    Swift.Bool isRoomSoundMuted;
    Swift.Bool isMicrophoneOn;
    Swift.Bool isCameraOn;
    oneway _Atomic Chat.AVChatSpacesInfo ? _spacesInfo;
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
- (void)didUpdateVideoStreamDisabledWithPeriscopeUserId:(id)id disabled:(_Bool)disabled;
- (void)didStoreAndOutputLogEntry:(id)entry;
- (void)didLeave;
- (void)didReceiveJanusRTPInfoValuesWithJanusSessionId:(unsigned long long)id janusHandlerId:(unsigned long long)id janusPublisherId:(unsigned long long)id;
- (void)dealloc;
- (id)init;

@end

#endif /* _TtC6AVChat26AVChatGroupCallCoordinator_h */
