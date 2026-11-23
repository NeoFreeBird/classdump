//
#ifndef _TtC32TwitterHomeFeatureImplementation20TimelineEngineStream_h
#define _TtC32TwitterHomeFeatureImplementation20TimelineEngineStream_h
@import Foundation;

#include "TFNTwitterHomeTimelineStream-Protocol.h"
#include "_TtP14TFSTwitterCore18URTImpressionCache_-Protocol.h"

@class NSArray, TFSTwitterCore18URTImpressionCache_p, TFSTwitterStream, TwitterHomeFeatureImplementation.HomeTimelineUIReloadMonitor, TwitterHomeFeatureImplementation.PermalinkInjectionScribeAdapter, TwitterHomeFeatureImplementation.TimelineEngineClock, TwitterHomeFeatureImplementation.TimelineEngineContent, TwitterHomeFeatureImplementation.TimelineEngineLoader, TwitterHomeFeatureImplementation.TimelineEngineRelay, TwitterHomeFeatureImplementation.TimelineEngineSeenTweetIDs, TwitterHomeFeatureImplementation.TimelineEngineStream.EndOfStreamScribe, TwitterHomeFeatureImplementation.TimelineEngineStream.TraceSpan, TwitterHomeFeatureImplementation.TimelineEngineViewController ?, TwitterHomeFeatureImplementation.TimelineEngineViewportAwareLaunchScribe ?, TwitterURT25TFNTwitterTimelineScriber_p, _$s10TwitterURT24URTDisplayActionsManagerCMn, _$s10TwitterURT29URTFeedbackPresenterMenuSheetCMn, _$s10TwitterURT31URTTimelineCommonEventsObserverCMn, _$s11TwitterHome20URTHoistEventScriberCMn, _$s11TwitterHome29CompositionRefreshCoordinatorCMn, _$s11TwitterHome29TimelineItemVisibilityTrackerCMn, _$s14T1TwitterSwift26URTHomeTimelineLikeReactorCMn, _$s14T1TwitterSwift27StandardURTFeedbackExecutorCMn, _$s14T1TwitterSwift27URTRetweetInjectionListenerCMn, _$s14T1TwitterSwift28URTTweetLikeTimelineListenerCMn ?, _$s14T1TwitterSwift29URTUserFollowTimelineListenerCMn ?, _$s14T1TwitterSwift29URTWhoToFollowReactiveBlenderCMn, _$s14T1TwitterSwift31URTTweetActionsTimelineListenerCMn, _$s14T1TwitterSwift33URTTweetCompositionUpdateListenerCMn ?, _$s14T1TwitterSwift34URTCommunityLeaveInjectionListenerCMn, _$s14T1TwitterSwift38StandardURTFeedbackActionItemsProviderCMn, _$s15XTimelineEngine08TimelineB0O11LoadOutcomeOMn ?, _$s15XTimelineEngine08TimelineB0O12LoadStrategyMp, _$s15XTimelineEngine08TimelineB0O13ConfigurationVMn, _$s15XTimelineEngine08TimelineB0O7RuntimeO5StoreCMn _$sy__ _$s15XTimelineEngine08TimelineB0O5StateVMn _$s15XTimelineEngine08TimelineB0O5EventOMn _$s15XTimelineEngine08TimelineB0O6EffectOMn ?, _$s22TwitterHomePerformance26URTHomeTimelineStreamTraceCMn, _$sSD -> _$s15XTimelineEngine08TimelineB0O7TweetIDVMn _$sSayySb_SbtcG, _$sSD -> _$s15XTimelineEngine08TimelineB0O9RequestIDVMn TwitterHomeFeatureImplementation.TimelineEngineStream.OutcomeGate, _$sSD -> _$s15XTimelineEngine08TimelineB0O9RequestIDVMn _$sSa -> TwitterHomeFeatureImplementation.TimelineEngineStream.PendingRefresh, _$sSS, _$sSaySo8NSObject_pG, _$sShySSG, _$sSo17TFNTwitterAccountCSgXw, _$sSo23TFSTwitterScribeContextC, _$sSo40TwitterHomeFeaturesConfigurationProtocol_p;

