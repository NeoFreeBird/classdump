//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift28ImmersiveTimelineCoordinator_h
#define _TtC14T1TwitterSwift28ImmersiveTimelineCoordinator_h
@import Foundation;

@class NSObject, Swift.Bool, T1TwitterSwift.GoogleAdPage, T1TwitterSwift.ImmersionErrorType ?, T1TwitterSwift.ImmersiveBroadcastCardViewModel ?, T1TwitterSwift.ImmersiveCardViewModelDelegate ?, T1TwitterSwift.ImmersivePlaylistStatusResolver ?, T1TwitterSwift.ImmersiveThreadContinuationCoordinator, T1TwitterSwift.ImmersiveTimelineCoordinator.PendingOrientationRefetch ?, T1TwitterSwift.ImmersiveTimelineCoordinatorDelegate ?, T1TwitterSwift.URTTimelineHydration, _$s10Foundation4DateVMn ?, _$s10TwitterURT18URTTimelineUpdaterCMn, _$s10TwitterURT31URTTimelineCommonEventsObserverCMn, _$s14TFSTwitterCore11URTTimelineCMn ?, _$s14TFSTwitterCore16TwitterBroadcastCMn ?, _$sSS, _$sSSSg, _$sSa -> T1TwitterSwift.ImmersiveCardViewModelProtocol, _$sSa -> T1TwitterSwift.StandaloneMediaItem ?, _$sSayypG, _$sSi, _$sSnySiG, _$sSo16TFNTwitterStatusCSg, _$sSo17TFNTwitterAccountC, _$sSo19T1ImmersivePlaylistCSg, _$sSo23TFSTwitterScribeContextC, _$sSo25T1ExploreRelaunchFeaturesC, __C.ImmersiveViewSource;

@interface T1TwitterSwift.ImmersiveTimelineCoordinator : NSObject { // (Swift)
    /* instance variables */
    Swift.Array -> T1TwitterSwift.ImmersiveCardViewModelProtocol items;
    T1TwitterSwift.ImmersionErrorType ? errorType;
    Swift.Bool isLoading;
    nominal type descriptor for Foundation.Date ? lastDisappearDate;
    Swift.Int initialMediaIndex;
    T1TwitterSwift.ImmersiveThreadContinuationCoordinator threadContinuationCoordinator;
    T1TwitterSwift.ImmersiveTimelineCoordinatorDelegate ? delegate;
    T1TwitterSwift.ImmersiveCardViewModelDelegate ? cardDelegate;
    Swift.String sessionId;
    __C.TFSTwitterScribeContext scribeContext;
    Swift.String? rawSearchQuery;
    __C.TFNTwitterAccount account;
    __C.ImmersiveViewSource viewSource;
    __C.T1ImmersivePlaylist? playlist;
    T1TwitterSwift.ImmersivePlaylistStatusResolver ? playlistStatusResolver;
    Swift.Range<Swift.Int> resolvedPlaylistChapters;
    Swift.Int playlistCardCount;
    __C.TFNTwitterStatus? initialStatus;
    nominal type descriptor for TFSTwitterCore.TwitterBroadcast ? initialBroadcast;
    Swift.String? initialBroadcastID;
    T1TwitterSwift.ImmersiveBroadcastCardViewModel ? broadcastViewModel;
    Swift.Array -> T1TwitterSwift.StandaloneMediaItem ? standaloneMediaItems;
    __C.T1ExploreRelaunchFeatures exploreFeatures;
    nominal type descriptor for TwitterURT.URTTimelineUpdater timelineUpdater;
    nominal type descriptor for TwitterURT.URTTimelineCommonEventsObserver timelineCommonEventsObserver;
    T1TwitterSwift.URTTimelineHydration hydration;
    Swift.Int itemsLeftFetchThreshold;
    nominal type descriptor for TFSTwitterCore.URTTimeline ? timeline;
    T1TwitterSwift.GoogleAdPage adPage;
    Swift.Bool isSSPAdEnabled;
    Swift.Bool isLiveBroadcastCardsEnabled;
    [Any] observers;
    T1TwitterSwift.ImmersiveTimelineCoordinator.PendingOrientationRefetch ? pendingOrientationRefetch;
}

/* instance methods */
- (void)dealloc;
- (void)googleAdManagerDidCacheAdWithNotification:(id)notification;
- (void)googleAdManagerDidEvictCachedAdWithNotification:(id)notification;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift28ImmersiveTimelineCoordinator_h */
