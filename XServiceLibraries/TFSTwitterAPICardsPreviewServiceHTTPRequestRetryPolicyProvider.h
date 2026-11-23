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
