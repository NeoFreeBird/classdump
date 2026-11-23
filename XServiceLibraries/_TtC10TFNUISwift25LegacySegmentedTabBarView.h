//
#ifndef _TtC10TFNUISwift25LegacySegmentedTabBarView_h
#define _TtC10TFNUISwift25LegacySegmentedTabBarView_h
@import Foundation;

#include "UICollectionViewDataSource-Protocol.h"
#include "UICollectionViewDelegate-Protocol.h"
#include "UIGestureRecognizerDelegate-Protocol.h"
#include "_TtC10TFNUISwift26LegacySegmentedTabBarStyle.h"
#include "_TtC10TFNUISwift27LegacySegmentedTabBarLayout.h"

@class Swift.Bool, TFNUISwift.LegacySegmentedHighlightBarView, TFNUISwift.LegacySegmentedTabBarLayout, TFNUISwift.LegacySegmentedTabBarStyle, TFNUISwift.LegacySegmentedTabBarView.SwipeReveal ?, TFNUISwift.LegacySegmentedTabBarViewDataSource ?, TFNUISwift.LegacySegmentedTabBarViewDelegate ?, TFNUISwift.LegacySegmentedTransitionAnimator ?, TFNUISwift.SegmentedTabBarCollectionView ?, UIPanGestureRecognizer, UIScrollView, UIView, _$s12CoreGraphics7CGFloatVMn ?, _$sSi, _$sSiSg, _$sSo12UIScrollViewCSgXw, _$sSo15CAGradientLayerC, _$sSo6UIViewC, _$sSo6UIViewCSg, __C.CGSize;

@interface TFNUISwift.LegacySegmentedTabBarView : UIView <UIGestureRecognizerDelegate, UICollectionViewDelegate, UICollectionViewDataSource> { // (Swift)
    /* instance variables */
    TFNUISwift.LegacySegmentedTabBarViewDataSource ? dataSource;
    TFNUISwift.LegacySegmentedTabBarViewDelegate ? delegate;
    TFNUISwift.SegmentedTabBarCollectionView ? $__lazy_storage_$_collectionView;
    TFNUISwift.LegacySegmentedHighlightBarView highlightBar;
    __C.CGSize lastLayoutSize;
    Swift.Bool resnapsHighlightAfterSizeChange;
    __C.UIView scrollContentView;
    __C.UIView? trailingAccessoryContainer;
    __C.CAGradientLayer scrollFadeMask;
    Swift.Int tabCount;
    Swift.Bool hasLoadedInitialData;
    Swift.Bool isDiffInProgress;
    Swift.Int? pendingScrollToTabIndex;
    Swift.Int? animationSourceIndex;
    Swift.Int? animationDestinationIndex;
    TFNUISwift.LegacySegmentedTabBarView.SwipeReveal ? swipeReveal;
    TFNUISwift.LegacySegmentedTransitionAnimator ? standaloneTransitionAnimator;
    nominal type descriptor for CoreGraphics.CGFloat ? tapCenteringStartOffsetX;
    nominal type descriptor for CoreGraphics.CGFloat ? tapCenteringTargetOffsetX;
}

@property (nonatomic, retain) TFNUISwift.LegacySegmentedTabBarStyle *style;
@property (nonatomic, retain) UIView *trailingAccessoryView;
@property (nonatomic, weak) UIScrollView *pagingScrollView;
@property (nonatomic) _Bool suppressScrollTranslation;
@property (nonatomic) long long selectedIndex;
@property (nonatomic, readonly) TFNUISwift.LegacySegmentedTabBarLayout *tabBarLayout;
@property (nonatomic, readonly) UIPanGestureRecognizer *barPanGestureRecognizer;

/* instance methods */
- (void)installLongPressGesture;
- (void)handleLongPress:(id)press;
- (void)collectionView:(id)view didSelectItemAtIndexPath:(id)path;
- (void)scrollViewDidScroll:(id)scroll;
- (long long)collectionView:(id)view numberOfItemsInSection:(long long)section;
- (id)collectionView:(id)view cellForItemAtIndexPath:(id)path;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)fontSizeDidChange;
- (void)didMoveToWindow;
- (id)cellForTabAt:(long long)at;
- (void)scrollToTabAt:(long long)at animated:(_Bool)animated;
- (void)reloadData;
- (void)reloadVisibleTabs;
- (void)invalidateUnreadIndicators;
- (void)applyDiffWithInserting:(id)inserting deleting:(id)deleting selectingIndex:(long long)index completion:(id /* block */)completion;
- (void)selectTabAt:(long long)at animated:(_Bool)animated;
- (void)updateForScrollOffset:(id)offset;
- (void)updateForFractionalIndex:(double)index;
- (void)finalizePagingToIndex:(long long)index;
- (void)traitCollectionDidChange:(id)change;
- (void)layoutSubviews;
- (void)animateTabContentChangeAt:(long long)at;

@end

#endif /* _TtC10TFNUISwift25LegacySegmentedTabBarView_h */
