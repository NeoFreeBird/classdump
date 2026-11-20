//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNDataViewController_h
#define TFNDataViewController_h
@import Foundation;

#include "TFNAnimationsObserver.h"
#include "TFNCollectionView.h"
#include "TFNDataSourceScrollPositionAssociation-Protocol.h"
#include "TFNDataView-Protocol.h"
#include "TFNDataViewKeyboardSelectionController.h"
#include "TFNDataViewUpdateImageCache.h"
#include "TFNEstimatedRowHeightTableViewDelegateProxy.h"
#include "TFNInteractionsObserver.h"
#include "TFNKeyboardShortcutDelegate-Protocol.h"
#include "TFNLayoutMetrics.h"
#include "TFNLayoutMetricsEnvironment-Protocol.h"
#include "TFNPreviewingModalViewController.h"
#include "TFNProgrammaticScrollViewDelegate-Protocol.h"
#include "TFNPullToLoadTopControl-Protocol.h"
#include "TFNScrollViewDelegateBroadcaster.h"
#include "TFNTableView.h"
#include "TFNViewController.h"
#include "TFNZoomController.h"
#include "TFSDisplayLink.h"
#include "TFSScrollPerformanceMetricsDelegate-Protocol.h"
#include "TFSTimer.h"
#include "UICollectionViewDataSource-Protocol.h"
#include "UICollectionViewDataSourcePrefetching-Protocol.h"
#include "UICollectionViewDelegate-Protocol.h"
#include "UITableViewDataSource-Protocol.h"
#include "UITableViewDataSourcePrefetching-Protocol.h"
#include "UITableViewDelegate-Protocol.h"
#include "UITableViewDragDelegate-Protocol.h"
#include "XNAVContentScrollViewProviding-Protocol.h"

@class NSDictionary, NSMutableArray, NSMutableSet, NSNumber, NSString, UICollectionViewLayout, UIControl, UIScrollView, UIView;
@protocol TFSScrollPerformanceMetrics;

@interface TFNDataViewController : TFNViewController <XNAVContentScrollViewProviding, TFSScrollPerformanceMetricsDelegate, TFNKeyboardShortcutDelegate, UICollectionViewDataSource, UICollectionViewDataSourcePrefetching, UICollectionViewDelegate, UITableViewDataSource, UITableViewDataSourcePrefetching, UITableViewDelegate, TFNDataSourceScrollPositionAssociation, TFNLayoutMetricsEnvironment, TFNProgrammaticScrollViewDelegate, UITableViewDragDelegate> {
    /* instance variables */
    _Bool _needsReload;
    _Bool _needsDataViewDidDisplay;
    long long _updateAnimated;
    _Bool _includeCellLayoutsInReload;
    _Bool _hasLoadedInitialData;
    _Bool _needsShowPullToRefreshAnimation;
    UIView *_editingTextInput;
    _Bool _isActivelyMonitoringScroll;
    NSMutableArray *_onDidEndScrollingBlocks;
    TFSTimer *_asyncUpdatesTimer;
    TFSDisplayLink *_displayLink;
    id <TFSScrollPerformanceMetrics> _scrollPerformanceMetrics;
    NSNumber *_overridenContentBreakLength;
    NSDictionary *_savedScrollPositionForReload;
    NSMutableSet *_indexPathsForCellSizeUpdate;
    TFNDataViewUpdateImageCache *_updateImageCache;
    TFNEstimatedRowHeightTableViewDelegateProxy *_estimatedRowHeightTableViewDelegateProxy;
    id _suppressMacMultiselectItemDeselectionProxy;
    TFNAnimationsObserver *_animationsObserver;
    TFNInteractionsObserver *_interactionsObserver;
    _Bool _sizeTransitioning;
    TFNLayoutMetrics *_sizeTransitioningPreviousLayoutMetrics;
}

