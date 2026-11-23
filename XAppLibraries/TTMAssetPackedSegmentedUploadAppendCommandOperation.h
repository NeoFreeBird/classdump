//
#ifndef TTMAssetPackedSegmentedUploadAppendCommandOperation_h
#define TTMAssetPackedSegmentedUploadAppendCommandOperation_h
@import Foundation;

#include "TTMAssetPackedSegmentedUploadAppendCommandOperationDelegate-Protocol.h"
#include "TTMAssetPackedSegmentedUploadContext.h"

@class NSData, NSString, TFSConcurrentOperation;
@protocol TFSTwitterAPICommandCancellable;

@interface TTMAssetPackedSegmentedUploadAppendCommandOperation : TFSConcurrentOperation

@property (retain) id <TFSTwitterAPICommandCancellable> commandOperation;
@property (weak, nonatomic) id <TTMAssetPackedSegmentedUploadAppendCommandOperationDelegate> delegate;
@property (readonly, nonatomic) TTMAssetPackedSegmentedUploadContext *context;
@property (readonly, copy, nonatomic) NSString *mediaID;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) unsigned long long segmentIndex;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } segmentRange;
@property (readonly, nonatomic) unsigned long long retryCount;

/* instance methods */
- (id)init;
- (id)initWithContext:(id)context mediaID:(id)id data:(id)data segmentIndex:(unsigned long long)index segmentRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range retryCount:(unsigned long long)count;
- (void)run;
- (void)_ttm_main_segmentedUploadAppendCommandDidProgress:(float)progress;
- (void)_ttm_main_segmentedUploadAppendCommandDidAppendWithError:(id)error;
- (void)_ttm_main_dispatchAsyncOnDelegateQueue:(id /* block */)queue;
- (void)cancel;
- (id)_ttm_loggingSection;

@end

#endif /* TTMAssetPackedSegmentedUploadAppendCommandOperation_h */
