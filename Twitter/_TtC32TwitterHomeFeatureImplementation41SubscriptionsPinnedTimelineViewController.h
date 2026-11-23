//
#ifndef _TtC32TwitterHomeFeatureImplementation41SubscriptionsPinnedTimelineViewController_h
#define _TtC32TwitterHomeFeatureImplementation41SubscriptionsPinnedTimelineViewController_h
@import Foundation;

#include "THMHomeTimelineItemsViewControllerProtocol-Protocol.h"
#include "_TtP26TwitterHomePinnedTimelines36PinnedTimelineViewControllerProtocol_-Protocol.h"

@class GrokImagineTimelineImagePeek, Swift.Bool, TFNTwitterAccount, TFNTwitterHomeTimeline, TFNViewController, TUIUpdateIndicator, UIScrollView, UIView, _$s26TwitterHomePinnedTimelines0C17TimelineDataModelCMn, _$sSo42THMHomeTimelineItemsViewControllerProtocol_So012TFNItemsDatadE0CXc, _TtC26TwitterHomePinnedTimelines23PinnedTimelineDataModel;

@interface TwitterHomeFeatureImplementation.SubscriptionsPinnedTimelineViewController : TFNViewController <THMHomeTimelineItemsViewControllerProtocol, TwitterHomePinnedTimelines.PinnedTimelineViewControllerProtocol> { // (Swift)
    /* instance variables */
    __C.TFNItemsDataViewController & __C.THMHomeTimelineItemsViewControllerProtocol homeViewController;
    Swift.Bool hasPerformedInitialLoad;
}

@property (nonatomic, readonly) TFNTwitterAccount *account;
@property (nonatomic, readonly) TFNTwitterHomeTimeline *timeline;
@property (nonatomic, retain) TUIUpdateIndicator *updateIndicator;
@property (nonatomic) _Bool contentFocus;
@property (nonatomic, readonly) UIView *fleetLineAccessoryView;
@property (nonatomic) _Bool shouldShowShimmerWhenEmptyAndFetching;
@property (nonatomic, readonly) _Bool isRestoringPersistedScrollPosition;
@property (nonatomic, retain) GrokImagineTimelineImagePeek *grokImagineTimelineImagePeek;
@property (nonatomic, readonly) TwitterHomePinnedTimelines.PinnedTimelineDataModel *pinnedTimeline;
@property (nonatomic, readonly) _Bool canBecomeFirstResponder;
@property (nonatomic, readonly) UIScrollView *contentScrollView;
@property (nonatomic, readonly) _Bool hasUnreadContent;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (_Bool)becomeFirstResponder;
- (void)loadTop:(id)top;
- (void)reloadTop:(id)top;
- (void)beginPullToRefresh;
- (_Bool)tfn_isScrolledToTop;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC32TwitterHomeFeatureImplementation41SubscriptionsPinnedTimelineViewController_h */
