//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TTMAssetPackedSegmentedUploadBeginNetworkTransactionMetricsOperation_h
#define TTMAssetPackedSegmentedUploadBeginNetworkTransactionMetricsOperation_h
@import Foundation;

#include "TTMAssetPackedSegmentedUploadContext.h"

@class TFSDependentConcurrentOperation;

@interface TTMAssetPackedSegmentedUploadBeginNetworkTransactionMetricsOperation : TFSDependentConcurrentOperation

@property (readonly, nonatomic) TTMAssetPackedSegmentedUploadContext *context;

/* instance methods */
- (id)init;
- (id)initWithContext:(id)context;
- (void)run;
- (void)_ttm_main_run;

@end

#endif /* TTMAssetPackedSegmentedUploadBeginNetworkTransactionMetricsOperation_h */
