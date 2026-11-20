//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtCC8XJetfuel20AppleSignInComponentP33_070F6AB7FF91A7CEE02FE61EC13EFDD613AppleDelegate_h
#define _TtCC8XJetfuel20AppleSignInComponentP33_070F6AB7FF91A7CEE02FE61EC13EFDD613AppleDelegate_h
@import Foundation;

#include "ASAuthorizationControllerDelegate-Protocol.h"
#include "ASAuthorizationControllerPresentationContextProviding-Protocol.h"

@class NSObject;

@interface XJetfuel.AppleSignInComponent.(AppleDelegate in _070F6AB7FF91A7CEE02FE61EC13EFDD6) : NSObject <ASAuthorizationControllerDelegate, ASAuthorizationControllerPresentationContextProviding> { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 component;
    B24@0:8@"NSString"16 props;
}

/* instance methods */
- (void)authorizationController:(id)controller didCompleteWithAuthorization:(id)authorization;
- (void)authorizationController:(id)controller didCompleteWithError:(id)error;
- (id)presentationAnchorForAuthorizationController:(id)controller;
- (id)init;

@end

#endif /* _TtCC8XJetfuel20AppleSignInComponentP33_070F6AB7FF91A7CEE02FE61EC13EFDD613AppleDelegate_h */
