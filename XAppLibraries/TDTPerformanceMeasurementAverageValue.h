//
#ifndef TDTPerformanceMeasurementAverageValue_h
#define TDTPerformanceMeasurementAverageValue_h
@import Foundation;

#include "TDTPerformanceMeasurement.h"

@interface TDTPerformanceMeasurementAverageValue : TDTPerformanceMeasurement

@property (nonatomic) double totalValue;
@property (nonatomic) long long count;

/* instance methods */
- (id)initWithPlistDictionary:(id)dictionary;
- (id)plistDictionaryValue;
- (id)description;
- (double)currentValue;
- (void)registerSampleWithValue:(double)value;
- (id)copyWithZone:(struct _NSZone *)zone;

@end

#endif /* TDTPerformanceMeasurementAverageValue_h */
