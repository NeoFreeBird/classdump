//
#ifndef T1LiveEventMediaViewPlaybackDelegate_Protocol_h
#define T1LiveEventMediaViewPlaybackDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1LiveEventMediaViewPlaybackDelegate <NSObject>

@required

/* required instance methods */
- (void)liveEventMediaView:(id)view didSetPlayer:(id)player;
- (void)liveEventMediaViewDidStartPlayback:(id)playback;
- (void)liveEventMediaViewDidCompletePlayback:(id)playback;
- (void)liveEventMediaView:(id)view didFailWithError:(id)error;
- (void)liveEventMediaViewDidStartAdPlayback:(id)playback;
- (void)liveEventMediaViewDidEndAdPlayback:(id)playback;
- (id)tavScribeContextForMediaView:(id)view;
- (id)tavScribeContextForMediaView:(id)view;

@optional

@end

#endif /* T1LiveEventMediaViewPlaybackDelegate_Protocol_h */
