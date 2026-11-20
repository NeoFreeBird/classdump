//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TGFColorCubeRegistry_h
#define TGFColorCubeRegistry_h
@import Foundation;

@class NSMutableArray, NSMutableDictionary, NSObject;

@interface TGFColorCubeRegistry : NSObject {
    /* instance variables */
    NSMutableArray *_recentColorCubeLoads;
    NSMutableDictionary *_cachedColorCubeData;
    NSMutableDictionary *_registeredColorCubeLoaders;
    unsigned long long _autoPurgeOptions;
}

/* class methods */
+ (id)sharedRegistry;

/* instance methods */
- (id)init;
- (void)registerColorCubeWithIdentifier:(id)identifier loader:(id)loader;
- (void)unregisterColorCubeWithIdentifier:(id)identifier;
- (id)dataForColorCubeWithIdentifier:(id)identifier;
- (unsigned long long)autoPurgeOptions;
- (void)setAutoPurgeOptions:(unsigned long long)options;
- (unsigned long long)cachedColorCubeCount;
- (unsigned long long)cachedColorCubeCountLimit;
- (void)purgeCachedColorCubesWithCompletion:(id /* block */)completion;
- (void)_registerPredefinedColorCubeLoaders;
- (void)_updateNotificationObserversWithCurrentAutoPurgeOptions:(unsigned long long)options oldAutoPurgeOptions:(unsigned long long)options;
- (void)_updateNotificationObserverForName:(id)name purgeOption:(unsigned long long)option withOldAutoPurgeOptions:(unsigned long long)options newAutoPurgeOptions:(unsigned long long)options;
- (void)_purgeCachedColorCubes;

@end

#endif /* TGFColorCubeRegistry_h */
