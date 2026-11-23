//
#ifndef _TtC20ChatAttachmentViewerP33_53FE74410253FF2F33F000A4851786F425AttachmentFilePreviewItem_h
#define _TtC20ChatAttachmentViewerP33_53FE74410253FF2F33F000A4851786F425AttachmentFilePreviewItem_h
@import Foundation;

#include "QLPreviewItem-Protocol.h"

@class NSObject, NSString, NSURL;

@interface ChatAttachmentViewer.(AttachmentFilePreviewItem in _53FE74410253FF2F33F000A4851786F4) : NSObject <QLPreviewItem> // (Swift)

@property (nonatomic, readonly) NSURL *previewItemURL;
@property (nonatomic, readonly) NSString *previewItemTitle;

/* instance methods */
- (id)init;

@end

#endif /* _TtC20ChatAttachmentViewerP33_53FE74410253FF2F33F000A4851786F425AttachmentFilePreviewItem_h */
