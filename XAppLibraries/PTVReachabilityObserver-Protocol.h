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
