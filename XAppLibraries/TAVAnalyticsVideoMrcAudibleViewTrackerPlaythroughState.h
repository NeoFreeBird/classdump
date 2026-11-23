//
#ifndef TAVAnalyticsVideoMrcAudibleViewTrackerPlaythroughState_h
#define TAVAnalyticsVideoMrcAudibleViewTrackerPlaythroughState_h
@import Foundation;

#include "TAVAnalyticsPlayedRangesTracker.h"

@class NSObject;

@interface TAVAnalyticsVideoMrcAudibleViewTrackerPlaythroughState : NSObject

@property (retain, nonatomic) TAVAnalyticsPlayedRangesTracker *playedRangesTracker;
@property (nonatomic) _Bool visibilityAtLeast50PercentAndAudible;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } continuousDurationWhileVisibilityAtLeast50PercentAndAudible;
@property (nonatomic) _Bool firedAudibleMRCView;

/* instance methods */
- (id)init;
- (void)updateWithPlaybackState:(id)state;

@end

#endif /* TAVAnalyticsVideoMrcAudibleViewTrackerPlaythroughState_h */
