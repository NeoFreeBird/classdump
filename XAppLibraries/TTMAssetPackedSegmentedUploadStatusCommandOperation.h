//
#ifndef TTMAssetPackedSegmentedUploadStatusCommandOperation_h
#define TTMAssetPackedSegmentedUploadStatusCommandOperation_h
@import Foundation;

#include "TTMAssetPackedSegmentedUploadContext.h"
#include "TTMAssetPackedSegmentedUploadStatusCommandOperationDelegate-Protocol.h"

@class NSObject, NSString, TFSConcurrentOperation, TFSTimer;
@protocol OS_dispatch_queue, TFSTwitterAPICommandCancellable;

@interface TTMAssetPackedSegmentedUploadStatusCommandOperation : TFSConcurrentOperation

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *taskQueue;
@property (retain, nonatomic) id <TFSTwitterAPICommandCancellable> commandOperation;
@property (retain, nonatomic) TFSTimer *delayTimer;
@property (weak, nonatomic) id <TTMAssetPackedSegmentedUploadStatusCommandOperationDelegate> delegate;
@property (readonly, nonatomic) TTMAssetPackedSegmentedUploadContext *context;
@property (readonly, copy, nonatomic) NSString *mediaID;
@property (readonly, nonatomic) double delay;

/* instance methods */
- (id)init;
- (id)initWithContext:(id)context mediaID:(id)id delay:(double)delay;
- (void)dealloc;
- (void)run;
- (void)_ttm_task_scheduleStartCommand;
- (void)_ttm_task_delayTimerDidFire:(id)fire;
- (void)_ttm_task_invalidateTimer;
- (void)_ttm_task_startCommand;
- (void)_ttm_main_segmentedUploadStatusCommandDidCompleteWithMediaInformation:(id)information error:(id)error;
- (void)cancel;
- (void)_ttm_task_cancel;

@end

#endif /* TTMAssetPackedSegmentedUploadStatusCommandOperation_h */
