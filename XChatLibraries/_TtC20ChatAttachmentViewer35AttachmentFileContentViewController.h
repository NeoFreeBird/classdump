//
#ifndef _TtC20ChatAttachmentViewer35AttachmentFileContentViewController_h
#define _TtC20ChatAttachmentViewer35AttachmentFileContentViewController_h
@import Foundation;

#include "QLPreviewControllerDataSource-Protocol.h"

@class ChatAttachmentViewer.AttachmentFilePreviewItem, UIViewController, _$s10Foundation3URLVMn, _$s12CoreGraphics7CGFloatVMn, _$sSi, _$sSo19QLPreviewControllerC, _$sSo6UIViewCSg, __C.UIEdgeInsets;

@interface ChatAttachmentViewer.AttachmentFileContentViewController : UIViewController <QLPreviewControllerDataSource> { // (Swift)
    /* instance variables */
    Swift.Int index;
    __C.UIView? contentView;
    nominal type descriptor for Foundation.URL fileURL;
    nominal type descriptor for CoreGraphics.CGFloat mediaCornerRadius;
    ChatAttachmentViewer.AttachmentFilePreviewItem previewItem;
    __C.QLPreviewController previewController;
    __C.UIEdgeInsets mediaContentInsets;
}

/* instance methods */
- (long long)numberOfPreviewItemsInPreviewController:(id)controller;
- (id)previewController:(id)controller previewItemAtIndex:(long long)index;
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC20ChatAttachmentViewer35AttachmentFileContentViewController_h */
