//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
