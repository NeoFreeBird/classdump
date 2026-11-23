//
#ifndef _TtC32TwitterHomeFeatureImplementation28TimelineEngineViewController_h
#define _TtC32TwitterHomeFeatureImplementation28TimelineEngineViewController_h
@import Foundation;

#include "HUIGraduatedAccessUserPromptDelegate-Protocol.h"
#include "T1FeedbackActionProvider-Protocol.h"
#include "T1TimelineDismissedItemDelegate-Protocol.h"
#include "TFNMarkAsViewedDelegate-Protocol.h"
#include "THMHomeTimelineItemsViewControllerProtocol-Protocol.h"
#include "TUIErrorDataViewAdapterDelegate-Protocol.h"
#include "TUIUpdateIndicatorDelegate-Protocol.h"
#include "URTDisplayActionsManagerDelegate-Protocol.h"

@class GrokImagineTimelineImagePeek, NSString, Swift.Bool, TFNItemsDataViewController, TFNTwitterAccount, TFNTwitterHomeTimeline, TUIUpdateIndicator, TwitterHomeFeatureImplementation.HomeShimmerCrossfade, TwitterHomeFeatureImplementation.HomeTimelineUndoOffer ?, TwitterHomeFeatureImplementation.TimelineEngineEmptyStateScribe, TwitterHomeFeatureImplementation.TimelineEnginePostContextChips, TwitterHomeFeatureImplementation.TimelineEngineRows, TwitterHomeFeatureImplementation.TimelineEngineShimmerScribe, TwitterHomeFeatureImplementation.TimelineEngineStream, TwitterHomeFeatureImplementation.TimelineEngineViewController.Layout, TwitterHomeFeatureImplementation.TimelineEngineViewController.OwnPostPin, TwitterHomeFeatureImplementation.TimelineEngineViewController.Rendering, TwitterHomeFeatureImplementation.TimelineEngineViewController.ScrollRestore, TwitterHomeFeatureImplementation.TimelineEngineViewController.StreamAPIUpdate, UIView, _$s10TwitterURT26SportsPostContextDecisionsCMn, _$s11TwitterHome24URTHoistingDetectionTaskCMn ?, _$s11TwitterHome28GrokImagineTimelineImagePeekCMn ?, _$s14T1TwitterSwift17URTCoverPresenterCMn ?, _$s14T1TwitterSwift20ScrollDistanceLoggerCMn ?, _$s15XTimelineEngine08TimelineB0O7DisplayV10TopSpinnerOMn, _$s15XTimelineEngine08TimelineB0O7RuntimeO11ObservationCMn ?, _$s22TwitterHomePerformance0b10ControllerC7MonitorCMn, _$sSaySSG, _$sSiSg, _$sSo17TFNTwitterAccountC, _$sSo18TUIUpdateIndicatorCSg, _$sSo21TFNMarkAsViewedHelperCSg, _$sSo22T1FleetLineControlling_pSg, _$sSo22TFNTwitterHomeTimelineC, _$sSo26TFNItemsSectionTransformerC, _$syycSg;

@interface TwitterHomeFeatureImplementation.TimelineEngineViewController : TFNItemsDataViewController <HUIGraduatedAccessUserPromptDelegate, TUIErrorDataViewAdapterDelegate, T1TimelineDismissedItemDelegate, T1FeedbackActionProvider, URTDisplayActionsManagerDelegate, TUIUpdateIndicatorDelegate, TFNMarkAsViewedDelegate, THMHomeTimelineItemsViewControllerProtocol> { // (Swift)
    /* instance variables */
    TwitterHomeFeatureImplementation.TimelineEngineStream stream;
    TwitterHomeFeatureImplementation.TimelineEngineEmptyStateScribe emptyStateScribe;
    (() -> ())? homeTabTapRefreshHandler;
    TwitterHomeFeatureImplementation.TimelineEngineRows rows;
    __C.TFNItemsSectionTransformer sectionTransformer;
    nominal type descriptor for TwitterHomePerformance.HomeControllerPerformanceMonitor performanceMonitor;
    TwitterHomeFeatureImplementation.TimelineEngineShimmerScribe shimmerScribe;
    TwitterHomeFeatureImplementation.HomeShimmerCrossfade shimmerCrossfade;
    TwitterHomeFeatureImplementation.TimelineEnginePostContextChips postContextChips;
    nominal type descriptor for TwitterURT.SportsPostContextDecisions sportsPostContextDecisions;
    __C.TUIUpdateIndicator? installedUpdateIndicator;
    nominal type descriptor for T1TwitterSwift.URTCoverPresenter ? coverPresenter;
    __C.TFNMarkAsViewedHelper? markAsViewedHelper;
    nominal type descriptor for T1TwitterSwift.ScrollDistanceLogger ? scrollDistanceLogger;
    TwitterHomeFeatureImplementation.HomeTimelineUndoOffer ? undoOffer;
    __C.T1FleetLineControlling? fleetsController;
    nominal type descriptor for XTimelineEngine.TimelineEngine.Runtime.Observation ? observation;
    TwitterHomeFeatureImplementation.TimelineEngineViewController.Rendering rendering;
    TwitterHomeFeatureImplementation.TimelineEngineViewController.Layout layout;
    nominal type descriptor for XTimelineEngine.TimelineEngine.Display.TopSpinner shownSpinner;
    TwitterHomeFeatureImplementation.TimelineEngineViewController.StreamAPIUpdate streamAPIUpdate;
    TwitterHomeFeatureImplementation.TimelineEngineViewController.ScrollRestore nextScrollRestore;
    TwitterHomeFeatureImplementation.TimelineEngineViewController.OwnPostPin ownPostPin;
    nominal type descriptor for TwitterHome.URTHoistingDetectionTask ? hoistDetectionTask;
    Swift.Bool isTopRowVisible;
    [Swift.String] grokPeekStatusIdentifiers;
    Swift.Int? $__lazy_storage_$_olderPostsDistance;
}

