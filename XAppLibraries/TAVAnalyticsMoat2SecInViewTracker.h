//
#ifndef TAVAnalyticsMoat2SecInViewTracker_h
#define TAVAnalyticsMoat2SecInViewTracker_h
@import Foundation;

#include "TAVAnalyticsEventSink-Protocol.h"
#include "TAVAnalyticsTracker-Protocol.h"

@class NSMutableDictionary, NSObject, NSString;

@interface TAVAnalyticsMoat2SecInViewTracker : NSObject <TAVAnalyticsTracker>

@property (retain, nonatomic) NSMutableDictionary *playthroughStates;
@property (retain, nonatomic) id <TAVAnalyticsEventSink> sink;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)private_playthroughStateForPlaythroughID:(id)id;
- (void)processState:(id)state;

@end

#endif /* TAVAnalyticsMoat2SecInViewTracker_h */
