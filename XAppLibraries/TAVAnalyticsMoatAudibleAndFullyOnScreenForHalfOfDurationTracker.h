//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAVAnalyticsMoatAudibleAndFullyOnScreenForHalfOfDurationTracker_h
#define TAVAnalyticsMoatAudibleAndFullyOnScreenForHalfOfDurationTracker_h
@import Foundation;

#include "TAVAnalyticsEventSink-Protocol.h"
#include "TAVAnalyticsTracker-Protocol.h"

@class NSMutableDictionary, NSObject, NSString;

@interface TAVAnalyticsMoatAudibleAndFullyOnScreenForHalfOfDurationTracker : NSObject <TAVAnalyticsTracker>

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

#endif /* TAVAnalyticsMoatAudibleAndFullyOnScreenForHalfOfDurationTracker_h */
