//
#ifndef PTVVideoPlayerDelegate_Protocol_h
#define PTVVideoPlayerDelegate_Protocol_h
@import Foundation;

#include "PTVVideoViewControllerDelegate-Protocol.h"

@protocol PTVVideoPlayerDelegate <PTVVideoViewControllerDelegate>

@required

@optional

/* optional instance methods */
- (void)videoPlayerDidChangePlayerStatus:(unsigned long long)status;
- (void)videoPlayerDidUpdateDuration:(double)duration;
- (void)videoPlayerDidReceiveMetadata;
- (void)videoPlayerDidReceiveTimedMetadataWithDescription:(id)description value:(id)value;
- (void)videoPlayerDidReachEndOfVideo;
- (void)videoPlayerDidBecomeReadyForDisplay:(_Bool)display receivedRotation:(_Bool)rotation;

@end

#endif /* PTVVideoPlayerDelegate_Protocol_h */
