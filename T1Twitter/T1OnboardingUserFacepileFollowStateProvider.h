//
#ifndef T1OnboardingUserFacepileFollowStateProvider_h
#define T1OnboardingUserFacepileFollowStateProvider_h
@import Foundation;

#include "T1UserFacepileWithActionFollowStateProvider-Protocol.h"

@class NSHashTable, NSMapTable, NSMutableDictionary, NSObject, NSString, TFNTwitterAccount;

@interface T1OnboardingUserFacepileFollowStateProvider : NSObject <T1UserFacepileWithActionFollowStateProvider> {
    /* instance variables */
    NSHashTable *_observers;
    NSMutableDictionary *_userDataSourceMap;
    NSMapTable *_lastFollowingValueMap;
    TFNTwitterAccount *_account;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAccount:(id)account;
- (void)dealloc;
- (void)addFollowStateObserver:(id)observer;
- (void)startObservingUser:(id)user;
- (void)stopObservingUser:(id)user;
- (_Bool)isFollowingUser:(id)user;
- (void)setIsFollowing:(_Bool)following forUsers:(id)users;
- (void)private_handleUserDataSourceUpdateNotification:(id)notification;
- (void)private_setUserDataSource:(id)source forUser:(id)user;
- (void)private_removeUserDataSourceForUser:(id)user;
- (id)private_userDataSourceForUser:(id)user;

@end

#endif /* T1OnboardingUserFacepileFollowStateProvider_h */
