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
