//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10TFNUISwift29LegacySegmentedViewController_h
#define _TtC10TFNUISwift29LegacySegmentedViewController_h
@import Foundation;

#include "TFNViewController.h"
#include "_TtC10TFNUISwift25LegacySegmentedTabBarView.h"
#include "_TtC10TFNUISwift26LegacyPagingViewController.h"
#include "_TtP10TFNUISwift37LegacySegmentedViewControllerDelegate_-Protocol.h"
#include "_TtP10TFNUISwift39LegacySegmentedViewControllerDataSource_-Protocol.h"

@class Swift.Bool, TFNUISwift.LegacyPagingViewController, TFNUISwift.LegacySegmentedTabBarHideMode, TFNUISwift.LegacySegmentedTabBarView ?, TFNUISwift.LegacySegmentedViewControllerConfiguration, TFNUISwift.SegmentedTabsBarContainerView, TFNUISwift37LegacySegmentedViewControllerDelegate_pSgXw, TFNUISwift39LegacySegmentedViewControllerDataSource_pSgXw, UIScrollView, UIView, UIViewController, _$s12CoreGraphics7CGFloatVMn, _$sSi, _$sSo18NSLayoutConstraintCSg, _$sSo6UIViewC, _$sSo6UIViewCSgXw;

@interface TFNUISwift.LegacySegmentedViewController : TFNViewController { // (Swift)
    /* instance variables */
    TFNUISwift.LegacySegmentedViewControllerConfiguration configuration;
    TFNUISwift.LegacySegmentedTabBarView ? externalTabBar;
    TFNUISwift.LegacySegmentedTabBarView ? $__lazy_storage_$_internalTabBar;
    TFNUISwift.LegacyPagingViewController pagingVC;
    __C.UIView shadowView;
    TFNUISwift.SegmentedTabsBarContainerView barContainerView;
    __C.NSLayoutConstraint? barContainerHeightConstraint;
    Swift.Int initialSelectedIndex;
    Swift.Int lastFullyDisplayedIndex;
    nominal type descriptor for CoreGraphics.CGFloat cachedBarInsetAdjustment;
    weak __C.UIView? barSuperviewAtLastInsetMeasurement;
    Swift.Bool didRequestBarSizingRelayout;
    Swift.Bool hasPendingSafeAreaInsetApplication;
}

@property (nonatomic, readonly) UIScrollView *currentPageContentScrollView;
@property (nonatomic, readonly) UIScrollView *tfn_contentScrollView;
@property (nonatomic, readonly) _Bool tfn_prefersNavigationBarShadowHidden;
@property (nonatomic, readonly) _Bool tfn_prefersNavigationBarExpandedWhenScrolledToBottom;
@property (nonatomic, readonly) _Bool tfn_contentScrolledToBottom;
@property (nonatomic, weak) id <TFNUISwift.LegacySegmentedViewControllerDataSource> dataSource;
@property (nonatomic, weak) id <TFNUISwift.LegacySegmentedViewControllerDelegate> delegate;
@property (nonatomic, readonly) TFNUISwift.LegacySegmentedTabBarView *tabBarView;
@property (nonatomic) long long selectedIndex;
@property (nonatomic, readonly) UIViewController *selectedViewController;
@property (nonatomic) _Bool isHorizontalPagingEnabled;
@property (nonatomic) long long tabBarHideMode;
@property (nonatomic) _Bool prefersTabBarShadowHidden;
@property (nonatomic, readonly) double barHeight;
@property (nonatomic, readonly) double maximumBarHeight;
@property (nonatomic, readonly) double tabLabelFontCapHeight;
@property (nonatomic, readonly) long long numberOfTabs;
@property (nonatomic, readonly) TFNUISwift.LegacyPagingViewController *pagingViewController;
@property (nonatomic, readonly) UIView *tfn_navigationBarAccessoryView;
@property (nonatomic, readonly) _Bool canBecomeFirstResponder;

/* instance methods */
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)array;
- (_Bool)tfn_isContentScrolledToBottom;
- (void)tfn_contentScrollViewDidScroll:(id)scroll animate:(_Bool)animate;
- (void)tfn_contentScrollViewWillBeginDragging:(id)dragging;
- (void)tfn_contentScrollViewWillEndDragging:(id)dragging withVelocity:(struct CGPoint { double x0; double x1; })velocity targetContentOffset:(struct CGPoint { double x0; double x1; } *)offset;
- (void)tfn_contentScrollViewDidEndDragging:(id)dragging willDecelerate:(_Bool)decelerate;
- (void)tfn_contentScrollViewWillBeginDecelerating:(id)decelerating;
- (void)tfn_contentScrollViewDidEndDecelerating:(id)decelerating;
- (void)tfn_contentScrollViewDidEndScrollingAnimation:(id)animation;
- (_Bool)tfn_contentScrollViewShouldScrollToTop:(id)top programmatically:(_Bool)programmatically;
- (void)tfn_contentScrollViewWillScrollToTop:(id)top;
- (void)tfn_contentScrollViewDidScrollToTop:(id)top;
- (void)tfn_contentScrollViewWillScrollProgrammatically:(id)programmatically animated:(_Bool)animated;
- (void)tfn_contentScrollViewDidScrollProgrammatically:(id)programmatically animated:(_Bool)animated;
- (void)tabBarView:(id)view didSelectTabAt:(long long)at;
- (void)tabBarView:(id)view didLongPressTabAt:(long long)at;
- (void)tabBarView:(id)view didSelectInnerTab:(long long)tab atGroupIndex:(long long)index;
- (_Bool)tabBarView:(id)view shouldSelectTabAt:(long long)at;
- (long long)numberOfTabsIn:(id)in;
- (id)tabBarView:(id)view descriptorAtIndex:(long long)index;
- (id)tabBarView:(id)view tabGroupAtIndex:(long long)index;
- (id)tabBarView:(id)view menuForTabAtIndex:(long long)index;
- (_Bool)tabBarView:(id)view isUnreadIndicatorTabAt:(long long)at;
- (void)pagingViewControllerDidUpdate:(id)update;
- (void)pagingViewController:(id)controller mayBeginDisplayingPageAt:(long long)at viewController:(id)controller;
- (long long)numberOfPagesIn:(id)in;
- (id)pagingViewController:(id)controller viewControllerAt:(long long)at;
- (_Bool)pagingViewController:(id)controller isPrewarmableAt:(long long)at;
- (id)initWithDataSource:(id)source delegate:(id)delegate externalTabBar:(id)bar configuration:(id)configuration;
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewSafeAreaInsetsDidChange;
- (void)setSelectedIndex:(long long)index animated:(_Bool)animated;
- (void)setSelectedIndexWithoutAnimation:(long long)animation;
- (void)reloadData;
- (void)reloadDataWithSelectingIndex:(long long)index;
- (void)reloadDataWithInserting:(id)inserting deleting:(id)deleting selectingIndex:(long long)index completion:(id /* block */)completion;
- (void)reloadTabBar;
- (void)reloadTabContentAt:(long long)at;
- (void)animateTabContentChangeAt:(long long)at;
- (void)invalidateUnreadIndicators;
- (void)unloadInvisibleViewControllers;
- (id)viewControllerAtTabIndex:(long long)index;
- (_Bool)becomeFirstResponder;
- (_Bool)accessibilityScroll:(long long)scroll;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC10TFNUISwift29LegacySegmentedViewController_h */
