//
#ifndef T1FleetsContext_h
#define T1FleetsContext_h
@import Foundation;

@class NSObject;

@interface T1FleetsContext : NSObject { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *account;
    NSNumber"16@0:8 *dataStore;
    NSNumber"16@0:8 *service;
    NSNumber"16@0:8 *scribe;
    NSNumber"16@0:8 *userDefaults;
    NSNumber"16@0:8 *_sessions;
    NSNumber"16@0:8 *pendingPresenceUserIDs;
    NSNumber"16@0:8 *requestedPresenceUserIDs;
    NSNumber"16@0:8 *requestedPresenceResetDate;
}

/* class methods */
+ (id)sharedContextForAccount:(id)account;
+ (void)accountsDidChangeWithNotification:(id)notification;

/* instance methods */
- (id)userPresenceForUserID:(long long)id;
- (id)userPresenceBridgedObservableForUserID:(long long)id;
- (void)userDataSourceDidUpdate:(id)update;
- (void)requestUserPresenceIfNeededForUserID:(long long)id;
- (void)flushPendingPresenceRequests;
- (void)loadUserPresenceCollectionWithUserIDs:(id)ids completion:(id /* block */)completion;
- (id)init;

@end

#endif /* T1FleetsContext_h */
