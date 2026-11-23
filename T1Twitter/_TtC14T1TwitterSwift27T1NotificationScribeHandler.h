//
#ifndef _TtC14T1TwitterSwift27T1NotificationScribeHandler_h
#define _TtC14T1TwitterSwift27T1NotificationScribeHandler_h
@import Foundation;

#include "_TtP20TwitterNotifications25NotificationScribeHandler_-Protocol.h"

@class NSObject;

@interface T1TwitterSwift.T1NotificationScribeHandler : NSObject <TwitterNotifications.NotificationScribeHandler> // (Swift)

/* instance methods */
- (void)scribePayload:(id)payload scribeAction:(id)action;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift27T1NotificationScribeHandler_h */
