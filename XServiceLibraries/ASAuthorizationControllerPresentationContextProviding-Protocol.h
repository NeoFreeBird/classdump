//
#ifndef ASAuthorizationControllerPresentationContextProviding_Protocol_h
#define ASAuthorizationControllerPresentationContextProviding_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol ASAuthorizationControllerPresentationContextProviding <NSObject>

@required

/* required instance methods */
- (id)presentationAnchorForAuthorizationController:(id)controller;
- (id)presentationAnchorForAuthorizationController:(id)controller;

@optional

@end

#endif /* ASAuthorizationControllerPresentationContextProviding_Protocol_h */
