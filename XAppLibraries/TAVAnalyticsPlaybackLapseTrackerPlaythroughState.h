//
#ifndef TAVAnalyticsPlaybackLapseTrackerPlaythroughState_h
#define TAVAnalyticsPlaybackLapseTrackerPlaythroughState_h
@import Foundation;

#include "TAVAnalyticsPlayedRangesTracker.h"
#include "TAVAnalyticsSessionState.h"

@class NSObject;

@interface TAVAnalyticsPlaybackLapseTrackerPlaythroughState : NSObject

@property (copy, nonatomic) TAVAnalyticsSessionState *lastAnalyticsSessionState;
@property (retain, nonatomic) TAVAnalyticsPlayedRangesTracker *playedRangesTracker;
@property (nonatomic) _Bool firedPlaybackLapse;
@property (nonatomic) _Bool firedBillableView;
@property (nonatomic) _Bool playbackFinished;

/* instance methods */
- (void)updateWithSessionState:(id)state;

@end

#endif /* TAVAnalyticsPlaybackLapseTrackerPlaythroughState_h */
