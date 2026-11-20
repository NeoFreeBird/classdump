//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1ResizableHeaderViewController_h
#define T1ResizableHeaderViewController_h
@import Foundation;

#include "T1ResizableHeaderView.h"
#include "T1ResizableHeaderViewControllerDelegate-Protocol.h"
#include "T1ResizableHeaderViewDelegate-Protocol.h"
#include "TFNLayoutMetricsEnvironment-Protocol.h"
#include "TFNNavigationControllerTransitionProvider-Protocol.h"
#include "TFSTwitterLegacyScribeLogMethods-Protocol.h"

@class CADisplayLink, NSMutableDictionary, NSString, TFNLayoutMetrics, TFNViewController, TFSTimer, UIControl, UIView;
@protocol TFNPullToLoadTopControl;

@interface T1ResizableHeaderViewController : TFNViewController <TFNLayoutMetricsEnvironment, T1ResizableHeaderViewDelegate, TFNNavigationControllerTransitionProvider> {
    /* instance variables */
    NSMutableDictionary *_navigationBarButtonItems;
    _Bool _hasInstalledNavigationBarButtonItems;
    long long _installedLeftBarButtonOptions;
    long long _installedRightBarButtonOptions;
}

@property (readonly, nonatomic) id <TFSTwitterLegacyScribeLogMethods> scribe;
@property (retain, nonatomic) UIView *subheaderContainerView;
@property (retain, nonatomic) CADisplayLink *subheaderAnimationDisplayLink;
@property (retain, nonatomic) TFSTimer *subheaderLayoutTimer;
@property (copy, nonatomic) id /* block */ headerViewConstructor;
@property (retain, nonatomic) TFNLayoutMetrics *cachedLayoutMetrics;
@property (weak, nonatomic) id <T1ResizableHeaderViewControllerDelegate> delegate;
@property (nonatomic) _Bool pullToLoadTopEnabled;
@property (readonly, nonatomic) UIControl<TFNPullToLoadTopControl> *pullToLoadTopControl;
@property (readonly, nonatomic) double collapsedHeaderHeight;
@property (readonly, nonatomic) double expandedHeaderHeight;
@property (readonly, nonatomic) double totalSubheaderHeight;
@property (nonatomic) double currentHeaderHeight;
@property (nonatomic) double bottomContentPadding;
@property (nonatomic) _Bool collapsing;
@property (nonatomic) _Bool expanding;
@property (readonly, nonatomic) _Bool headerFullyCollapsed;
@property (readonly, nonatomic) _Bool headerFullyExpanded;
@property (readonly, nonatomic) T1ResizableHeaderView *headerView;
@property (nonatomic) _Bool isAnimatingSearch;
@property (nonatomic) _Bool shouldBounce;
@property (nonatomic) _Bool usesSystemNavigationBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithHeaderViewConstructor:(id /* block */)constructor scribe:(id)scribe;
- (id)initWithHeaderViewClass:(Class)_class scribe:(id)scribe;
- (id)init;
- (id)initWithNibName:(id)name bundle:(id)bundle;
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)appear;
- (void)viewDidAppear:(_Bool)appear;
- (void)viewWillDisappear:(_Bool)disappear;
- (void)viewDidLayoutSubviews;
- (void)_layoutHeader;
- (void)viewSafeAreaInsetsDidChange;
- (void)collapse:(_Bool)collapse;
- (void)collapse:(id)collapse animated:(_Bool)animated;
- (void)collapse:(id)collapse animated:(_Bool)animated completion:(id /* block */)completion;
- (void)collapse:(id)collapse animated:(_Bool)animated animations:(id /* block */)animations completion:(id /* block */)completion;
- (void)expand:(_Bool)expand;
- (void)expand:(id)expand animated:(_Bool)animated;
- (void)expand:(id)expand animated:(_Bool)animated completion:(id /* block */)completion;
- (void)expand:(id)expand animated:(_Bool)animated animations:(id /* block */)animations completion:(id /* block */)completion;
- (_Bool)currentOrientationPrefersHeaderCollapse;
- (double)collapsedHeightForTraitCollection:(id)collection;
- (double)expandedHeightForTraitCollection:(id)collection;
- (double)_t1_expandedHeightForTraitCollection:(id)collection totalSubheaderHeight:(double)height;
- (_Bool)isHeaderFullyCollapsed;
- (_Bool)isHeaderFullyCollapsedWithCollapsedHeaderHeight:(double)height;
- (_Bool)isHeaderFullyExpanded;
- (void)addSubheaderViewController:(id)controller topSpacing:(double)spacing bottomSpacing:(double)spacing animated:(_Bool)animated options:(unsigned long long)options completion:(id /* block */)completion;
- (void)removeSubheaderViewController:(id)controller animated:(_Bool)animated completion:(id /* block */)completion;
- (long long)animationModeForSubheaderViewController:(id)controller;
- (void)performUpdatesWithScrollPosition:(double)position scrollVelocity:(double)velocity;
- (void)viewDrafts;
- (id)scribePage;
- (id)scribeSection;
- (void)_startSubheaderLayoutTimerIfNeeded;
- (void)_stopSubheaderLayoutTimer;
- (void)_subheaderLayoutFired;
- (double)_layoutSubheadersWithinBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds forSizingOnly:(_Bool)only;
- (void)_startSubheaderAnimationDisplayLinkIfNeeded;
- (void)_stopSubheaderAnimationDisplayLink;
- (void)_subheaderAnimationDisplayLinkFired;
- (void)setNeedsNavigationBarButtonItemsUpdate;
- (void)updateNavigationBarButtonItem:(id)item forBarButtonOption:(long long)option;
- (id)makeNavigationBarButtonItemForBarButtonOption:(long long)option;
- (void)_t1_installNavigationBarButtonItemsIfNeeded;
- (id)_t1_navigationBarButtonItemsForOptions:(long long)options;
- (id)_t1_cachedNavigationBarButtonItemForBarButtonOption:(long long)option;
- (void)resizableHeaderViewDidUpdateActionButtons:(id)buttons;
- (void)resizableHeaderViewDidUpdatePreferredSize:(id)size;
- (void)resizableHeaderViewDidTapSearchButton:(id)button;
- (void)resizableHeaderViewDidTapComposeButton:(id)button;
- (void)resizableHeaderViewDidLongPressComposeButton:(id)button;
- (void)resizableHeaderViewDidTapBannerImage:(id)image;
- (void)resizableHeaderViewDidTapBackButton:(id)button;
- (void)resizableHeaderView:(id)view didRequestPullToLoadTopFromControl:(id)control;
- (void)resizableHeaderViewDidUpdateHeight:(id)height;
- (void)resizableHeaderView:(id)view didTapMoreActionsButton:(id)button;
- (id)backMenuNavigationHistoryForResizableHeaderView:(id)view;
- (void)popHistoryStackForResizableHeaderView:(id)view targetIndex:(unsigned long long)index;
- (id)navigationControllerTransitionForOperation:(long long)operation fromViewController:(id)controller toViewController:(id)controller;
- (void)layoutMetricsDidChange:(id)change to:(id)to;
- (_Bool)isCollapsing;
- (_Bool)isExpanding;

@end

#endif /* T1ResizableHeaderViewController_h */
