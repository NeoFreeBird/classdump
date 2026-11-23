//
#ifndef TNUBackoffRetryPolicyProvider_h
#define TNUBackoffRetryPolicyProvider_h
@import Foundation;

#include "TNUBasicRetryPolicyProvider.h"

@interface TNUBackoffRetryPolicyProvider : TNUBasicRetryPolicyProvider {
    /* instance variables */
    double _delay;
    double _lastRetry;
}

@property (readonly, nonatomic) double minDelay;
@property (readonly, nonatomic) double maxDelay;
@property (readonly, nonatomic) double backoffDelayTimeout;

/* instance methods */
- (id)init;
- (id)initWithConfiguration:(id)configuration;
- (id)initWithMinRetryDelay:(double)delay maxRetryDelay:(double)delay backoffDelayTimeout:(double)timeout configuration:(id)configuration;
- (void)tnl_requestOperation:(id)operation willStartRetryFromResponse:(id)response afterDelay:(double)delay;
- (double)tnl_delayBeforeRetryForRequestOperation:(id)operation withResponse:(id)response;
- (void)reset;

@end

#endif /* TNUBackoffRetryPolicyProvider_h */
