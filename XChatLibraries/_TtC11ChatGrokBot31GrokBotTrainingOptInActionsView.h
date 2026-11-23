//
#ifndef _TtC11ChatGrokBot31GrokBotTrainingOptInActionsView_h
#define _TtC11ChatGrokBot31GrokBotTrainingOptInActionsView_h
@import Foundation;

@class UIView, _$s13XDesignSystem6ButtonCMn, _$s13XDesignSystem6ButtonCMn ?, _$sSS, _$sSSSg, _$syycSg;

@interface ChatGrokBot.GrokBotTrainingOptInActionsView : UIView { // (Swift)
    /* instance variables */
    (() -> ())? onPrimary;
    (() -> ())? onSecondary;
    nominal type descriptor for XDesignSystem.Button primaryButton;
    Swift.String primaryTitle;
    nominal type descriptor for XDesignSystem.Button ? secondaryButton;
    Swift.String? secondaryTitle;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC11ChatGrokBot31GrokBotTrainingOptInActionsView_h */
