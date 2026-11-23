//
#ifndef T1CameraCapturePreviewControlsOverlayViewLayer_h
#define T1CameraCapturePreviewControlsOverlayViewLayer_h
@import Foundation;

@class TFNAnimatedPathForBoundsLayer;

@interface T1CameraCapturePreviewControlsOverlayViewLayer : TFNAnimatedPathForBoundsLayer

@property (nonatomic) double overlayCornerRadius;

/* instance methods */
- (id)shapeLayer;
- (void)setOverlayCornerRadius:(double)radius animated:(_Bool)animated;
- (id)pathForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;

@end

#endif /* T1CameraCapturePreviewControlsOverlayViewLayer_h */
