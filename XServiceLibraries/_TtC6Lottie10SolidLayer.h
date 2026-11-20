//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC6Lottie10SolidLayer_h
#define _TtC6Lottie10SolidLayer_h
@import Foundation;

#include "_TtC6Lottie20BaseCompositionLayer.h"

@class Lottie.SolidLayerModel, _$sSo12CAShapeLayerC;

@interface Lottie.SolidLayer : Lottie.BaseCompositionLayer { // (Swift)
    /* instance variables */
    Lottie.SolidLayerModel solidLayer;
    __C.CAShapeLayer shapeLayer;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithLayer:(id)layer;

@end

#endif /* _TtC6Lottie10SolidLayer_h */
