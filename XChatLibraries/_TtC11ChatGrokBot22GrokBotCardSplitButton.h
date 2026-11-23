//
#ifndef _TtC11ChatGrokBot22GrokBotCardSplitButton_h
#define _TtC11ChatGrokBot22GrokBotCardSplitButton_h
@import Foundation;

@class UIView, _$s13XDesignSystem6ButtonC13ConfigurationCMn, _$s13XDesignSystem6ButtonC9SizeClassCMn, _$s13XDesignSystem6ButtonCMn, _$syycSg;

@interface ChatGrokBot.GrokBotCardSplitButton : UIView { // (Swift)
    /* instance variables */
    nominal type descriptor for XDesignSystem.Button mainButton;
    nominal type descriptor for XDesignSystem.Button menuButton;
    (() -> ())? action;
    nominal type descriptor for XDesignSystem.Button.Configuration mainConfiguration;
    nominal type descriptor for XDesignSystem.Button.SizeClass sizeClass;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC11ChatGrokBot22GrokBotCardSplitButton_h */
