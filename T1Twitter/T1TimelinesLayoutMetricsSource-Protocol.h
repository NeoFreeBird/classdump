//
#ifndef T1TimelinesLayoutMetricsSource_Protocol_h
#define T1TimelinesLayoutMetricsSource_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1TimelinesLayoutMetricsSource <NSObject>

@required

/* required instance methods */
- (id)layoutMetricsForEnvironment:(id)environment layoutMetrics:(id)metrics;
- (id)layoutMetricsForEnvironment:(id)environment layoutMetrics:(id)metrics forItemAtIndexPath:(id)path;

@optional

@end

#endif /* T1TimelinesLayoutMetricsSource_Protocol_h */
