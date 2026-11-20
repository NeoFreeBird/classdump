//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtCC8XJetfuel17JetXPublicKeyAuthP33_FD6B2C37BE9CFF85F0FBE68AF410C39C8Delegate_h
#define _TtCC8XJetfuel17JetXPublicKeyAuthP33_FD6B2C37BE9CFF85F0FBE68AF410C39C8Delegate_h
@import Foundation;

#include "ASAuthorizationControllerDelegate-Protocol.h"
#include "ASAuthorizationControllerPresentationContextProviding-Protocol.h"

@class NSObject;

@interface XJetfuel.JetXPublicKeyAuth.(Delegate in _FD6B2C37BE9CFF85F0FBE68AF410C39C) : NSObject <ASAuthorizationControllerDelegate, ASAuthorizationControllerPresentationContextProviding> { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 continuation;
    B24@0:8@"NSString"16 anchor;
}

/* instance methods */
- (void)authorizationController:(id)controller didCompleteWithAuthorization:(id)authorization;
- (void)authorizationController:(id)controller didCompleteWithError:(id)error;
- (id)presentationAnchorForAuthorizationController:(id)controller;
- (id)init;

@end

#endif /* _TtCC8XJetfuel17JetXPublicKeyAuthP33_FD6B2C37BE9CFF85F0FBE68AF410C39C8Delegate_h */
