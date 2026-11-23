//
#ifndef _$s4Grok0A18AccountSyncManagerCN_T1TwitterSwift_h
#define _$s4Grok0A18AccountSyncManagerCN_T1TwitterSwift_h
@import Foundation;

@interface type metadata for Grok.GrokAccountSyncManager (T1TwitterSwift)

/* instance methods */
- (void)configureAndScheduleSync;
- (void)activateGatewayForActiveAccountIfEnabled;
- (void)registerAndActivateGatewayIfEnabledFor:(id)_for;
- (void)configureAndSyncNewAccount;
- (void)updateCurrentActiveAccountFromActiveAccount;
- (_Bool)handleGrokTokenRefreshDeeplinkWithUserIDString:(id)idstring callbackString:(id)string sourceScheme:(id)scheme;
- (void)startObservingAccountChanges;
- (void)handleAccountDidBecomeActive:(id)active;
- (void)handleAccountUserDidChange:(id)change;
- (void)handleFeatureSwitchesDidUpdate:(id)update;
- (void)scheduleDeferredDeeplinkCleanup;

@end

#endif /* _$s4Grok0A18AccountSyncManagerCN_T1TwitterSwift_h */
