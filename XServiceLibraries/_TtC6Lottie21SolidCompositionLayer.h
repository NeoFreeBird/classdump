//
#ifndef _TtC6Lottie21SolidCompositionLayer_h
#define _TtC6Lottie21SolidCompositionLayer_h
@import Foundation;

#include "_TtC6Lottie16CompositionLayer.h"

@class Lottie.NodeProperty Lottie.LottieColor ?, _$sSo12CAShapeLayerC;

@interface Lottie.SolidCompositionLayer : Lottie.CompositionLayer { // (Swift)
    /* instance variables */
    Lottie.NodeProperty Lottie.LottieColor ? colorProperty;
    __C.CAShapeLayer solidShape;
}

/* instance methods */
- (id)initWithLayer:(id)layer;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC6Lottie21SolidCompositionLayer_h */
