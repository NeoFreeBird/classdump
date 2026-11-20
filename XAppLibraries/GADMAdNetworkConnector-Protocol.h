//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADMAdNetworkConnector_Protocol_h
#define GADMAdNetworkConnector_Protocol_h
@import Foundation;

#include "GADMediationAdRequest-Protocol.h"

@protocol GADMAdNetworkConnector <GADMediationAdRequest>

@required

/* required instance methods */
- (id)viewControllerForPresentingModalView;
- (float)adVolume;
- (_Bool)adMuted;
- (void)adapter:(id)adapter didFailAd:(id)ad;
- (void)adapter:(id)adapter didReceiveAdView:(id)view;
- (void)adapterDidReceiveInterstitial:(id)interstitial;
- (void)adapter:(id)adapter didReceiveMediatedUnifiedNativeAd:(id)ad;
- (void)adapterDidGetAdClick:(id)click;
- (void)adapterWillPresentFullScreenModal:(id)modal;
- (void)adapterWillDismissFullScreenModal:(id)modal;
- (void)adapterDidDismissFullScreenModal:(id)modal;
- (void)adapterWillPresentInterstitial:(id)interstitial;
- (void)adapterWillDismissInterstitial:(id)interstitial;
- (void)adapterDidDismissInterstitial:(id)interstitial;
- (void)adapter:(id)adapter didReceiveInterstitial:(id)interstitial;
- (void)adapter:(id)adapter clickDidOccurInBanner:(id)banner;
- (void)adapter:(id)adapter didFailInterstitial:(id)interstitial;
- (void)adapterWillLeaveApplication:(id)application;

@optional

@end

#endif /* GADMAdNetworkConnector_Protocol_h */
