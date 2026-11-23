//
#ifndef _TtC7XSports24SportsAnimatedScoreLabel_h
#define _TtC7XSports24SportsAnimatedScoreLabel_h
@import Foundation;

@class Swift.Bool, UIView, _$sSa -> XSports.SportsAnimatedScoreLabel.CharacterCell, _$sSi, _$sSo18NSAttributedStringCSg, _$sSo7UILabelC, __C.NSTextAlignment;

@interface XSports.SportsAnimatedScoreLabel : UIView { // (Swift)
    /* instance variables */
    __C.UILabel measuringLabel;
    Swift.Array -> XSports.SportsAnimatedScoreLabel.CharacterCell cells;
    __C.NSAttributedString? text;
    Swift.Bool isAnimating;
    Swift.Int animationToken;
    __C.NSTextAlignment textAlignment;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;

@end

#endif /* _TtC7XSports24SportsAnimatedScoreLabel_h */
