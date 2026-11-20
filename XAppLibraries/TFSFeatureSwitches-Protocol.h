//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSFeatureSwitches_Protocol_h
#define TFSFeatureSwitches_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "TFSFeatureSwitchesConfig.h"

@class NSString;

@protocol TFSFeatureSwitches <NSObject>

@required

@property (readonly, nonatomic) NSString *accountID;
@property (readonly, nonatomic) TFSFeatureSwitchesConfig *config;
@property (readonly, nonatomic) TFSFeatureSwitchesConfig *overrideConfig;

/* required instance methods */
- (_Bool)removeCachedData;
- (_Bool)boolForKey:(id)key;
- (double)doubleForKey:(id)key;
- (double)CGFloatForKey:(id)key;
- (long long)integerForKey:(id)key;
- (id)numberForKey:(id)key;
- (id)stringForKey:(id)key;
- (id)arrayForKey:(id)key;
- (id)setForKey:(id)key;
- (id)rawValueForKey:(id)key;
- (void)refreshWithFetchTask:(id)task timeout:(double)timeout maxStale:(double)stale completion:(id /* block */)completion;
- (void)refreshWithFetchTask:(id)task timeout:(double)timeout completion:(id /* block */)completion;
- (void)forceRefreshWithFetchTask:(id)task timeout:(double)timeout completion:(id /* block */)completion;
- (_Bool)updatePendingConfig:(id)config;
- (void)applyPending;
- (void)partiallyApplyPendingForKeys:(id)keys;
- (_Bool)isInExperimentForKey:(id)key;
- (_Bool)hasNonDefaultValueForKey:(id)key;
- (long long)unsafePeekIntegerForKey:(id)key;
- (id)unsafePeekStringForKey:(id)key;
- (id)unsafePeekArrayForKey:(id)key;
- (id)unsafePeekSetForKey:(id)key;
- (_Bool)unsafePeekBoolForKey:(id)key;
- (double)unsafePeekDoubleForKey:(id)key;
- (id)rawFeatureSwitchesDictionary;
- (void)overrideValue:(id)value forKey:(id)key;
- (void)overrideAllValuesInDictionary:(id)dictionary;
- (void)overrideRawValue:(id)value forKey:(id)key;
- (void)removeOverrideForKey:(id)key;
- (id)overriddenRawValueForKey:(id)key;
- (id)featureSwitchValueForKey:(id)key;
- (void)resetFeatureSwitches;
- (void)disableAllValuesForKeys:(id)keys;
- (void)resetImpressions;
- (id)ceolAllowlist;
- (void)flush;

@optional

@end

#endif /* TFSFeatureSwitches_Protocol_h */
