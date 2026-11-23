//
#ifndef _TtC16ChatConversation30TypingIndicatorCellContentView_h
#define _TtC16ChatConversation30TypingIndicatorCellContentView_h
@import Foundation;

@class ChatConversation.MessageAvatarView, ChatConversation.TypingIndicatorCellContentView.Configuration ?, ChatUI.ChatImageLoading ?, UIView, _$sSa -> ChatConversation.TypingIndicatorAvatar, _$sSi, _$sSo11UIImageViewC, _$sSo6UIViewC, _$sSo7NSTimerCSg;

@interface ChatConversation.TypingIndicatorCellContentView : UIView { // (Swift)
    /* instance variables */
    __C.UIView avatarContainerView;
    ChatConversation.MessageAvatarView avatarView;
    __C.UIView bubbleView;
    __C.UIImageView ellipsisImageView;
    ChatUI.ChatImageLoading ? imageLoader;
    ChatConversation.TypingIndicatorCellContentView.Configuration ? configuration;
    Swift.Array -> ChatConversation.TypingIndicatorAvatar avatars;
    Swift.Int currentAvatarIndex;
    __C.NSTimer? cycleTimer;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)traitCollectionDidChange:(id)change;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC16ChatConversation30TypingIndicatorCellContentView_h */
