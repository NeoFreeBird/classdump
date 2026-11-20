//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TTMAssetPackedSegmentedUploadPerformanceScribeOperation_h
#define TTMAssetPackedSegmentedUploadPerformanceScribeOperation_h
@import Foundation;

#include "TTMAssetPackedSegmentedUploadContext.h"

@class NSDate, NSError, NSString, TFSDependentConcurrentOperation;

@interface TTMAssetPackedSegmentedUploadPerformanceScribeOperation : TFSDependentConcurrentOperation

@property (readonly, nonatomic) TTMAssetPackedSegmentedUploadContext *context;
@property (readonly, nonatomic) unsigned long long process;
@property (readonly, nonatomic) NSDate *startDate;
@property unsigned long long action;
@property (copy) NSString *mediaID;
@property (copy) NSError *error;

/* instance methods */
- (id)initWithContext:(id)context process:(unsigned long long)process;
- (void)run;
- (void)_ttm_main_run;

@end

#endif /* TTMAssetPackedSegmentedUploadPerformanceScribeOperation_h */
