//
#ifndef TAVAnalytics6SecInViewTrackerPlaythroughState_h
#define TAVAnalytics6SecInViewTrackerPlaythroughState_h
@import Foundation;

#include "TAVAnalyticsPlayedRangesTracker.h"

@class NSObject;

@interface TAVAnalytics6SecInViewTrackerPlaythroughState : NSObject

@property (retain, nonatomic) TAVAnalyticsPlayedRangesTracker *playedRangesTracker;
@property (nonatomic) _Bool visibilityAtLeast50Percent;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } durationWhileVisibilityAtLeast50Percent;
@property (nonatomic) _Bool fired6SecInView;

/* instance methods */
- (id)init;
- (void)updateWithPlaybackState:(id)state;

@end

#endif /* TAVAnalytics6SecInViewTrackerPlaythroughState_h */
