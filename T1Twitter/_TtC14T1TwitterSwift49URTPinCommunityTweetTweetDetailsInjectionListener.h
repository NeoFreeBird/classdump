//
#ifndef _TtC14T1TwitterSwift49URTPinCommunityTweetTweetDetailsInjectionListener_h
#define _TtC14T1TwitterSwift49URTPinCommunityTweetTweetDetailsInjectionListener_h
@import Foundation;

@class NSObject, _$s10TwitterURT25URTTimelineUpdatePipelineMp;

@interface T1TwitterSwift.URTPinCommunityTweetTweetDetailsInjectionListener : NSObject { // (Swift)
    /* instance variables */
    protocol descriptor for TwitterURT.URTTimelineUpdatePipeline updatePipeline;
}

/* instance methods */
- (void)handlePinNotificationWithNotification:(id)notification;
- (void)unpinNotificationWithNotification:(id)notification;
- (void)dealloc;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift49URTPinCommunityTweetTweetDetailsInjectionListener_h */
