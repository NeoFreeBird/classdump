//
#ifndef TNLConfiguringRetryPolicyProvider_Protocol_h
#define TNLConfiguringRetryPolicyProvider_Protocol_h
@import Foundation;

#include "TNLRequestRetryPolicyProvider-Protocol.h"

@protocol TNLConfiguringRetryPolicyProvider <TNLRequestRetryPolicyProvider>

@required

/* required instance methods */
- (id)initWithConfiguration:(id)configuration;
- (id)configuration;

@optional

@end

#endif /* TNLConfiguringRetryPolicyProvider_Protocol_h */
