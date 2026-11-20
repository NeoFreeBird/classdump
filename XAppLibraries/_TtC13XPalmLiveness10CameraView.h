//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC13XPalmLiveness10CameraView_h
#define _TtC13XPalmLiveness10CameraView_h
@import Foundation;

@class UIView, _$sSo15CAGradientLayerC, _$sSo26AVCaptureVideoPreviewLayerC, _$sSo8NSObject_pSg;

@interface XPalmLiveness.CameraView : UIView { // (Swift)
    /* instance variables */
    __C.AVCaptureVideoPreviewLayer previewLayer;
    __C.CAGradientLayer fallbackGradient;
    __C.NSObject? sessionStartObserver;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)layoutSubviews;

@end

#endif /* _TtC13XPalmLiveness10CameraView_h */
