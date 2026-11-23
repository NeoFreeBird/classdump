//
#ifndef TAVAnalyticsQualityViewV2TrackerPlaythroughState_h
#define TAVAnalyticsQualityViewV2TrackerPlaythroughState_h
@import Foundation;

#include "TAVAnalyticsPlayedRangesTracker.h"

@class NSObject;

@interface TAVAnalyticsQualityViewV2TrackerPlaythroughState : NSObject

@property (retain, nonatomic) TAVAnalyticsPlayedRangesTracker *playedRangesTracker;
@property (nonatomic) _Bool playingMoreThanHalfOnScreen;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } continuousDurationWhileHalfOnScreen;
@property (nonatomic) _Bool firedQualityViewV2;

/* instance methods */
- (id)init;
- (void)updateWithPlaybackState:(id)state;

@end

#endif /* TAVAnalyticsQualityViewV2TrackerPlaythroughState_h */