@interface TwitterHomeFeatureImplementation.TimelineEngineStream : TFSTwitterStream <TFNTwitterHomeTimelineStream> { // (Swift)
    /* instance variables */
    Swift.String accountID;
    __C.TwitterHomeFeaturesConfigurationProtocol settings;
    nominal type descriptor for XTimelineEngine.TimelineEngine.Configuration configuration;
    __C.TFSTwitterScribeContext scribeContext;
    TwitterHomeFeatureImplementation.TimelineEngineLoader loader;
    TwitterHomeFeatureImplementation.TimelineEngineContent content;
    nominal type descriptor for TwitterHome.TimelineItemVisibilityTracker visibility;
    TwitterURT25TFNTwitterTimelineScriber_p hydrationScriber;
    nominal type descriptor for T1TwitterSwift.URTHomeTimelineLikeReactor reactor;
    nominal type descriptor for T1TwitterSwift.StandardURTFeedbackExecutor feedbackExecutor;
    nominal type descriptor for T1TwitterSwift.StandardURTFeedbackActionItemsProvider feedbackActionsProvider;
    nominal type descriptor for TwitterURT.URTFeedbackPresenterMenuSheet feedbackPresenter;
    nominal type descriptor for T1TwitterSwift.URTWhoToFollowReactiveBlender whoToFollowBlender;
    nominal type descriptor for TwitterHomePerformance.URTHomeTimelineStreamTrace trace;
    TwitterHomeFeatureImplementation.TimelineEngineClock clock;
    protocol descriptor for XTimelineEngine.TimelineEngine.LoadStrategy strategy;
    TwitterHomeFeatureImplementation.TimelineEngineViewportAwareLaunchScribe ? viewportAwareLaunchScribe;
    TwitterHomeFeatureImplementation.TimelineEngineRelay relay;
    TwitterHomeFeatureImplementation.TimelineEngineSeenTweetIDs seenTweetIDs;
    nominal type descriptor for TwitterHome.URTHoistEventScriber hoistEventScriber;
    TwitterHomeFeatureImplementation.PermalinkInjectionScribeAdapter permalinkInjectionScriber;
    nominal type descriptor for TwitterURT.URTDisplayActionsManager displayActionsManager;
    weak __C.TFNTwitterAccount? account;
    TwitterHomeFeatureImplementation.TimelineEngineViewController ? screen;
    Swift.Dictionary -> nominal type descriptor for XTimelineEngine.TimelineEngine.RequestID Swift.Array -> TwitterHomeFeatureImplementation.TimelineEngineStream.PendingRefresh refreshesByRequest;
    Swift.Dictionary -> nominal type descriptor for XTimelineEngine.TimelineEngine.RequestID TwitterHomeFeatureImplementation.TimelineEngineStream.OutcomeGate outcomeGates;
    nominal type descriptor for XTimelineEngine.TimelineEngine.LoadOutcome ? returnedLaunchOutcome;
    Swift.Dictionary -> nominal type descriptor for XTimelineEngine.TimelineEngine.TweetID [(Swift.Bool, Swift.Bool) -> ()] pushCompletions;
    TwitterHomeFeatureImplementation.TimelineEngineStream.TraceSpan cacheTweetsRendered;
    TFSTwitterCore18URTImpressionCache_p scribeImpressionCache;
    TwitterHomeFeatureImplementation.TimelineEngineStream.EndOfStreamScribe endOfStreamScribe;
    Swift.Set<Swift.String> shownCardCacheKeys;
    TwitterHomeFeatureImplementation.HomeTimelineUIReloadMonitor reloadMonitor;
    nominal type descriptor for T1TwitterSwift.URTTweetActionsTimelineListener tweetActionsListener;
    nominal type descriptor for T1TwitterSwift.URTRetweetInjectionListener retweetInjectionListener;
    nominal type descriptor for T1TwitterSwift.URTCommunityLeaveInjectionListener communityLeaveInjectionListener;
    nominal type descriptor for TwitterURT.URTTimelineCommonEventsObserver commonEventsObserver;
    [__C.NSObject] followObservers;
    nominal type descriptor for TwitterHome.CompositionRefreshCoordinator compositionRefreshCoordinator;
    nominal type descriptor for T1TwitterSwift.URTTweetCompositionUpdateListener ? compositionUpdateListener;
    nominal type descriptor for T1TwitterSwift.URTTweetLikeTimelineListener ? likeListener;
    nominal type descriptor for T1TwitterSwift.URTUserFollowTimelineListener ? followListener;
    nominal type descriptor for XTimelineEngine.TimelineEngine.Runtime.Store  empty-list  first-element-marker  first-element-marker  nominal type descriptor for XTimelineEngine.TimelineEngine.State nominal type descriptor for XTimelineEngine.TimelineEngine.Event nominal type descriptor for XTimelineEngine.TimelineEngine.Effect ? $__lazy_storage_$_store;
}

@property (nonatomic, readonly) NSArray *itemsToBeSerialized;
@property (nonatomic, readonly) unsigned long long applicationLaunchInitialRequestState;
@property (nonatomic, readonly) id <TFSTwitterCore.URTImpressionCache> impressionCache;

/* instance methods */
- (_Bool)loadNewerFromStatusPosting:(id)posting;
- (void)loadNewerWithSource:(long long)source completion:(id /* block */)completion;
- (void)loadNewerWithSource:(long long)source pushToHomeTweetId:(id)id completion:(id /* block */)completion;
- (void)injectPushToHomeTweet:(id)tweet;
- (void)removeAllStreamObjects;
- (id)topCursor;
- (id)scribePage;
- (void)setVisibleScrollPositionState:(id)state;
- (id)getVisibleScrollPositionState;
- (void)didViewStreamObjects:(id)objects;
- (_Bool)hasUnreadItems;
- (_Bool)hasRealData;
- (_Bool)isEmpty;
- (_Bool)removeStreamObject:(id)object;
- (void)dismissStreamObject:(id)object viaFeedbackAction:(id)action;
- (void)didTapTombstoneViewTweetOnStreamObject:(id)object;
- (void)dealloc;
- (id)streamObjects;
- (_Bool)loadTopWithSource:(long long)source completion:(id /* block */)completion;
- (_Bool)loadBottomWithSource:(long long)source;
- (id)init;

@end

#endif /* _TtC32TwitterHomeFeatureImplementation20TimelineEngineStream_h */
