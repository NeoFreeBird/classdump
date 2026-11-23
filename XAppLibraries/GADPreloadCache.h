//
#ifndef GADPreloadCache_h
#define GADPreloadCache_h
@import Foundation;

@class NSMutableDictionary, NSObject;
@protocol GADPreloadEventDelegate, OS_dispatch_queue;

@interface GADPreloadCache : NSObject {
    /* instance variables */
    NSMutableDictionary *_currentPreloadedAdCache;
    NSObject<OS_dispatch_queue> *_fetchQueue;
    id <GADPreloadEventDelegate> _delegate;
}

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)preloadWithConfigurations:(id)configurations delegate:(id)delegate;
- (void)adLoadedWithConfig:(id)config;
- (void)adsExhaustedWithConfig:(id)config callDelegate:(_Bool)delegate;
- (_Bool)isAdAvailable:(id)available format:(long long)format;
- (id)adForAdUnitID:(id)id format:(long long)format;
- (id)interstitialAdWithAdUnitID:(id)id;
- (id)rewardedAdWithAdUnitID:(id)id;
- (id)appOpenAdWithAdUnitID:(id)id;

@end

#endif /* GADPreloadCache_h */
