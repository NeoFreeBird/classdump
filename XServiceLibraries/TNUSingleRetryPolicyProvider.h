//
#ifndef TNUSingleRetryPolicyProvider_h
#define TNUSingleRetryPolicyProvider_h
@import Foundation;

#include "TNUNumberedRetryPolicyProvider.h"

@interface TNUSingleRetryPolicyProvider : TNUNumberedRetryPolicyProvider

/* instance methods */
- (id)initWithPermittedRetryCount:(unsigned long long)count configuration:(id)configuration;
- (id)init;
- (id)initWithConfiguration:(id)configuration;

@end

#endif /* TNUSingleRetryPolicyProvider_h */
