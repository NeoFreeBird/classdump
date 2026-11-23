//
#ifndef _TtC7XSports30SportsScorecardEventBorderView_h
#define _TtC7XSports30SportsScorecardEventBorderView_h
@import Foundation;

@class UIView, _$s12CoreGraphics7CGFloatVMn, _$sSaySo7UIColorCG, _$sSo12CAShapeLayerC, _$sSo15CAGradientLayerC;

@interface XSports.SportsScorecardEventBorderView : UIView { // (Swift)
    /* instance variables */
    [__C.UIColor] colors;
    nominal type descriptor for CoreGraphics.CGFloat cornerRadius;
    __C.CAGradientLayer borderLayer;
    __C.CAShapeLayer borderMask;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC7XSports30SportsScorecardEventBorderView_h */
