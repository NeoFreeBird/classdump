//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
