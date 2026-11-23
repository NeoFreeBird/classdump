//
#ifndef TSANotificationsAuthorizedService_h
#define TSANotificationsAuthorizedService_h
@import Foundation;

#include "TSAAuthorizedService-Protocol.h"
#include "TSADeviceTokenAccountSyncHeartbeatManager-Protocol.h"

@class NSObject, NSString;

@interface TSANotificationsAuthorizedService : NSObject <TSAAuthorizedService>

@property (readonly, nonatomic) id <TSADeviceTokenAccountSyncHeartbeatManager> deviceTokenAccountSyncHeartbeatManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDeviceTokenAccountSyncHeartbeatManager:(id)manager;
- (void)queryAuthorizationStatusWithCompletionBlock:(id /* block */)block;
- (long long)_authorizationStatusForNotificationSettings:(id)settings;
- (id)_authorizationMetadataForNotificationSettings:(id)settings;
- (id)_authorizationMetadataValueForNotificationSetting:(long long)setting;
- (id)_authorizationMetadataValueForAlertStyle:(long long)style;
- (id)defaultUsageDescription;
- (void)requestAuthorizationWithCompletionBlock:(id /* block */)block;
- (void)requestAuthorizationWithContext:(id)context completionBlock:(id /* block */)block;
- (id)regrantPermissionInstructions;
- (id)scribeContextWithScribeElement:(id)element andScribeParameters:(id)parameters;

@end

#endif /* TSANotificationsAuthorizedService_h */
