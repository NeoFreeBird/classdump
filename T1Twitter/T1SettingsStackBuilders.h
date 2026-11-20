//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1SettingsStackBuilders_h
#define T1SettingsStackBuilders_h
@import Foundation;

@class NSObject;

@interface T1SettingsStackBuilders : NSObject

/* class methods */
+ (id)accountSettingsStackForAccount:(id)account;
+ (id)loginVerificationSettingsStackForAccount:(id)account;
+ (id)personalizationSettingsStackForAccount:(id)account;
+ (id)muteKeywordSettingsStackForAccount:(id)account;
+ (id)trendsSettingsStackForAccount:(id)account;
+ (id)deviceFollowSettingsStackForAccount:(id)account;
+ (id)postInteractionSettingsStackForAccount:(id)account;
+ (id)languageSettingsStackForAccount:(id)account;

@end

#endif /* T1SettingsStackBuilders_h */
