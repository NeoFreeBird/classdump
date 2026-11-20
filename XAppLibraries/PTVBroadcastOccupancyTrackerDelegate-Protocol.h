//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVBroadcastOccupancyTrackerDelegate_Protocol_h
#define PTVBroadcastOccupancyTrackerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVBroadcastOccupancyTrackerDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)broadcastOccupancyTrackerDidUpdateOccupancyMetrics:(id)metrics;

@end

#endif /* PTVBroadcastOccupancyTrackerDelegate_Protocol_h */
