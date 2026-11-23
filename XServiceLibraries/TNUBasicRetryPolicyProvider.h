//
#ifndef TNUBasicRetryPolicyProvider_h
#define TNUBasicRetryPolicyProvider_h
@import Foundation;

#include "TNLRequestRetryPolicyConfiguration.h"
#include "TNLRequestRetryPolicyProvider-Protocol.h"

@class NSObject, NSString;

@interface TNUBasicRetryPolicyProvider : NSObject <TNLRequestRetryPolicyProvider>

@property (readonly, nonatomic) TNLRequestRetryPolicyConfiguration *configuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithConfiguration:(id)configuration;
- (_Bool)tnl_shouldRetryRequestOperation:(id)operation withResponse:(id)response;
- (double)tnl_delayBeforeRetryForRequestOperation:(id)operation withResponse:(id)response;
- (void)tnl_requestOperation:(id)operation willStartRetryFromResponse:(id)response afterDelay:(double)delay;
- (void)tnl_requestOperation:(id)operation didStartRetryFromResponse:(id)response;

@end

#endif /* TNUBasicRetryPolicyProvider_h */
