//
#ifndef GADMediationBannerAdRenderer_h
#define GADMediationBannerAdRenderer_h
@import Foundation;

#include "GADAdRenderingMetadata.h"
#include "GADBannerAd.h"
#include "GADMediatedAdRenderer.h"
#include "GADSizedAdView.h"

@interface GADMediationBannerAdRenderer : GADMediatedAdRenderer {
    /* instance variables */
    GADBannerAd *_bannerAd;
    struct atomic_flag { _Atomic _Bool _Value; } _clickEventReceived;
    id /* block */ _renderCompletionHandler;
    GADSizedAdView *_sizedView;
    GADAdRenderingMetadata *_metadata;
}

/* instance methods */
- (void)adapterCompletedLoadWithAdView:(id)view error:(id)error;
- (void)renderWithServerTransaction:(id)transaction adConfiguration:(id)configuration completionHandler:(id /* block */)handler;
- (void)reportClick;
- (id)viewControllerForPresentingModalView;
- (void)adapter:(id)adapter didFailAd:(id)ad;
- (void)adapter:(id)adapter didReceiveAdView:(id)view;
- (void)adapterWillPresentFullScreenModal:(id)modal;
- (void)adapterWillDismissFullScreenModal:(id)modal;
- (void)adapterDidDismissFullScreenModal:(id)modal;
- (void)adapterDidGetAdClick:(id)click;
- (void)adapterWillLeaveApplication:(id)application;

@end

#endif /* GADMediationBannerAdRenderer_h */
