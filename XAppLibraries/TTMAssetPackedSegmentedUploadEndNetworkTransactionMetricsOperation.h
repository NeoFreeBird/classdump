//
#ifndef TTMAssetPackedSegmentedUploadEndNetworkTransactionMetricsOperation_h
#define TTMAssetPackedSegmentedUploadEndNetworkTransactionMetricsOperation_h
@import Foundation;

#include "TTMAssetPackedSegmentedUploadContext.h"
#include "TTMAssetPackedSegmentedUploadScribeValue.h"
#include "TTMAssetPackedSegmentedUploadScribeValueDependency-Protocol.h"

@class TFSDependentConcurrentOperation;

@interface TTMAssetPackedSegmentedUploadEndNetworkTransactionMetricsOperation : TFSDependentConcurrentOperation <TTMAssetPackedSegmentedUploadScribeValueDependency>

@property (readonly, nonatomic) TTMAssetPackedSegmentedUploadContext *context;
@property (copy) TTMAssetPackedSegmentedUploadScribeValue *scribeValue;

/* instance methods */
- (id)init;
- (id)initWithContext:(id)context;
- (void)run;
- (void)_ttm_main_run;
- (id)_ttm_main_mediaUploadDetails;
- (id)_ttm_main_segmentedMediaUploadDetails;

@end

#endif /* TTMAssetPackedSegmentedUploadEndNetworkTransactionMetricsOperation_h */
