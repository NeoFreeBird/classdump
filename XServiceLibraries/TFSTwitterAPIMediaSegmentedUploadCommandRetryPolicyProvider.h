//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterAPIMediaSegmentedUploadCommandRetryPolicyProvider_h
#define TFSTwitterAPIMediaSegmentedUploadCommandRetryPolicyProvider_h
@import Foundation;

#include "TNLRequestRetryPolicyProvider-Protocol.h"

@class NSObject, NSString;

@interface TFSTwitterAPIMediaSegmentedUploadCommandRetryPolicyProvider : NSObject <TNLRequestRetryPolicyProvider>

@property (readonly, nonatomic) unsigned long long permittedRetryCount;
@property (readonly, nonatomic) double retryDelay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithPermittedRetryCount:(unsigned long long)count retryDelay:(double)delay;
- (_Bool)tnl_shouldRetryRequestOperation:(id)operation withResponse:(id)response;
- (double)tnl_delayBeforeRetryForRequestOperation:(id)operation withResponse:(id)response;

@end

#endif /* TFSTwitterAPIMediaSegmentedUploadCommandRetryPolicyProvider_h */
