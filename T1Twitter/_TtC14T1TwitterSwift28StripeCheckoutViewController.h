//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift28StripeCheckoutViewController_h
#define _TtC14T1TwitterSwift28StripeCheckoutViewController_h
@import Foundation;

#include "UISheetPresentationControllerDelegate-Protocol.h"
#include "WKNavigationDelegate-Protocol.h"

@class Swift.Bool, T1TwitterSwift.CheckoutURLBar, T1TwitterSwift.StripeCheckoutDelegate ?, T1TwitterSwift.StripeCheckoutViewController.Style, TFNViewController, _$s10Foundation3URLVMn, _$sSaySo18NSLayoutConstraintCG, _$sSo18NSLayoutConstraintCSg, _$sSo23UIActivityIndicatorViewCSg, _$sSo6UIViewCSg, _$sSo7UILabelCSg, _$sSo9TFNButtonCSg, _$sSo9WKWebViewCSg;

@interface T1TwitterSwift.StripeCheckoutViewController : TFNViewController <UISheetPresentationControllerDelegate, WKNavigationDelegate> { // (Swift)
    /* instance variables */
    nominal type descriptor for Foundation.URL url;
    T1TwitterSwift.StripeCheckoutViewController.Style style;
    T1TwitterSwift.StripeCheckoutDelegate ? delegate;
    T1TwitterSwift.CheckoutURLBar urlBar;
    [__C.NSLayoutConstraint] urlBarConstraints;
    __C.NSLayoutConstraint? webViewTopConstraint;
    Swift.Bool urlBarInSheet;
    __C.WKWebView? $__lazy_storage_$_webView;
    __C.UIActivityIndicatorView? $__lazy_storage_$_loadingIndicator;
    __C.UIView? $__lazy_storage_$_topBar;
    __C.TFNButton? $__lazy_storage_$_closeButton;
    __C.UILabel? $__lazy_storage_$_titleLabel;
}

/* instance methods */
- (void)sheetPresentationControllerDidChangeSelectedDetentIdentifier:(id)identifier;
- (void)webView:(id)view decidePolicyForNavigationAction:(id)action decisionHandler:(id /* block */)handler;
- (void)webView:(id)view didFinishNavigation:(id)navigation;
- (void)webView:(id)view didFailNavigation:(id)navigation withError:(id)error;
- (void)webView:(id)view didFailProvisionalNavigation:(id)navigation withError:(id)error;
- (void)closeButtonTapped;
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)appear;
- (void)viewWillDisappear:(_Bool)disappear;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC14T1TwitterSwift28StripeCheckoutViewController_h */
