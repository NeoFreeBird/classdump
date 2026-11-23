//
#ifndef _TtC7Profile11BalloonView_h
#define _TtC7Profile11BalloonView_h
@import Foundation;

@class Profile.BalloonColor, UIView, _$s12CoreGraphics7CGFloatVMn, _$sSo12CAShapeLayerC, _$sSo15CAGradientLayerC, _$syycSg;

@interface Profile.BalloonView : UIView { // (Swift)
    /* instance variables */
    Profile.BalloonColor color;
    (() -> ())? onTouchDown;
    nominal type descriptor for CoreGraphics.CGFloat stringLean;
    __C.CAGradientLayer bodyLayer;
    __C.CAShapeLayer bodyMask;
    __C.CAShapeLayer glossLayer;
    __C.CAShapeLayer knotLayer;
    __C.CAShapeLayer stringLayer;
}

@property (nonatomic, readonly) unsigned long long collisionBoundsType;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;
- (void)touchesBegan:(id)began withEvent:(id)event;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC7Profile11BalloonView_h */
