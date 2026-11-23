//
#ifndef TNLRequestRetryPolicyProvider_Protocol_h
#define TNLRequestRetryPolicyProvider_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TNLRequestRetryPolicyProvider <NSObject>

@required

/* required instance methods */
- (_Bool)tnl_shouldRetryRequestOperation:(id)operation withResponse:(id)response;

@optional

/* optional instance methods */
- (double)tnl_delayBeforeRetryForRequestOperation:(id)operation withResponse:(id)response;
- (id)tnl_configurationOfRetryForRequestOperation:(id)operation withResponse:(id)response priorConfiguration:(id)configuration;
- (void)tnl_requestOperation:(id)operation willStartRetryFromResponse:(id)response afterDelay:(double)delay;
- (void)tnl_requestOperation:(id)operation didStartRetryFromResponse:(id)response;
- (id)tnl_callbackQueue;
- (id)tnl_retryPolicyIdentifier;

@end

#endif /* TNLRequestRetryPolicyProvider_Protocol_h */
