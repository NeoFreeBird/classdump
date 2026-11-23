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
