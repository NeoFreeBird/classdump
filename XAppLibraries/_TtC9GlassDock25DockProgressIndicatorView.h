//
#ifndef _TtC9GlassDock25DockProgressIndicatorView_h
#define _TtC9GlassDock25DockProgressIndicatorView_h
@import Foundation;

@class GlassDock.DockProgressIndicatorView.Style, Swift.Bool, UIView, _$s12CoreGraphics7CGFloatVMn, _$sSo12CAShapeLayerC;

@interface GlassDock.DockProgressIndicatorView : UIView { // (Swift)
    /* instance variables */
    GlassDock.DockProgressIndicatorView.Style style;
    nominal type descriptor for CoreGraphics.CGFloat lineWidth;
    Swift.Bool fillsFromTrailing;
    __C.CAShapeLayer railLayer;
    __C.CAShapeLayer fillLayer;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)tintColorDidChange;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC9GlassDock25DockProgressIndicatorView_h */
