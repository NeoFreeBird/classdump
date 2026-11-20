//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TTMAssetPackedSegmentedUploadParallelAppendOperation_h
#define TTMAssetPackedSegmentedUploadParallelAppendOperation_h
@import Foundation;

#include "TFSOperationDependencyResult-Protocol.h"
#include "TTMAssetPackedSegmentedUploadAppendCommandOperationDelegate-Protocol.h"
#include "TTMAssetPackedSegmentedUploadContext.h"
#include "TTMAssetPackedSegmentedUploadParallelAppendOperationDelegate-Protocol.h"

@class NSData, NSError, NSHashTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSNumber, NSObject, NSOperation, NSOperationQueue, NSString, TFSDependentConcurrentOperation;
@protocol OS_dispatch_queue;

@interface TTMAssetPackedSegmentedUploadParallelAppendOperation : TFSDependentConcurrentOperation <TTMAssetPackedSegmentedUploadAppendCommandOperationDelegate, TFSOperationDependencyResult>

@property (readonly, nonatomic) TTMAssetPackedSegmentedUploadContext *context;
@property (readonly, copy, nonatomic) id /* block */ commandOperationFactory;
@property (readonly, nonatomic) unsigned long long maxConcurrentAppendRequests;
@property (readonly, nonatomic) unsigned long long concurrentAppendTimeoutsBeforeBackoff;
@property (readonly, nonatomic) _Bool segmentSizeBackoffEnabled;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *taskQueue;
@property (readonly, nonatomic) NSOperationQueue *operationQueue;
@property unsigned long long resultState;
@property (retain) NSError *resultError;
@property (readonly, nonatomic) NSHashTable *weakOperationsToCancel;
@property (readonly, nonatomic) NSOperation *completeCommandOperationsOperation;
@property (readonly, nonatomic) NSMutableSet *delayedRetryOperations;
@property (readonly, nonatomic) NSMutableArray *retryOperationsAwaitingSlot;
@property (nonatomic) unsigned long long nextSegmentIndex;
@property (nonatomic) unsigned long long nextSegmentPosition;
@property (nonatomic) unsigned long long completedDataLength;
@property (readonly, nonatomic) NSMutableSet *sendingSegmentIndexes;
@property (readonly, nonatomic) NSMutableDictionary *inFlightSegmentSentBytes;
@property (nonatomic) unsigned long long effectiveMaxConcurrentAppendRequests;
@property (nonatomic) unsigned long long timeoutErrorCount;
@property (nonatomic) float progress;
@property (retain, nonatomic) NSNumber *pendingBackoffSegmentIndex;
@property (nonatomic) unsigned long long segmentSizeBackoffCount;
@property (readonly, nonatomic) NSMutableDictionary *requestCountsBySegmentIndex;
@property unsigned long long resultNumberOfSegmentsAppended;
@property unsigned long long resultTotalRequestRetryCount;
@property unsigned long long resultMaxConcurrentAppendRequests;
@property unsigned long long resultMinConcurrentAppendRequests;
@property unsigned long long resultTotalBytesWired;
@property (weak, nonatomic) id <TTMAssetPackedSegmentedUploadParallelAppendOperationDelegate> delegate;
@property (copy) NSString *mediaID;
@property (retain) NSData *data;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithContext:(id)context;
- (id)initWithContext:(id)context commandOperationFactory:(id /* block */)factory;
- (void)run;
- (void)_ttm_task_fillSendingSlots;
- (void)_ttm_task_enqueueCommandOperation;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_ttm_task_backedOffSegmentRangeForSegmentRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (void)_ttm_task_scheduleDelayedRetryOfCommandOperation:(id)operation;
- (void)_ttm_task_delayedRetryBackoffElapsedForCommandOperation:(id)operation;
- (id)_ttm_task_createCommandOperationWithSegmentIndex:(unsigned long long)index segmentRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range retryCount:(unsigned long long)count;
- (void)_ttm_task_startCommandOperation:(id)operation;
- (void)_ttm_task_freeSendingSlotForSegmentIndex:(unsigned long long)index;
- (void)_ttm_task_releaseLayoutHoldForSegmentIndex:(unsigned long long)index;
- (void)_ttm_task_enqueueCompleteCommandOperationsOperation;
- (id)_ttm_background_createCompleteCommandOperationsOperation;
- (void)_ttm_task_completeCommandOperations;
- (void)cancel;
- (void)_ttm_task_cancel;
- (id)_ttm_completionLoggingParameters;
- (id)packedSegmentedUploadAppendCommandOperationDelegateQueue:(id)queue;
- (void)packedSegmentedUploadAppendCommandOperation:(id)operation didProgressSegmentedData:(float)data;
- (void)_ttm_task_updateProgress;
- (void)packedSegmentedUploadAppendCommandOperationDidSendSegmentedData:(id)data;
- (void)packedSegmentedUploadAppendCommandOperation:(id)operation didAppendSegmentedDataWithError:(id)error;
- (void)_ttm_task_noteTimeoutError;
- (void)_ttm_task_commandOperation:(id)operation didFailWithError:(id)error;
- (void)_ttm_task_commandOperationDidComplete:(id)complete;
- (_Bool)isSegmentSizeBackoffEnabled;

@end

#endif /* TTMAssetPackedSegmentedUploadParallelAppendOperation_h */
