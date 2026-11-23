//
#ifndef _TtC6Lottie12FillRenderer_h
#define _TtC6Lottie12FillRenderer_h
@import Foundation;

#include "_TtC6Lottie21PassThroughOutputNode.h"

@class Lottie.FillRule, Swift.Bool, _$s12CoreGraphics7CGFloatVMn, __C.CGColor ?;

@interface Lottie.FillRenderer : Lottie.PassThroughOutputNode { // (Swift)
    /* instance variables */
    Swift.Bool shouldRenderInContext;
    __C.CGColor ? color;
    nominal type descriptor for CoreGraphics.CGFloat opacity;
    Lottie.FillRule fillRule;
}

@end

#endif /* _TtC6Lottie12FillRenderer_h */
