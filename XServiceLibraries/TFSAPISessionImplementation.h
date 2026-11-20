//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSAPISessionImplementation_h
#define TFSAPISessionImplementation_h
@import Foundation;

#include "TFSAPIAuthContext.h"
#include "TFSAPIAuthenticator-Protocol.h"
#include "TFSAPIHeaderProvider-Protocol.h"
#include "TFSAPISession-Protocol.h"
#include "TNLRequestOperationQueue.h"

@class NSObject, NSOperationQueue, NSString;

@interface TFSAPISessionImplementation : NSObject <TFSAPISession> {
    /* instance variables */
    NSString *_accountID;
    id <TFSAPIAuthenticator> _authenticator;
    TFSAPIAuthContext *_authContext;
    id <TFSAPIHeaderProvider> _headerProvider;
    TNLRequestOperationQueue *_operationQueue;
    NSOperationQueue *_authOperationQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sessionIdentifierWithAPIIdentifier:(id)apiidentifier accountID:(id)id authContext:(id)context;
+ (Class)responseClassForRequest:(id)request;
+ (id)_encodedIdentifierWithIdentifier:(id)identifier;

/* instance methods */
- (id)initWithAPIIdentifier:(id)apiidentifier accountID:(id)id authenticator:(id)authenticator authContext:(id)context headerProvider:(id)provider;
- (id)requestOperationWithAPIRequest:(id)apirequest delegate:(id)delegate;
- (id)requestOperationWithAPIRequest:(id)apirequest delegate:(id)delegate enqueue:(_Bool)enqueue;
- (void)enqueueRequestOperation:(id)operation;
- (id)tnl_delegateQueueForRequestOperation:(id)operation;
- (id)tnl_completionQueueForRequestOperation:(id)operation;
- (void)tnl_requestOperation:(id)operation hydrateRequest:(id)request completion:(id /* block */)completion;
- (void)tnl_requestOperation:(id)operation authorizeURLRequest:(id)urlrequest completion:(id /* block */)completion;
- (void)tnl_requestOperation:(id)operation didCompleteWithResponse:(id)response;
- (void)tnl_requestOperation:(id)operation didTransitionFromState:(long long)state toState:(long long)state;
- (void)tnl_requestOperation:(id)operation didStartRequestWithURLSessionTaskIdentifier:(unsigned long long)identifier URLSessionConfigurationIdentifier:(id)identifier URLSessionSharedContainerIdentifier:(id)identifier isBackgroundRequest:(_Bool)request;
- (void)tnl_requestOperation:(id)operation didRedirectFromURLRequest:(id)urlrequest toURLRequest:(id)urlrequest;
- (void)tnl_requestOperation:(id)operation didSanitizeFromHost:(id)host toHost:(id)host;
- (void)tnl_requestOperation:(id)operation didUpdateUploadProgress:(float)progress;
- (void)tnl_requestOperation:(id)operation didUpdateDownloadProgress:(float)progress;
- (void)tnl_requestOperation:(id)operation didReceiveURLResponse:(id)urlresponse;
- (void)tnl_requestOperation:(id)operation didReceiveData:(id)data;
- (void)tnl_requestOperation:(id)operation willStartRetryFromResponse:(id)response policyProvider:(id)provider afterDelay:(double)delay;
- (void)tnl_requestOperation:(id)operation didStartRetryFromResponse:(id)response policyProvider:(id)provider;
- (void)tnl_requestOperation:(id)operation didCompleteAttemptWithResponse:(id)response disposition:(long long)disposition;
- (void)tnl_requestOperation:(id)operation readyToEnqueueUnderlyingNetworkingOperation:(_Bool)operation enqueueBlock:(id /* block */)block;
- (id)_operationQueue;
- (void)_enqueueRequestOperation:(id)operation;
- (void)_addCommonHeaderFieldsToURLRequest:(id)urlrequest withAccountID:(id)id completion:(id /* block */)completion;

@end

#endif /* TFSAPISessionImplementation_h */
