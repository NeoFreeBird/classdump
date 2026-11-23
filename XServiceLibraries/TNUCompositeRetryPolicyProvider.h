//
#ifndef TNUCompositeRetryPolicyProvider_h
#define TNUCompositeRetryPolicyProvider_h
@import Foundation;

#include "TNLRequestRetryPolicyProvider-Protocol.h"
#include "TNUBasicRetryPolicyProvider.h"
#include "TNURetryAfterHeaderPolicyProvider.h"

@interface TNUCompositeRetryPolicyProvider : TNUBasicRetryPolicyProvider {
    /* instance variables */
    TNURetryAfterHeaderPolicyProvider *_afterDelayHeaderRetryPolicyProvider;
    id <TNLRequestRetryPolicyProvider> _defaultRetryPolicyProvider;
}

/* instance methods */
- (id)init;
- (id)initWithConfiguration:(id)configuration;
- (id)initWithDefaultRetryPolicyProviderClass:(Class)_class shouldRespectRetryAfterResponseHeader:(_Bool)header configuration:(id)configuration;
- (_Bool)tnl_shouldRetryRequestOperation:(id)operation withResponse:(id)response;
- (double)tnl_delayBeforeRetryForRequestOperation:(id)operation withResponse:(id)response;
- (void)tnl_requestOperation:(id)operation willStartRetryFromResponse:(id)response afterDelay:(double)delay;

@end

#endif /* TNUCompositeRetryPolicyProvider_h */
