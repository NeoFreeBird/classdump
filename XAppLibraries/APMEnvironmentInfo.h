//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef APMEnvironmentInfo_h
#define APMEnvironmentInfo_h
@import Foundation;

@class NSObject, NSString;

@interface APMEnvironmentInfo : NSObject

@property (readonly, nonatomic) NSString *deviceModel;
@property (readonly, nonatomic) NSString *deviceOSVersion;
@property (readonly, nonatomic) NSString *userDefaultLanguage;
@property (readonly, nonatomic) int timeZoneOffsetMinutes;

/* class methods */
+ (id)sharedInstance;

/* instance methods */

@end

#endif /* APMEnvironmentInfo_h */
