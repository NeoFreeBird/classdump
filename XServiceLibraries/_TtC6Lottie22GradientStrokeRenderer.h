//
#ifndef _TtC6Lottie22GradientStrokeRenderer_h
#define _TtC6Lottie22GradientStrokeRenderer_h
@import Foundation;

#include "_TtC6Lottie21PassThroughOutputNode.h"

@class Lottie.LegacyGradientFillRenderer, Lottie.StrokeRenderer, Swift.Bool;

@interface Lottie.GradientStrokeRenderer : Lottie.PassThroughOutputNode { // (Swift)
    /* instance variables */
    Swift.Bool shouldRenderInContext;
    Lottie.StrokeRenderer strokeRender;
    Lottie.LegacyGradientFillRenderer gradientRender;
}

@end

#endif /* _TtC6Lottie22GradientStrokeRenderer_h */
