//
#ifndef _TtC11ChatGrokBot23GrokBotAgentCommRowView_h
#define _TtC11ChatGrokBot23GrokBotAgentCommRowView_h
@import Foundation;

@class UIView, _$sSa -> ChatGrokBot.GrokBotAgentCommAvatarView, _$sSo7UILabelC, _$sSo8UIButtonC, _$syycSg;

@interface ChatGrokBot.GrokBotAgentCommRowView : UIView { // (Swift)
    /* instance variables */
    __C.UIButton contentButton;
    __C.UILabel captionLabel;
    __C.UILabel peerLabel;
    Swift.Array -> ChatGrokBot.GrokBotAgentCommAvatarView avatarViews;
    (() -> ())? onTap;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)didTapContent;

@end

#endif /* _TtC11ChatGrokBot23GrokBotAgentCommRowView_h */
