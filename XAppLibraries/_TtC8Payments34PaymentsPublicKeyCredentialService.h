//
#ifndef _TtC8Payments34PaymentsPublicKeyCredentialService_h
#define _TtC8Payments34PaymentsPublicKeyCredentialService_h
@import Foundation;

#include "ASAuthorizationControllerDelegate-Protocol.h"
#include "ASAuthorizationControllerPresentationContextProviding-Protocol.h"

@class NSObject, _$sScCySo15ASAuthorizationC _$ss5ErrorMp ?, _$sSo25ASAuthorizationControllerCSg;

@interface Payments.PaymentsPublicKeyCredentialService : NSObject <ASAuthorizationControllerDelegate, ASAuthorizationControllerPresentationContextProviding> { // (Swift)
    /* instance variables */
    __C.ASAuthorizationController? authorizationController;
    Swift.CheckedContinuation empty-list __C.ASAuthorization protocol descriptor for Swift.Error ? continuation;
}

/* instance methods */
- (void)authorizationController:(id)controller didCompleteWithError:(id)error;
- (void)authorizationController:(id)controller didCompleteWithAuthorization:(id)authorization;
- (id)presentationAnchorForAuthorizationController:(id)controller;
- (id)init;

@end

#endif /* _TtC8Payments34PaymentsPublicKeyCredentialService_h */
