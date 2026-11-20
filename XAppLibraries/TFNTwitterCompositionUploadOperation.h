//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNTwitterCompositionUploadOperation_h
#define TFNTwitterCompositionUploadOperation_h
@import Foundation;

#include "TFNTwitterAccount.h"
#include "TFNTwitterComposition.h"
#include "TFNTwitterCompositionUpdateStatusOperation.h"
#include "TFNTwitterCompositionUploadAttachmentsOperationDelegate-Protocol.h"
#include "TFNTwitterCompositionUploadContext.h"
#include "TFNTwitterCompositionUploadOperationDelegate-Protocol.h"
#include "TFNTwitterCompositionUploadOptions.h"
#include "TFNTwitterCompositionUploadPollOperationDelegate-Protocol.h"
#include "TFSOperationDependencyResult-Protocol.h"
#include "_TtP8TAPTweet19TAPTweetPerspective_-Protocol.h"

@class NSError, NSHashTable, NSObject, NSOperationQueue, NSString, TFSDependentConcurrentOperation;
@protocol OS_dispatch_queue;

@interface TFNTwitterCompositionUploadOperation : TFSDependentConcurrentOperation <TFNTwitterCompositionUploadAttachmentsOperationDelegate, TFNTwitterCompositionUploadPollOperationDelegate, TFSOperationDependencyResult> {
    /* instance variables */
    NSError *_error;
}

@property (readonly, nonatomic) TFNTwitterComposition *composition;
@property (readonly, nonatomic) TFNTwitterAccount *account;
@property (readonly, copy, nonatomic) TFNTwitterCompositionUploadOptions *options;
@property (retain, nonatomic) TFNTwitterCompositionUploadContext *context;
@property (readonly, nonatomic) NSOperationQueue *operationQueue;
@property (retain, nonatomic) NSHashTable *weakOperationsToCancel;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *backgroundTaskSessionQueue;
@property (nonatomic) unsigned long long backgroundTaskIdentifier;
@property (nonatomic) _Bool backgroundTaskSessionExecuting;
@property (weak) TFNTwitterCompositionUpdateStatusOperation *updateStatusOperation;
@property (retain) id <TAPTweet.TAPTweetPerspective> resultStatus;
@property unsigned long long resultState;
@property (retain) NSError *resultError;
@property (retain) NSError *cancelError;
@property (copy) NSString *failedOperationName;
@property double progress;
@property (nonatomic) long long uploadPhase;
@property (nonatomic) unsigned long long processingAttachmentCount;
@property (nonatomic) unsigned long long processingVideoCount;
@property (weak, nonatomic) id <TFNTwitterCompositionUploadOperationDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithComposition:(id)composition account:(id)account options:(id)options;
- (void)cancelWithError:(id)error;
- (void)run;
- (void)cancel;
- (void)completeOperation;
- (void)_tfn_notification_applicationDidBecomeActive:(id)active;
- (void)_tfn_background_beginBackgroundTaskSession;
- (void)_tfn_background_suspendBackgroundTaskSession;
- (void)_tfn_background_resumeBackgroundTaskSession;
- (void)_tfn_background_endBackgroundTaskSession;
- (void)_tfn_backgroundTaskSession_beginBackgroundTask;
- (void)_tfn_backgroundTaskSession_endBackgroundTask;
- (void)_tfn_main_run;
- (void)_tfn_main_initializeContext;
- (void)_tfn_main_enqueueOperations;
- (id)_tfn_background_updateResultStateOperation;
- (void)_tfn_background_updateResultState;
- (id)_tfn_background_completeOperationOperation;
- (void)compositionUploadAttachmentsOperation:(id)operation didUploadAttachment:(id)attachment;
- (void)compositionUploadAttachmentsOperation:(id)operation attachmentProgressDidChange:(id)change;
- (double)_tfn_main_attachmentsProgress;
- (long long)_tfn_main_attachmentsUploadPhaseWithProcessingAttachmentCount:(unsigned long long *)count processingVideoCount:(unsigned long long *)count;
- (void)_tfn_main_updateProgressFromAttachments;
- (void)_tfn_main_updateProgress:(double)progress phase:(long long)phase processingAttachmentCount:(unsigned long long)count processingVideoCount:(unsigned long long)count;
- (void)compositionUploadPollOperation:(id)operation didUploadPoll:(id)poll;
- (_Bool)isBackgroundTaskSessionExecuting;

@end

#endif /* TFNTwitterCompositionUploadOperation_h */
