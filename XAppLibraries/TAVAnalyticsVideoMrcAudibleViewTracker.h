//
#ifndef TAVAnalyticsVideoMrcAudibleViewTracker_h
#define TAVAnalyticsVideoMrcAudibleViewTracker_h
@import Foundation;

#include "TAVAnalyticsEventSink-Protocol.h"
#include "TAVAnalyticsTracker-Protocol.h"

@class NSMutableDictionary, NSObject, NSString;

@interface TAVAnalyticsVideoMrcAudibleViewTracker : NSObject <TAVAnalyticsTracker>

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

#endif /* TAVAnalyticsVideoMrcAudibleViewTracker_h */
