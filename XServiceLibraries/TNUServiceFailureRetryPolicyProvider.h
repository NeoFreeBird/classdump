//
#ifndef TNUServiceFailureRetryPolicyProvider_h
#define TNUServiceFailureRetryPolicyProvider_h
@import Foundation;

#include "TNUCountCappedChainedHttpRequestRetryPolicyProvider.h"

@interface TNUServiceFailureRetryPolicyProvider : TNUCountCappedChainedHttpRequestRetryPolicyProvider

/* instance methods */
- (id)initWithPermittedRetryCount:(unsigned long long)count;

@end

#endif /* TNUServiceFailureRetryPolicyProvider_h */
