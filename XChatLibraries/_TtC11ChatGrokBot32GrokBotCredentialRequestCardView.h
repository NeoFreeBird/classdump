//
#ifndef _TtC11ChatGrokBot32GrokBotCredentialRequestCardView_h
#define _TtC11ChatGrokBot32GrokBotCredentialRequestCardView_h
@import Foundation;

@class ChatGrokBot.GrokBotCardButton, ChatGrokBot.GrokBotConnectHeaderView, UIView, _$sSo7UILabelC, _$syycSg;

@interface ChatGrokBot.GrokBotCredentialRequestCardView : UIView { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotCardButton allowButton;
    __C.UILabel failureLabel;
    ChatGrokBot.GrokBotConnectHeaderView headerView;
    ChatGrokBot.GrokBotCardButton notNowButton;
    __C.UILabel noteLabel;
    __C.UILabel purposeLabel;
    __C.UILabel warningLabel;
    (() -> ())? onOpen;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC11ChatGrokBot32GrokBotCredentialRequestCardView_h */
