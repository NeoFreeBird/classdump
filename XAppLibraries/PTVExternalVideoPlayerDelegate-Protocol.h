//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVExternalVideoPlayerDelegate_Protocol_h
#define PTVExternalVideoPlayerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVExternalVideoPlayerDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)externalVideoPlayer:(id)player didChangePlaybackState:(unsigned long long)state;
- (void)externalVideoPlayerDidReachEndOfVideo:(id)video;
- (void)externalVideoPlayerDidReceiveMetadata:(id)metadata;
- (void)externalVideoPlayer:(id)player didReceiveTimedMetadataWithDescription:(id)description value:(id)value;
- (void)externalVideoPlayerDidReceiveVideoDuration:(id)duration;

@end

#endif /* PTVExternalVideoPlayerDelegate_Protocol_h */
