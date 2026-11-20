//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVVideoReplayDelegate_Protocol_h
#define PTVVideoReplayDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVVideoReplayDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)replayControllerDidChangeBuffering:(_Bool)buffering;
- (void)replayControllerDidReachEndOfVideo;
- (void)replayControllerWillBeginScrubbing;
- (void)replayControllerDidCancelScrubbing;
- (void)replayControllerDidFinishScrubbingAtSeekTime:(double)time;

@end

#endif /* PTVVideoReplayDelegate_Protocol_h */
