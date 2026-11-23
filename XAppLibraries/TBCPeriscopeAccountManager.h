//
#ifndef TBCPeriscopeAccountManager_h
#define TBCPeriscopeAccountManager_h
@import Foundation;

#include "TBCPeriscopeAccount.h"
#include "TBCPeriscopeAuthenticationController.h"

@class NSObject;

@interface TBCPeriscopeAccountManager : NSObject

@property (retain, nonatomic) TBCPeriscopeAccount *periscopeAccount;
@property (nonatomic) _Bool periscopeAuthenticationInProgress;
@property (readonly, nonatomic) TBCPeriscopeAuthenticationController *periscopeAuthenticationController;

/* class methods */
+ (id)periscopeAccountManagerWithTwitterAccount:(id)account;

/* instance methods */
- (void)authenticatePeriscopeDirect:(_Bool)direct showHUD:(_Bool)hud force:(_Bool)force completion:(id /* block */)completion;
- (id)initWithAuthenticationController:(id)controller periscopeAccount:(id)account;
- (void)initializePeriscopeAccountWithCachedDictionaryValue:(id)value;
- (void)authenticatePeriscopeDirect:(_Bool)direct force:(_Bool)force completion:(id /* block */)completion;
- (void)authenticatePeriscopeDirect:(_Bool)direct force:(_Bool)force accountType:(unsigned long long)type completion:(id /* block */)completion;
- (void)_authenticatePeriscopeDirect:(_Bool)direct accountType:(unsigned long long)type completion:(id /* block */)completion;
- (id)periscopeAuthenticationErrorForCode:(long long)code;
- (id)_tfn_descriptionForAuthenticationErrorCode:(long long)code;
- (void)detachPeriscopeAccountIfNecessary;

@end

#endif /* TBCPeriscopeAccountManager_h */
