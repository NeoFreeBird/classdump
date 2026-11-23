//
#ifndef T1FleetLineView_h
#define T1FleetLineView_h
@import Foundation;

#include "TFNLayoutMetricsEnvironment-Protocol.h"
#include "UICollectionViewDataSource-Protocol.h"
#include "UICollectionViewDelegate-Protocol.h"
#include "UICollectionViewDelegateFlowLayout-Protocol.h"
#include "UIScrollViewDelegate-Protocol.h"

@class NSArray, UIView;

@interface T1FleetLineView : UIView <UIScrollViewDelegate, UICollectionViewDelegateFlowLayout, UICollectionViewDelegate, UICollectionViewDataSource, TFNLayoutMetricsEnvironment> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *delegate;
    NSNumber"16@0:8 *$__lazy_storage_$_fleetCollectionView;
    NSNumber"16@0:8 *fleetLineItems;
    NSNumber"16@0:8 *loadingView;
    NSNumber"16@0:8 *contentView;
    NSNumber"16@0:8 *account;
    NSNumber"16@0:8 *viewModel;
    NSNumber"16@0:8 *isFeatureHighlightDispalyed;
    NSNumber"16@0:8 *hasLiveContent;
    NSNumber"16@0:8 *didAddEmptyThread;
    NSNumber"16@0:8 *timelinePollTimer;
    NSNumber"16@0:8 *dataStore;
    NSNumber"16@0:8 *laidOutHorizontalSafeArea;
    NSNumber"16@0:8 *fleetlineAccessibilityElement;
}

@property (nonatomic, readonly) _Bool shouldScrollOffScreen;
@property (nonatomic, readonly) long long itemCount;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;
@property (nonatomic, copy) NSArray *accessibilityElements;

/* instance methods */
- (void)scrollViewDidEndDecelerating:(id)decelerating;
- (void)scrollViewDidEndDragging:(id)dragging willDecelerate:(_Bool)decelerate;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)view layout:(id)layout insetForSectionAtIndex:(long long)index;
- (struct CGSize { double x0; double x1; })collectionView:(id)view layout:(id)layout sizeForItemAtIndexPath:(id)path;
- (void)collectionView:(id)view didSelectItemAtIndexPath:(id)path;
- (void)collectionView:(id)view willDisplayCell:(id)cell forItemAtIndexPath:(id)path;
- (void)scrollViewDidScroll:(id)scroll;
- (long long)numberOfSectionsInCollectionView:(id)view;
- (long long)collectionView:(id)view numberOfItemsInSection:(long long)section;
- (id)collectionView:(id)view cellForItemAtIndexPath:(id)path;
- (id)initWithCoder:(id)coder;
- (id)initWithAccount:(id)account delegate:(id)delegate;
- (void)layoutSubviews;
- (void)didPullToRefresh;
- (void)willPresentFleetsController;
- (void)viewDidAppear;
- (void)loadIfNeeded;
- (void)viewWillDisappear;
- (void)layoutMetricsDidChange:(id)change to:(id)to;
- (void)safeAreaInsetsDidChange;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)tfx_fleetsDevServiceEnabledParameterChanged;
- (void)tfx_fleetsCanaryServiceEnabledParameterChanged;
- (void)tfx_fleetUseSocialGraphEnabledParameterChanged;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* T1FleetLineView_h */
