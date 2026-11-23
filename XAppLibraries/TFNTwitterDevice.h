//
#ifndef TFNTwitterDevice_h
#define TFNTwitterDevice_h
@import Foundation;

@class NSObject, NSString;

@interface TFNTwitterDevice : NSObject

@property (readonly, nonatomic) NSString *simCountryCode;

/* class methods */
+ (id)currentDevice;
+ (_Bool)osNotificationsAlertsEnabled;
+ (void)setOsNotificationsAlertsEnabled:(_Bool)enabled;
+ (_Bool)osNotificationsBadgesEnabled;
+ (void)setOsNotificationsBadgesEnabled:(_Bool)enabled;
+ (_Bool)osNotificationsSoundsEnabled;
+ (void)setOsNotificationsSoundsEnabled:(_Bool)enabled;
+ (id)shortcodesByCountry;

/* instance methods */
- (id)localizedShortcode;
- (_Bool)isInLocale:(id)locale;
- (id)_shortcodeForCountryCode:(id)code;
- (id)blockingCarrierName;

@end

#endif /* TFNTwitterDevice_h */
