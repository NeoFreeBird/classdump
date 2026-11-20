//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TNUNetworkFailureRetryPolicyProvider_h
#define TNUNetworkFailureRetryPolicyProvider_h
@import Foundation;

#include "TNUBasicRetryPolicyProvider.h"

@interface TNUNetworkFailureRetryPolicyProvider : TNUBasicRetryPolicyProvider {
    /* instance variables */
    double _lastRetryDelay;
    double _lastRetry;
}

@property (readonly, nonatomic) double minRetryDelay;
@property (readonly, nonatomic) double maxRetryDelay;
@property (readonly, nonatomic) double minIdleTimeout;
@property (readonly, nonatomic) double maxIdleTimeout;

/* instance methods */
- (id)initWithBackoffMinRetryDelay:(double)delay maxRetryDelay:(double)delay minIdleTimeout:(double)timeout maxIdleTimeout:(double)timeout;
- (_Bool)tnl_shouldRetryRequestOperation:(id)operation withResponse:(id)response;
- (double)tnl_delayBeforeRetryForRequestOperation:(id)operation withResponse:(id)response;
- (id)tnl_configurationOfRetryForRequestOperation:(id)operation withResponse:(id)response priorConfiguration:(id)configuration;
- (void)tnl_requestOperation:(id)operation willStartRetryFromResponse:(id)response afterDelay:(double)delay;
- (void)reset;
- (_Bool)_didTimeoutFromIdleForRequestOperation:(id)operation withResponse:(id)response;

@end

#endif /* TNUNetworkFailureRetryPolicyProvider_h */
