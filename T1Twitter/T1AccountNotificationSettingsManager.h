//
#ifndef T1AccountNotificationSettingsManager_h
#define T1AccountNotificationSettingsManager_h
@import Foundation;

#include "TFSTwitterPushSettingsManager-Protocol.h"

@class NSObject;

@interface T1AccountNotificationSettingsManager : NSObject <TFSTwitterPushSettingsManager> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *accountID;
    NSNumber"16@0:8 *userID;
    NSNumber"16@0:8 *scribe;
    NSNumber"16@0:8 *userDefaultsPersistenceKey;
    NSNumber"16@0:8 *underlyingDispatchQueue;
    NSNumber"16@0:8 *operationQueue;
    NSNumber"16@0:8 *_initialLoadInProgress;
    NSNumber"16@0:8 *_pushAuthStatus;
    NSNumber"16@0:8 *_checkedInState;
    NSNumber"16@0:8 *removingPushQueue;
    NSNumber"16@0:8 *_removingPush;
    NSNumber"16@0:8 *pushTemplateLoadingAndAuthStateObservable;
    NSNumber"16@0:8 *pushTemplateLoadingAndAuthStateInput;
    NSNumber"16@0:8 *$__lazy_storage_$_allKeysForQueryableSettings;
    NSNumber"16@0:8 *$__lazy_storage_$_legacySettingsValuesProperties;
    NSNumber"16@0:8 *$__lazy_storage_$_pushSettingsValuesProperty;
    NSNumber"16@0:8 *$__lazy_storage_$_checkinStateProperty;
}

/* instance methods */
- (void)queryablePushSettingFor:(long long)_for isVIT:(_Bool)vit completion:(id /* block */)completion;
- (void)checkinWithForce:(_Bool)force completion:(id /* block */)completion;
- (_Bool)isRemovingPush;
- (void)unregisterForPushWithCompletion:(id /* block */)completion;
- (id)init;

@end

#endif /* T1AccountNotificationSettingsManager_h */
