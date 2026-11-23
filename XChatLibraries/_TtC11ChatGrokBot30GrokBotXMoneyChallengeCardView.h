//
#ifndef _TtC11ChatGrokBot30GrokBotXMoneyChallengeCardView_h
#define _TtC11ChatGrokBot30GrokBotXMoneyChallengeCardView_h
@import Foundation;

@class ChatGrokBot.GrokBotCardButton, ChatGrokBot.GrokBotCardTitleBarView, Swift.Bool, UIView, _$sSo7UILabelC;

@interface ChatGrokBot.GrokBotXMoneyChallengeCardView : UIView { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotCardButton confirmButton;
    __C.UILabel descriptionLabel;
    ChatGrokBot.GrokBotCardTitleBarView titleBarView;
    __C.UILabel titleLabel;
    Swift.Bool isPending;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC11ChatGrokBot30GrokBotXMoneyChallengeCardView_h */
