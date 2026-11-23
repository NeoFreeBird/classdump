//
#ifndef T1CameraCapturePreviewControlsOverlayView_h
#define T1CameraCapturePreviewControlsOverlayView_h
@import Foundation;

@class UIView;

@interface T1CameraCapturePreviewControlsOverlayView : UIView

@property (nonatomic) double cornerRadius;

/* class methods */
+ (Class)layerClass;

/* instance methods */
- (void)setCornerRadius:(double)radius animated:(_Bool)animated;

@end

#endif /* T1CameraCapturePreviewControlsOverlayView_h */
