//
#ifndef _TtC11ChatGrokBot19GrokBotCartLineView_h
#define _TtC11ChatGrokBot19GrokBotCartLineView_h
@import Foundation;

@class ChatGrokBot.GrokBotCartStepperView, ChatGrokBot.GrokBotShoppingPhotoView, UIView, _$sSo11UIImageViewC, _$sSo11UIStackViewC, _$sSo7UILabelC;

@interface ChatGrokBot.GrokBotCartLineView : UIView { // (Swift)
    /* instance variables */
    __C.UIStackView copyStackView;
    __C.UILabel listPriceLabel;
    __C.UILabel priceLabel;
    __C.UIStackView priceStackView;
    __C.UILabel soldOutLabel;
    __C.UIImageView statusIconView;
    __C.UILabel statusLabel;
    __C.UIStackView statusStackView;
    ChatGrokBot.GrokBotCartStepperView stepperView;
    ChatGrokBot.GrokBotShoppingPhotoView thumbView;
    __C.UILabel titleLabel;
    __C.UILabel variantLabel;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)traitCollectionDidChange:(id)change;

@end

#endif /* _TtC11ChatGrokBot19GrokBotCartLineView_h */
