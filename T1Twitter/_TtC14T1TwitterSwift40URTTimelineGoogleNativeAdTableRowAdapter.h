//
#ifndef _TtC14T1TwitterSwift40URTTimelineGoogleNativeAdTableRowAdapter_h
#define _TtC14T1TwitterSwift40URTTimelineGoogleNativeAdTableRowAdapter_h
@import Foundation;

#include "TFNCellVisibilityBroadcasterDelegate-Protocol.h"

@class NSObject, Swift.Bool, T1TwitterSwift.URTTimelineHydrationGoogleAdConfig ?, _$s10TwitterURT18URTTimelineUpdaterCMn, _$sSo17TFNTwitterAccountC, _$sSo21TFNDataViewControllerCSgXw, _$sSo23TFSTwitterScribeContextC, _$sSo32TFNTwitterScribeImpressionLoggerC;

@interface T1TwitterSwift.URTTimelineGoogleNativeAdTableRowAdapter : NSObject <TFNCellVisibilityBroadcasterDelegate> { // (Swift)
    /* instance variables */
    __C.TFNTwitterAccount account;
    __C.TFSTwitterScribeContext scribeContext;
    T1TwitterSwift.URTTimelineHydrationGoogleAdConfig ? hydrationGoogleAdConfig;
    nominal type descriptor for TwitterURT.URTTimelineUpdater timelineUpdater;
    __C.TFNTwitterScribeImpressionLogger impressionLogger;
    Swift.Bool shouldReloadDataOnLoad;
    weak __C.TFNDataViewController? controller;
}

/* instance methods */
- (id)broadcaster:(id)broadcaster focalViewForCell:(id)cell;
- (void)dealloc;
- (void)googleAdManagerDidCacheAdWithNotification:(id)notification;
- (void)googleAdManagerDidEvictCachedAdWithNotification:(id)notification;
- (void)googleAdManagerDidReportAdWithNotification:(id)notification;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift40URTTimelineGoogleNativeAdTableRowAdapter_h */
