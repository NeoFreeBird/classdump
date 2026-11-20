//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef ONBSSOSubtaskController_h
#define ONBSSOSubtaskController_h
@import Foundation;

#include "ASAuthorizationControllerDelegate-Protocol.h"
#include "ASAuthorizationControllerPresentationContextProviding-Protocol.h"
#include "ASWebAuthenticationPresentationContextProviding-Protocol.h"
#include "ONBSSOTokenExchangeProvider.h"
#include "ONBSubtaskController.h"
#include "ONBSubtaskControllerDelegate-Protocol.h"

@class ASAuthorizationController, ASWebAuthenticationSession, NSString, OCFSSOSubtask, OCFSSOSubtaskState;

@interface ONBSSOSubtaskController : ONBSubtaskController <ASAuthorizationControllerDelegate, ASAuthorizationControllerPresentationContextProviding, ASWebAuthenticationPresentationContextProviding> {
    /* instance variables */
    OCFSSOSubtask *_subtask;
    OCFSSOSubtaskState *_state;
    ASWebAuthenticationSession *_authSession;
    id <ONBSubtaskControllerDelegate> _delegate;
    ONBSSOTokenExchangeProvider *_tokenProvider;
    ASAuthorizationController *_controller;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)supportedSubtaskClasses;

/* instance methods */
- (id)initWithSubtask:(id)subtask flowToken:(id)token delegate:(id)delegate;
- (void)startWithNavigationContext:(id)context navigationLink:(id)link;
- (void)authorizationController:(id)controller didCompleteWithAuthorization:(id)authorization;
- (void)authorizationController:(id)controller didCompleteWithError:(id)error;
- (id)presentationAnchorForAuthorizationController:(id)controller;
- (id)presentationAnchorForWebAuthenticationSession:(id)session;
- (id /* block */)private_authSessionCallback;
- (void)private_signInWithGoogleSignInClientID:(id)id;
- (id /* block */)private_tokenExchangeCallback;
- (id)private_googleOAuthServiceInfoValueForKey:(id)key;
- (id)private_authorizationScopeForString:(id)string;
- (_Bool)private_isStateValid:(id)valid;

@end

#endif /* ONBSSOSubtaskController_h */
