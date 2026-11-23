//
#ifndef OIDEndSessionImplementation_h
#define OIDEndSessionImplementation_h
@import Foundation;

#include "OIDEndSessionRequest.h"
#include "OIDExternalUserAgent-Protocol.h"
#include "OIDExternalUserAgentSession-Protocol.h"

@class NSObject, NSString;

@interface OIDEndSessionImplementation : NSObject <OIDExternalUserAgentSession> {
    /* instance variables */
    OIDEndSessionRequest *_request;
    id <OIDExternalUserAgent> _externalUserAgent;
    id /* block */ _pendingEndSessionCallback;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithRequest:(id)request;
- (void)presentAuthorizationWithExternalUserAgent:(id)agent callback:(id /* block */)callback;
- (void)cancel;
- (void)cancelWithCompletion:(id /* block */)completion;
- (_Bool)shouldHandleURL:(id)url;
- (_Bool)resumeExternalUserAgentFlowWithURL:(id)url;
- (void)failExternalUserAgentFlowWithError:(id)error;
- (void)didFinishWithResponse:(id)response error:(id)error;

@end

#endif /* OIDEndSessionImplementation_h */
