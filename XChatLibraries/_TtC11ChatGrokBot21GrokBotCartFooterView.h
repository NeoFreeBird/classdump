//
#ifndef _TtC11ChatGrokBot21GrokBotCartFooterView_h
#define _TtC11ChatGrokBot21GrokBotCartFooterView_h
@import Foundation;

@class ChatGrokBot.GrokBotCardButton, ChatGrokBot.GrokBotCartCheckoutBarView, UIView, _$sSo11UIStackViewC, _$sSo7UILabelC, _$syycSg;

@interface ChatGrokBot.GrokBotCartFooterView : UIView { // (Swift)
    /* instance variables */
    (() -> ())? onRetry;
    ChatGrokBot.GrokBotCartCheckoutBarView checkoutBarView;
    __C.UILabel ownBotLabel;
    __C.UILabel rereadFailureLabel;
    __C.UIStackView rereadFailureStackView;
    ChatGrokBot.GrokBotCardButton retryButton;
    __C.UIStackView stackView;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC11ChatGrokBot21GrokBotCartFooterView_h */
