//
#ifndef _TtCC6Lottie20MaskCompositionLayer9MaskLayer_h
#define _TtCC6Lottie20MaskCompositionLayer9MaskLayer_h
@import Foundation;

@class CAShapeLayer, Lottie.Mask;

@interface Lottie.MaskCompositionLayer.MaskLayer : CAShapeLayer { // (Swift)
    /* instance variables */
    Lottie.Mask maskModel;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithLayer:(id)layer;
- (id)init;

@end

#endif /* _TtCC6Lottie20MaskCompositionLayer9MaskLayer_h */
