//
#ifndef OIDAuthorizationSession_h
#define OIDAuthorizationSession_h
@import Foundation;

#include "OIDAuthorizationRequest.h"
#include "OIDExternalUserAgent-Protocol.h"
#include "OIDExternalUserAgentSession-Protocol.h"

@class NSObject, NSString;

@interface OIDAuthorizationSession : NSObject <OIDExternalUserAgentSession> {
    /* instance variables */
    OIDAuthorizationRequest *_request;
    id <OIDExternalUserAgent> _externalUserAgent;
    id /* block */ _pendingauthorizationFlowCallback;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (_Bool)URL:(id)url matchesRedirectionURL:(id)url;

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

#endif /* OIDAuthorizationSession_h */
