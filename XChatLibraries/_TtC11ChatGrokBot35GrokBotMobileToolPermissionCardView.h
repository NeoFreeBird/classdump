//
#ifndef _TtC11ChatGrokBot35GrokBotMobileToolPermissionCardView_h
#define _TtC11ChatGrokBot35GrokBotMobileToolPermissionCardView_h
@import Foundation;

@class ChatGrokBot.GrokBotCardButton, ChatGrokBot.GrokBotCardReceiptFooterView, ChatGrokBot.GrokBotCardReceiptLineView, ChatGrokBot.GrokBotConnectHeaderView, UIView, _$sSo7UILabelC, _$syycSg;

@interface ChatGrokBot.GrokBotMobileToolPermissionCardView : UIView { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotConnectHeaderView headerView;
    __C.UILabel noteLabel;
    ChatGrokBot.GrokBotCardReceiptFooterView receiptFooterView;
    ChatGrokBot.GrokBotCardReceiptLineView receiptLineView;
    ChatGrokBot.GrokBotCardButton actionButton;
    (() -> ())? receiptToggleAction;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (_Bool)accessibilityActivate;

@end

#endif /* _TtC11ChatGrokBot35GrokBotMobileToolPermissionCardView_h */
