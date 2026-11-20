//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef FIRConfiguration_h
#define FIRConfiguration_h
@import Foundation;

#include "FIRAnalyticsConfiguration.h"

@class NSObject;

@interface FIRConfiguration : NSObject

@property (retain, nonatomic) FIRAnalyticsConfiguration *analyticsConfiguration;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)setLoggerLevel:(long long)level;
- (long long)loggerLevel;

@end

#endif /* FIRConfiguration_h */
