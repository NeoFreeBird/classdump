//
#ifndef TVDILatencyTracker_h
#define TVDILatencyTracker_h
@import Foundation;

#include "TAVPlaybackState.h"
#include "TVDILatencyMetrics.h"

@class NSObject;

@interface TVDILatencyTracker : NSObject

@property (nonatomic) double runningTotal;
@property (nonatomic) double totalTimeElapsed;
@property (retain, nonatomic) TAVPlaybackState *lastKnownState;
@property (nonatomic) double minimum;
@property (nonatomic) double maximum;
@property (readonly, copy, nonatomic) TVDILatencyMetrics *metrics;

/* instance methods */
- (id)init;
- (void)updateWithPlaybackState:(id)state clientDate:(id)date;

@end

#endif /* TVDILatencyTracker_h */
