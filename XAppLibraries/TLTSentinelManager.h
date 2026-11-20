//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TLTSentinelManager_h
#define TLTSentinelManager_h
@import Foundation;

@class NSDictionary, NSMutableDictionary, NSObject;

@interface TLTSentinelManager : NSObject {
    /* instance variables */
    NSDictionary *_sentinelSet;
    NSMutableDictionary *_loadingSentinels;
}

@property (readonly, nonatomic) _Bool purgeArchiveSentinelsExist;
@property (readonly, nonatomic) _Bool watchdogCrashDuringLastExecution;

/* class methods */
+ (id)sharedSentinelManager;

/* instance methods */
- (id)init;
- (void)start:(_Bool)start didCrash:(_Bool)crash scribeBlock:(id /* block */)block;
- (void)cleanup;
- (void)createSentinel:(long long)sentinel subTypeName:(id)name;
- (void)createSentinelSync:(long long)sync;
- (void)removeSentinel:(long long)sentinel;
- (id)loadingSentinelForType:(long long)type;
- (id)_sentinelForType:(long long)type;
- (_Bool)_tdt_checkSentinelsOnApplicationLaunch:(_Bool)launch didCrash:(_Bool)crash scribeBlock:(id /* block */)block;
- (void)_createTwentySecondSentinel:(long long)sentinel;
- (void)_createAccountSwitchSentinel;
- (void)_applicationDidEnterBackground;
- (void)_applicationWillEnterForeground;

@end

#endif /* TLTSentinelManager_h */
