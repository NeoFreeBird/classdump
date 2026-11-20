//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TPSFeatureSwitchesAccess_Protocol_h
#define TPSFeatureSwitchesAccess_Protocol_h
@import Foundation;

#include "TFSFeatureSwitchProvider-Protocol.h"

@protocol TPSFeatureSwitchesAccess <TFSFeatureSwitchProvider>

@required

/* class methods */
+ (_Bool)isInitialized;

/* required instance methods */
- (id)rawValueForKey:(id)key;
- (id)rawValueForKey:(id)key;
- (double)CGFloatForKey:(id)key;
- (double)CGFloatForKey:(id)key;
- (_Bool)boolForKey:(id)key;
- (_Bool)boolForKey:(id)key;
- (double)doubleForKey:(id)key;
- (double)doubleForKey:(id)key;
- (long long)integerForKey:(id)key;
- (long long)integerForKey:(id)key;
- (id)numberForKey:(id)key;
- (id)numberForKey:(id)key;
- (id)stringForKey:(id)key;
- (id)stringForKey:(id)key;
- (id)arrayForKey:(id)key;
- (id)arrayForKey:(id)key;
- (id)setForKey:(id)key;
- (void)refreshWithAccountID:(id)id maxStale:(double)stale completion:(id /* block */)completion;
- (void)refreshWithAccountID:(id)id maxStale:(double)stale completion:(id /* block */)completion;
- (void)refreshWithAccountID:(id)id maxStale:(double)stale timeout:(double)timeout completion:(id /* block */)completion;
- (void)refreshWithAccountID:(id)id maxStale:(double)stale timeout:(double)timeout completion:(id /* block */)completion;
- (void)refreshIfNecessaryWithAccountID:(id)id completion:(id /* block */)completion;
- (void)refreshIfNecessaryWithAccountID:(id)id completion:(id /* block */)completion;
- (void)refreshDeviceFeatureSwitchesIfNecessaryWithCompletion:(id /* block */)completion;
- (void)refreshDeviceFeatureSwitchesIfNecessaryWithCompletion:(id /* block */)completion;
- (void)forceRefreshWithAccountID:(id)id completion:(id /* block */)completion;
- (void)forceRefreshWithAccountID:(id)id completion:(id /* block */)completion;
- (void)forceRefreshDeviceFeatureSwitchesWithCompletion:(id /* block */)completion;
- (void)forceRefreshDeviceFeatureSwitchesWithCompletion:(id /* block */)completion;
- (void)applyPendingWithAccountID:(id)id;
- (void)applyPendingWithAccountID:(id)id;
- (void)partiallyApplyPendingWithAccountID:(id)id keys:(id)keys;
- (void)partiallyApplyPendingWithAccountID:(id)id keys:(id)keys;
- (void)applyPendingDeviceFeatureSwitches;
- (_Bool)isInExperimentForKey:(id)key;
- (_Bool)isInExperimentForKey:(id)key;
- (_Bool)hasNonDefaultValueForKey:(id)key;
- (_Bool)hasNonDefaultValueForKey:(id)key;
- (long long)unsafePeekIntegerForKey:(id)key;
- (long long)unsafePeekIntegerForKey:(id)key;
- (id)unsafePeekStringForKey:(id)key;
- (id)unsafePeekStringForKey:(id)key;
- (id)unsafePeekArrayForKey:(id)key;
- (id)unsafePeekArrayForKey:(id)key;
- (id)unsafePeekSetForKey:(id)key;
- (id)unsafePeekSetForKey:(id)key;
- (_Bool)unsafePeekBoolForKey:(id)key;
- (_Bool)unsafePeekBoolForKey:(id)key;
- (double)unsafePeekDoubleForKey:(id)key;
- (double)unsafePeekDoubleForKey:(id)key;
- (void)overrideRawValue:(id)value forKey:(id)key employeeBuildOrOverrideEnabledAccountID:(id)id;
- (void)overrideAllValuesInDictionary:(id)dictionary employeeBuildOrOverrideEnabledAccountID:(id)id;
- (void)overrideAllValuesInDictionary:(id)dictionary employeeBuildOrOverrideEnabledAccountID:(id)id;
- (void)removeOverrideForKey:(id)key employeeBuildOrOverrideEnabledAccountID:(id)id;
- (void)removeOverrideForKey:(id)key employeeBuildOrOverrideEnabledAccountID:(id)id;
- (id)overriddenRawValueForKey:(id)key;
- (id)overriddenRawValueForKey:(id)key;
- (id)rawFeatureSwitchesDictionary;
- (id)ceolAllowlist;

@optional

@end

#endif /* TPSFeatureSwitchesAccess_Protocol_h */
