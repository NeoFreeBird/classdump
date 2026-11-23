//
#ifndef _TtC11ChatGrokBot24GrokBotLocalToolCardView_h
#define _TtC11ChatGrokBot24GrokBotLocalToolCardView_h
@import Foundation;

@class ChatGrokBot.GrokBotCardButton, ChatGrokBot.GrokBotCardReceiptLineView, ChatGrokBot.GrokBotConnectHeaderView, UIView, _$sSo6UIViewC, _$sSo7UILabelC, _$syycSg;

@interface ChatGrokBot.GrokBotLocalToolCardView : UIView { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotCardButton allowButton;
    __C.UILabel commandLabel;
    __C.UIView commandView;
    ChatGrokBot.GrokBotCardButton denyButton;
    ChatGrokBot.GrokBotConnectHeaderView headerView;
    __C.UILabel noteLabel;
    ChatGrokBot.GrokBotCardReceiptLineView receiptLineView;
    (() -> ())? onOpen;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC11ChatGrokBot24GrokBotLocalToolCardView_h */
