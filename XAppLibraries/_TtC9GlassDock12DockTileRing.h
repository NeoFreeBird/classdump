//
#ifndef _TtC9GlassDock12DockTileRing_h
#define _TtC9GlassDock12DockTileRing_h
@import Foundation;

@class UIView, _$s12CoreGraphics7CGFloatVMn, _$sSo12CAShapeLayerC, _$sSo7UIColorCSg, _$syycSg;

@interface GlassDock.DockTileRing : UIView { // (Swift)
    /* instance variables */
    __C.UIColor? color;
    nominal type descriptor for CoreGraphics.CGFloat lineWidth;
    (() -> ())? onColorChange;
    __C.CAShapeLayer shape;
}

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)tintColorDidChange;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC9GlassDock12DockTileRing_h */
