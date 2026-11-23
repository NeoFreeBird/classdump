//
#ifndef _TtC14T1TwitterSwift13GrokMeWebView_h
#define _TtC14T1TwitterSwift13GrokMeWebView_h
@import Foundation;

#include "_TtC14T1TwitterSwift12XLinkWebView.h"

@class Swift.Bool, T1TwitterSwift.XLinkGrokLoadingView, _$sSaySSGSg, _$sSo7NSTimerCSg;

@interface T1TwitterSwift.GrokMeWebView : T1TwitterSwift.XLinkWebView { // (Swift)
    /* instance variables */
    T1TwitterSwift.XLinkGrokLoadingView loadingOverlayView;
    __C.NSTimer? loadingOverlayTimeout;
    Swift.Bool skipsLoadingOverlayForNextNavigation;
    [Swift.String]? $__lazy_storage_$_grokAppLinkDomains;
}

/* instance methods */
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC14T1TwitterSwift13GrokMeWebView_h */
