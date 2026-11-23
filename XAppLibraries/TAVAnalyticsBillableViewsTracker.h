//
#ifndef TAVAnalyticsBillableViewsTracker_h
#define TAVAnalyticsBillableViewsTracker_h
@import Foundation;

#include "TAVAnalyticsEventSink-Protocol.h"
#include "TAVAnalyticsTracker-Protocol.h"

@class NSMutableDictionary, NSNotificationCenter, NSObject, NSString;

@interface TAVAnalyticsBillableViewsTracker : NSObject <TAVAnalyticsTracker>

@property (retain, nonatomic) NSMutableDictionary *playthroughStates;
@property (retain, nonatomic) NSNotificationCenter *notificationCenter;
@property (retain, nonatomic) id <TAVAnalyticsEventSink> sink;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)private_playthroughStateForPlaythroughID:(id)id;
- (void)processState:(id)state;
- (_Bool)shouldFirePlayFromTapWithSessionState:(id)state;
- (_Bool)shouldFireThresholdViewWithSessionState:(id)state playthroughState:(id)state;
- (_Bool)shouldFireBillableViewWithPlaythroughState:(id)state;

@end

#endif /* TAVAnalyticsBillableViewsTracker_h */
