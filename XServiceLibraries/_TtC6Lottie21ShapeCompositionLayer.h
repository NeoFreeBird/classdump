//
#ifndef _TtC6Lottie21ShapeCompositionLayer_h
#define _TtC6Lottie21ShapeCompositionLayer_h
@import Foundation;

#include "_TtC6Lottie16CompositionLayer.h"

@class Lottie.AnimatorNode ?, Lottie.ShapeContainerLayer ?;

@interface Lottie.ShapeCompositionLayer : Lottie.CompositionLayer { // (Swift)
    /* instance variables */
    Lottie.AnimatorNode ? rootNode;
    Lottie.ShapeContainerLayer ? renderContainer;
}

/* instance methods */
- (id)initWithLayer:(id)layer;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC6Lottie21ShapeCompositionLayer_h */
