//
#ifndef TAVAnalyticsIntentToPlayTracker_h
#define TAVAnalyticsIntentToPlayTracker_h
@import Foundation;

#include "TAVAnalyticsEventSink-Protocol.h"
#include "TAVAnalyticsTracker-Protocol.h"

@class NSMutableSet, NSObject, NSString;

@interface TAVAnalyticsIntentToPlayTracker : NSObject <TAVAnalyticsTracker>

@property (retain, nonatomic) NSMutableSet *playthroughIDsWithIntentToPlay;
@property (retain, nonatomic) id <TAVAnalyticsEventSink> sink;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)processState:(id)state;

@end

#endif /* TAVAnalyticsIntentToPlayTracker_h */