@property (nonatomic, readonly) NSString *adDisplayLocation;
@property (nonatomic, readonly) TFNTwitterAccount *account;
@property (nonatomic, readonly) TFNTwitterHomeTimeline *timeline;
@property (nonatomic) _Bool contentFocus;
@property (nonatomic) _Bool shouldShowShimmerWhenEmptyAndFetching;
@property (nonatomic, retain) GrokImagineTimelineImagePeek *grokImagineTimelineImagePeek;
@property (nonatomic, retain) TUIUpdateIndicator *updateIndicator;
@property (nonatomic, readonly) UIView *fleetLineAccessoryView;
@property (nonatomic, readonly) _Bool isRestoringPersistedScrollPosition;
@property (nonatomic, readonly) UIView *tfn_navigationBarAccessoryView;
@property (nonatomic, readonly) _Bool tfn_prefersNavigationBarShadowHidden;

/* instance methods */
- (id)scribe;
- (id)scribePage;
- (id)scribeSection;
- (id)scribeComponentForIndexPath:(id)path;
- (id)scribeItemForIndexPath:(id)path;
- (id)scribeImpressionParametersForIndexPath:(id)path;
- (id)scribeContextForIndexPath:(id)path;
- (void)graduatedAccessUserPrompt:(id)prompt didTapLearnMoreURL:(id)url;
- (void)errorItemTapped:(id)tapped;
- (void)dismissTimelineItem:(id)item withFeedbackModule:(id)module derivedFromAction:(id)action;
- (void)didRestoreTimelineItem:(id)item;
- (id)negativeFeedbackActionsForStatus:(id)status;
- (id /* block */)didProvideShowLessOftenFeedbackForStatus:(id)status;
- (id)t1_feedbackActionsFromURTStreamForStatus:(id)status includeChildren:(_Bool)children;
- (_Bool)urtDisplayActionsManager:(id)manager hasAvailableContentNotifications:(id)notifications;
- (_Bool)canShowUpdateIndicator:(id)indicator withContentNotification:(id)notification;
- (_Bool)dataViewController:(id)controller canNavigateToEntryID:(id)id forUpdateIndicator:(id)indicator;
- (void)navigateToEntryID:(id)id forUpdateIndicator:(id)indicator;
- (id)createScrollPerformanceMetricsWithDelegate:(id)delegate;
- (void)markAsViewedHelper:(id)helper didViewCells:(id)cells;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)appear;
- (void)viewDidAppear:(_Bool)appear;
- (void)viewWillDisappear:(_Bool)disappear;
- (void)viewDidDisappear:(_Bool)disappear;
- (void)viewDidLayoutSubviews;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)array;
- (_Bool)tui_showsActionButton;
- (void)update:(_Bool)update;
- (void)reloadDataIfNeeded;
- (void)updateSections:(id)sections withRowAnimation:(long long)animation completion:(id /* block */)completion;
- (_Bool)isLoadingTop;
- (void)loadTop:(id)top;
- (void)willDisplayCell:(id)cell forItem:(id)item atIndexPath:(id)path;
- (void)didEndDisplayingCell:(id)cell forItem:(id)item atIndexPath:(id)path inDataViewController:(id)controller withPreviousDataViewAdapter:(id)adapter options:(id)options;
- (void)scrollViewDidScroll:(id)scroll;
- (_Bool)scrollViewShouldScrollToTop:(id)top;
- (void)tfn_contentScrollViewDidScrollToTop:(id)top;
- (id)scrollPositionIdentifierForElementAtIndexPath:(id)path inView:(id)view;
- (void)applicationWillEnterForegroundFromBackground:(id)background;
- (void)streamDidUpdateFromAPI:(id)api;
- (void)streamPlaceholdersDidChange:(id)change;
- (void)outboxChanged:(id)changed;
- (void)accountDidUpdate:(id)update;
- (void)featureSwitchesDidUpdate:(id)update;
- (id)initWithCollectionViewLayout:(id)layout isDiffableDataSourcesEnabled:(_Bool)enabled;
- (id)initWithCollectionViewLayout:(id)layout;

@end

#endif /* _TtC32TwitterHomeFeatureImplementation28TimelineEngineViewController_h */
