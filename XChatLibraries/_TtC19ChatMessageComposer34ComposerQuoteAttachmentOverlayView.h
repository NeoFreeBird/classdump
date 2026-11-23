//
#ifndef _TtC19ChatMessageComposer34ComposerQuoteAttachmentOverlayView_h
#define _TtC19ChatMessageComposer34ComposerQuoteAttachmentOverlayView_h
@import Foundation;

@class ChatMessageComposer.ComposerQuoteAttachmentOverlayIconPosition, UIView, _$s6XIcons5XIconOMn ?, _$sSo11UIImageViewCSg, _$sSo6UIViewC;

@interface ChatMessageComposer.ComposerQuoteAttachmentOverlayView : UIView { // (Swift)
    /* instance variables */
    nominal type descriptor for XIcons.XIcon ? icon;
    ChatMessageComposer.ComposerQuoteAttachmentOverlayIconPosition iconPosition;
    __C.UIImageView? $__lazy_storage_$_bottomTrailingImageView;
    __C.UIView bottomTrailingBackgroundView;
    __C.UIImageView? $__lazy_storage_$_centeredImageView;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;

@end

#endif /* _TtC19ChatMessageComposer34ComposerQuoteAttachmentOverlayView_h */
