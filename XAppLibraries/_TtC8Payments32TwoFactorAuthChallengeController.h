//
#ifndef _TtC8Payments32TwoFactorAuthChallengeController_h
#define _TtC8Payments32TwoFactorAuthChallengeController_h
@import Foundation;

#include "ASAuthorizationControllerDelegate-Protocol.h"
#include "ASAuthorizationControllerPresentationContextProviding-Protocol.h"

@class NSObject, _$s10Foundation11JSONDecoderCMn, _$s10Foundation11JSONEncoderCMn, _$sScCySS _$ss5ErrorMp ?, _$sSo25ASAuthorizationControllerCSg;

@interface Payments.TwoFactorAuthChallengeController : NSObject <ASAuthorizationControllerPresentationContextProviding, ASAuthorizationControllerDelegate> { // (Swift)
    /* instance variables */
    nominal type descriptor for Foundation.JSONDecoder jsonDecoder;
    nominal type descriptor for Foundation.JSONEncoder jsonEncoder;
    __C.ASAuthorizationController? authorizationController;
    Swift.CheckedContinuation empty-list Swift.String protocol descriptor for Swift.Error ? continuation;
}

/* instance methods */
- (id)presentationAnchorForAuthorizationController:(id)controller;
- (void)authorizationController:(id)controller didCompleteWithError:(id)error;
- (void)authorizationController:(id)controller didCompleteWithAuthorization:(id)authorization;
- (id)init;

@end

#endif /* _TtC8Payments32TwoFactorAuthChallengeController_h */
