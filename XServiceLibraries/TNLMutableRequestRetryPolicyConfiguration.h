//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TNLMutableRequestRetryPolicyConfiguration_h
#define TNLMutableRequestRetryPolicyConfiguration_h
@import Foundation;

#include "TNLRequestRetryPolicyConfiguration.h"

@interface TNLMutableRequestRetryPolicyConfiguration : TNLRequestRetryPolicyConfiguration

/* class methods */
+ (_Bool)tnl_isMutableClass;

/* instance methods */
- (void)setMethod:(long long)method canBeRetried:(_Bool)retried;
- (void)setStatusCode:(long long)code canBeRetried:(_Bool)retried;
- (void)setURLErrorCode:(long long)code canBeRetried:(_Bool)retried;
- (void)setPOSIXErrorCode:(int)code canBeRetried:(_Bool)retried;
- (void)setMethodsThatCanBeRetried:(id)retried;
- (void)setStatusCodesThatCanBeRetried:(id)retried;
- (void)setURLErrorCodesThatCanBeRetried:(id)retried;
- (void)setPOSIXErrorCodesThatCanBeRetried:(id)retried;
- (id)copyWithZone:(struct _NSZone *)zone;

@end

#endif /* TNLMutableRequestRetryPolicyConfiguration_h */
