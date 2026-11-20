//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef THFHomeTimelineItemsViewController_h
#define THFHomeTimelineItemsViewController_h
@import Foundation;

#include "HUIGraduatedAccessUserPromptDelegate-Protocol.h"
#include "T1FeedbackActionProvider-Protocol.h"
#include "T1FleetLineControlling-Protocol.h"
#include "T1TimelineDismissedItemDelegate-Protocol.h"
#include "T1URTTimelinePagedCarouselAdapterScrollPositionOverrideDelegate-Protocol.h"
#include "T1URTTimelineTombstoneItemViewModelDelegate-Protocol.h"
#include "TFNMarkAsViewedDelegate-Protocol.h"
#include "THFActiveContentViewControllerDelegate-Protocol.h"
#include "THFHomePullToRefreshLandingDelegate-Protocol.h"
#include "THFHomeShimmerCrossfade.h"
#include "THMHomeTimelineItemsViewControllerProtocol-Protocol.h"
#include "TUIErrorDataViewAdapterDelegate-Protocol.h"
#include "TUIUpdateIndicatorDelegate-Protocol.h"
#include "UIActionSheetDelegate-Protocol.h"
#include "UIDataSourceModelAssociation-Protocol.h"
#include "URTDisplayActionsManagerDelegate-Protocol.h"
#include "_TtP11TwitterHome29LoadingTimeoutHandlerDelegate_-Protocol.h"
#include "_TtP11TwitterHome36ShimmerFirstColdStartHandlerDelegate_-Protocol.h"

@class GrokImagineTimelineImagePeek, HomeControllerPerformanceMonitor, NSArray, NSDate, NSMutableDictionary, NSNumber, NSString, T1PromptNavigationHelper, T1ScrollDistanceLogger, T1StatusTableRowAdapter, TFNItemsDataViewController, TFNItemsSectionTransformer, TFNMarkAsViewedHelper, TFNTwitterAccount, TFNTwitterHomeTimeline, TFSTimer, TFSTwitterScribeContext, THFSportsPostContextSectionTransformer, THMURTContentHoistTrackingHelper, THMURTContextTrackingHelper, TIPImagePipeline, TTACoreStatusLiveEngagementManager, TUIUpdateIndicator, TwitterHomeFeatures, UIImpactFeedbackGenerator, UIView, _TtC11TwitterHome21LoadingTimeoutHandler, _TtC11TwitterHome28CacheTruncationStatusManager, _TtC11TwitterHome28ShimmerFirstColdStartHandler;
@protocol URTItemVisibilityMonitor;

@interface THFHomeTimelineItemsViewController : TFNItemsDataViewController <TFNMarkAsViewedDelegate, UIActionSheetDelegate, UIDataSourceModelAssociation, TUIErrorDataViewAdapterDelegate, T1URTTimelineTombstoneItemViewModelDelegate, T1TimelineDismissedItemDelegate, TUIUpdateIndicatorDelegate, URTDisplayActionsManagerDelegate, T1FeedbackActionProvider, T1URTTimelinePagedCarouselAdapterScrollPositionOverrideDelegate, HUIGraduatedAccessUserPromptDelegate, THFActiveContentViewControllerDelegate, THFHomePullToRefreshLandingDelegate, TwitterHome.LoadingTimeoutHandlerDelegate, TwitterHome.ShimmerFirstColdStartHandlerDelegate, THMHomeTimelineItemsViewControllerProtocol> {
    /* instance variables */
    T1ScrollDistanceLogger *_scrollDistanceLogger;
    T1StatusTableRowAdapter *_statusAdapter;
    TFNMarkAsViewedHelper *_markAsViewedHelper;
    long long _layoutPhase;
    _Bool _restoredPersistedScrollPosition;
    _Bool _needsPersistedScrollPositionRestore;
    NSNumber *_nextUpdateRestoreScrollPositionTypeOverride;
    _Bool _hasCompletedInitialHomeLoadThisSession;
    _Bool _hasAlreadyClearedCacheAfterManualJumpToTopThisSession;
    _Bool _hasReportedHomeWithoutStatuses;
    long long _inFlightTopLoadCount;
    _Bool _hasDeferredClearCacheAutoloadBottom;
    _Bool _isTopRowVisible;
    TFNItemsSectionTransformer *_sectionTransformer;
    _Bool _shouldNotifyTableUpdatedFromStreamAPIUpdate;
    id <T1FleetLineControlling> _fleetsController;
    id _readinessPerfToken;
    _Bool _isShowingPullToRefreshAnimation;
    TwitterHome.ShimmerFirstColdStartHandler *_shimmerFirstColdStartHandler;
    THFHomeShimmerCrossfade *_shimmerCrossfade;
    NSMutableDictionary *_didDisableHomeScrollPositionRestorationOnColdLaunchByAccountID;
    UIImpactFeedbackGenerator *_impactFeedbackGenerator;
    _Bool _userIsPullingToRefresh;
}

