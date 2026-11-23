//
#ifndef _TtC11ChatGrokBot23GrokBotPurchaseCardView_h
#define _TtC11ChatGrokBot23GrokBotPurchaseCardView_h
@import Foundation;

@class ChatGrokBot.GrokBotCardButton, ChatGrokBot.GrokBotCardReceiptLineView, ChatGrokBot.GrokBotConnectHeaderView, ChatGrokBot.GrokBotPurchaseRowListView, Swift.Bool, UIView, _$sSo7UILabelC, _$syycSg;

@interface ChatGrokBot.GrokBotPurchaseCardView : UIView { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotCardButton addCardButton;
    ChatGrokBot.GrokBotCardButton approveButton;
    ChatGrokBot.GrokBotCardButton declineButton;
    ChatGrokBot.GrokBotConnectHeaderView headerView;
    ChatGrokBot.GrokBotConnectHeaderView linkHeaderView;
    __C.UILabel noteLabel;
    ChatGrokBot.GrokBotCardButton payAnotherWayButton;
    ChatGrokBot.GrokBotCardReceiptLineView receiptLineView;
    ChatGrokBot.GrokBotPurchaseRowListView rowListView;
    ChatGrokBot.GrokBotCardButton viewReceiptButton;
    Swift.Bool hasDetails;
    (() -> ())? onOpen;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC11ChatGrokBot23GrokBotPurchaseCardView_h */
