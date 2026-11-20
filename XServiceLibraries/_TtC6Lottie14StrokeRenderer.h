//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC6Lottie14StrokeRenderer_h
#define _TtC6Lottie14StrokeRenderer_h
@import Foundation;

#include "_TtC6Lottie21PassThroughOutputNode.h"

@class Lottie.LineCap, Lottie.LineJoin, Swift.Bool, _$s12CoreGraphics7CGFloatVMn, _$s12CoreGraphics7CGFloatVMn ?, _$sSa -> _$s12CoreGraphics7CGFloatVMn ?, __C.CGColor ?;

@interface Lottie.StrokeRenderer : Lottie.PassThroughOutputNode { // (Swift)
    /* instance variables */
    Swift.Bool shouldRenderInContext;
    __C.CGColor ? color;
    nominal type descriptor for CoreGraphics.CGFloat opacity;
    nominal type descriptor for CoreGraphics.CGFloat width;
    nominal type descriptor for CoreGraphics.CGFloat miterLimit;
    Lottie.LineCap lineCap;
    Lottie.LineJoin lineJoin;
    nominal type descriptor for CoreGraphics.CGFloat ? dashPhase;
    Swift.Array -> nominal type descriptor for CoreGraphics.CGFloat ? dashLengths;
}

@end

#endif /* _TtC6Lottie14StrokeRenderer_h */
