//
#ifndef TNLNetworkObserver_Protocol_h
#define TNLNetworkObserver_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TNLNetworkObserver <NSObject>

@required

@optional

/* optional instance methods */
- (void)tnl_requestOperationDidStart:(id)start;
- (void)tnl_requestOperation:(id)operation didStartAttemptRequest:(id)request metrics:(id)metrics;
- (void)tnl_requestOperation:(id)operation didCompleteAttemptWithIntermediateResponse:(id)response disposition:(long long)disposition;
- (void)tnl_requestOperation:(id)operation didCompleteWithResponse:(id)response;

@end

#endif /* TNLNetworkObserver_Protocol_h */
