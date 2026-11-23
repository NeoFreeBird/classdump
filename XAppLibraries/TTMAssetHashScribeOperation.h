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
