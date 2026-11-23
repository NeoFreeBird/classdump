//
#ifndef _TtC7XDrafts18DraftMediaUploader_h
#define _TtC7XDrafts18DraftMediaUploader_h
@import Foundation;

#include "TFNTwitterCompositionUploadAttachmentsOperationDelegate-Protocol.h"

@class NSObject, _$sSo16NSOperationQueueC, _$sySo8TTMAssetCc;

@interface XDrafts.DraftMediaUploader : NSObject <TFNTwitterCompositionUploadAttachmentsOperationDelegate> { // (Swift)
    /* instance variables */
    __C.NSOperationQueue operationQueue;
    (__C.TTMAsset) -> () onAttachmentUploaded;
}

/* instance methods */
- (void)compositionUploadAttachmentsOperation:(id)operation didUploadAttachment:(id)attachment;
- (id)init;

@end

#endif /* _TtC7XDrafts18DraftMediaUploader_h */
