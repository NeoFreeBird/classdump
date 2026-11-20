//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC19ChatMessageComposer17ComposerQuoteView_h
#define _TtC19ChatMessageComposer17ComposerQuoteView_h
@import Foundation;

@class ChatMessageComposer.ComposerCloseButton, ChatMessageComposer.ComposerQuoteAttachmentView ?, ChatMessageComposer.MediaImageService, ChatMessageComposer.MessageComposerQuoteViewModel ?, ChatUI.AffiliateBadgeView, NSArray, UIView, _$sSo22UIAccessibilityElementCSg, _$sSo7UILabelCSg;

@interface ChatMessageComposer.ComposerQuoteView : UIView { // (Swift)
    /* instance variables */
    ChatMessageComposer.MessageComposerQuoteViewModel ? viewModel;
    __C.UILabel? $__lazy_storage_$_titleLabel;
    __C.UILabel? $__lazy_storage_$_subtitleLabel;
    ChatMessageComposer.ComposerCloseButton closeButton;
    ChatMessageComposer.MediaImageService mediaImageService;
    ChatMessageComposer.ComposerQuoteAttachmentView ? $__lazy_storage_$_attachmentView;
    ChatUI.AffiliateBadgeView badgeView;
    __C.UIAccessibilityElement? $__lazy_storage_$_contentAccessibilityElement;
}

@property (nonatomic, copy) NSArray *accessibilityElements;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (_Bool)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC19ChatMessageComposer17ComposerQuoteView_h */
