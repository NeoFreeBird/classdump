//
#ifndef TNUCountCappedChainedHttpRequestRetryPolicyProvider_h
#define TNUCountCappedChainedHttpRequestRetryPolicyProvider_h
@import Foundation;

#include "TNUChainedHttpRequestRetryPolicyProvider.h"

@interface TNUCountCappedChainedHttpRequestRetryPolicyProvider : TNUChainedHttpRequestRetryPolicyProvider

@property (nonatomic) unsigned long long totalRetryCount;
@property (nonatomic) unsigned long long permittedRetryCount;

/* instance methods */
- (id)initWithChildProviders:(id)providers permittedRetryCount:(unsigned long long)count;
- (_Bool)tnl_shouldRetryRequestOperation:(id)operation withResponse:(id)response;
- (void)tnl_requestOperation:(id)operation willStartRetryFromResponse:(id)response afterDelay:(double)delay;

@end

#endif /* TNUCountCappedChainedHttpRequestRetryPolicyProvider_h */
