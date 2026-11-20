//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADPreloadCacheItem_h
#define GADPreloadCacheItem_h
@import Foundation;

#include "GADExponentialBackoff.h"
#include "GADPreloadConfiguration.h"

@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface GADPreloadCacheItem : NSObject {
    /* instance variables */
    NSMutableArray *_ads;
    _Bool _inflight;
    _Bool _isActive;
    NSObject<OS_dispatch_queue> *_cacheQueue;
    GADExponentialBackoff *_backoff;
}

@property (readonly, nonatomic) GADPreloadConfiguration *config;

/* instance methods */
- (id)initWithConfig:(id)config;
- (void)deactivate;
- (id)ad;
- (_Bool)isAdAvailable;
- (void)addAd:(id)ad;
- (void)onAdErrorWithError:(id)error;
- (void)setUpExpirationForAd:(id)ad;
- (void)loadAd;
- (void)updateConfiguration:(id)configuration;

@end

#endif /* GADPreloadCacheItem_h */
