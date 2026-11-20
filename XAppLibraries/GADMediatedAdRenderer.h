//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADMediatedAdRenderer_h
#define GADMediatedAdRenderer_h
@import Foundation;

#include "GADAdRendering-Protocol.h"
#include "GADMAdNetworkAdapter-Protocol.h"
#include "GADMAdNetworkConnector-Protocol.h"
#include "GADServerTransaction.h"

@class NSDictionary, NSObject, NSString;

@interface GADMediatedAdRenderer : NSObject <GADAdRendering, GADMAdNetworkConnector> {
    /* instance variables */
    GADServerTransaction *_transaction;
    NSDictionary *_adConfiguration;
    id <GADMAdNetworkAdapter> _adapter;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (Class)mainAdapterClass;
- (void)dealloc;
- (void)renderWithServerTransaction:(id)transaction adConfiguration:(id)configuration completionHandler:(id /* block */)handler;
- (id)publisherId;
- (id)credentials;
- (_Bool)testMode;
- (id)networkExtras;
- (id)childDirectedTreatment;
- (id)maxAdContentRating;
- (id)underAgeOfConsent;
- (id)userKeywords;
- (float)adVolume;
- (_Bool)adMuted;
- (void)adapter:(id)adapter didFailAd:(id)ad;
- (id)viewControllerForPresentingModalView;
- (void)adapterDidReceiveInterstitial:(id)interstitial;
- (void)adapterWillPresentInterstitial:(id)interstitial;
- (void)adapterWillDismissInterstitial:(id)interstitial;
- (void)adapterDidDismissInterstitial:(id)interstitial;
- (void)adapter:(id)adapter didReceiveMediatedUnifiedNativeAd:(id)ad;
- (void)adapter:(id)adapter didReceiveAdView:(id)view;
- (void)adapterWillPresentFullScreenModal:(id)modal;
- (void)adapterWillDismissFullScreenModal:(id)modal;
- (void)adapterDidDismissFullScreenModal:(id)modal;
- (void)adapterDidGetAdClick:(id)click;
- (void)adapter:(id)adapter didReceiveInterstitial:(id)interstitial;
- (void)adapter:(id)adapter didFailInterstitial:(id)interstitial;
- (void)adapter:(id)adapter clickDidOccurInBanner:(id)banner;
- (void)adapterWillLeaveApplication:(id)application;

@end

#endif /* GADMediatedAdRenderer_h */
