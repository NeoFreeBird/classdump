//
#ifndef ONBIdentityVerificationProvider_Protocol_h
#define ONBIdentityVerificationProvider_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "ONBIdentityVerificationProviderDelegate-Protocol.h"

@class TFNTwitterAccount;

@protocol ONBIdentityVerificationProvider <NSObject>

@required

@property (retain, nonatomic) TFNTwitterAccount *account;
@property (weak, nonatomic) id <ONBIdentityVerificationProviderDelegate> identityVerificationDelegate;

/* required instance methods */
- (void)verifyPinWithNavigationContext:(id)context resend:(_Bool)resend responseBlock:(id /* block */)block;
- (id)resendHUDTextForResendHUDState:(long long)hudstate navigationContext:(id)context;
- (id)accountIdentifier;

@optional

/* optional instance methods */
- (void)checkIdentityVerificationStatusWithResponseBlock:(id /* block */)block;
- (id)identityVerificationPinCodeForArguments:(id)arguments;

@end

#endif /* ONBIdentityVerificationProvider_Protocol_h */
