//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAVLHLSNetworkSessionTNL_h
#define TAVLHLSNetworkSessionTNL_h
@import Foundation;

#include "LHLSNetworkSession-Protocol.h"
#include "LHLSNetworkSessionListener-Protocol.h"
#include "TNLRequestDelegate-Protocol.h"

@class NSMutableDictionary, NSObject, NSString, TNLRequestConfiguration, TNLRequestOperationQueue;
@protocol OS_dispatch_queue;

@interface TAVLHLSNetworkSessionTNL : NSObject <TNLRequestDelegate, LHLSNetworkSession> {
    /* instance variables */
    NSObject<OS_dispatch_queue> *_delegateQueue;
    TNLRequestConfiguration *_requestConfiguration;
    TNLRequestOperationQueue *_requestOperationQueue;
    NSMutableDictionary *_requestOperationMap;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak) id <LHLSNetworkSessionListener> listener;

/* class methods */
+ (id)errorStringWithError:(id)error;
+ (id)errorStringWithStatusCode:(long long)code;
+ (id)createOperationQueueIdentifier;

/* instance methods */
- (id)init;
- (id)initWithRequestConfiguration:(id)configuration operationQueueIdentifier:(id)identifier;
- (void)fetchURL:(id)url token:(id)token;
- (void)cancel:(id)cancel;
- (void)shutdown;
- (void)fetchURLSync:(id)urlsync token:(id)token;
- (void)cancelSync:(id)sync;
- (void)shutdownSync;
- (id)tnl_delegateQueueForRequestOperation:(id)operation;
- (id)tnl_completionQueueForRequestOperation:(id)operation;
- (void)tnl_requestOperation:(id)operation didRedirectFromURLRequest:(id)urlrequest toURLRequest:(id)urlrequest;
- (void)tnl_requestOperation:(id)operation didReceiveURLResponse:(id)urlresponse;
- (void)tnl_requestOperation:(id)operation didReceiveData:(id)data;
- (void)tnl_requestOperation:(id)operation didCompleteWithResponse:(id)response;

@end

#endif /* TAVLHLSNetworkSessionTNL_h */
