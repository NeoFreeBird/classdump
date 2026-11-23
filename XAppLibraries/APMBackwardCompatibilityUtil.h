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
