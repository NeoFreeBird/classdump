//
#ifndef TFSInstrumentedFeatureSwitches_h
#define TFSInstrumentedFeatureSwitches_h
@import Foundation;

#include "TFSFeatureSwitches.h"
#include "TFSFeatureSwitchesConfig.h"
#include "TFSInstrumentedFeatureSwitches-Protocol.h"

@class NSMutableDictionary, NSObject, NSString;

@interface TFSInstrumentedFeatureSwitches : NSObject <TFSInstrumentedFeatureSwitches> {
    /* instance variables */
    NSMutableDictionary *_overridesDict;
    TFSFeatureSwitches *_switches;
}

@property (readonly, nonatomic) NSString *accountID;
@property (readonly, nonatomic) TFSFeatureSwitchesConfig *config;
@property (readonly, nonatomic) TFSFeatureSwitchesConfig *overrideConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)classStateQueue;
+ (id)queriedFeatureSwitchKeysForRun;
+ (id)overriddenFeatureSwitchKeysForRun;
+ (id)overriddenFeatureSwitchKeysForTestCase;
+ (id)queriedKeysAndValuesForTestCase;

/* instance methods */
- (id)initWrappingFeatureSwitches:(id)switches;
- (void)resetFeatureSwitches;
- (void)disableAllValuesForKeys:(id)keys;
- (void)setFeatureSwitchValue:(id)value forKey:(id)key;
- (void)resetFeatureSwitchValueForKey:(id)key;
- (void)forceRefreshWithFetchTask:(id)task timeout:(double)timeout completion:(id /* block */)completion;
- (void)refreshWithFetchTask:(id)task timeout:(double)timeout completion:(id /* block */)completion;
- (void)refreshWithFetchTask:(id)task timeout:(double)timeout maxStale:(double)stale completion:(id /* block */)completion;
- (_Bool)updatePendingConfig:(id)config;
- (void)applyPending;
- (void)partiallyApplyPendingForKeys:(id)keys;
- (_Bool)removeCachedData;
- (void)resetImpressions;
- (id)rawFeatureSwitchesDictionary;
- (id)_valueForKey:(id)key;
- (id)featureSwitchesValueForKey:(id)key;
- (_Bool)boolForKey:(id)key;
- (double)doubleForKey:(id)key;
- (double)CGFloatForKey:(id)key;
- (long long)integerForKey:(id)key;
- (id)numberForKey:(id)key;
- (_Bool)hasNonDefaultValueForKey:(id)key;
- (id)stringForKey:(id)key;
- (id)arrayForKey:(id)key;
- (id)setForKey:(id)key;
- (id)dictionaryForKey:(id)key;
- (id)rawValueForKey:(id)key;
- (long long)unsafePeekIntegerForKey:(id)key;
- (id)unsafePeekStringForKey:(id)key;
- (id)unsafePeekArrayForKey:(id)key;
- (id)unsafePeekSetForKey:(id)key;
- (_Bool)unsafePeekBoolForKey:(id)key;
- (double)unsafePeekDoubleForKey:(id)key;
- (_Bool)isInExperimentForKey:(id)key;
- (id)featureSwitchValueForKey:(id)key;
- (void)overrideRawValue:(id)value forKey:(id)key;
- (void)overrideValue:(id)value forKey:(id)key;
- (void)overrideAllValuesInDictionary:(id)dictionary;
- (void)removeOverrideForKey:(id)key;
- (id)overriddenRawValueForKey:(id)key;
- (id)ceolAllowlist;
- (void)flush;

@end

#endif /* TFSInstrumentedFeatureSwitches_h */
