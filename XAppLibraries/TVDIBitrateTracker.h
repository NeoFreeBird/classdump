//
#ifndef TVDIBitrateTracker_h
#define TVDIBitrateTracker_h
@import Foundation;

#include "TAVPlaybackState.h"
#include "TVDIBitrateMetrics.h"

@class NSObject;

@interface TVDIBitrateTracker : NSObject

@property (nonatomic) double runningTotal;
@property (nonatomic) double totalTimeElapsed;
@property (retain, nonatomic) TAVPlaybackState *lastKnownState;
@property (nonatomic) double minimum;
@property (nonatomic) double maximum;
@property (readonly, copy, nonatomic) TVDIBitrateMetrics *metrics;

/* instance methods */
- (id)init;
- (void)updateWithPlaybackState:(id)state;

@end

#endif /* TVDIBitrateTracker_h */
