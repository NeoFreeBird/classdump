//
#ifndef TDTPerformanceMetricReporter_Protocol_h
#define TDTPerformanceMetricReporter_Protocol_h
@import Foundation;

@protocol TDTPerformanceMetricReporter

@required

/* required instance methods */
- (void)reportCurrentValue:(double)value forMetric:(id)metric;

@optional

@end

#endif /* TDTPerformanceMetricReporter_Protocol_h */
