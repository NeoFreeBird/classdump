//
#ifndef TFSAPIChainedHttpRequestRetryPolicyProvider_h
#define TFSAPIChainedHttpRequestRetryPolicyProvider_h
@import Foundation;

#include "TNLRequestRetryPolicyProvider-Protocol.h"

@class NSArray, NSObject, NSString;

@interface TFSAPIChainedHttpRequestRetryPolicyProvider : NSObject <TNLRequestRetryPolicyProvider>

@property (copy, nonatomic) NSArray<TNLRequestRetryPolicyProvider> *childProviders;
@property (retain, nonatomic) id <TNLRequestRetryPolicyProvider> selectedChildProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithChildProviders:(id)providers;
- (_Bool)tnl_shouldRetryRequestOperation:(id)operation withResponse:(id)response;
- (double)tnl_delayBeforeRetryForRequestOperation:(id)operation withResponse:(id)response;
- (id)tnl_configurationOfRetryForRequestOperation:(id)operation withResponse:(id)response priorConfiguration:(id)configuration;
- (void)tnl_requestOperation:(id)operation willStartRetryFromResponse:(id)response afterDelay:(double)delay;
- (void)tnl_requestOperation:(id)operation didStartRetryFromResponse:(id)response;

@end

#endif /* TFSAPIChainedHttpRequestRetryPolicyProvider_h */
