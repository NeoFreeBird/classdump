//
#ifndef T1AccountNotificationsTray_h
#define T1AccountNotificationsTray_h
@import Foundation;

@class NSObject;

@interface T1AccountNotificationsTray : NSObject // (Swift)

/* class methods */
+ (void)presentWithAccount:(id)account user:(id)user userContext:(id)context notificationSettingsProperty:(id)property scribeContext:(id)context fromViewController:(id)controller;

/* instance methods */
- (id)init;

@end

#endif /* T1AccountNotificationsTray_h */
