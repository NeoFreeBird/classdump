//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
