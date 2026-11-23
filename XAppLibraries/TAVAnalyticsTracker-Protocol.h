//
#ifndef TAVAnalyticsTracker_Protocol_h
#define TAVAnalyticsTracker_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "TAVAnalyticsEventSink-Protocol.h"

@protocol TAVAnalyticsTracker <NSObject>

@required

@property (retain, nonatomic) id <TAVAnalyticsEventSink> sink;

/* required instance methods */
- (void)processState:(id)state;

@optional

/* optional instance methods */
- (void)setNotificationCenter:(id)center;
- (void)finish;
- (void)setupWithConfiguration:(id)configuration;

@end

#endif /* TAVAnalyticsTracker_Protocol_h */
