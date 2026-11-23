//
#ifndef TFSScrollPerformanceMetricsDelegate_Protocol_h
#define TFSScrollPerformanceMetricsDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFSScrollPerformanceMetricsDelegate <NSObject>

@required

/* required instance methods */
- (_Bool)scrollPerformanceMetricsShouldRegisterMeasurements:(id)measurements;

@optional

@end

#endif /* TFSScrollPerformanceMetricsDelegate_Protocol_h */
