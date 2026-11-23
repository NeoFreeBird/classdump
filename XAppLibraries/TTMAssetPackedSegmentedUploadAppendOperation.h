//
#ifndef TTMAssetPackedSegmentedUploadAppendOperation_h
#define TTMAssetPackedSegmentedUploadAppendOperation_h
@import Foundation;

#include "TFSOperationDependencyResult-Protocol.h"
#include "TTMAssetPackedSegmentedUploadAppendCommandOperationDelegate-Protocol.h"
#include "TTMAssetPackedSegmentedUploadAppendOperationDelegate-Protocol.h"
#include "TTMAssetPackedSegmentedUploadContext.h"

@class NSData, NSError, NSHashTable, NSMutableArray, NSNumber, NSObject, NSOperation, NSOperationQueue, NSString, TFSDependentConcurrentOperation;
@protocol OS_dispatch_queue;

@interface TTMAssetPackedSegmentedUploadAppendOperation : TFSDependentConcurrentOperation <TTMAssetPackedSegmentedUploadAppendCommandOperationDelegate, TFSOperationDependencyResult>

@property (readonly, nonatomic) TTMAssetPackedSegmentedUploadContext *context;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *taskQueue;
@property (readonly, nonatomic) NSOperationQueue *operationQueue;
@property unsigned long long resultState;
@property (retain) NSError *resultError;
@property (readonly, nonatomic) NSHashTable *weakOperationsToCancel;
@property (readonly, nonatomic) NSOperation *completeCommandOperationsOperation;
@property (readonly, nonatomic) NSMutableArray *operationsToRetry;
@property (nonatomic) unsigned long long nextSegmentIndex;
@property (nonatomic) unsigned long long nextSegmentPosition;
@property (nonatomic) unsigned long long completedDataLength;
@property (retain, nonatomic) NSNumber *sendingDataSegmentIndex;
@property (nonatomic) float progress;
@property unsigned long long resultNumberOfSegmentsAppended;
@property unsigned long long resultTotalRequestRetryCount;
@property (weak, nonatomic) id <TTMAssetPackedSegmentedUploadAppendOperationDelegate> delegate;
@property (copy) NSString *mediaID;
@property (retain) NSData *data;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithContext:(id)context;
- (void)run;
- (void)_ttm_task_enqueueCommandOperation;
- (void)_ttm_task_retryCommandOperation:(id)operation;
- (void)_ttm_task_enqueueCommandOperationWithSegmentIndex:(unsigned long long)index segmentRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range retryCount:(unsigned long long)count;
- (void)_ttm_task_enqueueCompleteCommandOperationsOperation;
- (id)_ttm_background_createCompleteCommandOperationsOperation;
- (void)_ttm_task_completeCommandOperations;
- (void)cancel;
- (void)_ttm_task_cancel;
- (id)_ttm_completionLoggingParameters;
- (id)packedSegmentedUploadAppendCommandOperationDelegateQueue:(id)queue;
- (void)packedSegmentedUploadAppendCommandOperation:(id)operation didProgressSegmentedData:(float)data;
- (void)_ttm_task_commandOperationDidProgressSegmentedDataRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (void)packedSegmentedUploadAppendCommandOperationDidSendSegmentedData:(id)data;
- (void)packedSegmentedUploadAppendCommandOperation:(id)operation didAppendSegmentedDataWithError:(id)error;
- (void)_ttm_task_commandOperation:(id)operation didFailWithError:(id)error;
- (void)_ttm_task_commandOperationDidCompleteWithSegmentRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;

@end

#endif /* TTMAssetPackedSegmentedUploadAppendOperation_h */
