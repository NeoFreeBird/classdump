//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1StatusTableRowAdapter_h
#define T1StatusTableRowAdapter_h
@import Foundation;

#include "T1GrokStatusButtonImpressionLogger.h"
#include "T1StatusMediaHandler.h"
#include "T1StatusMediaTimelineObserver.h"
#include "T1StatusMediaZoomProvider.h"
#include "T1StatusPromotedImpressionHandler.h"
#include "T1StatusViewEventScribeHandler-Protocol.h"
#include "TFNCellVisibilityBroadcasterDelegate-Protocol.h"
#include "TNLCommunicationAgentObserver-Protocol.h"
#include "TTACoreStatusExternalUpdateObserver-Protocol.h"
#include "_TtP14TFSTwitterCore18URTImpressionCache_-Protocol.h"

@class NSMutableSet, NSString, TAFSKAdImpressionManager, TAFSKAdImpressionSessionManager, TDTCellPreparationTimePerformanceMetric, TFNDataViewController, TFNItemsTableRowAdapter, TFNTwitterAccount, TFNTwitterDisplaySessionManager, TFSAccountUserDefaults, TTACoreAnatomyFeatures, TTACoreStatusLiveEngagementManager, TUCProductExplorerScrollHandler;

@interface T1StatusTableRowAdapter : TFNItemsTableRowAdapter <TTACoreStatusExternalUpdateObserver, T1StatusViewEventScribeHandler, TFNCellVisibilityBroadcasterDelegate, TNLCommunicationAgentObserver>

@property (readonly, nonatomic) T1StatusMediaTimelineObserver *dynamicAdsPrefetcher;
@property (readonly, nonatomic) T1StatusMediaTimelineObserver *videoPrefetcher;
@property (readonly, nonatomic) T1StatusMediaTimelineObserver *productExplorerPrefetcher;
@property (readonly, nonatomic) TUCProductExplorerScrollHandler *productExplorerScrollHandler;
@property (readonly, nonatomic) T1StatusPromotedImpressionHandler *statusPromotedImpressionHandler;
@property (retain, nonatomic) TFNTwitterDisplaySessionManager *displaySessionManager;
@property (retain, nonatomic) TAFSKAdImpressionSessionManager *skAdSessionManager;
@property (retain, nonatomic) TAFSKAdImpressionManager *skAdImpressionManager;
@property (retain, nonatomic) T1StatusMediaHandler *statusMediaHandler;
@property (retain, nonatomic) TDTCellPreparationTimePerformanceMetric *averageCellPreparationTimeMetric;
@property (retain, nonatomic) NSMutableSet *platformForwardCardImpressionCache;
@property (retain, nonatomic) NSMutableSet *forwardPivotImpressionCache;
@property (retain, nonatomic) NSMutableSet *freedomOfSpeechAuthorPivotImpressionCache;
@property (retain, nonatomic) NSMutableSet *birdwatchPivotImpressionCache;
@property (retain, nonatomic) NSMutableSet *dpaLoggingCache;
@property (retain, nonatomic) NSMutableSet *pinnedReplyImpressionCache;
@property (readonly, nonatomic) T1GrokStatusButtonImpressionLogger *grokButtonImpressionLogger;
@property (retain, nonatomic) id <TFSTwitterCore.URTImpressionCache> scribeImpressionCache;
@property (retain, nonatomic) TTACoreAnatomyFeatures *anatomyFeatures;
@property (retain, nonatomic) TFSAccountUserDefaults *accountDefaults;
@property (readonly, nonatomic) _Bool mediaCarouselsRunThroughGutters;
@property (readonly, nonatomic) _Bool statusCellBindRedundantWorkRemovalEnabled;
@property (readonly, weak, nonatomic) TFNDataViewController *tableViewController;
@property (readonly, nonatomic) TFNTwitterAccount *account;
@property (nonatomic) _Bool supportsCellLayoutOperations;
@property (nonatomic) _Bool hideInlineActionsEnabled;
@property (nonatomic) _Bool hideInlineActionsInRepliesEnabled;
@property (copy, nonatomic) id /* block */ statusOptionsBlock;
@property (copy, nonatomic) id /* block */ statusEventHandlerProviderBlock;
@property (retain, nonatomic) TTACoreStatusLiveEngagementManager *livePipelineTweetManager;
@property (retain, nonatomic) T1StatusMediaZoomProvider *zoomProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (Class)statusCellClass;

