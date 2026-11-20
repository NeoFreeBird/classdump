//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
