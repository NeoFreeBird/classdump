//
#ifndef _TtC11ChatGrokBot31GrokBotShoppingOptionPickerView_h
#define _TtC11ChatGrokBot31GrokBotShoppingOptionPickerView_h
@import Foundation;

@class ChatGrokBot.GrokBotShoppingChipRowView, ChatGrokBot.GrokBotShoppingProduct.Option ?, Swift.Bool, UIView, _$s12CoreGraphics7CGFloatVMn, _$sSSSg, _$sSa -> ChatGrokBot.GrokBotShoppingProduct.OptionValue, _$sShySSG, _$sSo7UILabelC, _$sySScSg;

@interface ChatGrokBot.GrokBotShoppingOptionPickerView : UIView { // (Swift)
    /* instance variables */
    ((Swift.String) -> ())? onChoose;
    ChatGrokBot.GrokBotShoppingChipRowView chipRowView;
    __C.UILabel chosenLabel;
    __C.UILabel nameLabel;
    nominal type descriptor for CoreGraphics.CGFloat rowOutset;
    Swift.String? chosen;
    Swift.Bool isSwatches;
    ChatGrokBot.GrokBotShoppingProduct.Option ? option;
    Swift.Set<Swift.String> unavailableValues;
    Swift.Array -> ChatGrokBot.GrokBotShoppingProduct.OptionValue values;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (_Bool)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;
- (void)traitCollectionDidChange:(id)change;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC11ChatGrokBot31GrokBotShoppingOptionPickerView_h */
