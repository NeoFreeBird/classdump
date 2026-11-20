//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC6Lottie14ShapeItemLayer_h
#define _TtC6Lottie14ShapeItemLayer_h
@import Foundation;

#include "_TtC6Lottie18BaseAnimationLayer.h"

@class Lottie.ShapeItemLayer.FillLayerConfiguration fill_ Lottie.ShapeItemLayer.GradientLayers _$sSg14gradientStroketSg, Lottie.ShapeItemLayer.Item, _$sSa -> Lottie.ShapeItemLayer.Item;

@interface Lottie.ShapeItemLayer : Lottie.BaseAnimationLayer { // (Swift)
    /* instance variables */
    Lottie.ShapeItemLayer.Item shape;
    Swift.Array -> Lottie.ShapeItemLayer.Item otherItems;
    Lottie.ShapeItemLayer.FillLayerConfiguration fill_ Lottie.ShapeItemLayer.GradientLayers _$sSg14gradientStroketSg sublayerConfiguration;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithLayer:(id)layer;
- (id)init;

@end

#endif /* _TtC6Lottie14ShapeItemLayer_h */
