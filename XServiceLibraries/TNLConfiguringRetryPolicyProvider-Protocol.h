//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
