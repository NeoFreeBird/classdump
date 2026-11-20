//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
