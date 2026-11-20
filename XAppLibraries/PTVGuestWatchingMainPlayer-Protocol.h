//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVGuestWatchingMainPlayer_Protocol_h
#define PTVGuestWatchingMainPlayer_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVGuestWatchingMainPlayer <NSObject>

@required

/* required instance methods */
- (void)setTargetRelativePresentationOffset:(id)offset;
- (id)relativePresentationOffset;
- (id)minimumSafeRPO;
- (id)tavPlaybackState;

@optional

@end

#endif /* PTVGuestWatchingMainPlayer_Protocol_h */
