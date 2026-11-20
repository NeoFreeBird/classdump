//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1AccountNotificationsTray_h
#define T1AccountNotificationsTray_h
@import Foundation;

@class NSObject;

@interface T1AccountNotificationsTray : NSObject // (Swift)

/* class methods */
+ (_Bool)isEnabledForAccount:(id)account;
+ (void)presentWithAccount:(id)account user:(id)user userContext:(id)context notificationSettingsProperty:(id)property scribeContext:(id)context fromViewController:(id)controller;

/* instance methods */
- (id)init;

@end

#endif /* T1AccountNotificationsTray_h */
