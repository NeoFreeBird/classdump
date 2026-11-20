//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TNLRequestEventHandler_Protocol_h
#define TNLRequestEventHandler_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TNLRequestEventHandler <NSObject>

@required

@optional

/* optional instance methods */
- (void)tnl_requestOperation:(id)operation didTransitionFromState:(long long)state toState:(long long)state;
- (void)tnl_requestOperation:(id)operation didStartRequestWithURLSessionTaskIdentifier:(unsigned long long)identifier URLSessionConfigurationIdentifier:(id)identifier URLSessionSharedContainerIdentifier:(id)identifier isBackgroundRequest:(_Bool)request;
- (void)tnl_requestOperation:(id)operation didRedirectFromURLRequest:(id)urlrequest toURLRequest:(id)urlrequest;
- (void)tnl_requestOperation:(id)operation didSanitizeFromHost:(id)host toHost:(id)host;
- (void)tnl_requestOperation:(id)operation didUpdateUploadProgress:(float)progress;
- (void)tnl_requestOperation:(id)operation didUpdateDownloadProgress:(float)progress;
- (void)tnl_requestOperation:(id)operation didReceiveData:(id)data;
- (void)tnl_requestOperation:(id)operation didReceiveURLResponse:(id)urlresponse;
- (void)tnl_requestOperation:(id)operation willStartRetryFromResponse:(id)response policyProvider:(id)provider afterDelay:(double)delay;
- (void)tnl_requestOperation:(id)operation didStartRetryFromResponse:(id)response policyProvider:(id)provider;
- (void)tnl_requestOperation:(id)operation didCompleteAttemptWithResponse:(id)response disposition:(long long)disposition;
- (void)tnl_requestOperation:(id)operation readyToEnqueueUnderlyingNetworkingOperation:(_Bool)operation enqueueBlock:(id /* block */)block;
- (void)tnl_requestOperationIsWaitingForConnectivity:(id)connectivity;
- (void)tnl_requestOperation:(id)operation didCompleteWithResponse:(id)response;

@end

#endif /* TNLRequestEventHandler_Protocol_h */
