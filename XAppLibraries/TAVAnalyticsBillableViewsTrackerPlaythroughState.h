//
#ifndef TAVAnalyticsBillableViewsTrackerPlaythroughState_h
#define TAVAnalyticsBillableViewsTrackerPlaythroughState_h
@import Foundation;

#include "TAVAnalyticsPlayedRangesTracker.h"

@class NSObject;

@interface TAVAnalyticsBillableViewsTrackerPlaythroughState : NSObject

@property (retain, nonatomic) TAVAnalyticsPlayedRangesTracker *playedRangesTracker;
@property (nonatomic) _Bool halfOnScreen;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } cumulativeDurationWhileHalfOnScreen;
@property (nonatomic) _Bool firedPlayFromTapView;
@property (nonatomic) _Bool firedThresholdView;
@property (nonatomic) _Bool firedBillableView;

/* instance methods */
- (id)init;
- (void)updateWithPlaybackState:(id)state;

@end

#endif /* TAVAnalyticsBillableViewsTrackerPlaythroughState_h */
