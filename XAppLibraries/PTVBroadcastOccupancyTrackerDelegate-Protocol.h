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
