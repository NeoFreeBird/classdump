//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC6Lottie21ImageCompositionLayer_h
#define _TtC6Lottie21ImageCompositionLayer_h
@import Foundation;

#include "_TtC6Lottie16CompositionLayer.h"

@class _$sSS, __C.CALayerContentsGravity, __C.CGImage ?;

@interface Lottie.ImageCompositionLayer : Lottie.CompositionLayer { // (Swift)
    /* instance variables */
    Swift.String imageReferenceID;
    __C.CGImage ? image;
    __C.CALayerContentsGravity imageContentsGravity;
}

/* instance methods */
- (id)initWithLayer:(id)layer;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC6Lottie21ImageCompositionLayer_h */
