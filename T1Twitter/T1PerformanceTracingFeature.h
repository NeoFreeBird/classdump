//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1PerformanceTracingFeature_h
#define T1PerformanceTracingFeature_h
@import Foundation;

@class NSObject;

@interface T1PerformanceTracingFeature : NSObject

/* class methods */
+ (_Bool)isEnabled;
+ (id)_t1_enabledFeatureSwitch;
+ (void)updateWithDeviceFeatureSwitches:(id)switches;
+ (id)denylist;

@end

#endif /* T1PerformanceTracingFeature_h */
