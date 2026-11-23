//
#ifndef OCFFlowStateObserver_Protocol_h
#define OCFFlowStateObserver_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol OCFFlowStateObserver <NSObject>

@required

@optional

/* optional instance methods */
- (void)flow:(id)flow stateDidChange:(long long)change withAccount:(id)account flowStatus:(long long)status;
- (void)flow:(id)flow didFinishTaskWithNavigationLink:(id)link;

@end

#endif /* OCFFlowStateObserver_Protocol_h */
