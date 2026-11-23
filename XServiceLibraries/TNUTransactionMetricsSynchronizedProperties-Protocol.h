//
#ifndef TNUTransactionMetricsSynchronizedProperties_Protocol_h
#define TNUTransactionMetricsSynchronizedProperties_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSArray, NSString;

@protocol TNUTransactionMetricsSynchronizedProperties <NSObject>

@required

@property (nonatomic) double duration;
@property (nonatomic) long long status;
@property (copy, nonatomic) NSArray *attemptMetrics;
@property (nonatomic) unsigned long long retryCount;
@property (copy, nonatomic) NSString *context;

@optional

@end

#endif /* TNUTransactionMetricsSynchronizedProperties_Protocol_h */
