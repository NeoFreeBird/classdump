//
#ifndef ONBSecurityKeySubtaskController_h
#define ONBSecurityKeySubtaskController_h
@import Foundation;

#include "ASAuthorizationControllerDelegate-Protocol.h"
#include "ASAuthorizationControllerPresentationContextProviding-Protocol.h"
#include "ASAuthorizationProvider-Protocol.h"
#include "ONBSubtaskController.h"
#include "ONBSubtaskControllerDelegate-Protocol.h"

@class NSString, OCFSecurityKeySubtask, OCFSecurityKeySubtaskState;

@interface ONBSecurityKeySubtaskController : ONBSubtaskController <ASAuthorizationProvider, ASAuthorizationControllerDelegate, ASAuthorizationControllerPresentationContextProviding> {
    /* instance variables */
    OCFSecurityKeySubtask *_subtask;
    OCFSecurityKeySubtaskState *_state;
    id <ONBSubtaskControllerDelegate> _delegate;
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

#endif /* ONBSecurityKeySubtaskController_h */
