//
#ifndef _TtC20ChatAttachmentViewer36AttachmentImageContentViewController_h
#define _TtC20ChatAttachmentViewer36AttachmentImageContentViewController_h
@import Foundation;

@class ChatAttachmentViewer.AttachmentViewerItem.Shape, ChatAttachmentViewer.ZoomableMediaScrollView ?, UIViewController, _$s10Foundation3URLVMn, _$s12CoreGraphics7CGFloatVMn, _$sScTyyt _$ss5NeverOMn ?, _$sSi, _$sSo11UIImageViewC, _$sySbcSg;

@interface ChatAttachmentViewer.AttachmentImageContentViewController : UIViewController { // (Swift)
    /* instance variables */
    Swift.Int index;
    ((Swift.Bool) -> ())? mediaZoomActiveChanged;
    nominal type descriptor for Foundation.URL fileURL;
    ChatAttachmentViewer.AttachmentViewerItem.Shape shape;
    nominal type descriptor for CoreGraphics.CGFloat mediaCornerRadius;
    __C.UIImageView imageView;
    ChatAttachmentViewer.ZoomableMediaScrollView ? $__lazy_storage_$_scrollView;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? decodeTask;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC20ChatAttachmentViewer36AttachmentImageContentViewController_h */
