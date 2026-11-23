//
#ifndef T1URTNotificationTimelineRefresherDelegate_Protocol_h
#define T1URTNotificationTimelineRefresherDelegate_Protocol_h
@import Foundation;

@protocol T1URTNotificationTimelineRefresherDelegate

@required

/* required instance methods */
- (_Bool)timelineRefresherShouldLoadTop:(id)top;

@optional

@end

#endif /* T1URTNotificationTimelineRefresherDelegate_Protocol_h */
