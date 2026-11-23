//
#ifndef _TtC11ChatGrokBot22GrokBotCartStepperView_h
#define _TtC11ChatGrokBot22GrokBotCartStepperView_h
@import Foundation;

@class ChatGrokBot.GrokBotCartCountLabel, ChatGrokBot.GrokBotCartStepperView.Size, Swift.Bool, UIControl, _$sSS, _$sSi, _$sSo25UIImpactFeedbackGeneratorC, _$sSo28UISelectionFeedbackGeneratorC, _$sSo8UIButtonC, _$sySicSg, _$sySo6UIViewCcSg;

@interface ChatGrokBot.GrokBotCartStepperView : UIControl { // (Swift)
    /* instance variables */
    ((__C.UIView) -> ())? onIncrease;
    ((Swift.Int) -> ())? onQuantity;
    ChatGrokBot.GrokBotCartCountLabel countLabel;
    __C.UIButton decreaseButton;
    __C.UIImpactFeedbackGenerator impactFeedback;
    __C.UIButton increaseButton;
    __C.UISelectionFeedbackGenerator selectionFeedback;
    ChatGrokBot.GrokBotCartStepperView.Size size;
    Swift.Bool canAdd;
    Swift.Bool canEdit;
    Swift.Int quantity;
    Swift.String title;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)decrease;
- (void)increase;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC11ChatGrokBot22GrokBotCartStepperView_h */
