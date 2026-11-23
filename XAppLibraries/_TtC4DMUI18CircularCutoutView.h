//
#ifndef _TtC4DMUI18CircularCutoutView_h
#define _TtC4DMUI18CircularCutoutView_h
@import Foundation;

@class Swift.Bool, UIView, _$s12CoreGraphics7CGFloatVMn, _$sSa -> DMUI.CircleCutout, _$sSo6UIViewCSg;

@interface DMUI.CircularCutoutView : UIView { // (Swift)
    /* instance variables */
    __C.UIView? contentView;
    Swift.Array -> DMUI.CircleCutout cutouts;
    Swift.Bool isMaskEnabled;
    nominal type descriptor for CoreGraphics.CGFloat spacing;
    nominal type descriptor for CoreGraphics.CGFloat borderWidth;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC4DMUI18CircularCutoutView_h */
