//
#ifndef TAVAnalyticsMoat1SecFullyOnScreenTrackerPlaythroughState_h
#define TAVAnalyticsMoat1SecFullyOnScreenTrackerPlaythroughState_h
@import Foundation;

#include "TAVAnalyticsPlayedRangesTracker.h"

@class NSObject;

@interface TAVAnalyticsMoat1SecFullyOnScreenTrackerPlaythroughState : NSObject

@property (retain, nonatomic) TAVAnalyticsPlayedRangesTracker *playedRangesTracker;
@property (nonatomic) _Bool fullyOnScreen;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } continuousDurationWhileFullyOnScreen;
@property (nonatomic) _Bool fired1SecFullyOnScreen;

/* instance methods */
- (id)init;
- (void)updateWithPlaybackState:(id)state;

@end

#endif /* TAVAnalyticsMoat1SecFullyOnScreenTrackerPlaythroughState_h */
