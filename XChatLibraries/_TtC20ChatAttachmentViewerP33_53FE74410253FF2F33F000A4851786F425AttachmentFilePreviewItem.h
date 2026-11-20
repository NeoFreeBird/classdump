//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
