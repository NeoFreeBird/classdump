//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVJanusVideoRoomPluginHandlerObserver_Protocol_h
#define PTVJanusVideoRoomPluginHandlerObserver_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVJanusVideoRoomPluginHandlerObserver <NSObject>

@required

@optional

/* optional instance methods */
- (void)videoRoomPluginHandler:(id)handler didChangeState:(unsigned long long)state;
- (void)videoRoomPluginHandler:(id)handler didCreateLocalVideoSource:(id)source;
- (void)videoRoomPluginHandler:(id)handler didReceiveLocalVideoTrack:(id)track;
- (void)videoRoomPluginHandler:(id)handler didReceiveLocalAudioTrack:(id)track;
- (void)videoRoomPluginHandler:(id)handler didUpdateRemoteMediaStream:(id)stream;
- (void)videoRoomPluginHandler:(id)handler didRemoveRemoteMediaStream:(id)stream;
- (void)videoRoomPluginHandler:(id)handler didReceiveRemoteAudioLevel:(id)level;
- (void)videoRoomPluginHandler:(id)handler didReceiveLocalAudioLevel:(id)level;
- (void)videoRoomPluginHandler:(id)handler didError:(id)error;
- (void)videoRoomPluginHandlerNeedsRestart:(id)restart;

@end

#endif /* PTVJanusVideoRoomPluginHandlerObserver_Protocol_h */
