//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TDTThreadCountMetric_h
#define TDTThreadCountMetric_h
@import Foundation;

#include "TDTPerformanceMetric.h"

@interface TDTThreadCountMetric : TDTPerformanceMetric

/* instance methods */
- (id)initWithMetricIdentifier:(id)identifier componentIdentifier:(id)identifier accountIdentifier:(id)identifier reporter:(id)reporter reportingInterval:(double)interval cachingInterval:(double)interval directory:(id)directory;
- (id)initWithMetricIdentifier:(id)identifier componentIdentifier:(id)identifier accountIdentifier:(id)identifier metricType:(unsigned long long)type measurementClass:(Class)_class reporter:(id)reporter reportingInterval:(double)interval cachingInterval:(double)interval directory:(id)directory;
- (id)averageMeasurement;
- (void)registerThreadCount:(unsigned long long)count;

@end

#endif /* TDTThreadCountMetric_h */
