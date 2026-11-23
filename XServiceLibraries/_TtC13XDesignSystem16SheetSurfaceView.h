//
#ifndef _TtC13XDesignSystem16SheetSurfaceView_h
#define _TtC13XDesignSystem16SheetSurfaceView_h
@import Foundation;

@class UIView, XDesignSystem.Shadow ?, XDesignSystem.SheetSurfaceView.EdgeStyle, _$sSo12CAShapeLayerC, _$sSo15CAGradientLayerC, _$sSo6UIViewC;

@interface XDesignSystem.SheetSurfaceView : UIView { // (Swift)
    /* instance variables */
    __C.UIView contentView;
    XDesignSystem.Shadow ? shadow;
    XDesignSystem.SheetSurfaceView.EdgeStyle edgeStyle;
    __C.UIView handleView;
    __C.CAGradientLayer lipLayer;
    __C.CAShapeLayer lipMaskLayer;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)traitCollectionDidChange:(id)change;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC13XDesignSystem16SheetSurfaceView_h */
