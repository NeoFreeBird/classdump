//
#ifndef TNUNumberedRetryPolicyProvider_h
#define TNUNumberedRetryPolicyProvider_h
@import Foundation;

#include "TNUBasicRetryPolicyProvider.h"

@interface TNUNumberedRetryPolicyProvider : TNUBasicRetryPolicyProvider

@property (readonly, nonatomic) unsigned long long permittedRetryCount;

/* instance methods */
- (id)init;
- (id)initWithConfiguration:(id)configuration;
- (id)initWithPermittedRetryCount:(unsigned long long)count configuration:(id)configuration;
- (_Bool)tnl_shouldRetryRequestOperation:(id)operation withResponse:(id)response;

@end

#endif /* TNUNumberedRetryPolicyProvider_h */
