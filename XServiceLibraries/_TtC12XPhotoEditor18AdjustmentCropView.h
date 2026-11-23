//
#ifndef _TtC12XPhotoEditor18AdjustmentCropView_h
#define _TtC12XPhotoEditor18AdjustmentCropView_h
@import Foundation;

#include "UIGestureRecognizerDelegate-Protocol.h"

@class Swift.Bool, UIView, XPhotoEditor.AdjustmentAspect, XPhotoEditor.AdjustmentAspect _$scSg ->, XPhotoEditor.AdjustmentCropView.CropHandle, XPhotoEditor.AdjustmentOverlayView, XPhotoEditor.AdjustmentParameters ?, _$s12CoreGraphics7CGFloatVMn, _$s12CoreGraphics7CGFloatVMn ?, _$sSi, _$sSo11UIImageViewC, _$sSo22UIPanGestureRecognizerC, _$sSo22UITapGestureRecognizerC, _$sSo24UIPinchGestureRecognizerC, _$sSo27UIRotationGestureRecognizerC, _$sSo7UIImageC, __C.CGPoint, __C.CGRect, __C.UIEdgeInsets;

@interface XPhotoEditor.AdjustmentCropView : UIView <UIGestureRecognizerDelegate> { // (Swift)
    /* instance variables */
    __C.UIImage image;
    __C.UIImageView imageView;
    XPhotoEditor.AdjustmentOverlayView overlayView;
    __C.CGRect cropBoxFrame;
    Swift.Int angle;
    nominal type descriptor for CoreGraphics.CGFloat straightenRadians;
    XPhotoEditor.AdjustmentAspect aspect;
    nominal type descriptor for CoreGraphics.CGFloat imageScale;
    __C.CGPoint imageCenter;
    __C.CGRect lastLaidOutBounds;
    __C.UIEdgeInsets lastLaidOutInsets;
    XPhotoEditor.AdjustmentParameters ? restoreParameters;
    Swift.Bool isRotating;
    __C.UIPanGestureRecognizer panGesture;
    __C.UIPinchGestureRecognizer pinchGesture;
    __C.UIRotationGestureRecognizer rotationGesture;
    __C.UIPanGestureRecognizer gridPanGesture;
    __C.UITapGestureRecognizer doubleTapGesture;
    XPhotoEditor.AdjustmentCropView.CropHandle activeHandle;
    __C.CGRect cropBoxAtDragStart;
    __C.CGPoint handlePanStart;
    __C.UIEdgeInsets contentInsets;
    nominal type descriptor for CoreGraphics.CGFloat ? lockedAspectRatio;
    XPhotoEditor.AdjustmentAspect _$scSg -> onAspectChanged;
}

/* instance methods */
- (void)handleGridPan:(id)pan;
- (_Bool)gestureRecognizerShouldBegin:(id)begin;
- (_Bool)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)recognizer;
- (void)handleDoubleTap;
- (void)handlePan:(id)pan;
- (void)handlePinch:(id)pinch;
- (void)handleRotation:(id)rotation;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC12XPhotoEditor18AdjustmentCropView_h */
