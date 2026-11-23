//
#ifndef T1SettingsConnectedSSOAccountItem_h
#define T1SettingsConnectedSSOAccountItem_h
@import Foundation;

#include "T1SettingsConnectedSSOAccountViewDelegate-Protocol.h"

@class NSObject, TFNTwitterAccount, UIViewController;

@interface T1SettingsConnectedSSOAccountItem : NSObject

@property (retain, nonatomic) TFNTwitterAccount *account;
@property (weak, nonatomic) UIViewController *presentingController;
@property (nonatomic) unsigned long long ssoProviderType;
@property (nonatomic) _Bool isConnected;
@property (weak, nonatomic) id <T1SettingsConnectedSSOAccountViewDelegate> delegate;

/* instance methods */
- (id)initWithAccount:(id)account forSSOProviderType:(unsigned long long)type presentingViewController:(id)controller isConnected:(_Bool)connected;

@end

#endif /* T1SettingsConnectedSSOAccountItem_h */
