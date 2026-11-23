//
#ifndef TFNTwitterCompositionUploadAttachmentsOperation_h
#define TFNTwitterCompositionUploadAttachmentsOperation_h
@import Foundation;

#include "TFNTwitterCompositionUploadAttachmentsOperationDelegate-Protocol.h"
#include "TFNTwitterCompositionUploadContext.h"
#include "TFSOperationDependencyResult-Protocol.h"

@class NSArray, NSError, NSString, TFSDependentConcurrentOperation;

@interface TFNTwitterCompositionUploadAttachmentsOperation : TFSDependentConcurrentOperation <TFSOperationDependencyResult> {
    /* instance variables */
    NSError *_error;
}

@property (readonly, nonatomic) NSArray *attachments;
@property (readonly, nonatomic) TFNTwitterCompositionUploadContext *context;
@property (retain, nonatomic) NSArray *uploadingAttachments;
@property (retain, nonatomic) NSError *firstError;
@property (nonatomic) _Bool uploading;
@property unsigned long long resultState;
@property (retain) NSError *resultError;
@property (weak, nonatomic) id <TFNTwitterCompositionUploadAttachmentsOperationDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithAttachments:(id)attachments context:(id)context;
- (void)dealloc;
- (void)run;
- (void)cancel;
- (void)_tfn_main_run;
- (void)_tfn_main_observeAttachmentUploadNotifications:(id)notifications;
- (void)_tfn_main_cancel;
- (id)_tfn_main_attachmentForUploadAttachment:(id)attachment;
- (void)_tfn_main_notification_attachmentUploadDidStart:(id)start;
- (void)_tfn_main_notification_attachmentUpdateDidProgress:(id)progress;
- (void)_tfn_main_notification_attachmentUploadDidSucceed:(id)succeed;
- (void)_tfn_main_notification_attachmentUploadDidFail:(id)fail;
- (void)_tfn_main_notification_attachmentUploadDidCancel:(id)cancel;
- (void)_tfn_main_attachmentUploadDidEnd;
- (void)_tfn_main_updateResultStatus;
- (_Bool)isUploading;

@end

#endif /* TFNTwitterCompositionUploadAttachmentsOperation_h */
