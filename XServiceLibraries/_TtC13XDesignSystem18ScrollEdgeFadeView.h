//
#ifndef _TtC13XDesignSystem18ScrollEdgeFadeView_h
#define _TtC13XDesignSystem18ScrollEdgeFadeView_h
@import Foundation;

@class UIView, XDesignSystem.Blur.Falloff, XDesignSystem.ScrollEdgeTreatment.Side, _$s12CoreGraphics7CGFloatVMn, _$sSo15CAGradientLayerC, _$sSo7UIColorC;

@interface XDesignSystem.ScrollEdgeFadeView : UIView { // (Swift)
    /* instance variables */
    nominal type descriptor for CoreGraphics.CGFloat plateauFraction;
    XDesignSystem.ScrollEdgeTreatment.Side side;
    __C.UIColor color;
    XDesignSystem.Blur.Falloff curve;
    __C.CAGradientLayer gradientLayer;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)traitCollectionDidChange:(id)change;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC13XDesignSystem18ScrollEdgeFadeView_h */
