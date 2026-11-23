//
#ifndef _TtC11ChatGrokBot20GrokBotCartEmptyView_h
#define _TtC11ChatGrokBot20GrokBotCartEmptyView_h
@import Foundation;

@class ChatGrokBot.GrokBotCardButton, UIView, _$sSo11UIStackViewC, _$sSo23UIActivityIndicatorViewC, _$sSo7UILabelC, _$syycSg;

@interface ChatGrokBot.GrokBotCartEmptyView : UIView { // (Swift)
    /* instance variables */
    (() -> ())? onRetry;
    __C.UILabel label;
    ChatGrokBot.GrokBotCardButton retryButton;
    __C.UIActivityIndicatorView spinner;
    __C.UIStackView stackView;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC11ChatGrokBot20GrokBotCartEmptyView_h */
