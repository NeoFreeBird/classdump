//
#ifndef TFNTwitterCompositionStoreAttachmentsForStatusOperation_h
#define TFNTwitterCompositionStoreAttachmentsForStatusOperation_h
@import Foundation;

#include "TAPTwitterCompositionTweetPerspective-Protocol.h"
#include "TFNTwitterCompositionUpdateStatusDependency-Protocol.h"
#include "TFNTwitterCompositionUploadContext.h"

@class NSArray, NSOperationQueue, NSString, TFSDependentConcurrentOperation;

@interface TFNTwitterCompositionStoreAttachmentsForStatusOperation : TFSDependentConcurrentOperation <TFNTwitterCompositionUpdateStatusDependency>

@property (readonly, nonatomic) NSArray *attachments;
@property (readonly, nonatomic) TFNTwitterCompositionUploadContext *context;
@property (readonly, nonatomic) NSOperationQueue *operationQueue;
@property (retain) id <TAPTwitterCompositionTweetPerspective> status;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithAttachments:(id)attachments context:(id)context;
- (void)dealloc;
- (void)run;
- (void)_tfn_main_run;
- (id)_tfn_main_createStoreImageOperationWithAttachment:(id)attachment mediaEntity:(id)entity;
- (id)_tfn_main_createStoreVideoOperationWithAttachment:(id)attachment mediaEntity:(id)entity;
- (id)_tfn_background_createCompleteOperationsOperation;

@end

#endif /* TFNTwitterCompositionStoreAttachmentsForStatusOperation_h */
