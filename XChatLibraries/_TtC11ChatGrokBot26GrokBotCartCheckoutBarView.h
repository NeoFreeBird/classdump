//
#ifndef _TtC11ChatGrokBot26GrokBotCartCheckoutBarView_h
#define _TtC11ChatGrokBot26GrokBotCartCheckoutBarView_h
@import Foundation;

@class ChatGrokBot.GrokBotCardButton, UIView, _$sSo11UIImageViewC, _$sSo11UIStackViewC, _$sSo18NSLayoutConstraintCSg, _$sSo6UIViewC, _$sSo7UILabelC, _$syycSg;

@interface ChatGrokBot.GrokBotCartCheckoutBarView : UIView { // (Swift)
    /* instance variables */
    (() -> ())? onCheckout;
    __C.UIView backgroundView;
    ChatGrokBot.GrokBotCardButton checkoutButton;
    __C.UILabel countLabel;
    __C.UIImageView iconView;
    __C.UIStackView summaryStackView;
    __C.UILabel totalLabel;
    __C.NSLayoutConstraint? checkoutButtonWidthConstraint;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)change;

@end

#endif /* _TtC11ChatGrokBot26GrokBotCartCheckoutBarView_h */
