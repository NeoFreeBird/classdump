//
#ifndef PTVWebRTCClientDelegate_Protocol_h
#define PTVWebRTCClientDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVWebRTCClientDelegate <NSObject>

@required

/* required instance methods */
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

@optional

/* optional instance methods */
- (void)didChangeWebRTCClientState:(long long)state;
- (void)didUpdateVideoStreamDisabledWithPeriscopeUserId:(id)id disabled:(_Bool)disabled;
- (void)didStoreAndOutputLogEntry:(id)entry;
- (void)didLeave;
- (void)didReceiveJanusRTPInfoValuesWithJanusSessionId:(unsigned long long)id janusHandlerId:(unsigned long long)id janusPublisherId:(unsigned long long)id;

@end

#endif /* PTVWebRTCClientDelegate_Protocol_h */
