//
#ifndef GADCustomEventBannerAdRenderer_h
#define GADCustomEventBannerAdRenderer_h
@import Foundation;

#include "GADAdRendering-Protocol.h"
#include "GADAdRenderingMetadata.h"
#include "GADBannerAd.h"
#include "GADCustomEventBanner-Protocol.h"
#include "GADCustomEventBannerDelegate-Protocol.h"
#include "GADServerTransaction.h"

@class NSDictionary, NSObject, NSString, UIViewController;

@interface GADCustomEventBannerAdRenderer : NSObject <GADCustomEventBannerDelegate, GADAdRendering> {
    /* instance variables */
    GADServerTransaction *_transaction;
    NSDictionary *_adConfiguration;
    id <GADCustomEventBanner> _customEventBanner;
    id /* block */ _renderCompletionHandler;
    GADBannerAd *_bannerAd;
    struct atomic_flag { _Atomic _Bool _Value; } _clickEventReceived;
    GADAdRenderingMetadata *_metadata;
}

@property (readonly, nonatomic) UIViewController *viewControllerForPresentingModalView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)customEventCompletedLoadWithAdView:(id)view error:(id)error;
- (void)renderWithServerTransaction:(id)transaction adConfiguration:(id)configuration completionHandler:(id /* block */)handler;
- (void)customEventBanner:(id)banner didReceiveAd:(id)ad;
- (void)customEventBanner:(id)banner didFailAd:(id)ad;
- (void)handleClickEventInternal;
- (void)customEventBannerWasClicked:(id)clicked;
- (void)customEventBannerWillPresentModal:(id)modal;
- (void)customEventBannerWillDismissModal:(id)modal;
- (void)customEventBannerDidDismissModal:(id)modal;
- (void)customEventBanner:(id)banner clickDidOccurInAd:(id)ad;
- (void)customEventBannerWillLeaveApplication:(id)application;

@end

#endif /* GADCustomEventBannerAdRenderer_h */
