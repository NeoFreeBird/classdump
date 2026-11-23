//
#ifndef T1GuideEventSpotlightSSPCellAdFetcher_h
#define T1GuideEventSpotlightSSPCellAdFetcher_h
@import Foundation;

#include "GADNativeAdLoaderDelegate-Protocol.h"

@class NSObject;

@interface T1GuideEventSpotlightSSPCellAdFetcher : NSObject <GADNativeAdLoaderDelegate> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *gsig;
    NSNumber"16@0:8 *activeSpotlight;
    NSNumber"16@0:8 *activeSpotlightAspectRatio;
    NSNumber"16@0:8 *activeSpotlightDidFailLoad;
    NSNumber"16@0:8 *activeSpotlightDidScribeImpression;
    NSNumber"16@0:8 *refreshTimer;
    NSNumber"16@0:8 *adLoader;
    NSNumber"16@0:8 *account;
}

/* class methods */
+ (id)shared;

/* instance methods */
- (void)dealloc;
- (void)setupWithAccount:(id)account;
- (void)adLoader:(id)loader didFailToReceiveAdWithError:(id)error;
- (void)adLoader:(id)loader didReceiveNativeAd:(id)ad;
- (id)init;

@end

#endif /* T1GuideEventSpotlightSSPCellAdFetcher_h */
