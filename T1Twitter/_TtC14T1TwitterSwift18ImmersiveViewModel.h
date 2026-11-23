//
#ifndef _TtC14T1TwitterSwift18ImmersiveViewModel_h
#define _TtC14T1TwitterSwift18ImmersiveViewModel_h
@import Foundation;

@class NSObject, Swift.Bool, T1TwitterSwift.GoogleAdPage, T1TwitterSwift.ImmersiveBroadcastCardViewModel ?, T1TwitterSwift.ImmersiveCardViewModelDelegate ?, T1TwitterSwift.ImmersiveErrorView.ErrorType ?, T1TwitterSwift.ImmersiveViewModel.Update _$scSg ->, T1TwitterSwift.URTTimelineHydration, _$s10Foundation4DateVMn ?, _$s10TwitterURT18URTTimelineUpdaterCMn, _$s10TwitterURT31URTTimelineCommonEventsObserverCMn, _$s12CoreGraphics7CGFloatVMn, _$s14TFSTwitterCore11URTTimelineCMn ?, _$s14TFSTwitterCore16TwitterBroadcastCMn ?, _$sSNySiG, _$sSS, _$sSSSg, _$sSa -> T1TwitterSwift.ImmersiveCardViewModelProtocol, _$sSayypG, _$sSi, _$sSiSg, _$sSnySiG, _$sSo16TFNTwitterStatusCSg, _$sSo17TFNTwitterAccountC, _$sSo22TFSAccountUserDefaultsC, _$sSo23TFSTwitterScribeContextC, _$sSo25T1ExploreRelaunchFeaturesC, __C.ImmersiveViewSource;

@interface T1TwitterSwift.ImmersiveViewModel : NSObject { // (Swift)
    /* instance variables */
    __C.TFNTwitterAccount account;
    __C.ImmersiveViewSource viewSource;
    __C.TFNTwitterStatus? initialStatus;
    nominal type descriptor for TFSTwitterCore.TwitterBroadcast ? initialBroadcast;
    Swift.String? initialBroadcastID;
    T1TwitterSwift.ImmersiveBroadcastCardViewModel ? broadcastViewModel;
    __C.TFSAccountUserDefaults userDefaults;
    nominal type descriptor for TwitterURT.URTTimelineUpdater timelineUpdater;
    nominal type descriptor for TwitterURT.URTTimelineCommonEventsObserver timelineCommonEventsObserver;
    T1TwitterSwift.URTTimelineHydration hydration;
    Swift.Int itemsLeftFetchThreshold;
    nominal type descriptor for TFSTwitterCore.URTTimeline ? timeline;
    [Any] observers;
    Swift.Array -> T1TwitterSwift.ImmersiveCardViewModelProtocol items;
    nominal type descriptor for CoreGraphics.CGFloat fractionalPageIndex;
    Swift.Range<Swift.Int> loadedPageRange;
    Swift.ClosedRange<Swift.Int> loadPageRange;
    Swift.ClosedRange<Swift.Int> loadVideoRange;
    __C.T1ExploreRelaunchFeatures exploreFeatures;
    Swift.Int? activePageIndex;
    T1TwitterSwift.ImmersiveViewModel.Update _$scSg -> updateHandler;
    T1TwitterSwift.ImmersiveErrorView.ErrorType ? errorType;
    Swift.String sessionId;
    nominal type descriptor for Foundation.Date ? lastDisappearDate;
    T1TwitterSwift.ImmersiveCardViewModelDelegate ? delegate;
    T1TwitterSwift.GoogleAdPage adPage;
    Swift.Bool isSSPAdEnabled;
    __C.TFSTwitterScribeContext scribeContext;
}

/* instance methods */
- (void)dealloc;
- (void)googleAdManagerDidCacheAdWithNotification:(id)notification;
- (void)googleAdManagerDidEvictCachedAdWithNotification:(id)notification;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift18ImmersiveViewModel_h */
