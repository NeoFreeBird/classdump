//
#ifndef TAVAnalyticsImpressionTracker_h
#define TAVAnalyticsImpressionTracker_h
@import Foundation;

#include "TAVAnalyticsEventSink-Protocol.h"
#include "TAVAnalyticsTracker-Protocol.h"

@class NSMutableSet, NSObject, NSString;

@interface TAVAnalyticsImpressionTracker : NSObject <TAVAnalyticsTracker>

@property (retain, nonatomic) NSMutableSet *playthroughIDsWithImpression;
@property (retain, nonatomic) id <TAVAnalyticsEventSink> sink;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)processState:(id)state;

@end

#endif /* TAVAnalyticsImpressionTracker_h */
