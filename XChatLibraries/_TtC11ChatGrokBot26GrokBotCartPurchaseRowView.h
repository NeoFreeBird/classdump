//
#ifndef _TtC11ChatGrokBot26GrokBotCartPurchaseRowView_h
#define _TtC11ChatGrokBot26GrokBotCartPurchaseRowView_h
@import Foundation;

@class ChatGrokBot.GrokBotCardButton, ChatGrokBot.GrokBotCartAddControlView, ChatGrokBot.GrokBotCartItem ?, ChatGrokBot.GrokBotCartStore ?, Swift.Bool, UIView, _$sSS, _$sSh -> _$s7Combine14AnyCancellableCMn, _$syycSg;

@interface ChatGrokBot.GrokBotCartPurchaseRowView : UIView { // (Swift)
    /* instance variables */
    (() -> ())? onAction;
    ChatGrokBot.GrokBotCardButton actionButton;
    ChatGrokBot.GrokBotCartAddControlView cartControlView;
    ChatGrokBot.GrokBotCartStore ? cart;
    Swift.Bool isCartOffered;
    ChatGrokBot.GrokBotCartItem ? item;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable subscriptions;
    Swift.String title;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC11ChatGrokBot26GrokBotCartPurchaseRowView_h */
