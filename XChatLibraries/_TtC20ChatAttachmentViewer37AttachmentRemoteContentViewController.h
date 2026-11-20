//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC20ChatAttachmentViewer37AttachmentRemoteContentViewController_h
#define _TtC20ChatAttachmentViewer37AttachmentRemoteContentViewController_h
@import Foundation;

@class ChatAttachmentViewer.AttachmentContentViewControlling _$s_So16UIViewControllerCXcSg, ChatAttachmentViewer.AttachmentRemoteContentView ?, Swift.Bool, UIViewController, _$s12CoreGraphics7CGFloatVMn, _$s7Combine12AnyPublisherVMn ChatAttachmentViewer.AttachmentFileState _$ss5NeverOMn, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSi, _$sSo7UIImageCSg, _$sySbcSg, __C.UIEdgeInsets;

@interface ChatAttachmentViewer.AttachmentRemoteContentViewController : UIViewController { // (Swift)
    /* instance variables */
    Swift.Int index;
    ((Swift.Bool) -> ())? mediaZoomActiveChanged;
    ChatAttachmentViewer.AttachmentContentViewControlling _$s_So16UIViewControllerCXc nominal type descriptor for Foundation.URL function type (escaping) contentBuilder;
    ChatAttachmentViewer.AttachmentContentViewControlling _$s_So16UIViewControllerCXcSg contentViewController;
    nominal type descriptor for Combine.AnyPublisher ChatAttachmentViewer.AttachmentFileState nominal type descriptor for Swift.Never fileState;
    Swift.Bool hasContentMedia;
    ChatAttachmentViewer.AttachmentRemoteContentView ? $__lazy_storage_$_internalView;
    __C.UIEdgeInsets mediaContentInsets;
    nominal type descriptor for CoreGraphics.CGFloat mediaCornerRadius;
    __C.UIImage? placeholderImage;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable subscriptions;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)loadView;
- (void)viewDidLoad;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC20ChatAttachmentViewer37AttachmentRemoteContentViewController_h */
