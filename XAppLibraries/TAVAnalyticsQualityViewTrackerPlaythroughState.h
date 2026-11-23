//
#ifndef TAVAnalyticsQualityViewTrackerPlaythroughState_h
#define TAVAnalyticsQualityViewTrackerPlaythroughState_h
@import Foundation;

#include "TAVAnalyticsPlayedRangesTracker.h"

@class NSObject;

@interface TAVAnalyticsQualityViewTrackerPlaythroughState : NSObject

@property (retain, nonatomic) TAVAnalyticsPlayedRangesTracker *playedRangesTracker;
@property (nonatomic) _Bool playingMoreThanHalfOnScreen;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } continuousDurationWhileHalfOnScreen;
@property (nonatomic) _Bool firedQualityView;

/* instance methods */
- (id)init;
- (void)updateWithPlaybackState:(id)state;

@end

#endif /* TAVAnalyticsQualityViewTrackerPlaythroughState_h */
