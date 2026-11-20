//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TNUServiceRetryPolicyProvider_h
#define TNUServiceRetryPolicyProvider_h
@import Foundation;

#include "TNUCountCappedChainedHttpRequestRetryPolicyProvider.h"
#include "TNUNetworkFailureRetryPolicyProvider.h"
#include "TNUServiceFailureRetryPolicyProvider.h"

@interface TNUServiceRetryPolicyProvider : TNUCountCappedChainedHttpRequestRetryPolicyProvider

@property (retain, nonatomic) TNUServiceFailureRetryPolicyProvider *serviceFailureRetryPolicyProvider;
@property (retain, nonatomic) TNUNetworkFailureRetryPolicyProvider *networkFailureRetryPolicyProvider;
@property (readonly, nonatomic) double initialIdleTimeout;

/* instance methods */
- (id)initWithPermittedRetryCount:(unsigned long long)count serviceFailurePermittedRetryCount:(unsigned long long)count backoffMinRetryDelay:(double)delay maxRetryDelay:(double)delay minIdleTimeout:(double)timeout maxIdleTimeout:(double)timeout;
- (id)initWithServiceFailurePermittedRetryCount:(unsigned long long)count backoffMinRetryDelay:(double)delay maxRetryDelay:(double)delay minIdleTimeout:(double)timeout maxIdleTimeout:(double)timeout;
- (_Bool)tnl_shouldRetryRequestOperation:(id)operation withResponse:(id)response;
- (id)retryPolicyIdWithTimeout:(double)timeout packetTimeout:(double)timeout;

@end

#endif /* TNUServiceRetryPolicyProvider_h */
