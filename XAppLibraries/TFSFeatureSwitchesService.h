//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSFeatureSwitchesService_h
#define TFSFeatureSwitchesService_h
@import Foundation;

#include "TFSFeatureSwitchesConfig.h"
#include "TFSFeatureSwitchesHostQueue.h"
#include "TFSFeatureSwitchesHosting-Protocol.h"
#include "TFSFeatureSwitchesIntegration.h"
#include "TFSFeatureSwitchesManifest.h"

@class NSObject, NSString, TFSStateQueue;

@interface TFSFeatureSwitchesService : NSObject

@property (readonly, nonatomic) TFSFeatureSwitchesManifest *manifest;
@property (readonly, nonatomic) TFSFeatureSwitchesManifest *manifest;
@property (readonly, nonatomic) TFSFeatureSwitchesHostQueue *hostQueue;
@property (readonly, nonatomic) TFSStateQueue *accountIDToFeatureSwitchesQueue;
@property (readonly, nonatomic) TFSFeatureSwitchesConfig *deviceOverrideConfig;
@property (readonly, copy, nonatomic) TFSFeatureSwitchesIntegration *integration;
@property (retain, nonatomic) id <TFSFeatureSwitchesHosting> host;
@property (readonly, nonatomic) NSString *featureSetToken;

/* class methods */
+ (id)sharedServiceQueue;
+ (id)sharedServiceWithError:(out id *)error;
+ (id)sharedServiceWithIntegration:(id)integration error:(out id *)error;
+ (void)shutdown;

/* instance methods */
- (id)featureSwitchesForAccount:(id)account;
- (_Bool)updateAccountID:(id)id configData:(id)data;
- (_Bool)updateAccountID:(id)id config:(id)config;
- (id)featureSwitchValueForKey:(id)key accountID:(id)id;
- (void)overrideRawValue:(id)value forKey:(id)key accountID:(id)id;
- (void)overrideAllValuesInDictionary:(id)dictionary accountID:(id)id;
- (void)disableAllValuesForKeys:(id)keys accountID:(id)id;
- (id)overriddenRawValueForKey:(id)key accountID:(id)id;
- (void)removeOverrideForKey:(id)key accountID:(id)id;
- (void)resetFeatureSwitchesForAccountID:(id)id;
- (void)setFeatureSwitchValue:(id)value forKey:(id)key accountID:(id)id;
- (void)resetFeatureSwitchValueForKey:(id)key accountID:(id)id;
- (id)queriedFeatureSwitchKeysForRun;
- (id)overriddenFeatureSwitchKeysForRun;
- (id)overriddenFeatureSwitchKeysForTestCase;
- (id)queriedKeysAndValuesForTestCase;
- (long long)unsafePeekIntegerForKey:(id)key accountID:(id)id;
- (id)unsafePeekStringForKey:(id)key accountID:(id)id;
- (id)unsafePeekArrayForKey:(id)key accountID:(id)id;
- (id)unsafePeekSetForKey:(id)key accountID:(id)id;
- (_Bool)unsafePeekBoolForKey:(id)key accountID:(id)id;
- (double)unsafePeekDoubleForKey:(id)key accountID:(id)id;
- (_Bool)accountID:(id)id hasNonDefaultValueForKey:(id)key;
- (id)archivePathForAccountID:(id)id;
- (id)init;
- (id)initWithIntegration:(id)integration error:(out id *)error;
- (void)shutdown;
- (id)ceolAllowlistWithAccountId:(id)id;
- (_Bool)removeAccountID:(id)id;
- (_Bool)boolForKey:(id)key accountID:(id)id;
- (double)doubleForKey:(id)key accountID:(id)id;
- (double)CGFloatForKey:(id)key accountID:(id)id;
- (long long)integerForKey:(id)key accountID:(id)id;
- (id)numberForKey:(id)key accountID:(id)id;
- (id)stringForKey:(id)key accountID:(id)id;
- (id)arrayForKey:(id)key accountID:(id)id;
- (id)setForKey:(id)key accountID:(id)id;
- (id)rawValueForKey:(id)key accountID:(id)id;
- (id)rawFeatureSwitchesDictionaryForAccountID:(id)id;
- (void)refreshForAccountID:(id)id timeout:(double)timeout maxStale:(double)stale completion:(id /* block */)completion;
- (void)forceRefreshForAccount:(id)account timeout:(double)timeout completion:(id /* block */)completion;
- (void)applyPendingForAccount:(id)account;
- (void)partiallyApplyPendingForAccount:(id)account keys:(id)keys;
- (_Bool)accountID:(id)id isInExperimentForKey:(id)key;
- (void)resetImpressionsForAccountID:(id)id;
- (void)resetImpressions;
- (id)_featureSwitchesForAccount:(id)account;
- (id)_featureSwitchesForAccount:(id)account withState:(id)state;
- (void)_uncacheFeatureSwitchesForAccountID:(id)id;

@end

#endif /* TFSFeatureSwitchesService_h */
