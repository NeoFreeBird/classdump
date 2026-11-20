//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADCustomEventInterstitialDelegate_Protocol_h
#define GADCustomEventInterstitialDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol GADCustomEventInterstitialDelegate <NSObject>

@required

/* required instance methods */
- (void)customEventInterstitialDidReceiveAd:(id)ad;
- (void)customEventInterstitial:(id)interstitial didFailAd:(id)ad;
- (void)customEventInterstitialWasClicked:(id)clicked;
- (void)customEventInterstitialWillPresent:(id)present;
- (void)customEventInterstitialWillDismiss:(id)dismiss;
- (void)customEventInterstitialDidDismiss:(id)dismiss;
- (void)customEventInterstitial:(id)interstitial didReceiveAd:(id)ad;
- (void)customEventInterstitialWillLeaveApplication:(id)application;

@optional

@end

#endif /* GADCustomEventInterstitialDelegate_Protocol_h */
