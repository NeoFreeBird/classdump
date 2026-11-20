//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterAPICardsPreviewRetryAfterHeaderRetryPolicyProvider_h
#define TFSTwitterAPICardsPreviewRetryAfterHeaderRetryPolicyProvider_h
@import Foundation;

#include "TNLRequestRetryPolicyProvider-Protocol.h"

@class NSObject, NSString;

@interface TFSTwitterAPICardsPreviewRetryAfterHeaderRetryPolicyProvider : NSObject <TNLRequestRetryPolicyProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (_Bool)tnl_shouldRetryRequestOperation:(id)operation withResponse:(id)response;
- (double)tnl_delayBeforeRetryForRequestOperation:(id)operation withResponse:(id)response;
- (void)tnl_requestOperation:(id)operation willStartRetryFromResponse:(id)response afterDelay:(double)delay;
- (void)tnl_requestOperation:(id)operation didStartRetryFromResponse:(id)response;

@end

#endif /* TFSTwitterAPICardsPreviewRetryAfterHeaderRetryPolicyProvider_h */
