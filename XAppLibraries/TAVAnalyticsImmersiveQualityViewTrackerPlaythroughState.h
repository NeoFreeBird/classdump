//
#ifndef TAVAnalyticsImmersiveQualityViewTrackerPlaythroughState_h
#define TAVAnalyticsImmersiveQualityViewTrackerPlaythroughState_h
@import Foundation;

#include "TAVAnalyticsPlayedRangesTracker.h"

@class NSObject;

@interface TAVAnalyticsImmersiveQualityViewTrackerPlaythroughState : NSObject

@property (retain, nonatomic) TAVAnalyticsPlayedRangesTracker *playedRangesTracker;
@property (nonatomic) _Bool isFullscreen;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } continuousDurationWhileFullscreen;
@property (nonatomic) _Bool firedImmersiveQualityView;

/* instance methods */
- (id)init;
- (void)updateWithPlaybackState:(id)state;

@end

#endif /* TAVAnalyticsImmersiveQualityViewTrackerPlaythroughState_h */
