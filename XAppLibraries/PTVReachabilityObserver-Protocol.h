//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVReachabilityObserver_Protocol_h
#define PTVReachabilityObserver_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVReachabilityObserver <NSObject>

@required

/* required instance methods */
- (void)reachabilityMonitorStateDidChange:(id)change;

@optional

@end

#endif /* PTVReachabilityObserver_Protocol_h */
