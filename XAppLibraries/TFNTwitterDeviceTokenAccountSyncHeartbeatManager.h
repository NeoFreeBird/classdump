//
#ifndef TFNTwitterDeviceTokenAccountSyncHeartbeatManager_h
#define TFNTwitterDeviceTokenAccountSyncHeartbeatManager_h
@import Foundation;

#include "TFNTwitterDeviceTokenManager.h"
#include "TSADeviceTokenAccountSyncHeartbeatManager-Protocol.h"

@class NSObject;

@interface TFNTwitterDeviceTokenAccountSyncHeartbeatManager : NSObject <TSADeviceTokenAccountSyncHeartbeatManager>

@property (retain, nonatomic) TFNTwitterDeviceTokenManager *deviceTokenManager;
@property (nonatomic) unsigned long long deviceTokenHeartbeatGeneration;

/* class methods */
+ (id)defaultManager;

/* instance methods */
- (id)initWithDeviceTokenManager:(id)manager;
- (void)deviceTokenHeartbeatForAllAccountsForce:(_Bool)force completion:(id /* block */)completion;
- (void)deviceTokenHeartbeatWithContext:(id)context force:(_Bool)force completion:(id /* block */)completion;
- (void)_accountDidBecomeActive;
- (id)_heartbeatAccountsForce:(_Bool)force;
- (void)_deviceTokenHeartbeatAccountEnumerator:(id)enumerator force:(_Bool)force generation:(unsigned long long)generation completion:(id /* block */)completion;

@end

#endif /* TFNTwitterDeviceTokenAccountSyncHeartbeatManager_h */
