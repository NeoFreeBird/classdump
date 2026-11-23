//
#ifndef _TtC6Lottie16ShapeRenderLayer_h
#define _TtC6Lottie16ShapeRenderLayer_h
@import Foundation;

#include "_TtC6Lottie19ShapeContainerLayer.h"

@class Lottie.NodeOutput _$s_ Lottie.Renderable Any, _$sSo12CAShapeLayerC;

@interface Lottie.ShapeRenderLayer : Lottie.ShapeContainerLayer { // (Swift)
    /* instance variables */
    Lottie.NodeOutput  first-element-marker  Lottie.Renderable Any renderer;
    __C.CAShapeLayer shapeLayer;
}

/* instance methods */
- (id)initWithLayer:(id)layer;
- (id)initWithCoder:(id)coder;
- (void)drawInContext:(struct CGContext *)context;
- (id)init;

@end

#endif /* _TtC6Lottie16ShapeRenderLayer_h */
