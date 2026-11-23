//
#ifndef TFSFeatureSwitchesMainThreadCache_h
#define TFSFeatureSwitchesMainThreadCache_h
@import Foundation;

@class NSMutableDictionary, NSObject;

@interface TFSFeatureSwitchesMainThreadCache : NSObject

@property (readonly, nonatomic) NSMutableDictionary *keyToValue;
@property (readonly, nonatomic) NSMutableDictionary *keyToIsInExperiment;
@property (readonly, nonatomic) NSMutableDictionary *keyToHasNonDefaultValue;

/* instance methods */
- (id)init;
- (id)valueForKey:(id)key fetchIfNotCachedWith:(id /* block */)with;
- (_Bool)isInExperimentForKey:(id)key fetchIfNotCachedWith:(id /* block */)with;
- (_Bool)hasNonDefaultValueForKey:(id)key fetchIfNotCachedWith:(id /* block */)with;
- (_Bool)tfs_boolValueForKey:(id)key inDictionary:(id)dictionary fetchIfNotCachedWith:(id /* block */)with;
- (void)reset;
- (void)removeValuesForKeys:(id)keys;

@end

#endif /* TFSFeatureSwitchesMainThreadCache_h */
