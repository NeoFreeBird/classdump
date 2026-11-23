//
#ifndef TDTScrollFPSPerformanceMetric_h
#define TDTScrollFPSPerformanceMetric_h
@import Foundation;

#include "TDTPerformanceMeasurementAverageValue.h"
#include "TDTPerformanceMetric.h"

@interface TDTScrollFPSPerformanceMetric : TDTPerformanceMetric

@property (readonly, nonatomic) TDTPerformanceMeasurementAverageValue *averageMeasurement;

/* instance methods */
- (id)initWithMetricIdentifier:(id)identifier componentIdentifier:(id)identifier accountIdentifier:(id)identifier reporter:(id)reporter reportingInterval:(double)interval cachingInterval:(double)interval directory:(id)directory;
- (id)initWithMetricIdentifier:(id)identifier componentIdentifier:(id)identifier accountIdentifier:(id)identifier metricType:(unsigned long long)type measurementClass:(Class)_class reporter:(id)reporter reportingInterval:(double)interval cachingInterval:(double)interval directory:(id)directory;
- (void)registerFPSRate:(double)fpsrate;

@end

#endif /* TDTScrollFPSPerformanceMetric_h */
