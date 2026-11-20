//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TEKAPIClient_h
#define TEKAPIClient_h
@import Foundation;

#include "TNLRequestDelegate-Protocol.h"
#include "TNLRequestOperationQueue.h"

@class NSObject, NSString;

@interface TEKAPIClient : NSObject <TNLRequestDelegate> {
    /* instance variables */
    TNLRequestOperationQueue *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy) NSString *userAgentString;
@property (copy) NSString *sharedContainerIdentifier;

/* class methods */
+ (id /* block */)attestationTokenBlock;
+ (void)setAttestationTokenBlock:(id /* block */)block;
+ (id)sharedClient;

/* instance methods */
- (void)_applyUserAgentToMutableRequest:(id)request;
- (void)_applyAttestationHeadersToMutableRequest:(id)request account:(id)account;
- (id)_hydrateMultipartRequest:(id)request multipartFormData:(id)data context:(id)context error:(id *)error;
- (id)_hydrateParameterRequest:(id)request context:(id)context error:(id *)error;
- (id)_hydrateJsonEscapedStringBodyRequest:(id)request jsonEscapedBody:(id)body context:(id)context error:(id *)error;
- (void)tnl_requestOperation:(id)operation hydrateRequest:(id)request completion:(id /* block */)completion;
- (void)tnl_requestOperation:(id)operation didCompleteWithResponse:(id)response;
- (void)tnl_requestOperation:(id)operation didUpdateUploadProgress:(float)progress;
- (void)tnl_requestOperation:(id)operation didUpdateDownloadProgress:(float)progress;
- (void)tnl_requestOperation:(id)operation didStartRequestWithURLSessionTaskIdentifier:(unsigned long long)identifier URLSessionConfigurationIdentifier:(id)identifier URLSessionSharedContainerIdentifier:(id)identifier isBackgroundRequest:(_Bool)request;
- (id)initWithIdentifier:(id)identifier;
- (id)operationForRequest:(id)request account:(id)account completion:(id /* block */)completion;
- (id)operationForRequest:(id)request account:(id)account didStart:(id /* block */)start uploadProgress:(id /* block */)progress downloadProgress:(id /* block */)progress completion:(id /* block */)completion;
- (void)startRequestOperation:(id)operation;

@end

#endif /* TEKAPIClient_h */
