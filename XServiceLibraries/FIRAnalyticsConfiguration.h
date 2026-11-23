//
#ifndef FIRAnalyticsConfiguration_h
#define FIRAnalyticsConfiguration_h
@import Foundation;

@class NSObject;

@interface FIRAnalyticsConfiguration : NSObject

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (void)postNotificationName:(id)name value:(id)value;
- (void)setAnalyticsCollectionEnabled:(_Bool)enabled;
- (void)setAnalyticsCollectionEnabled:(_Bool)enabled persistSetting:(_Bool)setting;

@end

#endif /* FIRAnalyticsConfiguration_h */
