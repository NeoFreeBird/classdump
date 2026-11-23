//
#ifndef TTMAssetPackedSegmentedUploadScribeOperation_h
#define TTMAssetPackedSegmentedUploadScribeOperation_h
@import Foundation;

#include "TTMAssetPackedSegmentedUploadContext.h"
#include "TTMAssetPackedSegmentedUploadScribeValue.h"
#include "TTMAssetPackedSegmentedUploadScribeValueDependency-Protocol.h"

@class TFSDependentConcurrentOperation;

@interface TTMAssetPackedSegmentedUploadScribeOperation : TFSDependentConcurrentOperation <TTMAssetPackedSegmentedUploadScribeValueDependency>

@property (readonly, nonatomic) TTMAssetPackedSegmentedUploadContext *context;
@property (copy) TTMAssetPackedSegmentedUploadScribeValue *scribeValue;

/* instance methods */
- (id)init;
- (id)initWithContext:(id)context;
- (void)run;
- (void)_ttm_main_run;
- (id)_ttm_main_scribeAction;
- (id)_ttm_main_scribeElement;
- (id)_ttm_main_scribeParameters;

@end

#endif /* TTMAssetPackedSegmentedUploadScribeOperation_h */
