//
#ifndef _TtC11ChatGrokBot32GrokBotLinkOrderApprovalCardView_h
#define _TtC11ChatGrokBot32GrokBotLinkOrderApprovalCardView_h
@import Foundation;

@class ChatGrokBot.GrokBotCardButton, ChatGrokBot.GrokBotCardTitleBarView, Swift.Bool, UIView, _$sSo7UILabelC;

@interface ChatGrokBot.GrokBotLinkOrderApprovalCardView : UIView { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotCardButton confirmButton;
    ChatGrokBot.GrokBotCardTitleBarView titleBarView;
    __C.UILabel titleLabel;
    Swift.Bool hasLinkPage;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC11ChatGrokBot32GrokBotLinkOrderApprovalCardView_h */
