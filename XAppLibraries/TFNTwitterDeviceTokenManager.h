//
#ifndef TFNTwitterDeviceTokenManager_h
#define TFNTwitterDeviceTokenManager_h
@import Foundation;

#include "TSADeviceTokenManager-Protocol.h"

@class NSObject, TFSOperationResultWrapper;
@protocol TFNRemoteNotificationCategoryProvider;

@interface TFNTwitterDeviceTokenManager : NSObject <TSADeviceTokenManager> {
    /* instance variables */
    TFSOperationResultWrapper *_tokenAcquisitionOperation;
    id /* block */ _remoteNotificationCompletionHandler;
}

@property (retain, nonatomic) id <TFNRemoteNotificationCategoryProvider> categoryProvider;

/* class methods */
+ (id)defaultManager;
+ (void)clearNotificationCategories;

/* instance methods */
- (void)refreshNotificationCategories;
- (void)assumeTokenAcquisitionHasNeverBeenAttempted;
- (_Bool)tokenAcquisitionHasNeverBeenAttempted;
- (void)acquireDeviceToken:(id /* block */)token;
- (void)acquireDeviceTokenWithProvisionalAuthEnabled:(_Bool)enabled completion:(id /* block */)completion;
- (void)_recordTokenAcquisitionAttempt;
- (id)_tfn_buildTokenAcquisitionOperationWithProvisionalAuthEnabled:(_Bool)enabled;
- (void)_tfn_registerForRemoteNotificationsWithCompletionHandler:(id /* block */)handler;
- (void)application:(id)application didRegisterForRemoteNotificationsWithDeviceToken:(id)token;
- (void)application:(id)application didFailToRegisterForRemoteNotificationsWithError:(id)error;

@end

#endif /* TFNTwitterDeviceTokenManager_h */
