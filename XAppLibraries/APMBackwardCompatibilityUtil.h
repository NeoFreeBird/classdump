//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef APMBackwardCompatibilityUtil_h
#define APMBackwardCompatibilityUtil_h
@import Foundation;

@class NSObject;

@interface APMBackwardCompatibilityUtil : NSObject

/* class methods */
+ (_Bool)disableGMRMeasurement;
+ (id)sharedInstance;

/* instance methods */
- (void)setIsEnabled:(_Bool)enabled;

@end

#endif /* APMBackwardCompatibilityUtil_h */
