//
#ifndef _TtC7XSports25FormulaRacingRollingLabel_h
#define _TtC7XSports25FormulaRacingRollingLabel_h
@import Foundation;

@class UIView, _$sSSSg, _$sSo22UIViewPropertyAnimatorCSg, _$sSo6UIFontCSg, _$sSo7UIColorCSg, _$sSo7UILabelC;

@interface XSports.FormulaRacingRollingLabel : UIView { // (Swift)
    /* instance variables */
    __C.UIFont? font;
    __C.UIColor? textColor;
    Swift.String? text;
    __C.UILabel currentLabel;
    __C.UILabel outgoingLabel;
    __C.UIViewPropertyAnimator? animator;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;

@end

#endif /* _TtC7XSports25FormulaRacingRollingLabel_h */
