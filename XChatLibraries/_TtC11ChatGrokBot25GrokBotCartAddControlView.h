//
#ifndef _TtC11ChatGrokBot25GrokBotCartAddControlView_h
#define _TtC11ChatGrokBot25GrokBotCartAddControlView_h
@import Foundation;

@class ChatGrokBot.GrokBotCardButton, ChatGrokBot.GrokBotCartStepperView, ChatGrokBot.GrokBotCartStepperView.Size, UIView, _$sSbSg, _$sSo25UIImpactFeedbackGeneratorC, _$sySicSg, _$sySo6UIViewCcSg;

@interface ChatGrokBot.GrokBotCartAddControlView : UIView { // (Swift)
    /* instance variables */
    ((__C.UIView) -> ())? onAdd;
    ((Swift.Int) -> ())? onQuantity;
    ChatGrokBot.GrokBotCardButton addButton;
    __C.UIImpactFeedbackGenerator impactFeedback;
    ChatGrokBot.GrokBotCartStepperView.Size size;
    ChatGrokBot.GrokBotCartStepperView stepperView;
    Swift.Bool? isInCart;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC11ChatGrokBot25GrokBotCartAddControlView_h */
