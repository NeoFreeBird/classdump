//
#ifndef _TtC11ChatGrokBot20GrokBotOfferCardView_h
#define _TtC11ChatGrokBot20GrokBotOfferCardView_h
@import Foundation;

@class ChatGrokBot.GrokBotCardButton, ChatGrokBot.GrokBotCardReceiptLineView, ChatGrokBot.GrokBotConnectHeaderView, ChatGrokBot.GrokBotOfferCardView.TappedAction ?, UIView, _$sSo7UILabelC;

@interface ChatGrokBot.GrokBotOfferCardView : UIView { // (Swift)
    /* instance variables */
    __C.UILabel bodyLabel;
    ChatGrokBot.GrokBotConnectHeaderView headerView;
    ChatGrokBot.GrokBotCardButton primaryButton;
    ChatGrokBot.GrokBotCardReceiptLineView receiptLineView;
    ChatGrokBot.GrokBotCardButton secondaryButton;
    ChatGrokBot.GrokBotOfferCardView.TappedAction ? tappedAction;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC11ChatGrokBot20GrokBotOfferCardView_h */
