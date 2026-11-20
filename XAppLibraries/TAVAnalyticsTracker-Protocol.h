//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
