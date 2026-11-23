//
#ifndef T1OnboardingLocalNotificationReminderManager_h
#define T1OnboardingLocalNotificationReminderManager_h
@import Foundation;

@class NSObject;

@interface T1OnboardingLocalNotificationReminderManager : NSObject { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *notificationIdentifier;
    NSNumber"16@0:8 *startBackgroundTaskHandle;
}

/* class methods */
+ (id)shared;

/* instance methods */
- (void)setup;
- (void)applicationWillResignActive;
- (void)applicationDidEnterBackground;
- (void)applicationWillEnterForeground;
- (void)accountDidBecomeActive:(id)active;
- (void)recentAccountDidRegister:(id)_register;
- (id)init;

@end

#endif /* T1OnboardingLocalNotificationReminderManager_h */
