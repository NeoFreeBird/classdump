//
#ifndef T1TwitterAPIErrorResponseMonitorListener_Protocol_h
#define T1TwitterAPIErrorResponseMonitorListener_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1TwitterAPIErrorResponseMonitorListener <NSObject>

@required

/* required instance methods */
- (void)twitterAPIErrorResponseMonitor:(id)monitor didEncounterAPIErrorCode:(long long)code response:(id)response;

@optional

@end

#endif /* T1TwitterAPIErrorResponseMonitorListener_Protocol_h */
