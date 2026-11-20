//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC6Lottie20BaseCompositionLayer_h
#define _TtC6Lottie20BaseCompositionLayer_h
@import Foundation;

#include "_TtC6Lottie18BaseAnimationLayer.h"

@class Lottie.BaseAnimationLayer, Lottie.LayerModel;

@interface Lottie.BaseCompositionLayer : Lottie.BaseAnimationLayer { // (Swift)
    /* instance variables */
    Lottie.BaseAnimationLayer contentsLayer;
    Lottie.LayerModel baseLayerModel;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithLayer:(id)layer;
- (void)addSublayer:(id)sublayer;
- (id)init;

@end

#endif /* _TtC6Lottie20BaseCompositionLayer_h */
