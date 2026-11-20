//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef AVCaptureVideoPreviewLayer_PTVVideoSourcePreviewLayer_h
#define AVCaptureVideoPreviewLayer_PTVVideoSourcePreviewLayer_h
@import Foundation;

@interface AVCaptureVideoPreviewLayer (PTVVideoSourcePreviewLayer) <PTVVideoSourcePreviewLayer>

/* instance methods */
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })captureVideoRect;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })captureVideoRectWithTraitCollection:(id)collection;

@end

#endif /* AVCaptureVideoPreviewLayer_PTVVideoSourcePreviewLayer_h */
