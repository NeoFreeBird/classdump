//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC12XPhotoEditor14BlurCanvasView_h
#define _TtC12XPhotoEditor14BlurCanvasView_h
@import Foundation;

#include "_TtC12XPhotoEditor10CanvasView.h"

@class DispatchQueue, XPhotoEditor.ActiveBlurStrokeState ?, XPhotoEditor.BlurStroke _$scSg ->, _$s12CoreGraphics7CGFloatVMn, _$sSD -> _$s10Foundation4UUIDVMn XPhotoEditor.BlurStroke, _$sSD -> _$s10Foundation4UUIDVMn XPhotoEditor.BlurStrokeEntry, _$sSo7CALayerCSg, _$sSo7UIImageCSg, _$sSo9CIContextC, _$syycSg, __C.CGRect;

@interface XPhotoEditor.BlurCanvasView : XPhotoEditor.CanvasView { // (Swift)
    /* instance variables */
    Swift.Dictionary -> nominal type descriptor for Foundation.UUID XPhotoEditor.BlurStroke blurStrokeData;
    Swift.Dictionary -> nominal type descriptor for Foundation.UUID XPhotoEditor.BlurStrokeEntry blurStrokeEntries;
    __C.UIImage? blurredImage;
    nominal type descriptor for CoreGraphics.CGFloat currentBrushWidth;
    __C.CIContext ciContext;
    DispatchQueue blurBaseQueue;
    XPhotoEditor.ActiveBlurStrokeState ? activeStroke;
    __C.CALayer? activePreviewLayer;
    __C.CGRect validContentRect;
    XPhotoEditor.BlurStroke _$scSg -> onStrokeCompleted;
    (() -> ())? onDrawingBegan;
    (() -> ())? onDrawingEnded;
}

/* instance methods */
- (void)touchesBegan:(id)began withEvent:(id)event;
- (void)touchesMoved:(id)moved withEvent:(id)event;
- (void)touchesEnded:(id)ended withEvent:(id)event;
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;

@end

#endif /* _TtC12XPhotoEditor14BlurCanvasView_h */
