//
#ifndef TFNTwitterTimelineStreamNotificationObserver_h
#define TFNTwitterTimelineStreamNotificationObserver_h
@import Foundation;

#include "TFNTwitterHomeTimeline.h"

@class NSArray, NSObject;

@interface TFNTwitterTimelineStreamNotificationObserver : NSObject

@property (readonly, weak, nonatomic) TFNTwitterHomeTimeline *weakTimeline;
@property (copy, nonatomic) NSArray *notificationNames;

/* instance methods */
- (id)initWithTimeline:(id)timeline;
- (void)dealloc;
- (void)lifetimePreserveringNoOp;
- (void)timelineStreamChanged;
- (void)_timelineStreamDidUpdate:(id)update;
- (void)_subscribeToStreamNotificationsForTimeline:(id)timeline;
- (void)_unsubscribeFromStreamNotifications;

@end

#endif /* TFNTwitterTimelineStreamNotificationObserver_h */
