//
#ifndef TDTCellPreparationTimePerformanceMetric_h
#define TDTCellPreparationTimePerformanceMetric_h
@import Foundation;

#include "TDTPerformanceMeasurementAverageValue.h"
#include "TDTPerformanceMetric.h"

@class NSMutableDictionary;

@interface TDTCellPreparationTimePerformanceMetric : TDTPerformanceMetric

@property (readonly, nonatomic) NSMutableDictionary *operationStartTimeMap;
@property (readonly, nonatomic) TDTPerformanceMeasurementAverageValue *averageMeasurement;

/* instance methods */
- (id)initWithMetricIdentifier:(id)identifier componentIdentifier:(id)identifier accountIdentifier:(id)identifier reporter:(id)reporter reportingInterval:(double)interval cachingInterval:(double)interval directory:(id)directory;
- (id)initWithMetricIdentifier:(id)identifier componentIdentifier:(id)identifier accountIdentifier:(id)identifier metricType:(unsigned long long)type measurementClass:(Class)_class reporter:(id)reporter reportingInterval:(double)interval cachingInterval:(double)interval directory:(id)directory;
- (id)notifyCellPreparationWillStart;
- (void)notifyCellPreparationDidEnd:(id)end;

@end

#endif /* TDTCellPreparationTimePerformanceMetric_h */
