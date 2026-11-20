//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtP20TwitterNotifications14BackgroundTask__Protocol_h
#define _TtP20TwitterNotifications14BackgroundTask__Protocol_h
@import Foundation;

@protocol TwitterNotifications.BackgroundTask

@required

@property (nonatomic, copy) id /* block */ expirationHandler;

/* required instance methods */
- (void)setTaskCompletedWithSuccess:(_Bool)success;

@optional

@end

#endif /* _TtP20TwitterNotifications14BackgroundTask__Protocol_h */
