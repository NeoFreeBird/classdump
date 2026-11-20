//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1BroadcastContainerViewDelegate_Protocol_h
#define T1BroadcastContainerViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1BroadcastContainerViewDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)broadcastContainerView:(id)view didStartPlayback:(id)playback;
- (void)broadcastContainerView:(id)view didCompletePlayback:(id)playback;
- (void)broadcastContainerView:(id)view playbackDidFailWithError:(id)error;
- (void)broadcastContainerView:(id)view didSetPlayer:(id)player;
- (void)broadcastContainerView:(id)view didStartAdPlaybackWithContext:(id)context;
- (void)broadcastContainerView:(id)view didEndAdPlaybackWithContext:(id)context;
- (void)broadcastContainerView:(id)view didTapToExpandBroadcast:(id)broadcast cardDataSource:(id)source;
- (void)broadcastContainerView:(id)view didTapToPlay:(_Bool)play;
- (void)broadcastContainerView:(id)view didUpdateMuteState:(_Bool)state;
- (void)broadcastContainerViewDidTapInitialPlayButton:(id)button;

@end

#endif /* T1BroadcastContainerViewDelegate_Protocol_h */
