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
