//
#ifndef TAVAnalyticsPlayPauseEventTracker_h
#define TAVAnalyticsPlayPauseEventTracker_h
@import Foundation;

#include "TAVAnalyticsEventSink-Protocol.h"
#include "TAVAnalyticsSessionState.h"
#include "TAVAnalyticsTracker-Protocol.h"

@class NSObject, NSString;

@interface TAVAnalyticsPlayPauseEventTracker : NSObject <TAVAnalyticsTracker>

@property (copy, nonatomic) TAVAnalyticsSessionState *lastAnalyticsSessionState;
@property (retain, nonatomic) id <TAVAnalyticsEventSink> sink;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)processState:(id)state;

@end

#endif /* TAVAnalyticsPlayPauseEventTracker_h */
