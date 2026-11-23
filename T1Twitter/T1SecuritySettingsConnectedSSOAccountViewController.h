//
#ifndef T1SecuritySettingsConnectedSSOAccountViewController_h
#define T1SecuritySettingsConnectedSSOAccountViewController_h
@import Foundation;

#include "T1SettingsConnectedSSOAccountViewDelegate-Protocol.h"

@class NSString, TFNItemsDataViewController, TFNTwitterAccount;

@interface T1SecuritySettingsConnectedSSOAccountViewController : TFNItemsDataViewController <T1SettingsConnectedSSOAccountViewDelegate>

@property (retain, nonatomic) TFNTwitterAccount *account;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAccount:(id)account;
- (void)viewWillAppear:(_Bool)appear;
- (void)_t1_refreshSSOConnections;
- (void)_t1_updateSections;
- (id)_t1_createAccountItem:(unsigned long long)item;
- (void)_t1_pushToastWithMessage:(id)message;
- (void)didSucceedSSODisconnectFlow;
- (void)didFailToDisconnectSSOAccountWithProviderType:(id)type;

@end

#endif /* T1SecuritySettingsConnectedSSOAccountViewController_h */
