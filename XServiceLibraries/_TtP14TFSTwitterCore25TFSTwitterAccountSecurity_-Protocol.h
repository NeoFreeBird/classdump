//
#ifndef _TtP14TFSTwitterCore25TFSTwitterAccountSecurity__Protocol_h
#define _TtP14TFSTwitterCore25TFSTwitterAccountSecurity__Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFSTwitterCore.TFSTwitterAccountSecurity <NSObject>

@required

/* class methods */
+ (void)setKnownDeviceToken:(id)token;
+ (id)knownDeviceToken;
+ (void)setAuthTimelineToken:(id)token;
+ (id)authTimelineToken;

/* required instance methods */
- (void)registerForPushLoginVerification:(id /* block */)verification;
- (void)unregisterDeviceForLoginVerification:(id /* block */)verification useInRequestOAuth:(_Bool)oauth;
- (void)updateTwoFactorAuthStatusFromServerUsingNewEndpoint:(_Bool)endpoint completion:(id /* block */)completion;
- (void)checkForLoginVerification:(id /* block */)verification;
- (void)currentBackupCode:(id /* block */)code;
- (void)makeNewBackupCode:(id /* block */)code;
- (id)signLoginVerificationChallenge:(id)challenge;
- (_Bool)validateLegacyPushKeyIfNecessary;
- (void)updateLoginVerificationFromKeychain;
- (void)qrLoginValidateWithQRCode:(id)qrcode responseBlock:(id /* block */)block;
- (void)qrLoginSubmitWithQRCode:(id)qrcode responseBlock:(id /* block */)block;
- (void)updateTOTPKey;

@optional

@end

#endif /* _TtP14TFSTwitterCore25TFSTwitterAccountSecurity__Protocol_h */
