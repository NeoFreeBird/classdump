//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC16ChatConversation17MessageAvatarView_h
#define _TtC16ChatConversation17MessageAvatarView_h
@import Foundation;

@class ChatConversation.MessageAvatarView.Configuration ?, ChatUI.ScrollViewAwareTapGestureRecognizer ?, UIView, _$s7Combine11CancellableMp ?, _$sSo11UIImageViewC, _$sSo12UIScrollViewCSgXw, _$syycSg;

@interface ChatConversation.MessageAvatarView : UIView { // (Swift)
    /* instance variables */
    __C.UIImageView imageView;
    (() -> ())? onTap;
    weak __C.UIScrollView? scrollView;
    protocol descriptor for Combine.Cancellable ? imageTask;
    ChatConversation.MessageAvatarView.Configuration ? configuration;
    ChatUI.ScrollViewAwareTapGestureRecognizer ? $__lazy_storage_$_tapRecognizer;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)handleTap;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC16ChatConversation17MessageAvatarView_h */
