//
#ifndef TTMAssetPackedSegmentedUploadStatusOperation_h
#define TTMAssetPackedSegmentedUploadStatusOperation_h
@import Foundation;

#include "TFSOperationDependencyResult-Protocol.h"
#include "TTMAssetPackedSegmentedUploadContext.h"
#include "TTMAssetPackedSegmentedUploadStatusCommandOperationDelegate-Protocol.h"
#include "TTMAssetPackedSegmentedUploadStatusOperationDelegate-Protocol.h"

@class NSError, NSHashTable, NSObject, NSOperationQueue, NSString, TFSDependentConcurrentOperation, TFSTwitterMediaProcessingInformation;
@protocol OS_dispatch_queue;

@interface TTMAssetPackedSegmentedUploadStatusOperation : TFSDependentConcurrentOperation <TTMAssetPackedSegmentedUploadStatusCommandOperationDelegate, TFSOperationDependencyResult> {
    /* instance variables */
    unsigned long long _pollCount;
}

@property (readonly, nonatomic) TTMAssetPackedSegmentedUploadContext *context;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *taskQueue;
@property (readonly, nonatomic) NSOperationQueue *operationQueue;
@property (readonly, nonatomic) NSHashTable *weakOperationsToCancel;
@property unsigned long long resultState;
@property (retain) NSError *resultError;
@property (nonatomic) _Bool didStartOp;
@property _Bool didLogStart;
@property (weak, nonatomic) id <TTMAssetPackedSegmentedUploadStatusOperationDelegate> delegate;
@property (copy) NSString *mediaID;
@property (retain) TFSTwitterMediaProcessingInformation *mediaProcessingInformation;
@property _Bool disableFailureLogging;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithContext:(id)context;
- (void)run;
- (void)_ttm_task_enqueueCommandOperationWithDelay:(double)delay;
- (void)cancel;
- (void)_ttm_task_cancel;
- (void)_ttm_logStartIfNeeded;
- (id)_ttm_loggingInfoParameters;
- (void)packedSegmentedUploadStatusCommandOperation:(id)operation didCompleteWithMediaInformation:(id)information error:(id)error;
- (void)_ttm_main_packedSegmentedUploadMediaProcessingDidProgressWithProcessingInformation:(id)information;
- (void)_ttm_main_packedSegmentedUploadMediaProcessingDidCompleteWithMediaInformation:(id)information;
- (void)_ttm_main_packedSegmentedUploadMediaProcessingDidFailWithError:(id)error;

@end

#endif /* TTMAssetPackedSegmentedUploadStatusOperation_h */
