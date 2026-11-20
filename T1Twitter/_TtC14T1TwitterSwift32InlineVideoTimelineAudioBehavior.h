//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift32InlineVideoTimelineAudioBehavior_h
#define _TtC14T1TwitterSwift32InlineVideoTimelineAudioBehavior_h
@import Foundation;

#include "TAVPlaybackObserver-Protocol.h"

@class NSObject, _$sSbyc, _$sSd, _$sSo13TAVPlayerViewC, _$sSo16TASSpacesContext_p;

@interface T1TwitterSwift.InlineVideoTimelineAudioBehavior : NSObject <TAVPlaybackObserver> { // (Swift)
    /* instance variables */
    __C.TAVPlayerView playerView;
    Swift.Double unmuteThreshold;
    Swift.Double muteThreshold;
    __C.TASSpacesContext context;
    () -> Swift.Bool audioDisabledProvider;
}

/* instance methods */
- (void)player:(id)player didUpdatePlaybackState:(id)state;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift32InlineVideoTimelineAudioBehavior_h */
