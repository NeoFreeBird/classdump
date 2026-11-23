//
#ifndef _TtC10TFNUISwift15SimpleStackView_h
#define _TtC10TFNUISwift15SimpleStackView_h
@import Foundation;

@class TFNUISwift.SimpleStackView.Alignment, TFNUISwift.SimpleStackView.Axis, UIView, _$s12CoreGraphics7CGFloatVMn, _$sSDySo6UIViewC TFNUISwift.SimpleStackView.StackItemConstraints, _$sSDySo6UIViewC _$s12CoreGraphics7CGFloatVMn, _$sSaySo6UIViewCG;

@interface TFNUISwift.SimpleStackView : UIView { // (Swift)
    /* instance variables */
    [__C.UIView] arrangedSubviews;
    Swift.Dictionary empty-list __C.UIView nominal type descriptor for CoreGraphics.CGFloat customSpacingMap;
    TFNUISwift.SimpleStackView.Axis axis;
    TFNUISwift.SimpleStackView.Alignment alignment;
    Swift.Dictionary empty-list __C.UIView TFNUISwift.SimpleStackView.StackItemConstraints constraintMap;
    nominal type descriptor for CoreGraphics.CGFloat spacing;
}

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)willRemoveSubview:(id)subview;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC10TFNUISwift15SimpleStackView_h */
