//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC20ChatAttachmentViewer34AttachmentGifContentViewController_h
#define _TtC20ChatAttachmentViewer34AttachmentGifContentViewController_h
@import Foundation;

@class ChatAttachmentViewer.ZoomableMediaScrollView ?, UIViewController, _$s10Foundation3URLVMn, _$s12CoreGraphics7CGFloatVMn, _$s4XGif14GifImageLoaderCMn, _$s4XGif26DisplayLinkAnimatedGifViewCMn, _$s7Combine11CancellableMp ?, _$sSi, _$sSo7UIImageCSg, _$sySbcSg;

@interface ChatAttachmentViewer.AttachmentGifContentViewController : UIViewController { // (Swift)
    /* instance variables */
    Swift.Int index;
    ((Swift.Bool) -> ())? mediaZoomActiveChanged;
    nominal type descriptor for Foundation.URL fileURL;
    nominal type descriptor for CoreGraphics.CGFloat mediaCornerRadius;
    nominal type descriptor for XGif.GifImageLoader gifImageLoader;
    nominal type descriptor for XGif.DisplayLinkAnimatedGifView gifView;
    ChatAttachmentViewer.ZoomableMediaScrollView ? $__lazy_storage_$_scrollView;
    protocol descriptor for Combine.Cancellable ? loadCancellable;
    __C.UIImage? loadedImage;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC20ChatAttachmentViewer34AttachmentGifContentViewController_h */
