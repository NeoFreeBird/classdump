//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
