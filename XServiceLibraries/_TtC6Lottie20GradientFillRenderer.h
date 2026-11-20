//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC6Lottie20GradientFillRenderer_h
#define _TtC6Lottie20GradientFillRenderer_h
@import Foundation;

#include "_TtC6Lottie21PassThroughOutputNode.h"

@class Lottie.GradientFillLayer, Lottie.GradientType, Swift.Bool, _$s12CoreGraphics7CGFloatVMn, _$sSa -> _$s12CoreGraphics7CGFloatVMn, _$sSi, _$sSo12CAShapeLayerC, __C.CGPoint;

@interface Lottie.GradientFillRenderer : Lottie.PassThroughOutputNode { // (Swift)
    /* instance variables */
    Swift.Bool shouldRenderInContext;
    __C.CGPoint start;
    Swift.Int numberOfColors;
    Swift.Array -> nominal type descriptor for CoreGraphics.CGFloat colors;
    __C.CGPoint end;
    nominal type descriptor for CoreGraphics.CGFloat opacity;
    Lottie.GradientType type;
    Lottie.GradientFillLayer gradientLayer;
    __C.CAShapeLayer maskLayer;
}

@end

#endif /* _TtC6Lottie20GradientFillRenderer_h */
