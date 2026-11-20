//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC12XPhotoEditor19CanvasContainerView_h
#define _TtC12XPhotoEditor19CanvasContainerView_h
@import Foundation;

@class UIView, XPhotoEditor.CanvasView ?, _$s12CoreGraphics7CGFloatVMn ?, _$sSa -> XPhotoEditor.CanvasView, __C.CGRect;

@interface XPhotoEditor.CanvasContainerView : UIView { // (Swift)
    /* instance variables */
    Swift.Array -> XPhotoEditor.CanvasView canvasViews;
    XPhotoEditor.CanvasView ? activeCanvas;
    nominal type descriptor for CoreGraphics.CGFloat ? toolControlsInset;
    __C.CGRect imageContentRect;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;

@end

#endif /* _TtC12XPhotoEditor19CanvasContainerView_h */
