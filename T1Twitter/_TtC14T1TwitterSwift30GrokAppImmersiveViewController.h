//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift30GrokAppImmersiveViewController_h
#define _TtC14T1TwitterSwift30GrokAppImmersiveViewController_h
@import Foundation;

#include "TTAStatusInlineActionsViewDelegate-Protocol.h"

@class Swift.Bool, T1TwitterSwift.GrokAppImmersiveTransitionAnimator, T1TwitterSwift.GrokMeWebView, T1TwitterSwift.StatusActionHandler ?, T1TwitterSwift.XLinkWebViewLoggingSession ?, TFNViewController, _$s10Foundation3URLVMn, _$s13XDesignSystem4BlurCMn, _$s13XDesignSystem6ButtonCMn ?, _$sSo16TFNTwitterStatusC, _$sSo17TFNTwitterAccountC, _$sSo26TTAStatusInlineActionsViewC, _$sSo6UIViewC, _$sSo7UILabelC, _$sypSg;

@interface T1TwitterSwift.GrokAppImmersiveViewController : TFNViewController <TTAStatusInlineActionsViewDelegate> { // (Swift)
    /* instance variables */
    nominal type descriptor for Foundation.URL appURL;
    __C.TFNTwitterStatus status;
    __C.TFNTwitterAccount account;
    T1TwitterSwift.GrokMeWebView contentProvider;
    T1TwitterSwift.GrokAppImmersiveTransitionAnimator transitionAnimator;
    Swift.Bool didLogImpression;
    T1TwitterSwift.XLinkWebViewLoggingSession ? $__lazy_storage_$_loggingSession;
    __C.UIView immersiveView;
    __C.UIView contentContainerView;
    nominal type descriptor for XDesignSystem.Button ? $__lazy_storage_$_closeButton;
    nominal type descriptor for XDesignSystem.Button ? $__lazy_storage_$_overflowButton;
    nominal type descriptor for XDesignSystem.Blur hostCapsuleBlur;
    __C.UILabel hostLabel;
    __C.TTAStatusInlineActionsView statusActionsView;
    Any? idleTimerToken;
    T1TwitterSwift.StatusActionHandler ? $__lazy_storage_$_actionHandler;
}

@property (nonatomic, readonly) long long preferredStatusBarStyle;

/* instance methods */
- (void)inlineActionsView:(id)view didTapInlineActionWithType:(unsigned long long)type;
- (void)inlineActionsView:(id)view didBeginLongPressForInlineActionType:(unsigned long long)type;
- (void)inlineActionsView:(id)view didLongPressInlineActionWithType:(unsigned long long)type;
- (void)dealloc;
- (id)initWithCoder:(id)coder;
- (void)statusUpdatedWithNotification:(id)notification;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)appear;
- (void)viewDidAppear:(_Bool)appear;
- (void)viewWillDisappear:(_Bool)disappear;
- (void)viewDidDisappear:(_Bool)disappear;
- (id)scribePage;
- (id)scribeComponent;
- (id)scribeImpressionParameters;
- (void)viewDidLayoutSubviews;
- (void)closeTapped;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC14T1TwitterSwift30GrokAppImmersiveViewController_h */
