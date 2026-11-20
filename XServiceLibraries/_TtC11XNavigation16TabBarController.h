//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11XNavigation16TabBarController_h
#define _TtC11XNavigation16TabBarController_h
@import Foundation;

@class Swift.Bool, UIViewController, XNavigation.ColumnFABPlacement ?, XNavigation.NativeVerticalTabBar ?, XNavigation.TabBarAccessoryCoordinator, XNavigation.TabBarChromeContainerView, XNavigation.TabBarChromeLayout.VerticalTabBarAccessoryRow ?, XNavigation.TabBarCollapseDriver ?, XNavigation.TabBarController.AppearanceState, XNavigation.TabBarController.ColumnRoomKey ?, XNavigation.TabBarController.TabIdentifier, XNavigation.TabBarEventRelay, XNavigation.TabBarNativeBarPresentation ?, XNavigation.TabBarPlacementView, XNavigation.TabBarView ?, XNavigation.VerticalColumnBarItems.Arrangement, XNavigation.VerticalTabBarPressStage, _$s12CoreGraphics7CGFloatVMn, _$s7Combine14AnyCancellableCMn ?, _$sSD -> XNavigation.TabBarController.TabIdentifier XNavigation.TabBarController.TabBadge, _$sSD -> XNavigation.TabBarController.TabIdentifier XNavigation.TabBarController.TabState, _$sSN -> _$s12CoreGraphics7CGFloatVMn ?, _$sSa -> XNavigation.TabBarController.Tab, _$sSbSg, _$sSi, _$sSo10NSMapTableCySo16UIViewControllerC XNavigation.TabBarController.ColumnArrangement, _$sSo18NSLayoutConstraintCSg, _$sSo6UIViewC, _$sSo7UIColorC, _$sySa -> XNavigation.TabBarController.TabIdentifier _$sGcSg, __C.CGSize, __C.UIEdgeInsets, __C.UIUserInterfaceLayoutDirection;

@interface XNavigation.TabBarController : UIViewController { // (Swift)
    /* instance variables */
    Swift.Array -> XNavigation.TabBarController.Tab orderedTabs;
    Swift.Array -> XNavigation.TabBarController.Tab tabs;
    Swift.Bool limitsDisplayedItemCount;
    Swift.Int displayedItemCapacity;
    Swift.Bool isApplyingDisplayedTabs;
    __C.UIView contentContainerView;
    XNavigation.TabBarChromeContainerView chromeContainer;
    XNavigation.TabBarChromeContainerView hideContainer;
    Swift.Bool isBarHidden;
    Swift.Bool isKeyboardUp;
    nominal type descriptor for CoreGraphics.CGFloat barHiddenProgress;
    Swift.Int hideAnimationsInFlight;
    XNavigation.TabBarView ? barView;
    XNavigation.TabBarPlacementView barPlacementView;
    __C.NSLayoutConstraint? barCenterXConstraint;
    __C.NSLayoutConstraint? barCenterYConstraint;
    __C.NSLayoutConstraint? barWidthConstraint;
    __C.NSLayoutConstraint? barHeightConstraint;
    Swift.Bool allowsVerticalTabBar;
    Swift.Bool drawsVerticalTabBarCountsAsDots;
    XNavigation.ColumnFABPlacement ? columnFABPlacement;
    Swift.Bool displaysFAB;
    XNavigation.VerticalColumnBarItems.Arrangement appliedColumnArrangement;
    __C.NSMapTable empty-list __C.UIViewController XNavigation.TabBarController.ColumnArrangement columnArrangements;
    XNavigation.TabBarController.ColumnRoomKey ? lastColumnRoomKey;
    XNavigation.TabBarNativeBarPresentation ? nativeBarPresentation;
    XNavigation.NativeVerticalTabBar ? nativeVerticalTabBar;
    Swift.Dictionary -> XNavigation.TabBarController.TabIdentifier XNavigation.TabBarController.TabBadge tabBadges;
    __C.UIColor badgeColor;
    nominal type descriptor for CoreGraphics.CGFloat verticalTabBarContentMargin;
    Swift.ClosedRange -> nominal type descriptor for CoreGraphics.CGFloat ? contentColumn;
    Swift.Bool isTabBarVertical;
    XNavigation.VerticalTabBarPressStage verticalTabBarPressStage;
    XNavigation.TabBarAccessoryCoordinator accessoryCoordinator;
    Swift.Dictionary -> XNavigation.TabBarController.TabIdentifier XNavigation.TabBarController.TabState installedTabs;
    XNavigation.TabBarController.AppearanceState appearanceState;
    Swift.Bool? selectingTabAnimated;
    XNavigation.TabBarController.TabIdentifier selectedIdentifier;
     empty-list Swift.Array -> XNavigation.TabBarController.TabIdentifier _$sGcSg onDisplayedTabsChange;
    XNavigation.TabBarEventRelay relay;
    nominal type descriptor for CoreGraphics.CGFloat hostedBottomInsetExtent;
    nominal type descriptor for Combine.AnyCancellable ? didEnterBackgroundCancellable;
    XNavigation.TabBarCollapseDriver ? $__lazy_storage_$_collapseDriver;
    __C.CGSize appliedAccessoryLayoutSize;
    nominal type descriptor for CoreGraphics.CGFloat appliedAccessoryBarWidth;
    __C.UIEdgeInsets appliedAccessoryInsets;
    XNavigation.TabBarChromeLayout.VerticalTabBarAccessoryRow ? appliedVerticalTabBarAccessoryRow;
    __C.UIUserInterfaceLayoutDirection appliedAccessoryLayoutDirection;
}

@property (nonatomic, readonly) _Bool shouldAutomaticallyForwardAppearanceMethods;
@property (nonatomic, readonly) UIViewController *childViewControllerForStatusBarStyle;
@property (nonatomic, readonly) unsigned long long supportedInterfaceOrientations;
@property (nonatomic, readonly) long long preferredInterfaceOrientationForPresentation;

/* instance methods */
- (void)keyboardWillChangeFrame:(id)frame;
- (void)keyboardWillHide:(id)hide;
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)traitCollectionDidChange:(id)change;
- (void)viewWillLayoutSubviews;
- (void)viewDidLayoutSubviews;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewWillAppear:(_Bool)appear;
- (void)viewDidAppear:(_Bool)appear;
- (void)viewWillDisappear:(_Bool)disappear;
- (void)viewDidDisappear:(_Bool)disappear;
- (void)didReceiveMemoryWarning;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC11XNavigation16TabBarController_h */
