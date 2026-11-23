//
#ifndef GADOutOfContextAdViewController_h
#define GADOutOfContextAdViewController_h
@import Foundation;

#include "GADBannerView.h"
#include "GADCloseButton.h"
#include "GADCloseButtonMonitor.h"
#include "GADObserverCollection.h"
#include "GADOutOfContextNativeAdView.h"

@class UIViewController;

@interface GADOutOfContextAdViewController : UIViewController {
    /* instance variables */
    GADCloseButton *_closeButton;
    GADCloseButtonMonitor *_closeButtonMonitor;
    GADObserverCollection *_observers;
    GADBannerView *_bannerView;
    GADOutOfContextNativeAdView *_outOfContextNativeAdView;
}

/* instance methods */
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)disappear;
- (void)configureWithBannerView:(id)view;
- (void)configureWithNativeAd:(id)ad;
- (void)resetViewController;
- (void)setUpCloseButton;
- (void)handleCloseButtonPressed;
- (void)setUpBannerView:(id)view;
- (void)setUpNativeAd:(id)ad;

@end

#endif /* GADOutOfContextAdViewController_h */
