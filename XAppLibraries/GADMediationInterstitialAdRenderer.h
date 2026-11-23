//
#ifndef GADMediationInterstitialAdRenderer_h
#define GADMediationInterstitialAdRenderer_h
@import Foundation;

#include "GADAdPresenting-Protocol.h"
#include "GADAdRenderingMetadata.h"
#include "GADFullScreenAdContent.h"
#include "GADMediatedAdRenderer.h"

@class NSString;

@interface GADMediationInterstitialAdRenderer : GADMediatedAdRenderer <GADAdPresenting> {
    /* instance variables */
    GADFullScreenAdContent *_fullScreenAdContent;
    struct atomic_flag { _Atomic _Bool _Value; } _clickEventReceived;
    id /* block */ _renderCompletionHandler;
    struct atomic_flag { _Atomic _Bool _Value; } _adLoadCompleted;
    GADAdRenderingMetadata *_metadata;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)adapterCompletedLoadWithError:(id)error;
- (void)reportClick;
- (id)viewControllerForPresentingModalView;
- (void)renderWithServerTransaction:(id)transaction adConfiguration:(id)configuration completionHandler:(id /* block */)handler;
- (_Bool)canPresentFromViewController:(id)controller error:(id *)error;
- (void)present;
- (void)adapterDidReceiveInterstitial:(id)interstitial;
- (void)adapter:(id)adapter didFailAd:(id)ad;
- (void)adapterWillPresentInterstitial:(id)interstitial;
- (void)adapterWillDismissInterstitial:(id)interstitial;
- (void)adapterDidDismissInterstitial:(id)interstitial;
- (void)adapterDidGetAdClick:(id)click;
- (void)adapterWillLeaveApplication:(id)application;

@end

#endif /* GADMediationInterstitialAdRenderer_h */
