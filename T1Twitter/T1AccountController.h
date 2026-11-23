//
#ifndef T1AccountController_h
#define T1AccountController_h
@import Foundation;

#include "TFNTwitterAccountService-Protocol.h"

@class NSObject, TFNTwitterPushRegistrationManager, TFSTwitterFeatureRegistry;

@interface T1AccountController : NSObject

@property (readonly, nonatomic) id <TFNTwitterAccountService> accountService;
@property (nonatomic) _Bool updatingTeamsAccount;
@property (readonly, nonatomic) TFNTwitterPushRegistrationManager *pushRegistrationManager;
@property (readonly, nonatomic) TFSTwitterFeatureRegistry *featureRegistry;
@property (nonatomic) _Bool teamsAccountUpdateNeeded;

/* class methods */
+ (id)defaultController;

/* instance methods */
- (id)initWithAccountService:(id)service pushRegistrationManager:(id)manager featureRegistry:(id)registry;
- (void)addAccount:(id)account;
- (id)addOrUpdateAccount:(id)account;
- (void)removeAccount:(id)account source:(long long)source withAccountRemovalCompletionHandler:(id /* block */)handler;
- (_Bool)addOrUpdateTeamsAccount:(id)account;
- (_Bool)shouldUpdateTeamsAccount:(id)account withTeamsAccount:(id)account;
- (void)updateTeamsAccountsCredentialWithOwnerAccount:(id)account;
- (void)updateTeamsAccountsForAll:(long long)all withDelay:(_Bool)delay withCompletionBlock:(id /* block */)block;
- (_Bool)updateTeamsAccount:(id)account withTeamsAccount:(id)account;
- (id)getContributorAccountFromTeamsAccount:(id)account;
- (void)removeTeamsAccount:(id)account;
- (void)removeAllTeamsAccount;
- (void)_t1_updateTeamsAccountsForAll:(long long)all withCompletionBlock:(id /* block */)block;
- (_Bool)_t1_isFatalError:(id)error;
- (_Bool)_t1_removeStrandedTeamsAccounts;
- (_Bool)_t1_shouldReplaceEntry:(id)entry withEntry:(id)entry;
- (void)_t1_postTeamsNotification:(long long)notification accountsDidChange:(_Bool)change;
- (_Bool)_t1_didFinishTeamsAccountUpdateWithBlock:(id /* block */)block;
- (void)_t1_updateEntry:(id)entry inContributeesIndex:(id)index;
- (void)_t1_updateTeamsAccountWithContributeesDict:(id)dict completionBlock:(id /* block */)block;
- (_Bool)_t1_isAccountEligibleForTeamsUpdate:(id)update;
- (void)_t1_updateOwnerAccountContributeeUserIDs:(id)ids contributor:(id)contributor;
- (void)_t1_addAccount:(id)account shouldNotifyAccountsDidChange:(_Bool)change;
- (void)_t1_removeAccount:(id)account source:(long long)source notifyAccountsDidChange:(_Bool)change completion:(id /* block */)completion;
- (void)_t1_removeAccountAfterEndingCalls:(id)calls source:(long long)source notifyAccountsDidChange:(_Bool)change completion:(id /* block */)completion;
- (void)_t1_prepareToRemoveAccount:(id)account source:(long long)source notifyAccountsDidChange:(_Bool)change;
- (void)_t1_finishedRemovingAccount:(id)account completion:(id /* block */)completion;
- (void)_t1_logoutOauthSessionWithAccount:(id)account completion:(id /* block */)completion;
- (void)_t1_unregisterLoginVerificationWithAccount:(id)account completion:(id /* block */)completion;
- (void)_t1_unregisterPushVerificationWithAccount:(id)account completion:(id /* block */)completion;
- (void)_t1_regenerateLoginVerificationBackupCodeWithAccount:(id)account completion:(id /* block */)completion;

@end

#endif /* T1AccountController_h */