@property (readonly, copy, nonatomic) TFSTwitterScribeContext *timelineScribeContext;
@property (readonly, nonatomic) T1PromptNavigationHelper *promptNavigationHelper;
@property (readonly, nonatomic) TTACoreStatusLiveEngagementManager *livePipelineTweetManager;
@property (readonly, nonatomic) TwitterHome.LoadingTimeoutHandler *loadingTimeoutHandler;
@property (readonly, nonatomic) TwitterHome.CacheTruncationStatusManager *cacheTruncationStatusManager;
@property (retain, nonatomic) id <URTItemVisibilityMonitor> itemVisibilityMonitor;
@property (retain, nonatomic) THMURTContextTrackingHelper *updateContextTrackingHelper;
@property (retain, nonatomic) THMURTContentHoistTrackingHelper *timelineUpdateHoistTrackingHelper;
@property (retain, nonatomic) TFSTimer *irregularLoadingTimer;
@property (retain, nonatomic) TFSTimer *shimmerScribingTimer;
@property (nonatomic) long long shimmerTimerCycles;
@property (retain, nonatomic) NSDate *shimmerStartTime;
@property (retain, nonatomic) NSDate *hydrationStartTime;
@property (retain, nonatomic) TIPImagePipeline *imagePipeline;
@property (retain, nonatomic) HomeControllerPerformanceMonitor *performanceMonitor;
@property (copy, nonatomic) NSArray *t1_lastGrokImagineTimelineImagePeekLoadedStatusIdentifiers;
@property (readonly, nonatomic) TwitterHomeFeatures *homeFeatures;
@property (retain, nonatomic) THFSportsPostContextSectionTransformer *sportsPostContextSectionTransformer;
@property (nonatomic) _Bool showsElectionsPostContext;
@property (readonly, nonatomic) TFNTwitterAccount *account;
@property (readonly, nonatomic) _Bool isRestoringPersistedScrollPosition;
@property (readonly, nonatomic) TFNTwitterHomeTimeline *timeline;
@property (nonatomic) _Bool shouldShowShimmerWhenEmptyAndFetching;
@property (retain, nonatomic) TUIUpdateIndicator *updateIndicator;
@property (retain, nonatomic) GrokImagineTimelineImagePeek *grokImagineTimelineImagePeek;
@property (nonatomic) _Bool holdsLoadTopUntilLanded;
@property (copy, nonatomic) id /* block */ homeTabTapRefreshHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) _Bool contentFocus;
@property (readonly, nonatomic) UIView *fleetLineAccessoryView;

