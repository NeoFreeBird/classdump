//
#ifndef TDTPerformanceMeasurement_h
#define TDTPerformanceMeasurement_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "TFSPlistSerialization-Protocol.h"

@class NSObject, NSString;

@interface TDTPerformanceMeasurement : NSObject <TFSPlistSerialization, NSCopying>

@property (nonatomic) double oldestSampleTimestamp;
@property (nonatomic) double newestSampleTimestamp;
@property (readonly, nonatomic) _Bool hasRegisteredSamples;
@property (readonly, nonatomic) double currentValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithPlistDictionary:(id)dictionary;
- (id)plistDictionaryValue;
- (void)registerSampleWithValue:(double)value;
- (id)copyWithZone:(struct _NSZone *)zone;

@end

#endif /* TDTPerformanceMeasurement_h */