@property (readonly, nonatomic) UIScrollView *xnav_contentScrollView;
@property (readonly, nonatomic) _Bool xnav_isScrollContentExhausted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) TFNScrollViewDelegateBroadcaster *scrollViewEventBroadcaster;
@property (nonatomic) _Bool viewHasLaidOut;
@property (nonatomic) _Bool viewHasAppeared;
@property (readonly, nonatomic) UIScrollView<TFNDataView> *dataView;
@property (readonly, nonatomic) UIScrollView<TFNDataView> *dataViewIfLoaded;
@property (readonly, nonatomic) UIView *dataViewHostView;
@property (readonly, nonatomic) long long dataViewType;
@property (readonly, nonatomic) TFNTableView *tableView;
@property (readonly, nonatomic) TFNTableView *tableViewIfLoaded;
@property (readonly, nonatomic) TFNCollectionView *collectionView;
@property (readonly, nonatomic) TFNCollectionView *collectionViewIfLoaded;
@property (nonatomic) _Bool clearsSelectionOnViewWillAppear;
@property (nonatomic) _Bool flashesScrollIndicatorsOnViewDidAppear;
@property (nonatomic) _Bool suppressMacMultiselectItemDeselection;
@property (nonatomic) _Bool insetsDataViewDisplayArea;
@property (nonatomic) double contentBreakLength;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } contentInset;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } scrollIndicatorInsets;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } headerViewInsets;
@property (nonatomic) _Bool insetsIgnoreSafeArea;
@property (nonatomic) _Bool adjustsContentInset;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } visibleCellsRectInWindowSpace;
@property (readonly, nonatomic) _Bool needsUpdate;
@property (nonatomic) _Bool shouldReloadDataOnFirstViewWillAppear;
@property (nonatomic) _Bool defersUpdatesWhileEditingTextInput;
@property (nonatomic) _Bool dataViewUpdatesAreAnimated;
@property (retain, nonatomic) UIControl<TFNPullToLoadTopControl> *pullToLoadTopControl;
@property (nonatomic) _Bool pullToLoadTopEnabled;
@property (copy, nonatomic) id /* block */ loadTopCompletionHandler;
@property (readonly, nonatomic) _Bool isScrolling;
@property (readonly, nonatomic) NSDictionary *currentScrollPosition;
@property (nonatomic) long long restoreScrollPositionType;
@property (readonly, nonatomic) _Bool isRestoringScrollPosition;
@property (readonly, nonatomic) _Bool isTopOfScrollAreaVisible;
@property (readonly, nonatomic) _Bool isRightOfScrollAreaVisible;
@property (readonly, nonatomic) _Bool isBottomOfScrollAreaVisible;
@property (readonly, nonatomic) _Bool isLeftOfScrollAreaVisible;
@property (readonly, weak, nonatomic) TFNPreviewingModalViewController *previewingViewController;
@property (readonly, nonatomic) TFNZoomController *zoomController;
@property (nonatomic) _Bool respondsToKeyboardShowing;
@property (nonatomic) long long tableSectionBreakPosition;
@property (nonatomic) _Bool supportsDragInteraction;
@property (readonly, nonatomic) UICollectionViewLayout *collectionViewLayout;
@property (readonly, nonatomic) TFNDataViewKeyboardSelectionController *keyboardSelectionController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)setDidPullToLoadTopBlock:(id /* block */)block;
+ (Class)collectionViewClass;
+ (Class)tableViewClass;
+ (id)dataViewAccessibilityIdentifierForClass:(Class)_class;

