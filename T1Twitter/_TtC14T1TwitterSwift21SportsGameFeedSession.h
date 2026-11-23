//
#ifndef _TtC14T1TwitterSwift21SportsGameFeedSession_h
#define _TtC14T1TwitterSwift21SportsGameFeedSession_h
@import Foundation;

@class Swift.Bool, T1TwitterSwift.SportsGameFeedTimelineRefreshTask ?, T1TwitterSwift.URTLiveEventTimelineTweetInjectionListener, T1TwitterSwift.URTViewController, _$sSS, _$sSSSgyc, _$sSo17TFNTwitterAccountC, _$sSo18TUIUpdateIndicatorC, _$sSo23TFNFloatingActionButtonC, _TtCs12_SwiftObject;

@interface T1TwitterSwift.SportsGameFeedSession : Swift._SwiftObject { // (Swift)
    /* instance variables */
    __C.TFNFloatingActionButton floatingActionButton;
    __C.TUIUpdateIndicator updateIndicator;
    T1TwitterSwift.URTViewController timelineViewController;
    __C.TFNTwitterAccount account;
    () -> Swift.String? hashtag;
    T1TwitterSwift.URTLiveEventTimelineTweetInjectionListener tweetInjectionListener;
    Swift.String scribePage;
    T1TwitterSwift.SportsGameFeedTimelineRefreshTask ? refreshTask;
    Swift.Bool hasCompletedInitialTopLoad;
    Swift.Bool isClearingRefresh;
    Swift.Bool hasPendingClearingRefresh;
}

@end

#endif /* _TtC14T1TwitterSwift21SportsGameFeedSession_h */
