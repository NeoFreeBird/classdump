//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef ONBPasskeySubtaskController_h
#define ONBPasskeySubtaskController_h
@import Foundation;

#include "ASAuthorizationControllerDelegate-Protocol.h"
#include "ASAuthorizationControllerPresentationContextProviding-Protocol.h"
#include "ONBSubtaskController.h"
#include "ONBSubtaskControllerDelegate-Protocol.h"

@class ASAuthorizationController, NSString, OCFPasskeySubtask, OCFPasskeySubtaskState;

@interface ONBPasskeySubtaskController : ONBSubtaskController <ASAuthorizationControllerDelegate, ASAuthorizationControllerPresentationContextProviding> {
    /* instance variables */
    OCFPasskeySubtask *_subtask;
    OCFPasskeySubtaskState *_state;
    id <ONBSubtaskControllerDelegate> _delegate;
    ASAuthorizationController *_authController;
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
- (id)presentationAnchorForAuthorizationController:(id)controller;
- (void)authorizationController:(id)controller didCompleteWithAuthorization:(id)authorization;
- (void)authorizationController:(id)controller didCompleteWithError:(id)error;

@end

#endif /* ONBPasskeySubtaskController_h */
