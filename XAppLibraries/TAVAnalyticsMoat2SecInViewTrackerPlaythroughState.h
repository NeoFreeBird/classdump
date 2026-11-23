//
#ifndef TAVAnalyticsMoat2SecInViewTrackerPlaythroughState_h
#define TAVAnalyticsMoat2SecInViewTrackerPlaythroughState_h
@import Foundation;

#include "TAVAnalyticsPlayedRangesTracker.h"

@class NSObject;

@interface TAVAnalyticsMoat2SecInViewTrackerPlaythroughState : NSObject

@property (retain, nonatomic) TAVAnalyticsPlayedRangesTracker *playedRangesTracker;
@property (nonatomic) _Bool visibilityAtLeast50Percent;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } continuousDurationWhileVisibilityAtLeast50Percent;
@property (nonatomic) _Bool fired2SecInView;

/* instance methods */
- (id)init;
- (void)updateWithPlaybackState:(id)state;

@end

#endif /* TAVAnalyticsMoat2SecInViewTrackerPlaythroughState_h */
