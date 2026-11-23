//
#ifndef T1MediaAttachmentViewRenderingDelegate_Protocol_h
#define T1MediaAttachmentViewRenderingDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1MediaAttachmentViewRenderingDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)attachmentView:(id)view renderPreviewFoundMediaAttachment:(id)attachment withOptions:(id)options firstFrameImageCompletion:(id /* block */)completion completion:(id /* block */)completion;
- (void)attachmentView:(id)view renderAnimatedImageAttachment:(id)attachment withOptions:(id)options completion:(id /* block */)completion;
- (void)attachmentView:(id)view renderPreviewPlayerMediaMediaAsset:(id)asset withOptions:(id)options completion:(id /* block */)completion;
- (void)attachmentView:(id)view renderAttachment:(id)attachment withOptions:(id)options completion:(id /* block */)completion;

@end

#endif /* T1MediaAttachmentViewRenderingDelegate_Protocol_h */
