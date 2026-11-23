//
#ifndef _TtC16ChatConversation15MessageCallView_h
#define _TtC16ChatConversation15MessageCallView_h
@import Foundation;

@class ChatModels.ChatMessageCallCard ?, ChatUI.ScrollViewAwareTapGestureRecognizer ?, UIView, _$sSo11UIImageViewC, _$sSo12UIScrollViewCSgXw, _$sSo6UIViewC, _$sSo7UILabelC, _$syycSg;

@interface ChatConversation.MessageCallView : UIView { // (Swift)
    /* instance variables */
    (() -> ())? onTap;
    weak __C.UIScrollView? scrollView;
    __C.UIView containerView;
    __C.UIImageView iconImageView;
    __C.UILabel titleLabel;
    __C.UILabel subtitleLabel;
    ChatModels.ChatMessageCallCard ? configuration;
    ChatUI.ScrollViewAwareTapGestureRecognizer ? $__lazy_storage_$_tapRecognizer;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)handleTap;

@end

#endif /* _TtC16ChatConversation15MessageCallView_h */
