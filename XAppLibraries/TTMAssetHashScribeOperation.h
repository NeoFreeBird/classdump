//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TTMAssetHashScribeOperation_h
#define TTMAssetHashScribeOperation_h
@import Foundation;

#include "TTMAssetPackedSegmentedUploadContext.h"

@class NSDate, TFSDependentConcurrentOperation;

@interface TTMAssetHashScribeOperation : TFSDependentConcurrentOperation

@property (readonly, nonatomic) TTMAssetPackedSegmentedUploadContext *context;
@property (readonly, nonatomic) NSDate *startDate;
@property (nonatomic) unsigned long long action;

/* instance methods */
- (id)initWithContext:(id)context startDate:(id)date;
- (void)run;
- (void)_ttm_main_run;

@end

#endif /* TTMAssetHashScribeOperation_h */
