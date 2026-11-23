//
#ifndef _TtC16ChatConversation23PinnedMessagesStateView_h
#define _TtC16ChatConversation23PinnedMessagesStateView_h
@import Foundation;

@class ChatConversation.PinnedMessagesStateViewListener ?, UIView, _$sSo11UIImageViewC, _$sSo11UIStackViewC, _$sSo7UILabelC, _$sSo8UIButtonC;

@interface ChatConversation.PinnedMessagesStateView : UIView { // (Swift)
    /* instance variables */
    ChatConversation.PinnedMessagesStateViewListener ? listener;
    __C.UIImageView iconView;
    __C.UILabel messageLabel;
    __C.UIButton retryButton;
    __C.UIStackView stackView;
    __C.UILabel titleLabel;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)didTapRetry;

@end

#endif /* _TtC16ChatConversation23PinnedMessagesStateView_h */
