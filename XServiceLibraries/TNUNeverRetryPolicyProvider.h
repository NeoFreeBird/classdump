//
#ifndef TNUNeverRetryPolicyProvider_h
#define TNUNeverRetryPolicyProvider_h
@import Foundation;

#include "TNUNumberedRetryPolicyProvider.h"

@interface TNUNeverRetryPolicyProvider : TNUNumberedRetryPolicyProvider

/* instance methods */
- (id)initWithPermittedRetryCount:(unsigned long long)count configuration:(id)configuration;
- (id)init;
- (id)initWithConfiguration:(id)configuration;

@end

#endif /* TNUNeverRetryPolicyProvider_h */
