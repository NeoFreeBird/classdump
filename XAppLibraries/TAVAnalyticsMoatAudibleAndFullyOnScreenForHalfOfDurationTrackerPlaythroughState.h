//
#ifndef TAVAnalyticsMoatAudibleAndFullyOnScreenForHalfOfDurationTrackerPlaythroughState_h
#define TAVAnalyticsMoatAudibleAndFullyOnScreenForHalfOfDurationTrackerPlaythroughState_h
@import Foundation;

#include "TAVAnalyticsPlayedRangesTracker.h"

@class NSObject;

@interface TAVAnalyticsMoatAudibleAndFullyOnScreenForHalfOfDurationTrackerPlaythroughState : NSObject

@property (retain, nonatomic) TAVAnalyticsPlayedRangesTracker *playedRangesTracker;
@property (nonatomic) _Bool audibleAndFullyOnScreen;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } cumulativeDurationWhileAudibleAndFullyOnScreen;
@property (nonatomic) _Bool firedAudibleAndFullyOnScreenForHalfOfDuration;

/* instance methods */
- (id)init;
- (void)updateWithPlaybackState:(id)state;

@end

#endif /* TAVAnalyticsMoatAudibleAndFullyOnScreenForHalfOfDurationTrackerPlaythroughState_h */
