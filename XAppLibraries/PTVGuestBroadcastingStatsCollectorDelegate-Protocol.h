//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVGuestBroadcastingStatsCollectorDelegate_Protocol_h
#define PTVGuestBroadcastingStatsCollectorDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVGuestBroadcastingStatsCollectorDelegate <NSObject>

@required

/* required instance methods */
- (void)guestBroadcastingStatsCollector:(id)collector didCollectPeriodicPlaybackStats:(id)stats;
- (void)guestBroadcastingStatsCollector:(id)collector didCollectEndOfStreamStats:(id)stats;
- (void)guestBroadcastingStatsCollector:(id)collector didCollectPeriodicPublishingStats:(id)stats;

@optional

@end

#endif /* PTVGuestBroadcastingStatsCollectorDelegate_Protocol_h */
