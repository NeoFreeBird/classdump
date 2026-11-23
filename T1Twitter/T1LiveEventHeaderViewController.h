//
#ifndef T1LiveEventHeaderViewController_h
#define T1LiveEventHeaderViewController_h
@import Foundation;

#include "T1LiveEvent.h"
#include "T1LiveEventCarousel.h"
#include "T1LiveEventCarouselEntry.h"
#include "T1LiveEventHeaderCarouselEntryViewController.h"
#include "T1LiveEventHeaderView.h"
#include "T1LiveEventHeaderViewControllerDelegate-Protocol.h"
#include "T1LiveEventHeaderViewControllerScribeDataSource-Protocol.h"
#include "T1ResizableHeaderViewController.h"

@class NSHashTable, TFNSolidColorView, TFNTwitterAccount, TFNTwitterStatus;

@interface T1LiveEventHeaderViewController : T1ResizableHeaderViewController

@property (retain, nonatomic) T1LiveEvent *liveEvent;
@property (retain, nonatomic) T1LiveEventCarousel *carousel;
@property (retain, nonatomic) TFNSolidColorView *bottomSeparatorLine;
@property (nonatomic) _Bool liveEventSquishyHeaderSupported;
@property (nonatomic) _Bool liveEventHeaderLockingEnabled;
@property (retain, nonatomic) NSHashTable *pinnedSubheaders;
@property (readonly, nonatomic) TFNTwitterAccount *account;
@property (readonly, nonatomic) T1LiveEventHeaderView *liveEventHeaderView;
@property (readonly, nonatomic) TFNTwitterStatus *status;
@property (weak, nonatomic) id <T1LiveEventHeaderViewControllerScribeDataSource> scribeDataSource;
@property (readonly, nonatomic) T1LiveEventHeaderCarouselEntryViewController *carouselEntryViewController;
@property (retain, nonatomic) T1LiveEventCarouselEntry *userSelectedCarouselEntry;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } expandedHeaderContentFrame;
@property (nonatomic) _Bool muted;
@property (weak, nonatomic) id <T1LiveEventHeaderViewControllerDelegate> delegate;

/* instance methods */
- (void)addSubheaderViewController:(id)controller topSpacing:(double)spacing bottomSpacing:(double)spacing animated:(_Bool)animated options:(unsigned long long)options completion:(id /* block */)completion;
- (id)initWithLiveEvent:(id)event status:(id)status account:(id)account muted:(_Bool)muted lockingEnabled:(_Bool)enabled;
- (double)collapsedHeaderHeight;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)array;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })size withTransitionCoordinator:(id)coordinator;
- (void)setBottomContentPadding:(double)padding;
- (void)resizableHeaderView:(id)view didRequestPullToLoadTopFromControl:(id)control;
- (void)resizableHeaderViewDidTapBackButton:(id)button;
- (void)resizableHeaderView:(id)view didTapMoreActionsButton:(id)button;
- (id)makeNavigationBarButtonItemForBarButtonOption:(long long)option;
- (id)bannerAccessibilityLabelForResizableHeaderView:(id)view;
- (void)updateLiveEvent:(id)event carousel:(id)carousel;
- (void)detachEntryViewController;
- (void)reattachEntryViewController;
- (void)_t1_updateCarouselEntryViewController;
- (void)_t1_attachCarouselEntryViewController;
- (void)addSubheaderViewController:(id)controller topSpacing:(double)spacing bottomSpacing:(double)spacing animated:(_Bool)animated options:(unsigned long long)options pinned:(_Bool)pinned completion:(id /* block */)completion;
- (void)removeSubheaderViewController:(id)controller animated:(_Bool)animated completion:(id /* block */)completion;
- (void)_t1_updateCarouselEntryFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_t1_preferredContentFrameForCurrentHeight;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_t1_contentFrameWithHeaderHeight:(double)height;
- (double)subheaderHeights;
- (id)scribeContext;
- (id)scribe;
- (id)scribePage;
- (id)scribeSection;
- (id)scribeImpressionParameters;
- (void)scribeViewImpressionWithParameters:(id)parameters;
- (_Bool)isMuted;
- (_Bool)isLiveEventSquishyHeaderSupported;
- (_Bool)isLiveEventHeaderLockingEnabled;

@end

#endif /* T1LiveEventHeaderViewController_h */
