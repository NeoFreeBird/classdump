//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef ONBPhoneVerificationProvider_h
#define ONBPhoneVerificationProvider_h
@import Foundation;

#include "ONBIdentityVerificationProvider-Protocol.h"
#include "ONBIdentityVerificationProviderDelegate-Protocol.h"

@class NSObject, NSString, OCFPhoneVerificationSubtask, TFNTwitterAccount;
@protocol TFSTwitterAPICommandContext, TFSTwitterAPICommandLoader;

@interface ONBPhoneVerificationProvider : NSObject <ONBIdentityVerificationProvider> {
    /* instance variables */
    OCFPhoneVerificationSubtask *_subtask;
    id <TFSTwitterAPICommandLoader> _commandLoader;
    id <TFSTwitterAPICommandContext> _context;
    NSString *_flowToken;
}

@property (retain, nonatomic) TFNTwitterAccount *account;
@property (weak, nonatomic) id <ONBIdentityVerificationProviderDelegate> identityVerificationDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFlowToken:(id)token subtask:(id)subtask;
- (id)private_verificationCommandWithResponseBock:(id /* block */)bock byVoice:(_Bool)voice;
- (id)private_phoneNumberString;
- (id)private_countryCodeString;
- (id)accountIdentifier;
- (id)resendHUDTextForResendHUDState:(long long)hudstate navigationContext:(id)context;
- (void)verifyPinWithNavigationContext:(id)context resend:(_Bool)resend responseBlock:(id /* block */)block;

@end

#endif /* ONBPhoneVerificationProvider_h */
