//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADDynamicHeightSearchBannerView_h
#define GADDynamicHeightSearchBannerView_h
@import Foundation;

#include "GADDynamicHeightSearchBannerViewDelegate-Protocol.h"
#include "GADWebViewController.h"
#include "GADWebViewControllerDelegate-Protocol.h"
#include "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, UIView;

@interface GADDynamicHeightSearchBannerView : UIView <GADWebViewControllerDelegate, UIGestureRecognizerDelegate> {
    /* instance variables */
    GADWebViewController *_adWebView;
}

@property (copy, nonatomic) NSString *adUnitID;
@property (weak, nonatomic) id <GADDynamicHeightSearchBannerViewDelegate> delegate;
@property (readonly, nonatomic) long long adState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)configureBannerView;
- (void)loadRequest:(id)request;
- (struct CGSize { double x0; double x1; })currentAdSize;
- (_Bool)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)recognizer;
- (_Bool)webViewController:(id)controller shouldStartLoadWithRequest:(id)request navigationType:(long long)type;
- (void)webViewController:(id)controller openNewTabWithRequest:(id)request;
- (void)webViewControllerDidStartLoad:(id)load;
- (void)webViewControllerDidFinishLoad:(id)load;
- (void)webViewController:(id)controller didFailLoadWithError:(id)error;
- (void)webViewControllerWebContentProcessDidTerminate:(id)terminate;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)updateInternalAdViewHeightAndNotifyDelegateWithHeight:(double)height;
- (void)handleBannerViewDidReceiveAd;
- (void)handleUserDidTapAdDestinationURL:(id)url;

@end

#endif /* GADDynamicHeightSearchBannerView_h */
