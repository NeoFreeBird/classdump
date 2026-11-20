//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC12XPhotoEditor18FramingOverlayView_h
#define _TtC12XPhotoEditor18FramingOverlayView_h
@import Foundation;

@class UIView, XPhotoEditor.FramingAspectRatio, __C.CGRect;

@interface XPhotoEditor.FramingOverlayView : UIView { // (Swift)
    /* instance variables */
    __C.CGRect cropRect;
    XPhotoEditor.FramingAspectRatio aspectRatio;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;

@end

#endif /* _TtC12XPhotoEditor18FramingOverlayView_h */
