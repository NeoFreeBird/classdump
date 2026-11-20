//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift30URTNotificationTimelineFactory_h
#define _TtC14T1TwitterSwift30URTNotificationTimelineFactory_h
@import Foundation;

@class NSObject;

@interface T1TwitterSwift.URTNotificationTimelineFactory : NSObject // (Swift)

/* class methods */
+ (id)makeTweetNotificationViewControllerWithTimelineType:(long long)type account:(id)account;
+ (id)makeNotificationDetailTimelineViewControllerWithNotificationID:(id)id title:(id)title subtitle:(id)subtitle account:(id)account;

/* instance methods */
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift30URTNotificationTimelineFactory_h */
