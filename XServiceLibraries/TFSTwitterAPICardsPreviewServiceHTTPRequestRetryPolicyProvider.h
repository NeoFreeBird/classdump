//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterAPICardsPreviewServiceHTTPRequestRetryPolicyProvider_h
#define TFSTwitterAPICardsPreviewServiceHTTPRequestRetryPolicyProvider_h
@import Foundation;

#include "TNUCountCappedChainedHttpRequestRetryPolicyProvider.h"

@interface TFSTwitterAPICardsPreviewServiceHTTPRequestRetryPolicyProvider : TNUCountCappedChainedHttpRequestRetryPolicyProvider

@property (readonly, nonatomic) double initialIdleTimeout;

/* instance methods */
- (id)init;
- (id)initWithPermittedRetryCount:(unsigned long long)count;

@end

#endif /* TFSTwitterAPICardsPreviewServiceHTTPRequestRetryPolicyProvider_h */
