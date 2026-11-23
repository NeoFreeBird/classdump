//
#ifndef _TtC11ChatGrokBot24GrokBotWeatherFooterView_h
#define _TtC11ChatGrokBot24GrokBotWeatherFooterView_h
@import Foundation;

@class UIView, _$s13XDesignSystem6ButtonCMn, _$sSo7UILabelC, _$syycSg;

@interface ChatGrokBot.GrokBotWeatherFooterView : UIView { // (Swift)
    /* instance variables */
    nominal type descriptor for XDesignSystem.Button attributionButton;
    __C.UILabel updatedLabel;
    (() -> ())? onOpenAttribution;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC11ChatGrokBot24GrokBotWeatherFooterView_h */
