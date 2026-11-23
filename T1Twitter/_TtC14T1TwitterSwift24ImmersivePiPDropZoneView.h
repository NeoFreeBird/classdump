//
#ifndef _TtC14T1TwitterSwift24ImmersivePiPDropZoneView_h
#define _TtC14T1TwitterSwift24ImmersivePiPDropZoneView_h
@import Foundation;

#include "CAAnimationDelegate-Protocol.h"

@class Swift.Bool, T1TwitterSwift.ImmersivePiPDropZoneView.State, UIView, _$s12CoreGraphics7CGFloatVMn, _$s13XDesignSystem4BlurCMn, _$sSo11UIImageViewC, _$sSo12CAShapeLayerC, _$syycSg;

@interface T1TwitterSwift.ImmersivePiPDropZoneView : UIView <CAAnimationDelegate> { // (Swift)
    /* instance variables */
    T1TwitterSwift.ImmersivePiPDropZoneView.State state;
    Swift.Bool isArmed;
    nominal type descriptor for CoreGraphics.CGFloat proximity;
    (() -> ())? onArmingCompleted;
    nominal type descriptor for XDesignSystem.Blur blurView;
    __C.UIImageView iconImageView;
    __C.CAShapeLayer armRingLayer;
    __C.CAShapeLayer blurMaskLayer;
}

/* instance methods */
- (void)animationDidStop:(id)stop finished:(_Bool)finished;
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC14T1TwitterSwift24ImmersivePiPDropZoneView_h */
