//
#ifndef _TtC10TwitterURT31URTTimelineCommonEventsObserver_h
#define _TtC10TwitterURT31URTTimelineCommonEventsObserver_h
@import Foundation;

@class TwitterURT.URTTimelineUpdatePipeline, _$sSo8NSObject_pSg, _TtCs12_SwiftObject;

@interface TwitterURT.URTTimelineCommonEventsObserver : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TwitterURT.URTTimelineUpdatePipeline timelineUpdatePipeline;
    __C.NSObject? statusDeletionNotificationHandler;
    __C.NSObject? userMuteChangeNotificationHandler;
    __C.NSObject? userBlockChangeNotificationHandler;
    __C.NSObject? userUnfollowNotificationHandler;
    __C.NSObject? unretweetNotificationHandler;
    __C.NSObject? statusReportedNotificationHandler;
    __C.NSObject? itemFeedbackRichBehaviorChangedNotificationHandler;
}

@end

#endif /* _TtC10TwitterURT31URTTimelineCommonEventsObserver_h */
