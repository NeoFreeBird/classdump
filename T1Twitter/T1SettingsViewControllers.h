//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1SettingsViewControllers_h
#define T1SettingsViewControllers_h
@import Foundation;

@class NSObject;

@interface T1SettingsViewControllers : NSObject // (Swift)

/* class methods */
+ (id)rootViewControllerForAccount:(id)account;
+ (_Bool)redesignHandlesDeeplinkWithLink:(id)link account:(id)account;
+ (id)redesignPushNotificationSettingsStackForAccount:(id)account highlightRowIdentifier:(id)identifier;
+ (id)redesignPushNotificationSettingsForAccount:(id)account;
+ (id)timelineForAccount:(id)account;
+ (id)notificationsForAccount:(id)account;
+ (id)accessibilityAndDisplayForAccount:(id)account;
+ (id)navigationStackForDeeplinkStringWithLink:(id)link account:(id)account referringPage:(id)page;

/* instance methods */
- (id)init;

@end

#endif /* T1SettingsViewControllers_h */
