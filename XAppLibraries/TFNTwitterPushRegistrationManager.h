//
#ifndef TFNTwitterPushRegistrationManager_h
#define TFNTwitterPushRegistrationManager_h
@import Foundation;

#include "TFNTwitterAccountStoreDelegate-Protocol.h"

@class NSMutableSet, NSObject, NSSet;

@interface TFNTwitterPushRegistrationManager : NSObject <TFNTwitterAccountStoreDelegate>

@property (readonly, nonatomic) NSSet *accountsToUnregisterPush;

/* instance methods */
- (void)unregisterPushForAccount:(id)account completion:(id /* block */)completion;
- (void)retryUnregisterPushForAllStrandedAccountsNotIn:(id)in pushSettingsProvider:(id)provider;
- (void)_unregisterPushForAccount:(id)account scribeComponent:(id)component completion:(id /* block */)completion;
- (void)_unregisterPushForAccount:(id)account pushSettingsManager:(id)manager scribeComponent:(id)component completion:(id /* block */)completion;
- (void)_addAccountToUnregisterPushSet:(id)set;
- (void)_removeAccountFromUnregisterPushSet:(id)set;
- (void)didLoadAccountsDictionary:(id)dictionary;
- (void)willSaveAccountsDictionary:(id)dictionary forGroupUserDefaults:(_Bool)defaults;

@end

#endif /* TFNTwitterPushRegistrationManager_h */
