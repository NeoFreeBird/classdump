//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADNativeAdViewTracker_h
#define GADNativeAdViewTracker_h
@import Foundation;

@class NSMapTable, NSObject;

@interface GADNativeAdViewTracker : NSObject {
    /* instance variables */
    NSMapTable *_adViewToAdMap;
    NSMapTable *_adToAdViewMap;
}

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)registerAdView:(id)view assetViewTracker:(id)tracker forNativeAd:(id)ad;
- (void)registerAdViewInternal:(id)internal assetViewTracker:(id)tracker forNativeAd:(id)ad;
- (void)removeAdViewForNativeAd:(id)ad;
- (id)adViewForNativeAd:(id)ad;

@end

#endif /* GADNativeAdViewTracker_h */