/* instance methods */
- (id)initWithAccount:(id)account scribeImpressionCache:(id)cache;
- (id)initWithAccount:(id)account scribeImpressionCache:(id)cache forAllInstancesInTableViewController:(id)controller;
- (id)init;
- (void)dealloc;
- (id)dataViewController:(id)controller objectIdentifierForItem:(id)item withOptions:(id)options;
- (void)dataViewController:(id)controller willDisplayCell:(id)cell forItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (double)dataViewController:(id)controller estimatedTableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)dataViewController:(id)controller cellLayoutForItem:(id)item withOptions:(id)options previousLayout:(id)layout atIndexPath:(id)path;
- (id)dataViewController:(id)controller cellLayoutObjectIdentifierForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)dataViewController:(id)controller tableViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)sensitiveStatusViewModelAtRow:(long long)row section:(long long)section dataViewController:(id)controller;
- (_Bool)dataViewController:(id)controller shouldHighlightItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (void)dataViewController:(id)controller didSelectItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (unsigned long long)tableViewController:(id)controller defaultOptionsForViewModel:(id)model withOptions:(id)options atIndexPath:(id)path;
- (id)tableViewCellReuseIdentifierForViewModel:(id)model options:(unsigned long long)options account:(id)account;
- (id)objectIdentifierForViewModel:(id)model;
- (unsigned long long)tableViewController:(id)controller statusOptionsForViewModel:(id)model withOptions:(id)options atIndexPath:(id)path;
- (id)tableViewController:(id)controller statusCellEventHandlerBlockForItem:(id)item statusCellOptions:(unsigned long long)options options:(id)options atIndexPath:(id)path;
- (long long)_tableViewController:(id)controller defaultSeparatorTypeForViewModel:(id)model withOptions:(id)options atIndexPath:(id)path;
- (unsigned long long)dataViewController:(id)controller sectionBreaksForIndexPath:(id)path;
- (void)presentNextControllerFromController:(id)controller withViewModel:(id)model options:(id)options impressionParameters:(id)parameters atIndexPath:(id)path;
- (void)presentNextControllerFromController:(id)controller withStaleViewModel:(id)model impressionParameters:(id)parameters scribeSection:(id)section scribeComponent:(id)component atIndexPath:(id)path;
- (_Bool)_t1_shouldShowLatestViewModelFromViewModel:(id)model fromController:(id)controller withOptions:(id)options atIndexPath:(id)path;
- (id)dataViewController:(id)controller previewConfigurationForItem:(id)item withOptions:(id)options location:(struct CGPoint { double x0; double x1; })location inCell:(id)cell atIndexPath:(id)path;
- (id)broadcaster:(id)broadcaster focalViewForCell:(id)cell;
- (void)didReceiveStatusExternalUpdateNotification:(id)notification ofType:(long long)type;
- (void)_t1_reloadDataDroppingCellLayouts;
- (void)_t1_setNeedsReloadAndInvalidateCellLayoutsPassingTest:(id /* block */)test;
- (void)_autoTranslateLanguagePreferenceDidUpdate:(id)update;
- (void)tnl_communicationAgent:(id)agent didUpdateReachabilityFromPreviousFlags:(unsigned int)flags previousStatus:(long long)status toCurrentFlags:(unsigned int)flags currentStatus:(long long)status;
- (void)_reachabilityChanged:(long long)changed;
- (void)_statusDidUpdate:(id)update;
- (void)_statusWasEdited:(id)edited;
- (void)_dismissBottomOverlay;
- (void)_t1_updateStatusCellsIfLayoutIsInvalidForViewModels:(id)models;
- (id)tableViewController:(id)controller didSelectViewModel:(id)model withOptions:(id)options atIndexPath:(id)path scribeSection:(id)section scribeComponent:(id)component impressionParameters:(id)parameters;
- (id)logScribesForController:(id)controller beforeSelectingViewModel:(id)model atIndexPath:(id)path scribeSection:(id)section scribeComponent:(id)component impressionParameters:(id)parameters clickLeakageParameters:(id)parameters;
- (id)_zoomProviderForDataViewController:(id)controller account:(id)account;
- (id)_statusMediaHandlerForTableViewController:(id)controller account:(id)account options:(unsigned long long)options;
- (id /* block */)_t1_quotedStatusViewProviderForCell:(id)cell;
- (id)_setupCellVisibilityBroadcasterForDataViewController:(id)controller account:(id)account cell:(id)cell indexPath:(id)path viewModel:(id)model eventHandler:(id)handler scribePage:(id)page scribeSection:(id)section parameters:(id)parameters;
- (id)scribeSectionForObject:(id)object controller:(id)controller indexPath:(id)path;
- (id)scribeComponentForObject:(id)object controller:(id)controller;
- (id)scribeElementForObject:(id)object controller:(id)controller indexPath:(id)path;
- (id)scribeParametersForObject:(id)object controller:(id)controller indexPath:(id)path;
- (_Bool)dataViewController:(id)controller dismissItem:(id)item withInfo:(id)info options:(id)options atIndexPath:(id)path;
- (_Bool)_t1_needsPositionAddedToScribeParameters:(id)parameters;
- (void)_t1_scribeImpressionsIfNeededForSpaceEntityReply:(id)reply;
- (void)_t1_scribeImpressionsIfNeededForNoteTweet:(id)tweet;
- (void)_t1_scribeImpressionsIfNeededForGrokButtons:(id)buttons;
- (id)_t1_clickLeakageCoordinateTrackingParametersFromStandardStatusView:(id)view;

@end

#endif /* T1StatusTableRowAdapter_h */