/* instance methods */
- (void)tfn_presentValuePicker:(id)picker deselectingItemAtIndexPath:(id)path;
- (id)init;
- (id)initWithCollectionViewLayout:(id)layout;
- (id)initWithNibName:(id)name bundle:(id)bundle;
- (id)initWithCoder:(id)coder;
- (id)initWithCollectionViewListLayout;
- (void)dealloc;
- (unsigned long long)sectionBreaksForIndexPath:(id)path;
- (unsigned long long)defaultSectionBreaksForIndexPath:(id)path;
- (_Bool)accessibilityScroll:(long long)scroll;
- (id)dataViewAccessibilityIdentifier;
- (void)scrollViewDidScroll:(id)scroll;
- (void)scrollViewWillBeginDragging:(id)dragging;
- (void)scrollViewWillEndDragging:(id)dragging withVelocity:(struct CGPoint { double x0; double x1; })velocity targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)offset;
- (void)scrollViewDidEndDragging:(id)dragging willDecelerate:(_Bool)decelerate;
- (void)scrollViewWillBeginDecelerating:(id)decelerating;
- (void)scrollViewDidEndDecelerating:(id)decelerating;
- (_Bool)scrollViewShouldScrollToTop:(id)top;
- (void)scrollViewWillScrollProgrammatically:(id)programmatically animated:(_Bool)animated;
- (void)scrollViewDidScrollProgrammatically:(id)programmatically animated:(_Bool)animated;
- (void)didEndScrolling;
- (void)onDidEndScrolling:(id /* block */)scrolling;
- (_Bool)isTopOfScrollAreaWithinDistance:(double)distance;
- (_Bool)isBottomOfScrollAreaWithinDistance:(double)distance;
- (_Bool)isRightOfScrollAreaWithinDistance:(double)distance;
- (void)scrollViewWillProgrammaticallyScrollToTop:(id)top;
- (void)scrollViewDidScrollToTop:(id)top;
- (void)scrollViewDidEndScrollingAnimation:(id)animation;
- (_Bool)scrollViewShouldProgrammaticallyScrollToTop:(id)top;
- (void)addScrollViewDelegate:(id)delegate;
- (void)removeScrollViewDelegate:(id)delegate;
- (id)tfn_contentScrollView;
- (void)_tfn_dynamic_didPullToLoadTop:(id)top;
- (void)loadTop:(id)top;
- (_Bool)isLoadingTop;
- (void)showPullToRefreshAnimation;
- (void)updateLoadingTop;
- (_Bool)loadTopControlShouldUpdateContentInsetWhenUpdatingProgrammatically;
- (void)loadTopDidBegin;
- (void)loadTopDidEnd;
- (_Bool)shouldHidePullToLoadTopControlWhenDisplayingCell:(id)cell;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)appear;
- (void)viewDidAppear:(_Bool)appear;
- (void)viewDidFullyAppear:(_Bool)appear;
- (void)viewWillDisappear:(_Bool)disappear;
- (void)viewDidDisappear:(_Bool)disappear;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })size withTransitionCoordinator:(id)coordinator;
- (void)setEditing:(_Bool)editing animated:(_Bool)animated completion:(id /* block */)completion;
- (void)viewSafeAreaInsetsDidChange;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)array;
- (void)tfn_previewingStateDidChange;
- (id)previewConfigurationForLocation:(struct CGPoint { double x0; double x1; })location inCell:(id)cell atIndexPath:(id)path;
- (id)highlightPreviewForLocation:(struct CGPoint { double x0; double x1; })location inCell:(id)cell atIndexPath:(id)path;
- (id)dismissalPreviewForLocation:(struct CGPoint { double x0; double x1; })location inCell:(id)cell atIndexPath:(id)path;
- (void)commitPreviewingViewController:(id)controller;
- (id)tableView:(id)view contextMenuConfigurationForRowAtIndexPath:(id)path point:(struct CGPoint { double x0; double x1; })point;
- (void)tableView:(id)view willPerformPreviewActionForMenuWithConfiguration:(id)configuration animator:(id)animator;
- (id)tableView:(id)view previewForHighlightingContextMenuWithConfiguration:(id)configuration;
- (id)tableView:(id)view previewForDismissingContextMenuWithConfiguration:(id)configuration;
- (id)collectionView:(id)view contextMenuConfigurationForItemAtIndexPath:(id)path point:(struct CGPoint { double x0; double x1; })point;
- (void)collectionView:(id)view willPerformPreviewActionForMenuWithConfiguration:(id)configuration animator:(id)animator;
- (id)collectionView:(id)view previewForHighlightingContextMenuWithConfiguration:(id)configuration;
- (id)collectionView:(id)view previewForDismissingContextMenuWithConfiguration:(id)configuration;
- (id)tableView:(id)view itemsForBeginningDragSession:(id)session atIndexPath:(id)path;
- (long long)numberOfSectionsInTableView:(id)view;
- (long long)numberOfSectionsInCollectionView:(id)view;
- (long long)tableView:(id)view numberOfRowsInSection:(long long)section;
- (long long)collectionView:(id)view numberOfItemsInSection:(long long)section;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)path;
- (id)collectionView:(id)view cellForItemAtIndexPath:(id)path;
- (double)tableView:(id)view heightForRowAtIndexPath:(id)path;
- (struct CGSize { double x0; double x1; })collectionView:(id)view sizeForItemAtIndexPath:(id)path constrainedToSize:(struct CGSize { double x0; double x1; })size;
- (struct CGSize { double x0; double x1; })collectionView:(id)view sizeForHeaderInSection:(long long)section;
- (struct CGSize { double x0; double x1; })collectionView:(id)view sizeForFooterInSection:(long long)section;
- (void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)path;
- (void)collectionView:(id)view willDisplayCell:(id)cell forItemAtIndexPath:(id)path;
- (void)tableView:(id)view didEndDisplayingCell:(id)cell forRowAtIndexPath:(id)path;
- (void)collectionView:(id)view didEndDisplayingCell:(id)cell forItemAtIndexPath:(id)path;
- (void)tableView:(id)view didHighlightRowAtIndexPath:(id)path;
- (void)collectionView:(id)view didHighlightItemAtIndexPath:(id)path;
- (void)collectionView:(id)view prefetchItemsAtIndexPaths:(id)paths;
- (void)tableView:(id)view prefetchRowsAtIndexPaths:(id)paths;
- (_Bool)tableView:(id)view shouldBeginMultipleSelectionInteractionAtIndexPath:(id)path;
- (void)tableView:(id)view didBeginMultipleSelectionInteractionAtIndexPath:(id)path;
- (_Bool)collectionView:(id)view shouldBeginMultipleSelectionInteractionAtIndexPath:(id)path;
- (void)collectionView:(id)view didBeginMultipleSelectionInteractionAtIndexPath:(id)path;
- (double)tableView:(id)view heightForHeaderInSection:(long long)section;
- (id)tableView:(id)view viewForHeaderInSection:(long long)section;
- (double)tableView:(id)view heightForFooterInSection:(long long)section;
- (id)tableView:(id)view viewForFooterInSection:(long long)section;
- (void)tableView:(id)view willDisplayHeaderView:(id)view forSection:(long long)section;
- (void)tableView:(id)view willDisplayFooterView:(id)view forSection:(long long)section;
- (void)updateContentOffsetWithContentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset previousContentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset previousContentOffset:(struct CGPoint { double x0; double x1; })offset;
- (double)viewPercentageInVisibleCellsRect:(id)rect;
- (id)calculatedLayoutMetrics;
- (void)layoutMetricsDidChange:(id)change to:(id)to;
- (id)indexPathForElementWithScrollPositionIdentifier:(id)identifier inView:(id)view;
- (id)scrollPositionIdentifierForElementAtIndexPath:(id)path inView:(id)view;
- (void)updateIfNeeded;
- (void)update:(_Bool)update;
- (void)setNeedsReloadData;
- (void)setNeedsReloadData:(_Bool)data;
- (void)reloadDataIfNeeded;
- (void)reconfigureCellsForItemsAtIndexPaths:(id)paths withRowAnimation:(long long)animation;
- (void)reloadCellsForItemsAtIndexPaths:(id)paths withRowAnimation:(long long)animation;
- (void)updateAllCellSizes:(id /* block */)sizes;
- (void)updateAllCellSizesWithAnimation:(_Bool)animation completion:(id /* block */)completion;
- (void)updateCellSizesForItemsAtIndexPaths:(id)paths;
- (void)setNeedsCellSizesUpdateForItemsAtIndexPaths:(id)paths;
- (void)updateCellSizesIfNeeded;
- (_Bool)performAnimatedCellSizeUpdates:(id /* block */)updates forItemAtIndexPath:(id)path keepingItemTopVisible:(_Bool)visible;
- (void)tfn_dynamic_performAsyncUpdates;
- (void)tfn_performPendingUpdatesSkippingVisibilityCheck:(_Bool)check;
- (void)restoreScrollPosition:(id)position;
- (id)itemAtIndexPath:(id)path;
- (long long)numberOfItemsInSection:(long long)section;
- (long long)numberOfSections;
- (id)indexPathForItem:(id)item;
- (void)enumerateItemsUsingBlock:(id /* block */)block;
- (id)visibleItems;
- (id)tfn_calculatedLayoutMetricsForItemAtIndexPath:(id)path;
- (_Bool)dataViewWillUpdate:(long long)update;
- (void)dataViewDidUpdate:(long long)update animated:(_Bool)animated;
- (void)dataViewDidDisplay;
- (void)dataViewDidEndDisplaying;
- (void)dateFormatChanged;
- (void)voiceOverStatusDidChange:(id)change;
- (void)applicationWillResignActive:(id)active;
- (void)applicationDidBecomeActive:(id)active;
- (void)_tfn_dynamic_frameDidDisplay;
- (void)_tfn_dynamic_keyboardDidChange:(id)change;
- (void)keyboardDidChange:(id)change;
- (void)_tfn_dynamic_textInputDidBeginEditing:(id)editing;
- (void)_tfn_dynamic_textInputDidEndEditing:(id)editing;
- (id)forwardingTargetForSelector:(SEL)selector;
- (id)methodSignatureForSelector:(SEL)selector;
- (_Bool)canBecomeFirstResponder;
- (_Bool)canPerformAction:(SEL)action withSender:(id)sender;
- (_Bool)dataViewControllerCanPerformAction:(SEL)action withSender:(id)sender;
- (void)handleRefreshKeyCommand;
- (void)handleSelectKeyCommand;
- (void)handleTopKeyCommand;
- (void)handleBottomKeyCommand;
- (void)handlePageUpKeyCommand;
- (void)handlePageDownKeyCommand;
- (void)handleLineUpKeyCommand;
- (void)handleLineDownKeyCommand;
- (_Bool)shouldKeyboardHighlightForTouchHighlightAtIndexPath:(id)path;
- (id)createScrollPerformanceMetricsWithDelegate:(id)delegate;
- (_Bool)scrollPerformanceMetricsShouldRegisterMeasurements:(id)measurements;
- (id)tfs_debugStrings;

@end

#endif /* TFNDataViewController_h */
