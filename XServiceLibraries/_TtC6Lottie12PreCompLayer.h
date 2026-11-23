//
#ifndef _TtC6Lottie12PreCompLayer_h
#define _TtC6Lottie12PreCompLayer_h
@import Foundation;

#include "_TtC6Lottie20BaseCompositionLayer.h"

@class Lottie.PreCompLayerModel;

@interface Lottie.PreCompLayer : Lottie.BaseCompositionLayer { // (Swift)
    /* instance variables */
    Lottie.PreCompLayerModel preCompLayer;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithLayer:(id)layer;

@end

#endif /* _TtC6Lottie12PreCompLayer_h */
