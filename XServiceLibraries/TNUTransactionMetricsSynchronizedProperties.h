//
#ifndef TNUTransactionMetricsSynchronizedProperties_h
#define TNUTransactionMetricsSynchronizedProperties_h
@import Foundation;

#include "TNUTransactionMetricsSynchronizedProperties-Protocol.h"

@class NSArray, NSObject, NSString;

@interface TNUTransactionMetricsSynchronizedProperties : NSObject <TNUTransactionMetricsSynchronizedProperties>

@property (nonatomic) double duration;
@property (nonatomic) long long status;
@property (copy, nonatomic) NSArray *attemptMetrics;
@property (nonatomic) unsigned long long retryCount;
@property (copy, nonatomic) NSString *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDuration:(double)duration status:(long long)status attemptMetrics:(id)metrics retryCount:(unsigned long long)count context:(id)context;

@end

#endif /* TNUTransactionMetricsSynchronizedProperties_h */
