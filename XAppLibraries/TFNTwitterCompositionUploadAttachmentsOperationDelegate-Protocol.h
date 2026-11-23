//
#ifndef TFNTwitterCompositionUploadAttachmentsOperationDelegate_Protocol_h
#define TFNTwitterCompositionUploadAttachmentsOperationDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNTwitterCompositionUploadAttachmentsOperationDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)compositionUploadAttachmentsOperation:(id)operation didStartUploadAttachment:(id)attachment;
- (void)compositionUploadAttachmentsOperation:(id)operation didUploadAttachment:(id)attachment;
- (void)compositionUploadAttachmentsOperation:(id)operation didFailUploadAttachment:(id)attachment error:(id)error;
- (void)compositionUploadAttachmentsOperation:(id)operation didCancelUploadAttachment:(id)attachment;
- (void)compositionUploadAttachmentsOperation:(id)operation attachmentProgressDidChange:(id)change;

@end

#endif /* TFNTwitterCompositionUploadAttachmentsOperationDelegate_Protocol_h */
