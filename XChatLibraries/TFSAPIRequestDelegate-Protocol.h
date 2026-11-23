//
#ifndef TFSAPIRequestDelegate_Protocol_h
#define TFSAPIRequestDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFSAPIRequestDelegate <NSObject>

@required

/* required instance methods */
- (void)APIRequest:(id)apirequest requestOperation:(id)operation didCompleteWithResponse:(id)response;
- (void)APIRequest:(id)apirequest requestOperation:(id)operation didCompleteWithResponse:(id)response;

@optional

/* optional instance methods */
- (_Bool)shouldFireProbesForRequest:(id)request;
- (_Bool)shouldFireProbesForRequest:(id)request;
- (id)requestConfigurationForAPIRequest:(id)apirequest requestConfiguration:(id)configuration;
- (id)requestConfigurationForAPIRequest:(id)apirequest requestConfiguration:(id)configuration;
- (void)APIRequest:(id)apirequest requestOperation:(id)operation didTransitionFromState:(long long)state toState:(long long)state;
- (void)APIRequest:(id)apirequest requestOperation:(id)operation didTransitionFromState:(long long)state toState:(long long)state;
- (void)APIRequest:(id)apirequest requestOperation:(id)operation didStartRequestWithURLSessionTaskIdentifier:(unsigned long long)identifier URLSessionConfigurationIdentifier:(id)identifier URLSessionSharedContainerIdentifier:(id)identifier isBackgroundRequest:(_Bool)request;
- (void)APIRequest:(id)apirequest requestOperation:(id)operation didStartRequestWithURLSessionTaskIdentifier:(unsigned long long)identifier URLSessionConfigurationIdentifier:(id)identifier URLSessionSharedContainerIdentifier:(id)identifier isBackgroundRequest:(_Bool)request;
- (void)APIRequest:(id)apirequest requestOperation:(id)operation didRedirectFromURLRequest:(id)urlrequest toURLRequest:(id)urlrequest;
- (void)APIRequest:(id)apirequest requestOperation:(id)operation didRedirectFromURLRequest:(id)urlrequest toURLRequest:(id)urlrequest;
- (void)APIRequest:(id)apirequest requestOperation:(id)operation didSanitizeFromHost:(id)host toHost:(id)host;
- (void)APIRequest:(id)apirequest requestOperation:(id)operation didSanitizeFromHost:(id)host toHost:(id)host;
- (void)APIRequest:(id)apirequest requestOperation:(id)operation didUpdateUploadProgress:(float)progress;
- (void)APIRequest:(id)apirequest requestOperation:(id)operation didUpdateUploadProgress:(float)progress;
- (void)APIRequest:(id)apirequest requestOperation:(id)operation didUpdateDownloadProgress:(float)progress;
- (void)APIRequest:(id)apirequest requestOperation:(id)operation didUpdateDownloadProgress:(float)progress;
- (void)APIRequest:(id)apirequest requestOperation:(id)operation didReceiveData:(id)data;
- (void)APIRequest:(id)apirequest requestOperation:(id)operation didReceiveData:(id)data;
- (void)APIRequest:(id)apirequest requestOperation:(id)operation didReceiveURLResponse:(id)urlresponse;
- (void)APIRequest:(id)apirequest requestOperation:(id)operation didReceiveURLResponse:(id)urlresponse;
- (void)APIRequest:(id)apirequest requestOperation:(id)operation willStartRetryFromResponse:(id)response policyProvider:(id)provider afterDelay:(double)delay;
- (void)APIRequest:(id)apirequest requestOperation:(id)operation willStartRetryFromResponse:(id)response policyProvider:(id)provider afterDelay:(double)delay;
- (void)APIRequest:(id)apirequest requestOperation:(id)operation didStartRetryFromResponse:(id)response policyProvider:(id)provider;
- (void)APIRequest:(id)apirequest requestOperation:(id)operation didStartRetryFromResponse:(id)response policyProvider:(id)provider;
- (void)APIRequest:(id)apirequest requestOperation:(id)operation didCompleteAttemptWithResponse:(id)response disposition:(long long)disposition;
- (void)APIRequest:(id)apirequest requestOperation:(id)operation didCompleteAttemptWithResponse:(id)response disposition:(long long)disposition;
- (void)APIRequest:(id)apirequest requestOperation:(id)operation readyToEnqueueUnderlyingNetworkingOperation:(_Bool)operation enqueueBlock:(id /* block */)block;
- (void)APIRequest:(id)apirequest requestOperation:(id)operation readyToEnqueueUnderlyingNetworkingOperation:(_Bool)operation enqueueBlock:(id /* block */)block;

@end

#endif /* TFSAPIRequestDelegate_Protocol_h */
