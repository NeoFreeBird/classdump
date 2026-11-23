//
#ifndef _TtC6Lottie10ImageLayer_h
#define _TtC6Lottie10ImageLayer_h
@import Foundation;

#include "_TtC6Lottie20BaseCompositionLayer.h"

@class Lottie.ImageAsset ?, Lottie.ImageLayerModel;

@interface Lottie.ImageLayer : Lottie.BaseCompositionLayer { // (Swift)
    /* instance variables */
    Lottie.ImageLayerModel imageLayer;
    Lottie.ImageAsset ? imageAsset;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithLayer:(id)layer;

@end

#endif /* _TtC6Lottie10ImageLayer_h */
