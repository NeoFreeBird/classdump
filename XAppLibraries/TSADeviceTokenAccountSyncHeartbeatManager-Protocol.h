//
#ifndef TSADeviceTokenAccountSyncHeartbeatManager_Protocol_h
#define TSADeviceTokenAccountSyncHeartbeatManager_Protocol_h
@import Foundation;

#include "TSADeviceTokenManager-Protocol.h"

@protocol TSADeviceTokenAccountSyncHeartbeatManager

@required

@property (readonly, nonatomic) id <TSADeviceTokenManager> deviceTokenManager;

/* required instance methods */
- (void)deviceTokenHeartbeatForAllAccountsForce:(_Bool)force completion:(id /* block */)completion;
- (void)deviceTokenHeartbeatWithContext:(id)context force:(_Bool)force completion:(id /* block */)completion;

@optional

@end

#endif /* TSADeviceTokenAccountSyncHeartbeatManager_Protocol_h */
