//
#ifndef _TtC10TFNUISwift11ShimmerView_h
#define _TtC10TFNUISwift11ShimmerView_h
@import Foundation;

@class Swift.Bool, TFNUISwift.ShimmerViewEffect, TFNUISwift.ShimmerViewSpeed, UIView, _$s7Combine14AnyCancellableCMn ?, _$sSo15CAGradientLayerCSg, _$sSo16CABasicAnimationCSg, _$sSo6UIViewC;

@interface TFNUISwift.ShimmerView : UIView { // (Swift)
    /* instance variables */
    __C.UIView contentView;
    TFNUISwift.ShimmerViewEffect effect;
    TFNUISwift.ShimmerViewSpeed speed;
    Swift.Bool isAnimating;
    __C.CAGradientLayer? $__lazy_storage_$_gradientLayer;
    nominal type descriptor for Combine.AnyCancellable ? reduceMotionCancellable;
    __C.CABasicAnimation? $__lazy_storage_$_animation;
}

/* instance methods */
- (void)dealloc;
- (void)layoutSubviews;
- (void)willMoveToWindow:(id)window;
- (void)startAnimatingIfNeeded;
- (void)stopAnimatingIfNeeded;
- (id)initWithCoder:(id)coder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC10TFNUISwift11ShimmerView_h */
