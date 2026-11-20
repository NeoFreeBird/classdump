//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC16ChatConversation27MessageContentContainerView_h
#define _TtC16ChatConversation27MessageContentContainerView_h
@import Foundation;

@class ChatConversation.MessageContentView, ChatConversation.ScreenshotProtectionView ?, ChatUI.AttachmentMediaService ?, ChatUtilities.AttachmentMediaRegistry, ChatUtilities.AttachmentMediaStateStream, Swift.Bool, UIView, _$s12CoreGraphics7CGFloatVMn;

@interface ChatConversation.MessageContentContainerView : UIView { // (Swift)
    /* instance variables */
    ChatConversation.MessageContentView contentView;
    nominal type descriptor for CoreGraphics.CGFloat maxWidth;
    ChatConversation.ScreenshotProtectionView ? screenshotProtectionView;
    ChatUtilities.AttachmentMediaRegistry attachmentMediaRegistry;
    ChatUtilities.AttachmentMediaStateStream mediaStateStream;
    ChatUI.AttachmentMediaService ? attachmentMediaService;
    Swift.Bool isScreenCaptureBlockingEnabled;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC16ChatConversation27MessageContentContainerView_h */
