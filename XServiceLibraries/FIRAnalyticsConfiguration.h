//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
