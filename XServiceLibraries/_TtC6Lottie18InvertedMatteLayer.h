//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC6Lottie18InvertedMatteLayer_h
#define _TtC6Lottie18InvertedMatteLayer_h
@import Foundation;

@class CALayer, Lottie.CompositionLayer ?;

@interface Lottie.InvertedMatteLayer : CALayer { // (Swift)
    /* instance variables */
    Lottie.CompositionLayer ? inputMatte;
}

/* instance methods */
- (id)initWithLayer:(id)layer;
- (id)initWithCoder:(id)coder;
- (void)drawInContext:(struct CGContext *)context;
- (id)init;

@end

#endif /* _TtC6Lottie18InvertedMatteLayer_h */
