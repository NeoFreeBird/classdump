//
#ifndef TAVAnalyticsShortFormCompleteTrackerPlaythroughState_h
#define TAVAnalyticsShortFormCompleteTrackerPlaythroughState_h
@import Foundation;

#include "TAVAnalyticsPlayedRangesTracker.h"

@class NSObject;

@interface TAVAnalyticsShortFormCompleteTrackerPlaythroughState : NSObject

@property (retain, nonatomic) TAVAnalyticsPlayedRangesTracker *playedRangesTracker;
@property (nonatomic) _Bool firedShortFormComplete;

/* instance methods */
- (id)init;

@end

#endif /* TAVAnalyticsShortFormCompleteTrackerPlaythroughState_h */
