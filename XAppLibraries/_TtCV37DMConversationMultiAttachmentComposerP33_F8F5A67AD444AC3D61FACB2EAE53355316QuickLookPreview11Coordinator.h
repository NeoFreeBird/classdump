//
#ifndef _TtCV37DMConversationMultiAttachmentComposerP33_F8F5A67AD444AC3D61FACB2EAE53355316QuickLookPreview11Coordinator_h
#define _TtCV37DMConversationMultiAttachmentComposerP33_F8F5A67AD444AC3D61FACB2EAE53355316QuickLookPreview11Coordinator_h
@import Foundation;

#include "QLPreviewControllerDataSource-Protocol.h"

@class NSObject;

@interface DMConversationMultiAttachmentComposer.(QuickLookPreview in _F8F5A67AD444AC3D61FACB2EAE533553).Coordinator : NSObject <QLPreviewControllerDataSource> { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 url;
}

/* instance methods */
- (long long)numberOfPreviewItemsInPreviewController:(id)controller;
- (id)previewController:(id)controller previewItemAtIndex:(long long)index;
- (id)init;

@end

#endif /* _TtCV37DMConversationMultiAttachmentComposerP33_F8F5A67AD444AC3D61FACB2EAE53355316QuickLookPreview11Coordinator_h */