/* instance methods */
- (id)initWithCollectionViewLayout:(id)layout;
- (id)initWithAccount:(id)account timeline:(id)timeline;
- (id)initWithNibName:(id)name bundle:(id)bundle;
- (id)init;
- (void)dealloc;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)array;
- (void)update:(_Bool)update;
- (void)_showNewTweetsPillIfNeeded;
- (void)_update;
- (id)_emptyStateConfiguration;
- (id)_emptyStateDiagnosticParameters;
- (_Bool)_applicationLaunchLoadInitialRequestCompletedOnce;
- (_Bool)_isReadyToDisplayTweets;
- (id)_updatedSections;
- (void)_updateSportsPostContextConfiguration;
- (void)_sportsPostContextFeatureSwitchesDidUpdate:(id)update;
- (id)_sectionsWithSportsPostContextForStreamObjects:(id)objects;
- (void)updateSections:(id)sections withRowAnimation:(long long)animation completion:(id /* block */)completion;
- (_Bool)_isActivelyFetchingFromAPI;
- (id)_shimmerSections;
- (void)setNeedsUpdate:(_Bool)update;
- (id)tfs_debugStrings;
- (void)viewDidLoad;
- (void)_t1_initializeFleets;
- (void)_t1_truncateSeenTweetsIfNeeded;
- (void)_t1_resetCacheTruncationPendingWithIsAccountLaunch:(_Bool)launch;
- (id)createScrollPerformanceMetricsWithDelegate:(id)delegate;
- (void)viewWillAppear:(_Bool)appear;
- (void)viewDidAppear:(_Bool)appear;
- (void)viewWillDisappear:(_Bool)disappear;
- (void)viewDidDisappear:(_Bool)disappear;
- (void)viewDidLayoutSubviews;
- (void)performHapticFeedback:(unsigned long long)feedback;
- (_Bool)tfn_prefersNavigationBarShadowHidden;
- (id)tfn_navigationBarAccessoryView;
- (_Bool)tui_showsActionButton;
- (_Bool)t1_showsDashAction;
- (_Bool)t1_showsPeopleAction;
- (void)_t1_processInitialHomeLoadWithLoadSource:(long long)source;
- (void)_t1_setInitialClearCacheAfterManualJumpToTopState;
- (void)_t1_clearCacheAfterManualJumpToTopIfAppropriate;
- (void)_t1_attemptClearCacheWithMinEntries:(long long)entries autoloadBottom:(_Bool)bottom;
- (void)_t1_clearSeenEntriesFromCacheWithMaxCount:(long long)count completion:(id /* block */)completion;
- (void)_t1_scribeClearSeenEntriesFromCacheWithResult:(long long)result;
- (id)t1_feedbackActionsFromURTStreamForStatus:(id)status includeChildren:(_Bool)children;
- (id)negativeFeedbackActionsForStatus:(id)status;
- (id /* block */)didProvideShowLessOftenFeedbackForStatus:(id)status;
- (void)loadTop:(id)top;
- (void)_loadTopWithSource:(long long)source;
- (void)_topLoadDidComplete;
- (_Bool)isLoadingTop;
- (id)_urtStream;
- (_Bool)canShowUpdateIndicator:(id)indicator withContentNotification:(id)notification;
- (_Bool)dataViewController:(id)controller canNavigateToEntryID:(id)id forUpdateIndicator:(id)indicator;
- (void)navigateToEntryID:(id)id forUpdateIndicator:(id)indicator;
- (_Bool)urtDisplayActionsManager:(id)manager hasAvailableContentNotifications:(id)notifications;
- (void)scrollViewWillBeginDragging:(id)dragging;
- (void)scrollViewDidScroll:(id)scroll;
- (_Bool)scrollViewShouldScrollToTop:(id)top;
- (void)tfn_contentScrollViewDidScrollToTop:(id)top;
- (void)scrollViewWillEndDragging:(id)dragging withVelocity:(struct CGPoint { double x0; double x1; })velocity targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)offset;
- (void)scrollViewDidEndDragging:(id)dragging willDecelerate:(_Bool)decelerate;
- (void)scrollViewDidEndDecelerating:(id)decelerating;
- (void)schedulePullToRefreshUpdate;
- (id)modelIdentifierForElementAtIndexPath:(id)path inView:(id)view;
- (id)indexPathForElementWithModelIdentifier:(id)identifier inView:(id)view;
- (id)scrollPositionIdentifierForElementAtIndexPath:(id)path inView:(id)view;
- (void)_persistScrollPosition;
- (_Bool)_restorePersistedScrollPosition;
- (void)_setNeedsPersistedScrollPositionRestore;
- (void)_restorePersistedScrollPositionIfNeeded;
- (void)errorItemTapped:(id)tapped;
- (void)tombstoneDidTapViewTweetWithTombstoneViewModel:(id)model;
- (void)willDisplayCell:(id)cell forItem:(id)item atIndexPath:(id)path;
- (void)didEndDisplayingCell:(id)cell forItem:(id)item atIndexPath:(id)path inDataViewController:(id)controller withPreviousDataViewAdapter:(id)adapter options:(id)options;
- (id)adDisplayLocation;
- (void)_outboxChanged:(id)changed;
- (void)_streamDidUpdate;
- (void)_streamPlaceholderDidUpdate:(id)update;
- (_Bool)_shouldPerformIncrementalUpdate:(id)update;
- (void)_streamDidUpdateWithNotification:(id)notification;
- (void)_performIncrementalUpdate:(id)update animated:(_Bool)animated;
- (void)_streamDidUpdateWithDeletedStreamObject:(id)object;
- (void)_streamDidUpdateFromAPI:(id)api;
- (void)_handleViewportAwareClearCacheUpdate;
- (void)_streamWillFetchFromAPI:(id)api;
- (void)_streamApplicationLaunchInitialRequestDidComplete:(id)complete;
- (_Bool)viewportAwareCacheClearingSupported;
- (_Bool)viewportAwareLoadingSupported;
- (_Bool)_shouldShowPullToRefreshAnimationForSource:(long long)source;
- (id)homeFeaturesForAccount:(id)account;
- (void)_scrollToFirstItemAtIndexPath;
- (void)applicationWillEnterForegroundFromBackground:(id)background;
- (void)applicationDidEnterBackground:(id)background;
- (id)itemsAnimatorSectionsToAnimateFrom:(id)from;
- (id)scribe;
- (id)scribePage;
- (id)scribeSection;
- (id)scribeComponentForIndexPath:(id)path;
- (id)scribeItemForIndexPath:(id)path;
- (id)scribeImpressionParametersForIndexPath:(id)path;
- (id)scribeContextForIndexPath:(id)path;
- (void)dismissTimelineItem:(id)item withFeedbackModule:(id)module derivedFromAction:(id)action;
- (void)didRestoreTimelineItem:(id)item;
- (void)markAsViewedHelper:(id)helper didViewCells:(id)cells;
- (_Bool)isActiveContentViewController;
- (void)pullToRefreshDidLand;
- (void)overrideScrollPositionRestoreToPrepareForShowMoreInsertion;
- (void)_scribeEmptyStateOnce;
- (void)_scheduleHydrationCompletionScribe;
- (void)_scheduleShimmerScribingIfNeeded;
- (_Bool)_isShowingShimmer;
- (unsigned long long)_shimmerItemCount;
- (void)_t1_scribeShimmerDuration;
- (void)_emptyStateButtonTappedWithScribeContext:(id)context;
- (unsigned long long)_statusOptionsForAdapter:(id)adapter args:(id)args options:(unsigned long long)options;
- (id)_statusViewModelAtIndexPath:(id)path;
- (void)_t1_updateGrokImagineTimelineImagePeekLoadedStatusesIfNeeded;
- (id)_scribeParametersFromParameters:(id)parameters byIncludingPositionForItemAtIndexPath:(id)path;
- (long long)_scribeImpressionPositionForItemAtIndexPath:(id)path;
- (void)_t1_sanityCheckNonEmptyStreamObjects:(id)objects;
- (void)_setupStreamFromTimeline;
- (void)_registerAdaptersAndTransformersThatRequireStream:(id)stream;
- (_Bool)_isEmpty;
- (_Bool)_isEmptyAfterLoading;
- (_Bool)_shouldAllowTableViewScrolling;
- (id)_representedItemsForStreamItem:(id)item;
- (void)graduatedAccessUserPrompt:(id)prompt didTapLearnMoreURL:(id)url;
- (void)updateLoadingStateWithHandler:(id)handler;
- (void)shimmerFirstColdStartHandlerDidUpdate:(id)update;

@end

#endif /* THFHomeTimelineItemsViewController_h */
