//
#ifndef UIViewController_TFNNavigationControllerAdditions_h
#define UIViewController_TFNNavigationControllerAdditions_h
@import Foundation;

@interface UIViewController (TFNNavigationControllerAdditions)

/* instance methods */
- (id)tfn_navigationController;
- (_Bool)tfn_prefersNavigationBarHidden;
- (void)tfn_setDefaultPrefersNavigationBarHidden:(_Bool)hidden;
- (void)tfn_setNeedsNavigationBarHiddenUpdate;
- (_Bool)tfn_prefersNavigationBarShadowHidden;
- (void)tfn_setNeedsNavigationBarShadowHiddenUpdate;
- (void)tfn_setNeedsNavigationBarShadowHiddenUpdateAnimated:(_Bool)animated;
- (_Bool)tfn_logoTitleViewShown;
- (void)tfn_setNeedsLogoTitleViewShownUpdateAnimated:(_Bool)animated;
- (long long)tfn_navigationBarMatchingStatusBarStyle;
- (_Bool)tfn_supportsNavigationBarCollapsing;
- (_Bool)tfn_supportsTabBarCollapsing;
- (_Bool)tfn_supportsNavigationBarAccessoryView;
- (_Bool)tfn_prefersNavigationBarExpandedWhenScrolledToBottom;
- (_Bool)tfn_prefersNavigationBarExpandedWhenScrollingUp;
- (_Bool)tfn_preferManualNavBarCollapse;
- (_Bool)tfn_prefersManualNavBarAlphaControl;
- (_Bool)tfn_prefersNavigationBarBlurHidden;
- (_Bool)tfn_prefersCustomStatusBarStyle;
- (_Bool)tfn_webViewSwipeBackCanOverrideNavigationPopPan;
- (_Bool)tfn_isContentScrolledToBottom;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })tfn_contentScrollViewContentInset;
- (void)tfn_setNeedsNavigationBarExpansionUpdate;
- (void)tfn_setNeedsNavigationBarAccessoryViewUpdate;
- (void)tfn_navigationControllerDidLayoutBarItems;
- (id)tfn_escapeBarButtonItem;
- (id)tfn_navigationBarAccessoryView;
- (_Bool)tfn_shouldCaptureNavigationControllerStatusBarStyle;

@end

#endif /* UIViewController_TFNNavigationControllerAdditions_h */
