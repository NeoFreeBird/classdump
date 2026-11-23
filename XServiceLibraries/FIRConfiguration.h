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
