//
#ifndef _TtC11ChatGrokBot25GrokBotShoppingPayBarView_h
#define _TtC11ChatGrokBot25GrokBotShoppingPayBarView_h
@import Foundation;

@class ChatGrokBot.GrokBotCardButton, ChatGrokBot.GrokBotCartAddControlView, ChatGrokBot.GrokBotShoppingPayBarView.Cart ?, UIView, _$sSo6UIViewC, _$sSo7UILabelC, _$syycSg;

@interface ChatGrokBot.GrokBotShoppingPayBarView : UIView { // (Swift)
    /* instance variables */
    (() -> ())? onPay;
    __C.UIView backgroundView;
    ChatGrokBot.GrokBotCartAddControlView cartControlView;
    ChatGrokBot.GrokBotCardButton payButton;
    __C.UILabel priceLabel;
    __C.UILabel sellerLabel;
    ChatGrokBot.GrokBotShoppingPayBarView.Cart ? cart;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)traitCollectionDidChange:(id)change;

@end

#endif /* _TtC11ChatGrokBot25GrokBotShoppingPayBarView_h */
