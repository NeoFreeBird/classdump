//
#ifndef ASAuthorizationControllerDelegate_Protocol_h
#define ASAuthorizationControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol ASAuthorizationControllerDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)authorizationController:(id)controller didCompleteWithAuthorization:(id)authorization;
- (void)authorizationController:(id)controller didCompleteWithAuthorization:(id)authorization;
- (void)authorizationController:(id)controller didCompleteWithError:(id)error;
- (void)authorizationController:(id)controller didCompleteWithError:(id)error;
- (void)authorizationController:(id)controller didCompleteWithCustomMethod:(id)method;

@end

#endif /* ASAuthorizationControllerDelegate_Protocol_h */
