//
#ifndef TAVAnalytics6SecInViewTracker_h
#define TAVAnalytics6SecInViewTracker_h
@import Foundation;

#include "TAVAnalyticsEventSink-Protocol.h"
#include "TAVAnalyticsTracker-Protocol.h"

@class NSMutableDictionary, NSObject, NSString;

@interface TAVAnalytics6SecInViewTracker : NSObject <TAVAnalyticsTracker>

@property (retain, nonatomic) NSMutableDictionary *playthroughStates;
@property (retain, nonatomic) id <TAVAnalyticsEventSink> sink;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)processState:(id)state;
- (_Bool)didReachVisibilityThresholdWithPlaybackState:(id)state playthroughState:(id)state;
- (_Bool)didReachThresholdWithPlaybackState:(id)state playthroughState:(id)state;
- (id)private_playthroughStateForPlaythroughID:(id)id;

@end

#endif /* TAVAnalytics6SecInViewTracker_h */
