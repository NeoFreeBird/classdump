//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TNUImageFetchDownloadRetryPolicy_h
#define TNUImageFetchDownloadRetryPolicy_h
@import Foundation;

#include "TNLRequestRetryPolicyProvider-Protocol.h"

@class NSObject, NSString;

@interface TNUImageFetchDownloadRetryPolicy : NSObject <TNLRequestRetryPolicyProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (_Bool)tnl_shouldRetryRequestOperation:(id)operation withResponse:(id)response;
- (double)tnl_delayBeforeRetryForRequestOperation:(id)operation withResponse:(id)response;

@end

#endif /* TNUImageFetchDownloadRetryPolicy_h */
