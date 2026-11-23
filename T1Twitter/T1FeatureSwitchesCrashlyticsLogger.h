//
#ifndef T1FeatureSwitchesCrashlyticsLogger_h
#define T1FeatureSwitchesCrashlyticsLogger_h
@import Foundation;

@class NSObject;
@protocol OS_dispatch_queue;

@interface T1FeatureSwitchesCrashlyticsLogger : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)startWithAccount:(id)account;
- (void)_tfn_accountDidBecomeActive:(id)active;
- (void)_tfn_accountDidBecomeInactive:(id)inactive;
- (void)_tfn_registerForAccountFeatureSwitchesUpdatesWithAccount:(id)account;
- (void)_t1_deviceFeatureSwitchesDidUpdate;
- (void)_t1_accountFeatureSwitchesDidUpdate:(id)update;
- (void)_tfn_serializeAndLogDeviceFeatureSwitches;
- (void)_tfn_serializeAndLogAccountFeatureSwitchesForAccountID:(id)id;
- (void)_tfn_serializeAndLogFeatureSwitches:(id)switches forKey:(id)key;
- (void)_tfn_logFeatureSwitches:(id)switches forKey:(id)key;
- (void)_t1_featureSwitchesErrorNotification:(id)notification;
- (void)_tfn_serializeFeatureSwitches:(id)switches withCompletion:(id /* block */)completion;

@end

#endif /* T1FeatureSwitchesCrashlyticsLogger_h */
