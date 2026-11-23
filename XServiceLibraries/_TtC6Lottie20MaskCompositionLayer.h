//
#ifndef _TtC6Lottie20MaskCompositionLayer_h
#define _TtC6Lottie20MaskCompositionLayer_h
@import Foundation;

@class CALayer, _$sSa -> Lottie.MaskCompositionLayer.MaskLayer;

@interface Lottie.MaskCompositionLayer : CALayer { // (Swift)
    /* instance variables */
    Swift.Array -> Lottie.MaskCompositionLayer.MaskLayer maskLayers;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithLayer:(id)layer;
- (void)layoutSublayers;
- (id)init;

@end

#endif /* _TtC6Lottie20MaskCompositionLayer_h */
