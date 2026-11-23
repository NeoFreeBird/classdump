//
#ifndef _TtC11ChatGrokBot21GrokBotHotelChipsView_h
#define _TtC11ChatGrokBot21GrokBotHotelChipsView_h
@import Foundation;

@class UIView, _$sSa -> ChatGrokBot.GrokBotHotelChipsView.Chip, _$sSa -> _$s13XDesignSystem6ButtonCMn;

@interface ChatGrokBot.GrokBotHotelChipsView : UIView { // (Swift)
    /* instance variables */
    Swift.Array -> nominal type descriptor for XDesignSystem.Button buttons;
    Swift.Array -> ChatGrokBot.GrokBotHotelChipsView.Chip chips;
}

/* instance methods */
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC11ChatGrokBot21GrokBotHotelChipsView_h */
