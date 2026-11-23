//
#ifndef XPaymentsVendorKit_Protocol_h
#define XPaymentsVendorKit_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol XPaymentsVendorKit <NSObject>

@required

/* required instance methods */
- (void)startPersonaInquiryWithID:(id)id sessionToken:(id)token presenter:(id)presenter completion:(id /* block */)completion;
- (void)startPersonaInquiryWithID:(id)id sessionToken:(id)token presenter:(id)presenter completion:(id /* block */)completion;
- (void)initializeSocureDeviceRiskWithPublicKey:(id)key customerSessionID:(id)id completion:(id /* block */)completion;
- (void)initializeSocureDeviceRiskWithPublicKey:(id)key customerSessionID:(id)id completion:(id /* block */)completion;
- (void)launchSocureDocumentVerificationWithPublicKey:(id)key transactionToken:(id)token presenter:(id)presenter completion:(id /* block */)completion;
- (void)launchSocureDocumentVerificationWithPublicKey:(id)key transactionToken:(id)token presenter:(id)presenter completion:(id /* block */)completion;
- (void)configureSardineWithClientID:(id)id environment:(id)environment apiSubdomain:(id)subdomain pixelSubdomain:(id)subdomain userIDHash:(id)idhash sessionKey:(id)key;
- (void)configureSardineWithClientID:(id)id environment:(id)environment apiSubdomain:(id)subdomain pixelSubdomain:(id)subdomain userIDHash:(id)idhash sessionKey:(id)key;
- (void)trackSardineFieldFocusForKey:(id)key hasFocus:(_Bool)focus;
- (void)trackSardineFieldFocusForKey:(id)key hasFocus:(_Bool)focus;
- (void)trackSardineFieldForKey:(id)key text:(id)text;
- (void)trackSardineFieldForKey:(id)key text:(id)text;
- (void)submitSardineDataWithCompletion:(id /* block */)completion;
- (void)submitSardineDataWithCompletion:(id /* block */)completion;
- (id)makePinwheelViewControllerWithToken:(id)token mode:(long long)mode onEvent:(id /* block */)event onSuccess:(id /* block */)success onExit:(id /* block */)exit;
- (id)makePinwheelViewControllerWithToken:(id)token mode:(long long)mode onEvent:(id /* block */)event onSuccess:(id /* block */)success onExit:(id /* block */)exit;

@optional

@end

#endif /* XPaymentsVendorKit_Protocol_h */
