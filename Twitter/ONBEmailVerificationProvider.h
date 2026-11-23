//
#ifndef ONBEmailVerificationProvider_h
#define ONBEmailVerificationProvider_h
@import Foundation;

#include "ONBIdentityVerificationProvider-Protocol.h"
#include "ONBIdentityVerificationProviderDelegate-Protocol.h"

@class NSObject, NSString, OCFEmailVerificationSubtask, TFNTwitterAccount;
@protocol TFSTwitterAPICommandContext, TFSTwitterAPICommandLoader;

@interface ONBEmailVerificationProvider : NSObject <ONBIdentityVerificationProvider> {
    /* instance variables */
    OCFEmailVerificationSubtask *_subtask;
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
- (id)private_verificationCommandWithResponseBlock:(id /* block */)block;
- (id)accountIdentifier;
- (id)identityVerificationPinCodeForArguments:(id)arguments;
- (id)resendHUDTextForResendHUDState:(long long)hudstate navigationContext:(id)context;
- (void)verifyPinWithNavigationContext:(id)context resend:(_Bool)resend responseBlock:(id /* block */)block;
- (void)checkIdentityVerificationStatusWithResponseBlock:(id /* block */)block;

@end

#endif /* ONBEmailVerificationProvider_h */
