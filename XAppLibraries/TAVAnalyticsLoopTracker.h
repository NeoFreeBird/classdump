//
#ifndef TAVAnalyticsLoopTracker_h
#define TAVAnalyticsLoopTracker_h
@import Foundation;

#include "TAVAnalyticsEventSink-Protocol.h"
#include "TAVAnalyticsSessionState.h"
#include "TAVAnalyticsTracker-Protocol.h"

@class NSObject, NSString;

@interface TAVAnalyticsLoopTracker : NSObject <TAVAnalyticsTracker>

@property (retain, nonatomic) TAVAnalyticsSessionState *lastAnalyticsSessionState;
@property (retain, nonatomic) id <TAVAnalyticsEventSink> sink;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)processState:(id)state;
- (_Bool)didLoopWithCurrentState:(id)state previousState:(id)state;

@end

#endif /* TAVAnalyticsLoopTracker_h */
